#include "frequent_head_file.h"
template <class T>
void PrintContainer(T &t)
{
    //confilm t is basic type
    for (auto i : t)
    {
        cout << i << endl;
    }
}
void formatStrByInt(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            str.erase(i);
        }
        else
        {
            // str=str.substr(i,str.size()-i);
            break;
        }
    }
}

