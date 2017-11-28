#include <iostream>
#include <string>
#include "superhero.h"

using namespace std;

int main()
{
    superhero larry("larry",42,'Q');
    cout << larry.get_age() << endl;
    return 0;
}
