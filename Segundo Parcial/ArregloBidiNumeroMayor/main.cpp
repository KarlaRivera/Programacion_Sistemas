#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int lin=3;
const int col=4;

int num[lin][col];

void ingreso (int num[lin][col])
{
    srand(time(0));
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<(col-1);c++)
        {
            num[l][c]=1+(rand()%(100-1));
        }
    }
}

void NumMayor (int num[lin][col])
{   int uc=col-1;
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<(col-1);c++)
        {
           if ((num[l][c])>num[l][uc])
           {
               num[l][uc]=num[l][c];
           }
        }
    }
}

void presentar (int num[lin][col])
{
    for (int l=0;l<(lin);l++)
    {
        for (int c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    ingreso(num);
    NumMayor(num);
    presentar(num);
}
