
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    //Queue Container declaration
    queue <int> MyQueue;

    // first element push is first element out
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "\nCount: " << MyQueue.size() << endl;
    cout << "\nFront: " << MyQueue.front() << endl;
    cout << "\nBack : " << MyQueue.back() << endl;

    cout << "\nMyQueue = ";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " ";
        MyQueue.pop();
    }

    stack <int> Mystack;

    Mystack.push(60);
    Mystack.push(70);
    Mystack.push(80);
    Mystack.push(90);
    Mystack.push(100);

    cout << "\nMy Stack = ";
   
    while (!Mystack.empty())
    {
        cout << Mystack.top() << " ";
        Mystack.pop();
    }
    
}
