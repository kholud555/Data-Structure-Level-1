

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> Stack1;
    stack <int> Stack2;

    Stack1.push(10);
    Stack1.push(20);
    Stack1.push(30);
    Stack1.push(40);

    Stack2.push(50);
    Stack2.push(60);
    Stack2.push(70);
    Stack2.push(80);

    Stack2.swap(Stack1);
    cout << "Stack1 = ";
    while (!Stack1.empty())
    {
        // print top element
        cout << Stack1.top() << " ";

        // pop top element from stack
        Stack1.pop();
    }

    cout << "\nStack2 = ";
    while (!Stack2.empty())
    {
        // print top element
        cout << Stack2.top() << " ";

        // pop top element from stack
        Stack2.pop();
    }
}
