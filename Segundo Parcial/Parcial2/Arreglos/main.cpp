#include <iostream>
#include <string>

using namespace std;

int int_array[5];

void arreglo (int int_array[])
{
    for (int i=0; i<5; i++)
    {
        cout<<"Ingresar numero :";
        cin>>int_array[i];
    }
for (int i=0; i<5; i++)
    {
       cout<<"Numero :"<<int_array[i]<<"\n";
    }
}
int main()
{
    arreglo(int_array);
    return 0;
}

