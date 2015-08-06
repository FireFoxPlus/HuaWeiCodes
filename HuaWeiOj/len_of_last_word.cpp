#include "preInclude.h"
int lastWordLen(string str)
{
    int poi = str.find_last_of(' ');
    return str.length() - poi - 1;
}
