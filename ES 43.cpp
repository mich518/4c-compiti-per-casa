#include <iostream>
#include <string.h>

using namespace std;



string candidatoA;
string candidatoB;
float votiA;
float votiB;
float percA;
float percB;



float percentuale (float& votiA,float& votiB) //funzione per il calcolo della percentuale dei voti ootenuti per i due candidati

{

    int sommaVoti;
    sommaVoti=votiA+votiB;

    votiA=(100*votiA)/sommaVoti;
    votiB=(100*votiB)/sommaVoti;

    return votiA;
    return votiB;

}
//main program
int main()

{

    cout<<"Inserisci il nome del primo candidato: ";
    cin>>candidatoA;

    cout<<"Inserisci i voti del primo candidato: ";
    cin>>votiA;


    cout<<"Inserisci il nome del secondo candidato: ";
    cin>>candidatoB;

    cout<<"Inserisci i voti del secondo candidato: ";
    cin>>votiB;


    percentuale (votiA,votiB);

    percA=votiA;

    percB=votiB;



    if (percA>percB)

    {
        cout<<"1)  " <<candidatoA<<"  con il: "<<percA<<" % dei voti "<<endl;
        cout<<"2)  " <<candidatoB<<"  con il: "<<percB<<" % dei voti "<<endl;
    }

    else

    {
       cout<<"1)  " <<candidatoB<<"  con il: "<<percB<<" % dei voti "<<endl;
       cout<<"2)  " <<candidatoA<<"  con il: "<<percA<<" % dei voti "<<endl;
    }

  return 0;

}



