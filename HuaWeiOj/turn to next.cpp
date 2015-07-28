#include "function_declare.h"

void turn_to_next(string &in)
{
    for(int i = 0; i < in.length(); i++)
    {
        if(in[i] >= 'a' && in[i] < 'z')
            in[i] = in[i] + 1;
        else if(in[i] >= 'A' && in[i] < 'Z')
            in[i] = in[i] + 1;
        else if(in[i] == 'z')
            in[i] = 'a';
        else if(in[i] == 'Z')
            in[i] = 'A';
    }
}
