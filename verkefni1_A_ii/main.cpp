#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    string str;
    bool go_on = true;
    do{
        fout.open("DataTextFile.txt",ios::app);
        getline(cin, str);
        if(str[0] == '\\'){
            go_on = false;
        }else{
            fout << str << endl;
        }
        fout.close();
    }while(go_on == true);

    return 0;
}
