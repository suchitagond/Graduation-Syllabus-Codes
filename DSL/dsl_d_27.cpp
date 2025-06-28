#include <iostream>
#define arr_size 10
using namespace std;
template <class T>
class stack
{
public:
    int top = -1;
    T s[arr_size];
    int isfull()
    {
        return (top >= arr_size) ? 1 : 0;
    }
    int isempty()
    {
        return (top == -1) ? 1 : 0;
    }
    void push(T x)
    {
        if (isfull() != 1)
        {
            top++;
            s[top] = x;
        }
    }
    T pop()
    {
        if (isempty() != 1)
        {
            top--;
            return s[top + 1];
        }
    }
    T peek()
    {
        return s[top];
    }
};
int priority(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
string in_post(string exp)
{
    char ch;
    string post;
    stack<char> s;
    for (int i = 0; i < exp.size(); i++)
    {
        ch = exp[i];
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (s.peek() != '(')
            {
                post += s.pop();
            }
            s.pop();
        }
        else if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
        {
            while (s.isempty() != 1 && priority(ch) <= priority(s.peek()))
            {
                post += s.pop();
            }
            s.push(ch);
        }
        else
        {
            post += ch;
        }
    }
    while (s.isempty() != 1)
    {
        post += s.pop();
    }
    return post;
}
int check(string post)
{
    char ch;
    int val[10];
    int c = 0, val1, val2, temp;
    stack<int> s;

    for (int i = 0; i < post.size(); i++)
    {
        ch = post[i];
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            cout << "enter value for " << ch;
            cin >> val[c];
            c++;
        }
    }
    c = 0;
    for (int i = 0; i < post.size(); i++)
    {
        ch = post[i];
        switch (ch)
        {
        case '+':
            val2 = s.pop();
            val1 = s.pop();
            temp = val1 + val2;
            s.push(temp);
            break;
        case '-':
            val2 = s.pop();
            val1 = s.pop();
            temp = val1 - val2;
            s.push(temp);
            break;
        case '*':
            val2 = s.pop();
            val1 = s.pop();
            temp = val1 * val2;
            s.push(temp);
            break;
        case '/':
            val2 = s.pop();
            val1 = s.pop();
            temp = val1 / val2;
            s.push(temp);
            break;
        case ' ':
            break;
        default:
            s.push(val[c]);
            c++;
            break;
        }
    }
    return s.pop();
}
int main()
{
    int ch;
    char ch1;
    string exp, a;
    int b;
    do
    {
        cout << "1)infix to postfix\n2)postfix evaluation " << endl;
        cout << "enter choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter infix expression ";
            cin >> exp;
            a = in_post(exp);
            cout << "postfix expression is " << a << endl;
            break;
        case 2:
            b = check(a);
            cout << "value after evaluation is " << b << endl;
            break;
        }
        cout << "do you ewant";
        cin >> ch1;
    } while (ch1 == 'y');
}