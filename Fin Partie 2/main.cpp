#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

string  inversePhrase(string phrase)        // Déclaration de la fonction pour inverser
    {
        /* Variable pour la partie 1*/
        int i=0,j=0, dec;
        dec = phrase.length();
        string Rep=phrase;

            for (i=dec-1;i>=0;i--)      // Boucle pour inverser
        {
            Rep[i]=phrase[j];           // Inversement de la phrase
            j++;
        }
        return Rep;             // Retour de la phrase inverser
    }


string decalePhrase(string phrase,int nbCaract)     // Déclaration de la fonction pour décaler de 2
    {

        /* Variable de la partie 2*/
        string Rep=phrase;
        int i=0;


    /* Programme pour décaler de 2 */
    if (nbCaract>0 && nbCaract<27)
    {
       while (phrase[i] !='\0')
            {
                if(phrase[i]== ' ')
               {
                    Rep[i]=phrase[i];
                    i++;
               }
               else
               {
                    if (phrase[i] >='A' && phrase[i] <='Z' );
                    {
                        Rep[i]=(((phrase[i]-65)+nbCaract)%26)+65;
                    }
                    if (phrase[i] >='a' && phrase[i] <='z' );
                    {
                        Rep[i]=(((phrase[i]-97)+nbCaract)%26)+97;
                    }
                   i++;
               }
          }
    }
    return Rep;         // Retour de la phrase décaler de 2

    }



int main()
{
    int crypter, nbCaract;
    string decalage,inverse,phrase;


    cout<<"Entrez une phrase a crypter :"<<endl;
    getline(cin,phrase);

    cout<<"Pour inverser la phrase tapez: 1 \nPour rajouter 2 tapez: 2"<<endl;      //Choix d'inverser ou d'ajouter 2
    cin>>crypter;       //Valeur du choix pour savoir si il faut inverser ou ajouter 2

    if (crypter==1)         //Choix 1: Inverser la phrase
    {
        inverse = inversePhrase(phrase);        // Application de la fonction dans la chaine de carractere "inverse"
        cout<<inverse<<endl;            // Ecriture de la phrase inverser
    }

    if (crypter==2)     //Choix 2: Ajouter 2 lettre ('a' devient 'c')
    {
        cout << " De combien de caractere voulez vous decaler ? ";          // De combien de carractere vont etre decaler les lettres
        cin >>nbCaract;

        decalage = decalePhrase(phrase, nbCaract);          // Application de la fonction dans la chaine de carractere "decalage"
        cout<<decalage<<endl;               // Ecriture de la phrase decaler

    }




    return 0;
}
