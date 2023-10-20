#pragma once
#include "piece.h"
#include<stdio.h>
#include <iostream>
using namespace std;

class table
{
private:
    piece tab[8][8];
    
public:
    static int ctoi(char c);
    void insert(piece p, int x, int y);
    void move(int x1, int y1, int x2, int y2);
    void remove(int x, int y);
    table(/* args */);
    ~table();
};

table::table()
{   
}

table::~table()
{
}
void table::insert(piece p, int x, int y){
    piece[x][y] = p;
}
void move(int x1, int y1, int x2, int y2){
    if(piece[x1][y2] == nullptr || piece[x1][x2].canMove(x2, y2)) throw exception;
    else{
        piece[x2][y2] = piece[x1][y1];

    }
}
int table::ctoi(char c){
    int a;
    switch ((int) c)
    {
    case 65 ... 72:
        a = c - 64;
        break;
    case 97 ... 104:
        a = c - 97;
        break;
    default:
        throw (c);
        break;
    }
    return a;
}
