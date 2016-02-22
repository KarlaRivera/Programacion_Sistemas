#include <iostream>

using namespace std;

int main()
{
    int i=100;

    do{
        if (i%3==0)
        {
            cout<<i<<"\n";
        }
        i++;
    }while(i<1000);
}
