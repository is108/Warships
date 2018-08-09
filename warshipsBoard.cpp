#include <iostream>
#include "warshipsBoard.h"
using namespace std;

 warshipsBoard::warshipsBoard(){
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tab[i][j] = ' ';
    }

void warshipsBoard::initAxis()
        {
            int counter = 0;
            for (int i = 0; i < 10; ++i, ++counter){    
                axisx[i] = counter;
                axisy[i] = counter;
            }
        }

/*
void warshipsBoard::addElements(){
    std::set<std::pair<int,int>>::iterator it;
    for (it = index.ships.begin(); it != index.ships.end(); ++it)
    {
        std::cout << it->first << ' ' << (*it).second << endl;
    }   
}*/

void warshipsBoard::printGame(){
            int i(0), j(0);
            using std::cout;
            using std::endl;

            cout << ' ' << ' ' << ' ' << ' ';
            for (i = 0; i < 10; i++)
                cout << axisx[i] << ' ';
            cout << endl;
            for (i = 0; i < 13; i++){
                if (i == 0)
                cout << ' ' << ' ';
                else cout << '#' << ' ';
            }
            cout << endl;
            for (i = 0; i < 10; i++){
                    cout << axisy[i] << ' ' << '#' << ' ';
                for (j = 0; j < 10; j++)
                    cout << tab[i][j] << ' ';
                cout << '#' << ' ' << endl;
            }
            for (i = 0; i < 13; i++){
                if (i == 0)
                cout << ' ' << ' ';
                else cout << '#' << ' ';
            }
            cout << endl;
        }