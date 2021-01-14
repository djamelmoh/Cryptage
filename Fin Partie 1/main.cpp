#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    //Variable globale
    int i,dec;
    //Variable Partie 1
    char phrase[20]={};
    int crypter;
    //Variable Partie 2
    string alph="abcdefghijklmnopqrstuvwxyz";
    int j;

    cout<<"Entrez une phrase a crypter :"<<endl;
    cin.getline(phrase,20); //Ajout de la phrase dans le tableau phrase
    dec= strlen(phrase);    // Nombre de lettre dans la phrase pour le decompte

    cout<<"Pour inverser la phrase tapez: 1 \nPour rajouter 2 tapez: 2"<<endl;      //Choix d'inverser ou d'ajouter 2
    cin>>crypter;       //Valeur du choix pour savoir si il faut inverser ou ajouter 2

    if (crypter==1)         //Choix 1: Inverser la phrase
    {
        cout<<"La phrase a crypter est: "<<phrase<<endl;

        for(i=dec;i>=0;i--)
        {
            cout<<phrase[i];        //Ecrire la phrase a l'envers

        }
    }

    if (crypter==2)     //Choix 2: Ajouter 2 lettre ('a' devient 'c')
    {

        for(i=0;i<=dec;i++)     //Premiere boucle pour faire la longueur exacte de la phrase (Pour pas avoir de carractere du style # @)
        {
            for(j=0;j<=26;j++)      //Deuxieme boucle pour parcourir l'alphabet
            {
                if(phrase[i]==alph[j])  //If pour verifier si les carractere sont les meme
                    phrase[i]=alph[j=j+2];  //Changement du carractere

                if(phrase[i]=='y')
                    phrase[i]='a';

                if(phrase[i]=='z')
                    phrase[i]='b';
            }
        }

        cout<<phrase<<endl;            //Ecriture de la phrase modifier

    }




    return 0;
}
