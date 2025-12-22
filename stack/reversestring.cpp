#include <iostream>
#include <stack>
using namespace std;
void pushatbottom(stack<char> &s, char value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    char temp = s.top();
    s.pop();
    pushatbottom(s, value);
    s.push(temp);
}
void reverse(stack<char> &s)
{
    if (s.empty())
    {
        return;
    }
    char temp = s.top();
    s.pop();
    reverse(s);
    pushatbottom(s, temp);
}
int main()
{
    stack<char> s;
    string ans;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    reverse(s);
    while (!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }
    cout << ans;
}