#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    char resp;
    int num=0, contaPar=0;
    int suma=0;
    int contador=0;
    int mayor=0;
    int promedio=0;
    do {
        do{
            cout<<"Ingrese un numero entre 50 y 100...";
            cin>> num;

        } while(!((num>=50) && (num<=100)));
        _flushall();
        do
        {
            cout<<"Desea continuar...:";
            cin.get(resp);
            _flushall();
        } while ((toupper(resp)!='S') and (toupper(resp)!='N'));
        suma = suma + num;
        if (num>mayor)
        {
            mayor=num;
        }
        contador++;
        if (num%2==0)
        {
            contaPar++;
        }
    } while ((toupper(resp)=='S'));
    promedio= suma/contador;
    cout<<"Promedio  "<<promedio<<"\n";
    cout<<"Mayor es  "<<mayor<<"\n";
    cout<<"Numero Par  "<<contaPar<<"\n";


    return 0;

}



