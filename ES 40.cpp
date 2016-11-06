# include <iostream>
using namespace std;

bool inters;

bool intersezione(float x, float y, float m, float q, bool inters)
{
    int G1;
    int G2;
    G1=y;
    cout<< "G1=  "<<G1<<endl;
    G2=(m*x)+q;
    cout<<"G2=  "<<G2<<endl;

    if (G1==G2)

        return inters=true;
    else
        return inters=false;
}

  int main()
{
    float x;
    float y;
    float m;
    float q;

    cout<<"Inserisci l' ascissa x del punto P:  ";
    cin>>x;
    cout<<"Inserisci l' ordinata y del punto P:  ";
    cin>>y;
    cout<<"Inserisci m(il coefficente angolare):  ";
    cin>>m;
    cout<<"Inserisci q(il termine noto):  ";
    cin>>q;

    cout<<"Retta:  "<<"y= "<<m<<"x+  "<<q<<endl;
    cout<<"Punto: P("<<x<<";"<<y<<")"<<endl;

    if (intersezione(x,y,m,q,inters)==true)
        cout<<"Il punto appartiene alla retta"<<endl;
    else
        cout<<"Il punto non appartiene alla retta"<<endl;

    return 0;
}





