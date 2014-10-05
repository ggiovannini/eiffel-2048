note
	description: "Tests for can_move_down routine at BOARD_2048."
	author: "ggiovannini"
	date: "October 5, 2014"
	revision: "0.01"

class
	CAN_MOVE_DOWN_AT_BOARD_PRISM

inherit

	EQA_TEST_SET

feature -- Test routines

	can_move_down_test_empty_cell
			--Test when a cell has an empty cell below it
		local
			board: BOARD_2048
		do
			create board.make_empty
			board.set_cell (3, 4, 2)
			board.set_cell (1, 1, 2) --just to maintain class invariant
			assert ("Can move down", board.can_move_down)
		end

	can_move_down_test_cell_with_same_value
			--Test when a cell has a cell below it with the same value
		local
			board: BOARD_2048
		do
			create board.make_empty
			board.set_cell (3, 4, 2)
			board.set_cell (4, 4, 2)
			assert ("Can move down", board.can_move_down)
		end

	can_not_move_down_test
			--Test when a cell has a cell below it with different value
		local
			board: BOARD_2048
		do
			create board.make_empty
			board.set_cell (3, 4, 2)
			board.set_cell (4, 4, 4)
			assert ("Can not move down", not board.can_move_down)
		end

	can_not_move_down_test_with_void_board
			-- Test when board is empty should raise an exception
		local
			res, ok, second_time: BOOLEAN
			board: BOARD_2048
		do
			if not second_time then
				ok := True
				res := board.can_move_down
				ok := False
			end
			assert ("Routine failed, as expected", ok)
		rescue
			second_time := True
			if ok then
				retry
			end
		end

end
