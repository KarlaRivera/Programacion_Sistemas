#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct vehiculo
{
    char automovil [30];
    int v1,v2,v3,mayor,menor;
} ;
vehiculo vehi[5]

void ingreso (vehiculo &vehi)
{
    _flushall();
    cout<<"Ingresar Vehiculo ";
    cin.getline(vehi.automovil,30);
    cout<<"Velocidad 1 ";
    cin>>vehi.v1;
    cout<<"Velocidad 2 ";
    cin>>vehi.v2;
    cout<<"Velocidad 3 ";
    cin>>vehi.v3;
}
void ingresoArreglo(vehiculo vehi[])
{
    int i;
    for (i=0;i<5;i++)
    {
        ingreso(vehi[i]);
    }
}

void calcular(vehiculo &vehi)
{
    if (vehi.mayor>)
}

void calcularArreglo(alumno alum[])
{
     int i;
    for (i=0;i<5;i++)
    {
        calcular(alum[i]);
    }
}

void presentar (alumno alum)
{
    cout<<"Alumno "<<alum.nombre<<" Nota :"<<alum.promedio<<" Obs :"<<alum.obs<<"\n";
}

void presentarArreglo (alumno alum[])
{
     int i;
    for (i=0;i<5;i++)
    {
        presentar(alum[i]);
    }
}
int main()
{
   ingresoArreglo(alum);
   calcularArreglo(alum);
   presentarArreglo(alum);
   return 0;
}

