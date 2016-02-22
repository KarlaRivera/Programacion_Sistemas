#include <iostream>

using namespace std;

int main()
{
    int j=0;
    int k=0;
    for (j=1; j<=6; j++)
    {
        for (k=1; k<j; k++)
        {
            cout<<k;
        }

        cout<<"\n";
    }
    return 0;

}
