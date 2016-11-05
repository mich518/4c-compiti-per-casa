# include <iostream>
using namespace std;

int Sequenza(int n)
{
    int p;
    p=n+5;
  do{
    n++;
    cout<<n<<"\t"<<endl;
    cout<<endl;

    }while(n!=p);

}

 int main()
 {
   int n;
   cout<<"Inserisci il numero:  ";
   cin>>n;
   Sequenza(n);

   return 0;
 }
