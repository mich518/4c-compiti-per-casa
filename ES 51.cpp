#include <iostream>
using namespace std;
int A[10];
int i;
int s;

// main program
int main()

{

    for(i=0;i<10;i++)
      {
        cout << " inserisci "<<i+1<<" valore: ";
        cin >> A[i];
      }
 for (i=0; i<10; i++)

    {

        if (A[i]>5)

        s=s+A[i];

    }



    cout<<"La somma delle componenti maggiori di 5 e': " <<s<<endl;



  return 0;
}


