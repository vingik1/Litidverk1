#include <iostream>
#include <string>
#include "superhero.h"
#include <fstream>

using namespace std;

void read_file();
void insert_into_file(superhero& hero);

int main()
{
    superhero hero;
    hero.create_hero(hero);
    insert_into_file(hero);
    read_file();
    return 0;
}

void read_file(){
    ifstream fin;
    superhero hero;
    fin.open("heroFile.txt");

    if(fin.is_open())
    {
        while(!fin.eof())
        {
            fin >> hero;
            if(fin.eof())
                break;
            cout << hero;
        }
    }
    else
    {
        cout << "Could not open file";
    }
}

void insert_into_file(superhero& hero){
    ofstream fout;
    fout.open("heroFile.txt", ios::app);

    if(fout.is_open())
    {
        hero.setVerbose(false);
        fout << hero;
        fout.close();
        hero.setVerbose(true);
    }
    else
    {
        cout << "Could not open file";
    }
}
