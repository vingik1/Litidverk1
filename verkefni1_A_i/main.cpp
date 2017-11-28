#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int number_of_lines();

int main()
{
    char input;
    int i = 0;
    int number = 10;
    ifstream fin;
    string str;
    do{
        fin.open("DataTextFile.txt");
        if(fin.is_open()){
            //while(!fin.eof()){
            for(; i < number; i++){
                 getline(fin ,str);
                cout << str << endl;
            }
            //}
        }
        else{
            cout << "File not open" << endl;
        }
        fin.close();

        number = (number_of_lines() - number)+ number;
        cout << i << endl;
        cout << number <<endl;
        cout << "Do you wish to continue (y/n)?"<<endl;
        cin >> input;
    }while(input != 'n');
    return 0;
}


int number_of_lines(){
    int number = 0;
    string str;
    ifstream fin;
    fin.open("DataTextFile.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin ,str);
            number++;
        }
    }

    fin.close();
return number;
}
