//All' inizio avevo pensato di farlo utilizzando le strutture (imparate a ripetozopne) ma dato che sono nei capitoli seguenti
// ho ripreso il metodo utilizzato nell' es41

#include <iostream>
#include <string.h>

using namespace std;


float prezzo;
float incremento;
int altro;
int percIncremento;
string prodotto;
char descrizione;

float Incremento (float percIncremento,float prezzo,float incremento)    //funzione per l' incremento del prezzo
{
       cout<<"secondo la percentuale d'incremento del ";
       cin>>percIncremento;

       incremento=prezzo+((prezzo*percIncremento)/100);

       return incremento;
}

//main program
   int main ()
{


       do {

            cout<<"Il prodotto:  ";
            cin >>prodotto;

            cout<<"che(descrizione del prodotto): ";
            cin>> descrizione;

            cout<<"Aveva un costo di:  ";
            cin >>prezzo;

            cout<<"Dopo l' incremento il prodotto,";
            cout<<" % costa  "<<Incremento (percIncremento,prezzo,incremento)<<endl;


            cout<<"ti interessano altri prodotti?(SI=0;NO=1)" <<endl;
            cin >>altro;


          } while (altro==0);



    return 0;
}
