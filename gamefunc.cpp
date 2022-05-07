#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<vector>
#include <fstream>

#define WIDTH 3
#define HEIGHT 3

using namespace std; 

int winCheck(int sum)
{
	if (sum == 3)
	{
		return 1;
	}
	else if (sum == -3)
	{
		return 1;
	}

	return 0; //No one win
}

int win(vector< vector<int>>& b, string name)
{
	int i, j;
	int sum;

	// check horizontally for each row
	for (i = 0; i < 3; i++)
	{
		sum = 0; //reset variable to count each
		for (j = 0; j < 3; j++)
			sum += b[i][j];

		if (winCheck(sum))
		{
			cout << name << " wins!" << endl;
			return 1;
		}
	}

	// check vertically for each column
	for (j = 0; j < HEIGHT; j++)
	{
		sum = 0;
		for (i = 0; i < WIDTH; i++)
			sum += b[i][j];
		if (winCheck(sum))
		{
			cout << name << " wins!" << endl;
			return 1;
		}
	}

	// check diagonal
	sum = 0;
	for (i = 0; i < WIDTH; i++)
	{
		sum += b[i][i];
	}
	if (winCheck(sum))
	{
		cout << name << " wins!" << endl;
		return 1;
	}

	// check reversed digagonal
	sum = 0;
	for (i = 0; i < WIDTH; i++)
	{
		sum += b[i][WIDTH - 1 - i];
	}
	if (winCheck(sum))
	{
		cout << name << " wins!" << endl;
		return 1;
	}

	return 0;
}

// When computer playing the game: run random generator until it select coordinate which is not filled yet
int randomComp(vector <vector<int>>& board) 
{
	srand((unsigned int)time(NULL));

	while (true)
	{
		int num1 = rand() % 3, num2 = rand() % 3;
		if (board[num1][num2] == 0)
		{
			board[num1][num2] = -1;
			break;
		}
		else
		{
			continue;
		}

	}
	return 0;
}

//display game board
void display(vector <vector<int>>& b)
{
	char ch;
	int i, j;

	cout<<"    0 1 2"<<endl;  
	cout<<"   ------"<<endl;
	for (i = 0; i < WIDTH; i++)
	{
		cout << i << " |";    
		for (j = 0; j < HEIGHT; j++)
		{
			if (b[i][j] == 1)
				ch = 'X';
			else if (b[i][j] == -1)
				ch = 'O';
			else
				ch = ' ';
			cout << " " << ch;
		}
		cout << endl;
	}
}
