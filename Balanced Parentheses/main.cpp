#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool arepair(char open,char close)
{
    if (open=='('&&close==')')
        return true;
    else if (open=='{'&&close=='}')
        return true;
    else if (open=='['&&close==']')
        return true;
    return false;
}
bool arebalanced(string exp)
{
    stack <char>s;
    for (int i=0;i<exp.length();i++)
    {
        if (exp[i]=='('||exp[i]=='{'||exp[i]=='[')
                s.push(exp[i]);
        else if (exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if (s.empty()||!arepair(s.top(),exp[i]))
                return false;
            s.pop();

        }
    }
    return s.empty();
}
int main()
{
    string expression;
    cout<<"enter your expression";
    cin>>expression;
    if (arebalanced(expression))
        cout<<"Balaneced ";
    else
        cout<<"Not Balaneced ";
        cout<<"Not Balaneced new";
    return 0;
}
