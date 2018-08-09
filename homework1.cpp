#include <iostream>
#include <set>
#include "player.h"
#include "warshipsBoard.h"
#include <iterator>

#include <cstdlib>


using namespace std;


void isTurn(Player human, Player computer, warshipsBoard table, warshipsBoard table2, warshipsBoard table_bot2, warshipsBoard table_bot){
    int counter = 0;
    while (counter < 100){
        if (counter % 2 == 0)
            computer.isMove(0, table, human, table_bot);
        else {
            cout << "Ваш ход!\n";
            cout << "Введите координаты места, куда вы хотите сходить: ";
            human.isMove(1, table2, computer, table_bot2);
        }
        system("clear");
        cout << "Ваша доска с кораблями\n";
        table.printGame();
        cout << "\nВаша доска с вашими ходами\n";
        table2.printGame();
        cout << "\nДоска компьютера с кораблями\n";
        table_bot2.printGame();
        cout << "\nДоска компьютера с его ходами\n";
        table_bot.printGame();
        
        counter++;
    }
}

int main()
{
    std::srand(time(NULL));

    int shipsplayer = 5;
    int shipsbot = 5;


    warshipsBoard table;
    
    table.initAxis();
    warshipsBoard table2;
    table2.initAxis();
    warshipsBoard table_bot;
    table_bot.initAxis();
    warshipsBoard table_bot2;
    table_bot2.initAxis();
    Player human;
    Player computer;
    table.printGame();
    cout << "Поставьте корабли: ";
    human.addShips(1, table);
    computer.addShips(0, table_bot);
    system("clear");
    
    
    isTurn(human, computer, table, table2, table_bot, table_bot2);
}