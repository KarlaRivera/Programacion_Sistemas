#include <iostream>

using namespace std;

int na, ne,nf;
char nombre[30];

void lecturaDatos(int &na, int &ne, char nombre[])
{
    cout<<"Nombre del alumno :";
    cin.getline (nombre,30);
    cout<<"Nota acumulada  :";
    cin>>na;
    cout<<"Nota de examen :";
    cin>>ne;
}

int notafinal (int na, int ne)
{
    int xnf;
    xnf=na+ne;
    return xnf;
}

void estadoNota (int nf)
{
    if (nf>=60)
    {
        cout<<"Aprobado";
    }
    else
    {
        cout<<"Reprobado";
    }

    cout<<"\n";
}

int main()
{
   lecturaDatos(na,ne,nombre);
   nf=notafinal(na,ne);
   cout<<"Nota Final :"<<nf<<"\n";
   estadoNota(nf);
}
