# include <iostream>
using namespace std;

float prezzo,percSconto,prezzoScontato;

int Sconto(float prezzo,float percSconto,float prezzoScontato)
{
    prezzoScontato=prezzo-((prezzo*percSconto)/100);

    return prezzoScontato;
}

int main ()
{
    cout<<"Inserisci il prezzo del prodotto:  "<<endl;
    cin>>prezzo;
    cout<<"Inserisci lo sconto:  "<<endl;
    cin>>percSconto;
    cout<<endl;
    cout<<"Il prezzo del prodotto scontato e':  "<<endl;
    cout<<Sconto(prezzo,percSconto,prezzoScontato);

    return 0;
}
