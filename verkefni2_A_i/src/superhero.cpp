#include "superhero.h"

superhero::superhero()
{
    _name = "";
    _age = 0;
    _superpower = 'n';
    verbose = true;
}

void superhero::setVerbose(bool v){
    verbose = v;
}

superhero::superhero(string name,int age, char superpower)
{
    _name = name;
    _age = age;
    _superpower = superpower;
    verbose = true;
}
/*
string superhero::set_name(string name){
    _name = name;
    return _name;
}

int superhero::set_age(int age){
    _age = age;
    return _age;
}

char superhero::set_superpower(char super){
    _superpower = super;
    return _superpower;
}
//get aðgerðir
string superhero::get_name(){
    return _name;
}

int superhero::get_age(){
    return _age;
}

char superhero::get_superpower(){
    return _superpower;
}
*/
// find the superpower

ostream& operator << (ostream& out, const superhero& hero){
    if(hero.verbose){

        out << hero._name << " ";
        out << "(" << hero._age << "): ";
        switch(hero._superpower)
        {
            case 'f':
                out << "Flying";
                break;
            case 'g':
                out << "Giant";
                break;
            case 'h':
                out << "Hacker";
                break;
            case 'n':
                out << "None";
                break;
            default:
                out << "Weakling";
                break;
        }
    }
    else{
        out << hero._name << " ";
        out << hero._age << " ";
        out << hero._superpower;
    }
    out << endl;
    return out;
}

istream& operator >> (istream& in, superhero& hero){

    in >> hero._name >> hero._age >> hero._superpower;
    return in;
}

void superhero::create_hero(superhero& hero){

    cout << "hero name: ";
    cin >> hero._name;
    cout << "hero age: ";
    cin >> hero._age;
    cout << "choose (f - Flying), (g - Giant), (h - Hacker), (n - None)" <<endl;
    cout << "hero power: ";
    cin >> hero._superpower;
}
