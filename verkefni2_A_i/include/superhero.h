#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>
#include "superhero.h"

using namespace std;

class superhero
{
    public:
        superhero();
        superhero(string name,int age, char superpower);
        string get_name();
        int get_age();
        char get_superpower();
        string set_name(string name);
        int set_age(int age);
        char set_superpower(char superpower);
        string superheropower(char superpower);
        friend ostream& operator << (ostream& out, const SuperHero& superhero);
        friend istream& operator >> (istream& in, SuperHero& superhero);

    private:
        string _name;
        int _age;
        char _superpower;
};

#endif // SUPERHERO_H
