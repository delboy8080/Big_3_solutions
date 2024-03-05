#include <iostream>
#include "Polygon.h"
#include "Quiz.h"
#include "Stack.h"

void displayStack(Stack stk)
{
    cout << stk << endl;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    cout << stk <<endl;
}

int main() {

    Stack stk;
    stk.push(1);
    displayStack(stk);
    cout << stk <<endl;
    for(int i = 0; i < 4;i++)// 2,3,4 should not appear in hte stack.
    {
        cout << stk[i] <<endl;
    }
    return 0;
}
