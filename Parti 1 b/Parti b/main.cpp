#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

int main()
{
    char tab[10]={};
    int i;

    cout<<"entre"<<endl;
    cin.getline(tab,10);

    for(i=0;i=10;i++)
    {
        cout<<tab[i+2];
    }

}
