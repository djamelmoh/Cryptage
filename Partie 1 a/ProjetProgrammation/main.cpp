#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{

    string phrase;
    int i=0,j=0;
    char inverse[20]={};
    cout << "Entrez phrase : "<<endl;
    getline(cin,phrase);


    for ( i = 17 ; i>-1 ; i--)
    {
        inverse[16-i]=phrase[i];
    }

    for(j=0;j<17;j++)
    {
        cout << inverse[j];
    }


    return 0;




}
