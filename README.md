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
Random coordinates are extracted from the input.txt file to be shown on the game board.  
* Data structure for storing game status  
Recording points during 5 games  
* Dynamic memory management  
Recording game status  
* File input/output  
Place files input for the entering wanted coordinates, check who is a win and other functions’ files  
The output file will show the game board with marks which are settled by given coordinates  
* Program codes in multiple files  
Two .cpp files and a header file is made  
* Proper indentation and naming styles & In-code documentation  
All presented inside the code files  
Further information will be written on the files by comment  

**How to run**  
* Put all files in same directory then open cmd  
* Type the given commands consequently.  
g++ -pedantic-errors -std=c+11 main.cpp gamefunc.cpp -o main  
./ main  

**Demonstration Video**  
* Show instruction before the game.  
* Start the game by choosing the first player between me and computer.  
* Play 5 games.  
* Select the winner by checking the accumulated points through 5 games.  
* Existing program.  
