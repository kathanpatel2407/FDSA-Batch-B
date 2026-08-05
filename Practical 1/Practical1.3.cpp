#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,w="",l="";
    cout<<"Enter a sentence: ";
    getline(cin,str);
    str=str+" ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            w=w+str[i];
        }
        else
        {
            if(w.length()>l.length())
            {
                l=w;
            }
            w="";
        }
    }
    cout<<"Longest word:"<<l<< endl;
    cout<<"Number of characters:"<<l.length();
    return 0;
}
