#include <iostream>
#include <string.h>

using namespace std;

float incasso, somma, media;
string nome;
int i;

float acquisizioneSomma (float incasso,float& somma,string nome)  //funzione per l' acquisizione della somma dei guadagni dei vari reparti

{
    int altro;
    i=1;

    do

    {

    cout<<"Reparto " <<i <<": ";
    cin>>nome;

    cout<<"Incasso: ";
    cin>>incasso;

    somma=somma+incasso;

    cout<<"Altro?(SI=0;NO=1): ";
    cin>>altro;
    i++;

    } while (altro==0);

    return somma;

}

float mediaTotale (float media,float& somma, int& i)  //funzione per il calcolo la media di guadagno dei vari reparti

{
    media=somma/i;

    return media;

}

//main program
int main()

{
    cout<<"La somma dei guadagni e': " <<acquisizioneSomma (incasso,somma,nome) <<endl;
    i=i-1;
    cout<<"La media del guadagno e': " <<mediaTotale (media, somma,i);

 return 0;

}
