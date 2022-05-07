**COMP2113 Project: Tic Tac Toe Game**  
Group 27  
Yoon Minseo (UID: 3035759117)  
Chun Jaeseo (UID: 3035549471)  

**Tic Tac Toe Game Brief Description**  
*	The game supports a single player to play a tic tac toe game with a computer.  

**Rules**  
* The starting turn changes every round: 1st,3rd,5th round: human player and 2nd,4th round: computer player.
* Show the 2D game board (3x3) on the screen with the axis.  
* If it is a human player's turn, ask the player to type coordinates where they want to place their mark on the board and then change a turn to the computer player.
* If it is a computer player's turn, the computer player will input a coordinate randomly and mark his position and then change the turn to the human player.  
* Repeat the game until one player gets 3 marks in a row (up, down, across, or diagonally) or two players end in a draw at the 9th input of coordinates.  
* The winner will get one point on each round. Nobody gets a point when ending in a draw.
* Repeat the round for 5 times and the final winner will be decided based on who has more points during the whole game.  

**Requirements**  
* Generation of Random game sets or events  
Game instructions will be imported from "input.txt" file and will be shown on the terminal when player starts the game.
* Data structure for storing game status  
Uses vector is used as a main data structure to store the game process and result.   
Uses string to save the player's name.
* Dynamic memory management  
Uses a vector container as dynamic memory management.
* File input/output  
Shows the game instruction.  
The output file stores who has won each round and the total winning score of the whole game.  
* Program codes in multiple files  
Two .cpp files and a header file is created (main.cpp / gamefunc.cpp / gamefunc.h).
* Proper indentation and naming styles & In-code documentation  
All presented inside the code files.  
Further information will be written on the files with annotations.  

**How to run**  
* Put all files in same directory then open cmd in 'academy21' server
* Type the given commands consequently  
make main
./main
* Type the player's name
* Type the column and row number that player want to place
* Type appropriate coordinates until each round is finished
* Repeat the round for 5 times

**Demonstration Video**  
* Show the list of files in the folder
* Show compiling process by using "Makefile"
* Show instruction before the game by importing "input.txt" file through compiling process
* Ask the human player to type the player's name
* The game starts
* Play 5 rounds of the game
* Decide the winner by checking the accumulated points throughout the game.  
* Program execution will be finished automatically.  
* Show "output.txt" file which saved the game result .

**Things to watch out**  
* This game will not give out the same output for each game.
* Hence, "output.txt" file will be used as a file to save the game record. 
* On this repository, "output.txt" file contain the game result of recorded demonstration.
* "SampleInput.txt" : the exact input that has been used in demonstration video
* "SampleOutput.txt" : the output that has been printed in demonstration video
