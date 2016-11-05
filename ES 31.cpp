# include <iostream>
using namespace std;

string nome;

void ripetiStampa(string nome)
{
    cout<<nome<<endl;
    cout<<nome<<endl;
    cout<<nome<<endl;
}

int main()
{
    cout<< "Inserisci nome: "<<endl;
    cin>>nome;
    cout<<endl;

    ripetiStampa(nome);

 return 0;
}
