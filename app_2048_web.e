note
	description: "[
						
	]"

class
	APP_2048_WEB

inherit

	WSF_DEFAULT_RESPONSE_SERVICE
		redefine
			initialize
		end

create
	make_and_launch

feature

	controller: CONTROLLER_2048

	is_attached: BOOLEAN

	cont: INTEGER

	user: USER_2048

	new_user: USER_2048

	login (username: STRING; password: STRING)
			-- validate the user datas
			-- load the user from the file into the user variable, or void if the user doesn't exist
		require
			(create {USER_2048}.make_for_test).is_valid_nickname (username) and password /= Void
		local
			possible_user: USER_2048
		do
			create possible_user.make_with_nickname (username)
			if possible_user.has_unfinished_game then
				possible_user.load_game
				if equal (password, possible_user.password) then
					user := possible_user
				else
					user := Void
				end
			else
				user := Void
			end
		end

feature {NONE} -- Execution

	response (req: WSF_REQUEST): WSF_HTML_PAGE_RESPONSE
			-- Computed response message.

		do

				--  cont code:
				-- 0: Login or Register
				-- 1: Login
				-- 2: Register
				-- 3: Play game
				-- 4: Quit
				-- 5: Save and quit
				-- 6: Game over
				-- 7: Win game
			create Result.make
				--TODO: Download the http://code.jquery.com/jquery-latest.min.js and call locally

			if cont = 0 then
				if attached req.string_item ("login") as l_user then
					cont := 1
				else
					if attached req.string_item ("register") as l_user then
						cont := 2
					else

							--| Otherwise, ask for name
						Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
							<form action="/" method="POST">
								<input type="submit" name="login" value="Login"/>
								<input type="submit" name="register" value="Register"/>
							</form>
						]" + "</div>")
					end
				end
			end
			if cont = 1 then -- Login
				if (attached req.string_item ("nickname") as nick) and (attached req.string_item ("password") as pass) then
					create controller.make
					login (nick, pass)
					if user = void then
						Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
							<form action="/" method="POST">
								<p>invalid nickname or password</p>
								<p>try again</p>
								<br>
								<br>
								<p>Insert your nickname</p>
								<input type="text" name="nickname"/>
								<p>Insert your password</p>
								<input type="text" name="password"/>
								<br>
								<input type="submit" value="Login"/>
							</form>
						]" + "</div>")
					else
						controller.make_with_board (user.game)
						cont := 3
					end
				else
					Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
						<form action="/" method="POST">
							<p>Insert your nickname</p>
							<input type="text" name="nickname"/>
							<p>Insert your password</p>
							<input type="text" name="password"/>
							<br>
							<input type="submit" value="Login"/>
						</form>
					]" + "</div>")
				end
			end
			if cont = 2 then -- Register
				if (attached req.string_item ("name") as name) and (attached req.string_item ("surname") as surname) and (attached req.string_item ("nickname") as nick) and (attached req.string_item ("password") as pass) then
					create controller.make
					create new_user.make_for_test
					if new_user.is_valid_name (name) and new_user.is_valid_name (surname) and new_user.is_valid_name (nick) and new_user.is_valid_password (pass) then --validate the data
						if not new_user.existing_file (nick) then
							create user.make_new_user (name, surname, nick, pass)
							cont := 3
						else
							Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
								<form action="/" method="POST">
									<p>Nickname already exists</p>
									<br>
									<br>
									<p>Insert your name</p>
									<input type="text" name="name"/>
									<p>Insert your surname</p>
									<input type="text" name="surname"/>
									<p>Insert your nickname</p>
									<input type="text" name="nickname"/>
									<p>Insert your password</p>
									<input type="text" name="password"/>
									<br>
									<input type="submit" value="Register"/>
								</form>
							]" + "</div>")
						end
					else
						Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
							<form action="/" method="POST">
								<p>Invalid data, Please ensure to enter the data correctly</p>
								<br>
								<br>
								<p>Insert your name</p>
								<input type="text" name="name"/>
								<p>Insert your surname</p>
								<input type="text" name="surname"/>
								<p>Insert your nickname</p>
								<input type="text" name="nickname"/>
								<p>Insert your password</p>
								<input type="text" name="password"/>
								<br>
								<input type="submit" value="Register"/>
							</form>
						]" + "</div>")
					end
				else
					Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "[
						<form action="/" method="POST">
							<p>Insert your name</p>
							<input type="text" name="name"/>
							<p>Insert your surname</p>
							<input type="text" name="surname"/>
							<p>Insert your nickname</p>
							<input type="text" name="nickname"/>
							<p>Insert your password</p>
							<input type="text" name="password"/>
							<br>
							<input type="submit" value="Register"/>
						</form>
					]" + "</div>")
				end
			end
			if cont = 3 then --Play game
				Result.add_javascript_url ("http://code.jquery.com/jquery-latest.min.js")
				Result.add_javascript_content ("function getChoice(keyCode){var ret='';if (keyCode == 119)ret = 'w';if (keyCode == 115)ret = 's';if (keyCode == 100)ret = 'd';if (keyCode == 97)ret = 'a';return ret;}")
				Result.add_javascript_content ("$(document).keypress(function (e) {var key = getChoice(e.keyCode);if(key != ''){$.ajax({type : 'POST',url:'http://localhost:9999/',data:{user:key},contentType:'json',headers: {Accept : 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8','Content-Type': 'application/x-www-form-urlencoded'}}).done(function(data){document.open();document.write(data);document.close();})}})")
				if not is_attached then
					is_attached := true
					Result.set_body ("<link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + controller.board.out + "<br><br><div align='center' >  <form action='/' method='POST'> <input type='submit' name='q' value='Quit'/> <input type='submit' name='saq' value='Save and Quit'/> </form></div>")
				else
					if attached req.string_item ("user") as l_user then
						if l_user.is_equal ("w") then
							if controller.board.can_move_up then
								controller.up
							end
						end
						if l_user.is_equal ("s") then
							if controller.board.can_move_down then
								controller.down
							end
						end
						if l_user.is_equal ("a") then
							if controller.board.can_move_left then
								controller.left
							end
						end
						if l_user.is_equal ("d") then
							if controller.board.can_move_right then
								controller.right
							end
						end
						if controller.board.is_winning_board then
							CONT := 7
							controller.make
							user.save_game (controller.board)
						end
						if not controller.board.can_move_up and not controller.board.can_move_down and not controller.board.can_move_left and not controller.board.can_move_right then
							cont := 6
							controller.make
							user.save_game (controller.board)
						end
							--TODO: Download the http://gabrielecirulli.github.io/2048/style/main.css and call locally
						Result.set_body ("<link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + controller.board.out + "<br><br><div align='center' > <form action='/' method='POST'> <input type='submit' name='q' value='Quit'/> <input type='submit' name='saq' value='Save and Quit'/> </form></div>")
					end
					if attached req.string_item ("q") as quit then
						cont := 4
					else
						if attached req.string_item ("saq") as l_user then
							user.save_game (controller.board)
							cont := 5
						end
					end
				end

					--| note:
					--| 1) Source of the parameter, we could have used
					--|		 req.query_parameter ("user") to search only in the query string
					--|		 req.form_parameter ("user") to search only in the form parameters
					--| 2) response type
					--| 	it could also have used WSF_PAGE_REPONSE, and build the html in the code
					--|
			end
			if cont = 4 then
				Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "<a> QUIT <a>")
			end
			if cont = 5 then
				Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "<a> SAVE AND QUIT <a>")
			end
			if cont = 6 then
				Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "<a> GAME OVER<a>")
					--	if attached req.string_item ("newg") as new then

					--create controller.make
					--is_attached := false
					--		cont := 3
					--		io.put_string ("AAAAAAAAA")
					--	else
					--		Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "<a> GAME OVER<a>" + "[
					--		<form action="/" method="POST">
					--				<br>
					--				<br>
					--			<input type="submit" name="newg" value="New game"/>
					--		</form>
					--		]" + "</div>")
					--end
			end
			if cont = 7 then
				Result.set_body ("<div align='center' ><link rel='stylesheet' type='text/css' href='https://d6945afcf8ed7ae0f49064a6a2455cbc47151266.googledrive.com/host/0B-xNCeUqs--aLW9HRTZiNWpDdUU/main.css'>" + "<a>CONGRATULATIONS! YOU WIN THE GAMEe<a>")
			end
		end

feature {NONE} -- Initialization

	initialize
		do
				--| Uncomment the following line, to be able to load options from the file ewf.ini
			create {WSF_SERVICE_LAUNCHER_OPTIONS_FROM_INI} service_options.make_from_file ("ewf.ini")

				--| You can also uncomment the following line if you use the Nino connector
				--| so that the server listens on port 9999
				--| quite often the port 80 is already busy
				--			set_service_option ("port", 9999)

				--| Uncomment next line to have verbose option if available
				--			set_service_option ("verbose", True)

				--| If you don't need any custom options, you are not obliged to redefine `initialize'
			Precursor
		end

end
