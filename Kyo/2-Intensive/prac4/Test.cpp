#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isaMUString(char * sequence, int size);
bool canApplyRule1(char * sequence, int size);
bool canApplyRule2(char * sequence,int size);


bool isaMUString(char * sequence,int size)
{
    int MUI = 0;
    for (int i = 0; i < size; i ++)
    {
        if(sequence[i] == 'M') MUI++;
        if(sequence[i] == 'I') MUI++;
        if(sequence[i] == 'U') MUI++;
    }
    if (MUI!=size) return false;
    else return true;
}

bool canApplyRule1(char * sequence,int size)
{
    int lastIndex = size - 1;
    if (sequence[lastIndex] == 'I') return true;
    else return false;
}