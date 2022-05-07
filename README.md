**COMP2113 Project: Tic Tac Toe Game**  
Group 27  
Yoon Minseo (UID: 3035759117)  
Chun Jaeseo (UID: 3035549471)  

**Tic Tac Toe Game Brief Description**  
*	The game supports a single player to play a tic tac toe game with a computer.  

**Rules**  
* Let the player choose the first player between computer and human.  
* Show the game board (3x3) on the screen with the axis.  
* Asked players to type coordinate where they want to place their mark on the board.  
* After the marking, turn play to the computer. The computer will give out the coordinate randomly and mark their position.  
* Repeat the game continuously.  
* The first player who gets 3 of her marks in a row (up, down, across, or diagonally) is the winner.  
* The winner will get one point for one time of win.  
* Replay this game 5 times and the final winner will be the player who gets more points during the game.  

**Requirements**  
* Generation of Random game sets or events  
Game instructions will be extracted from "input.txt" file and will be shown on the terminal when player starts the game.
* Data structure for storing game status  
Used vector to store the game process and result.  
Used string to save the player's name.
* Dynamic memory management  
Used vector
* File input/output  
Place files input for the entering wanted coordinates, check who is a win and other functions’ files  
The output file will show the game board with marks which are settled by given coordinates  
* Program codes in multiple files  
Two .cpp files and a header file is made (main.cpp / gamefunc.cpp / gamefunc.h) 
* Proper indentation and naming styles & In-code documentation  
All presented inside the code files  
Further information will be written on the files by comment  

**How to run**  
* Put all files in same directory then open cmd in 'academy21' server
* Type the given commands consequently.  
make main
./main
* Type the player's name
* Type the column and row number that player would like to place.
* Continue to play the game by repeating type the different coordinates for each round.

**Demonstration Video**  
* Show the list of files in the folder
* Show compiling process by using "Makefile"
* Show instruction before the game by import "input.txt" file through compiling process
* Ask to type the player's name
* The game will start
* Play 5 rounds of the game
* Find out the winner by checking the accumulated points through 5 games.  
* Program will be finished automatically.  
* Show "output.txt" file to show the saved game result.

**Things to watch out**  
* This game will not give out the same output for each game.
* Hence, "output.txt" file will be used as a file to save the previous game record. 
* It will changed continuously after the player plays game repeatedly.
* On this repository, "output.txt" file contain the game result of recorded demonstration.
* "SampleInput.txt" : Input that has been used in demonstration video
* "SampleOutput.txt" : Output that has been shown in demonstration video
