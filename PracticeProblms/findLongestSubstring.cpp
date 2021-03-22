#include <iostream>
#include<string>
#include<unordered_map>

using namespace std;
string findLongestSubstring(string str)
{
    int len=str.length();
    int st=0,maxlen=0,i,start,currlen;
    unordered_map<char,int>pos;
    pos[str[0]]=0;
    
    for(i=1;i<len;i++)
    {
        if (pos.find(str[i]) == pos.end())
            pos[str[i]] = i;
        else
        {
            if (pos[str[i]] >= st) 
            {
                currlen = i - st;
                if (maxlen < currlen) 
                {
                    maxlen = currlen;
                    start = st;
                }
                st = pos[str[i]] + 1;
            }
            pos[str[i]] = i;
        }
    }
    if (maxlen < i - st) 
    {
        maxlen = i - st;
        start = st;
    }
    return str.substr(start, maxlen);
}

int main()
{
    string str = "abcdefag";
    cout << findLongestSubstring(str);
    return 0;
}
