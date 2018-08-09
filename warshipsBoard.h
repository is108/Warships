#pragma once

#include "player.h"

class warshipsBoard
{
        
        int axisx[10];
        int axisy[10];
        Player index;

    public:
        char tab[10][10];

        warshipsBoard();
        void initAxis();

        void addElements();

        void printGame();

};
