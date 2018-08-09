#include "player.h"
#include "warshipsBoard.h"
#include <iostream>



 void Player::isMove(int whosemove, warshipsBoard& table_player, Player gamer, warshipsBoard& table_bot)
 {
    int x, y;
    int i, j;
    if (whosemove == 1)
        std::cin >> x >> y;
    else {
        x = rand() % 10;
        y = rand() % 10;
    }
    std::pair<int, int> move = {x, y};
    if (moves.find(move) != moves.end())
        moves.insert(std::make_pair(x, y));
            if (gamer.ships.find(move) == gamer.ships.end()){
                table_player.tab[x][y] = '*';
                table_bot.tab[x][y] = '*';
            }
            else {
                table_player.tab[x][y] = 'X';
                table_bot.tab[x][y] = 'X';
                gamer.ships.erase(move);
            }
}

void Player::addShips(int whoseturn, warshipsBoard& table)
{
    int x, y;
    int i, j;

    for (int ship = 0; ship < 5; ship++){
            if (whoseturn == 1)
            std::cin >> x >> y;
            else {
                x = std::rand() % 10;
                y = std::rand() % 10;
            }
            std::pair<int, int> obj = {x, y};
            if (ships.find(obj) == ships.end() && table.tab[x][y] != '*'){
                ships.insert(std::make_pair(x, y));
                table.tab[x][y] = 'S';
                for (i = x - 1; i < x + 2; i++)
                    for (j = y - 1; j < y + 2; j++){
                        if (table.tab[i][j] == ' ')
                            if (i >= 0 && i <= 9 && j >= 0 && j <= 9)
                            table.tab[i][j] = '*';
                    }
                
                table.printGame();
            }
            else
            { 
                std::cout << "Вы не можете поставить корабль сюда" << std::endl;
                ship--;
            }
        }
            for (i = 0; i < 10; i ++)
                for (j = 0; j < 10; j++)
                    if (table.tab[i][j] == '*')
                        table.tab[i][j] = ' ';

}