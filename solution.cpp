#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;
int func()
{int k=1;

    for(int i=0;i<10;i++)
    {
        k*=i;

    }
    return k;
}
int main()
{
    char FileName[256];
    char SearchWord[256];
    int counter = 0;

    cout << "Enter the word you want to search for: ";
cin>>SearchWord;

    cout << "\n\n";
    cout << "Enter the name of file you want to open: ";
    cin >> FileName;
    ifstream FileSearch(FileName);
int ru=func();



    while(!FileSearch.eof())
    {
        counter++;
        string temp;
        FileSearch >> temp;

        if(temp == SearchWord)
        {
            cout << SearchWord << " found on line: " << counter << "\n\n";
            break;
        }
    }
    return 0;
}
