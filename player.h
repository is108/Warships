#pragma once
#include <set>

class warshipsBoard;

class Player
{
    char shipsboard;
    using arrayPair = std::set<std::pair<int, int>> ;

    public:

        //warshipsBoard tab;
        arrayPair moves;
        arrayPair ships;
    
        void isMove(int whosemove, warshipsBoard& table_player, Player gamer, warshipsBoard& table_bot );
        void addShips(int whoseturn, warshipsBoard& table);

};