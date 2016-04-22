#include <iostream>
using namespace std;
int main ()
{
    int i = 1;
    while(true)
    {
        if(i > 10)
            break;
        cout << i << "\n";
        ++i;
    }
return 0;
}