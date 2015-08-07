#include "preInclude.h"
bool matchBrackets(string str)
{
    stack<char> brackets;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
            brackets.push('(');
        else if(str[i] == '[')
            brackets.push('[');
        else if(str[i] == ')' && brackets.top() == '(')
            brackets.pop();
        else if(str[i] == ']' && brackets.top() == '[')
            brackets.pop();
    }
    if(brackets.empty())
        return true;
    else
        return false;
}
