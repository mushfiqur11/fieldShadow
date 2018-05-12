#include "child.h"
#include <iostream>
using namespace std;

    // Both the parents are being initialized
child::child(int A, int B):mother(A), father(B)
{
    cout << "Child born";
}

void child::printHair()
{
    /* If we try to access the child's hair colour the problem arises.
     * The hair colour won't be of either of the two parents.
     * It needs to be mentioned
     */
    cout << "The child's hair Colour is: " << hairColour << endl;
}


