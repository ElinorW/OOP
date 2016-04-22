
using namespace std;

int main ()
{
    cout << "Hello, World!\n"
return 0;
}
#include <iostream>
/*the code will not compile because the cout is defined in the iostream library
 * by having it at the bottom the cout is not defined.
 * by moving the '#include<iostream>' to the beginning of the code, the code will run */

