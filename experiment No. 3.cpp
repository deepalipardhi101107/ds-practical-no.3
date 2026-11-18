#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string exp;
    stack<char> s;
    bool valid = true;
	
	cout <<"\n name:deepali pardhi";
    cout <<"\n div:B";
    cout <<"\n roll no.:214";
    cout <<"\n =======output=======";
    cout << "\n Enter Expression: ";
    cin >> exp;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (s.empty())
            {
                valid = false;
                break;
            }
            char top = s.top();
            s.pop();
            
            if ((exp[i] == ')' && top != '(') ||
                (exp[i] == '}' && top != '{') ||
                (exp[i] == ']' && top != '['))
            {
                valid = false;
                break;
            }
        }
    }

    if (!s.empty())
    {
        valid = false;
    }

    if (valid)
    {
        cout << "The expression is well parenthesized." << endl;
    }
    else
    {
        cout << "The expression is NOT well parenthesized." << endl;
    }

    return 0;
}
