#include <iostream>

using namespace std;

int main()
{
    // this line of code will not be seen when the program is being run
    cout << "Comments are fun."; // this will also not be see despite being in the line with actual code
    /* with this type of comment everything after the symbol will be considered a comment
    including comments on different lines being turned of by */
    /*this can also be used to turn off lines of code like cout << "Hello monkeys";
    which can be helpful for disabling lines of code without removing the line of code*/

    return 0;
}
