#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

int main()
{

    string phrase;
    int i=0,j=0;
    char retourner[26]={};
    cout << "Entrez phrase : ";
    getline(cin,phrase);


    for ( i = 26 ; i>-1 ; i--)
    	{
      	  retourner[26-i]=phrase[i];
 	   }

    for(j=0;j<27;j++)
    {
        cout << retourner[j];
    }


    return 0;




}
