#include <iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<vector>
#include <fstream>
#include "gamefunc.h"

#define WIDTH 3
#define HEIGHT 3

using namespace std;

//Things to watch out
//This game will generate random coordinates in sequence.
//It won't give out same output everytime.
//Please understand this part of it.

int main(void)
{
	string name;

	//input.txt for game instruction
	ifstream fin;
	fin.open("input.txt");
	if (fin.fail()) {
		cout << "Error to show game instruction!" << endl;
		exit(1);
	}

	string line;
	while (getline(fin, line)) {
		cout << line << endl;
	}

	fin.close();
	cout << endl;
	
	//output.txt
	ofstream fout;
	fout.open("output.txt");
	if (fout.fail()) {
		cout << "Error to read output.txt" << endl;
	}

	cout << "Type your name: " << endl;
	cin >> name; // Scan player name

	char turn = 'X'; // 'X' : First player in each round

	int r, c;
	int i, j;
	int count = 0;
	int draw = true;   	// Variable to check whether it is 'draw' or not
	int gameRound = 1; 	// No.of Round
	int winNum = 0; 	// No.of win by human player
	int compwinNum = 0; // No.of win by computer

	for (int i = 1; i <= 5; i++)    // Total 5 rounds
	{
		cout << "Round: " << gameRound << endl;
		fout << "Round: " << gameRound << endl;
		cout << name << ": " << winNum << " " << "Computer: " << compwinNum << endl;

		vector < vector <int>> board(3, vector <int>(3, 0));
		display(board);

		while (true)         // Play game
		{
			if (turn == 'X')
			{
				cout << "Turn:" << name << " (column, row):";
				cin >> r >> c;
				count++;
				if (board[r][c] != 0)
				{
					continue;
				}
				else
				{
					board[r][c] = 1;
				}
				if (win(board, name) == 1)
				{
					fout << name << " wins!" << endl;
					cout << endl;
					winNum++;
					draw = false;
					break;
				}
				turn = 'O';
				if (count == 9)
				{
					break;
				}

				display(board);
			}

			if (turn == 'O')
			{
				cout << endl;
				cout << "Turn:Computer " << endl;
				randomComp(board);
				count++;
				if (win(board, "Computer") == 1)
				{
					fout << "Computer wins!" << endl;
					compwinNum++;
					draw = false;
					break;
				}
				turn = 'X';
				if (count == 9)
				{
					break;
				}
				display(board);
			}
		}

		if (draw == true && count == 9)
		{
			cout << "Nobody wins!" << endl;
			fout << "Nobody wins!" << endl;
			cout << endl;
		}

		count = 0;     // reset count variable
		draw = true;
		gameRound++;
		if (gameRound % 2 == 1) // Round 1,3,5: Human player play game first, Round 2,4: Computer play game first
		{
			turn = 'X';
		}
		else
		{
			turn = 'O';
		}
	}
	cout << "Total score is " << name << ": " << winNum << " " << "Computer: " << compwinNum << endl;
	fout << "Total score is " << name << ": " << winNum << " " << "Computer: " << compwinNum << endl;

	fout.close();
}