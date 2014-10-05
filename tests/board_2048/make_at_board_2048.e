note
	description: "[
		Test class for routine make at BOARD_2048
	]"
	author: "ggiovannini"
	date: "October 5, 2014"
	revision: "0.01"

class
	MAKE_AT_BOARD_PRISM

inherit

	EQA_TEST_SET

feature -- Test routines

	make_at_board_2048
			-- New test routine
		local
			board: BOARD_2048
		do
			create board.make
			assert ("is not full", not board.is_full)
			assert ("is not winning", not board.is_winning_board)
			assert ("just two cells", board.nr_of_filled_cells = 2)
			assert ("4 columns", board.columns = 4)
			assert ("4 rows", board.rows = 4)
		end

end
