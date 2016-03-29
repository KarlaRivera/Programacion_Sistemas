#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int numeros [9];
int Contador;

int NumRandom ()
{
    int Num;
    do
    {
        Num= 1+rand()%100;
    }
    while (!(Num&2==0));
    return Num;
}

void GenerarNum (int numeros[])
{
    srand(time(0));
    int i;
    for (i=0;i<10;i++)
    {
        numeros[i]=NumRandom();
    }
}

void PresentArreglo (int numeros[])
{
    int i;
    for (i=0;i<10;i++)
    {
        cout<<"Numero["<<i<<"]"<<numeros[i]<<" "<<numeros[i]<<"\n";
    }
}

int Contar (int numeros[])
{
    int i;
    int c=0;

    for (i=0;i<10;i++)
    {
        if (numeros[i]>50)
        {
            c++;
        }
    }
    return c;
}
int main()
{
   GenerarNum(numeros);
   PresentArreglo(numeros);
   Contador=Contar(numeros);
   cout<<"Numeros mayores a 50 :"<<Contador<<"\n";
}
