#include <iostream>

using namespace std;
int numeros[4];
int v=5;
double factorial=1;
double factor [4];
void ingresar (int v, int numeros [])
{
    int i=0;
    for (i=0;i<v;i++)
    {
        do
        {
            cout<<"Ingresar Numero :"<<i+1<<"  ";
            cin>>numeros[i];
        }while (!(numeros[i]>=0) and (numeros[i]<=10));
    }
}

double fact (int v, int numero[], double &factorial, int i)
{
    int j=0;
        for (j=numeros[i];j>0;j--)
        {
            factorial=factorial*j;
        }

        return factorial;
}

void FT (int v,double factor [])
{
    int i=0;
    for (i=0;i>v;i++)
    {
        factor[i]=fact(v,numeros,factorial,i);
    }
}
int main()
{
   ingresar(v, numeros);
   int i=0;
    FT(v,factor);
    for (i=0;i>v;i++)
    {
        cout<<"El factorial de :"<<numeros[i]<<" Es :"<<factor[i];
    }
}
