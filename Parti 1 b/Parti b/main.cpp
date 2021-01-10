#include <iostream>

using namespace std;

int main()
{
    int i;
    string phrase;


    cout<<"Entrez une phrase :"<<endl;
    getline(cin,phrase);


    for(i=0;i=17;i++)
    {
        if(phrase[i]==' ')
            phrase[i]=' ';
        if(phrase[i]=='a')
            phrase[i]='c';
        if(phrase[i]=='b')
            phrase[i]='d';
        if(phrase[i]=='c')
            phrase[i]='e';
        if(phrase[i]=='d')
            phrase[i]='f';
        if(phrase[i]=='e')
            phrase[i]='g';
        if(phrase[i]=='f')
            phrase[i]='h';
        if(phrase[i]=='g')
            phrase[i]='i';
        if(phrase[i]=='h')
            phrase[i]='j';
        if(phrase[i]=='i')
            phrase[i]='k';
        if(phrase[i]=='j')
            phrase[i]='l';
        if(phrase[i]=='k')
            phrase[i]='m';
        if(phrase[i]=='l')
            phrase[i]='n';
        if(phrase[i]=='m')
            phrase[i]='o';
        if(phrase[i]=='n')
            phrase[i]='p';
        if(phrase[i]=='o')
            phrase[i]='q';
        if(phrase[i]=='p')
            phrase[i]='r';
        if(phrase[i]=='q')
            phrase[i]='s';
        if(phrase[i]=='r')
            phrase[i]='t';
        if(phrase[i]=='s')
            phrase[i]='u';
        if(phrase[i]=='t')
            phrase[i]='v';
        if(phrase[i]=='u')
            phrase[i]='w';
        if(phrase[i]=='v')
            phrase[i]='x';
        if(phrase[i]=='w')
            phrase[i]='y';
        if(phrase[i]=='x')
            phrase[i]='z';
        if(phrase[i]=='y')
            phrase[i]='a';
        if(phrase[i]=='z')
            phrase[i]='b';
    }
    cout<<phrase<<endl;

return 0;
}
