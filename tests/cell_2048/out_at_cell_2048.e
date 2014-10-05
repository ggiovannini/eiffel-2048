note
	description: "Tests for routine out at CELL_2048 class."
	author: "ggiovannini"
	date: "October 5, 2014"
	revision: "0.01"

class
	OUT_AT_CELL_PRISM

inherit

	EQA_TEST_SET

feature -- test routines

	out_power_of_two_cell_four_digits
		local
			board: BOARD_2048
		do
			create board.make_empty
			board.elements.item (1, 3).set_value (2048)
			assert ("The value is correct: ", board.elements.item (1, 3).out.is_equal ("2048"))
		end

	out_distinct_value_zero_cell
		local
			board: BOARD_2048
		do
			create board.make_empty
			board.elements.item (1, 4).set_value (0)
			assert ("The value is correct: ", not board.elements.item (1, 4).out.is_equal ("   2"))
		end

end
