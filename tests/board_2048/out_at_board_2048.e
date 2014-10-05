note
	description: "Summary description for {OUT_AT_BOARD_2048}."
	author: "ggiovannini"
	date: "October 5, 2014"
	revision: "0.01"

class
	OUT_AT_BOARD_PRISM

inherit

	EQA_TEST_SET

feature -- Rutine is_power_of_two at CELL_2048 class tests

	string_has_even_amount_of_numbers
			-- String out lenght must be even
			-- Must return TRUE
		local
			board: BOARD_2048
		do
			create board.make_empty
			assert ("String has even characters", board.out.count \\ 2 = 0)
		end

	string_is_not_empty
			-- String out of a new board shouldn't be empty
			-- Must return TRUE
		local
			board: BOARD_2048
		do
			create board.make_empty
			assert ("String is not empty", board.out.count /= 0)
		end

end
