#pragma once
#include "table.h"

class piece{
    public:
        piece(table t, bool white);
        void move(int x, int y);
        bool isWhite();
        bool canMove(int x, int y);
    protected:
        table t;
        bool white;
};

piece::piece(table t, bool white){
    this.t = t;
    this.white = white;
}

bool piece::isWhite(){
    return white;
}