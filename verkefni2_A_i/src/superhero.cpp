#include "superhero.h"

superhero::superhero()
{
    _name = "";
    _age = 0;
    _superpower = 'n';
}

superhero::superhero(string name,int age, char superpower)
{
    _name = name;
    _age = age;
    _superpower = superpower;
}

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
//get ağgerğir
string superhero::get_name(){
    return _name;
}

int superhero::get_age(){
    return _age;
}

char superhero::get_superpower(){
    return _superpower;
}

// find the superpower

string superhero::superheropower(char superpower){
    if(superpower == 'f'){
        return "Flying";
    }
    else if(superpower == 'g'){
        return "Giant";;
    }
    else if(superpower == 'h'){
        return "Hacker";
    }
    else if(superpower == 'n'){
        return "None";
    }
    else{
        return "Weakling";
    }
}
