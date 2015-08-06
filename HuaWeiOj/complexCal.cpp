#include "preInclude.h"

bool bigger(char op1 , char op2)
{
    if(op1 == '*' && (op2 == '+' || op2 == '-'))
        return true;
    else if(op1 == '/' && (op2 == '+' || op2 == '-'))
        return true;
    return false;
}

int complexCal(string str)
{
    stack<char> operators;
    stack<int> rs;
    string suffix;
    for(int i = 0; i < str.length(); i++)
    {
        if(isdigit(str[i]))
            suffix.append(1 , str[i]);
        else
        {
            if(operators.empty())
                operators.push(str[i]);
            else if(bigger(str[i] , operators.top()))
                operators.push(str[i]);
            else
            {
                while(!operators.empty() && !bigger(str[i] , operators.top()))
                {
                    suffix.append(1 , operators.top());
                    operators.pop();
                }
                operators.push(str[i]);
            }
        }
    }
    while(!operators.empty())
    {
        suffix.append(1 , operators.top());
        operators.pop();
    }
    for(int i = 0; i < suffix.length(); i++)
    {
        if(isdigit(suffix[i]))
            rs.push(suffix[i] - '0');
        else
        {
            int num2 = rs.top();
            rs.pop();
            int num1 = rs.top();
            rs.pop();
            if(suffix[i] == '*')
                rs.push(num1 * num2);
            else if(suffix[i] == '+')
                rs.push(num1 + num2);
            else if(suffix[i] == '-')
                rs.push(num1 - num2);
            else
                rs.push(num1 / num2);
        }
    }
    return rs.top();
}
