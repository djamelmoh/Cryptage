#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{

    string phrase;
    int i=0,j=0,k=0;
    int nbre=0,nbreString=0;
    char inverse[20]={};
    char crypter[20]={};
    cout << "Entrez phrase : "<<endl;
    getline(cin,phrase);

    cout<<phrase<<endl;

    for ( i = 17 ; i>-1 ; i--)
    {
        inverse[16-i]=phrase[i];
    }

    int l=strlen(inverse);
    cout<<l<<endl;

    for(j=0;j<17;j++)
    {
        cout << inverse[j];
    }
    cout<<' '<<endl;


    string phraseCodee;
    phraseCodee=phrase;
    for(int cpt=0;cpt<nbreString;cpt++){
        if (phrase[cpt]>='A'&&phrase[cpt]<='Z')
            phraseCodee[cpt]=90-(((90-phrase[cpt])+nbre)%26);
        else if( phrase[cpt]>='a'&&phrase[cpt]<='z')
            phraseCodee[cpt]=122-(((122-phrase[cpt])+nbre)%26);
        else
             phraseCodee[cpt]=phrase[cpt]-nbre;

    }
    cout<<phraseCodee<<endl;


    return 0;




}
