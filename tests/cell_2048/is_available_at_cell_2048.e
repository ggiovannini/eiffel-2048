note
	description: "[
		Tests for the method is_available of class CELL_2048
	]"
	author: "ggiovannini"
	date: "October 5, 2014"
	revision: "0.01"

class
	IS_AVAILABLE_AT_CELL_PRISM

inherit

	EQA_TEST_SET

feature -- Test routines

	is_available_empty_cell_test
			-- Test for available cell
		local
			cell: CELL_2048
		do
			create cell.make
			assert ("The cell is available", cell.is_available)
		end

	is_available_on_occupied_cell_test
			-- Test for not available cell
		local
			cell: CELL_2048
		do
			create cell.make_with_value (2)
			assert ("The cell isn't available", not cell.is_available)
		end

end
