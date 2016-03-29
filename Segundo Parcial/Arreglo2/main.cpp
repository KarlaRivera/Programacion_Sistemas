#include <iostream>

using namespace std;
int numero[5];
double suma;
double promedio;
int pares;

void arreglo (int numero[])
{
    for (int i=0; i<5; i++)
    {
        cout<<"Ingresar numero :";
        cin>>numero[i];
    }
for (int i=0; i<5; i++)
    {
       cout<<"Numero :"<<numero[i]<<"\n";
    }
}
double prom (int numero[], double suma)
{
    int c=0;
   int i;
   double promedio=0;
   for (i=0;i<5;i++)
   {
       suma=suma+numero[i];
      {
         c++;
      }
   }
   promedio=suma/5;
   return promedio;
}

int par (int numero[])
{
    int i;
    int cant=0;
    for (i=0;i<5;i++)
    {
        if ((numero[i]%2)==0)
        {
            cant++;
        }
    }
    return cant;
}

int main()
{
    cout<<"Numero Promedio es :"<<prom(numero)<<"\n";
    cout<<"Numero Par es :"<<par(numero)<<"\n";
    arreglo(numero);
    return 0;

}
