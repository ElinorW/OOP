#include <iostream>
using namespace std;

int main ()
{
    int a;
    cout<<"Enter number: \n";
    cin>> a;
    cout<<"Prime Numbers are: \n";
    for(int i=2;i<=a;i++)
    {
        bool prime = true;
        for(int b = 2; b < i;++b)
        {
            if (i%b==0)
            {
                prime = false;
                break;
            }
        }
        if(prime)
        {
            cout << i << "\n";
        }
    }
return 0;
}

