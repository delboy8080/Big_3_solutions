#include <iostream>
#include "Polygon.h"
#include "Quiz.h"
#include "Stack.h"

void displayStack(Stack stk)
{
    cout << stk << endl;
    stk.pop();
    stk.pop();
    stk.push(3);
    stk.push(4);
    cout << stk <<endl;
}

int main() {

    Stack stk;
    stk.push(1);
    stk.push(2);
    displayStack(stk);
    cout << stk <<endl; // should be 1 and 2 not 3 and 4

    return 0;
}
