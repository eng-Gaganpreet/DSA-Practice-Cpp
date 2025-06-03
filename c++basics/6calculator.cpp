#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of A and B respectively: ";
    cin >> a >> b;

    cout << "enter one of the operations  +  ,  _  ,  *  ,  /  ,  %  -->";
    char ch;
    cin >> ch;
    int result;
    switch (ch)
    {
    case '+':
        result = a + b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '-':
        result = a - b;
        break;
    case '%':
        result = a % b;
        break;
    default:
        cout << "wrong operand pressed";
        break;
    }

    cout<<"your result is : "<<result;

    return 0;
}