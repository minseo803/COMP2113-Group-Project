#ifndef GAMEFUNC_H
#define GAMEFUNC_H

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

int winCheck(int sum);

int win(vector< vector<int>>& b, string name);

int randomComp(vector <vector<int>>& board);

void display(vector <vector<int>>& b);

#endif