#include <iostream>
using namespace std;

int A[10];
int i;


int main ()
{

    for(i=0;i<10;i++)
      {
        cout << " inserisci "<<i+1<<" valore: ";
        cin >> A[i];
      }

    for (i=0;i<3;i++)
      {

         A[i]=A[i]*2;

      }


cout <<"Le prime tre componenti raddoppiate sono: "<<A[0]<<";"<<A[1]<<";"<<A[2]<<endl;

return 0;
}

