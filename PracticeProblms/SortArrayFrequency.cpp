#include <iostream>
#include<map>
#include <algorithm>
#include <utility>

using namespace std;
bool comp(pair<int,int>&p1,pair<int,int>&p2)
{
    if(p1.second==p2.second)
        return p1.first>p2.first;
    return p1.second>p2.second;
}
void printSorted(int arr[],int n)
{
    map<int,int> M;
    for(int i=0;i<n;i++)
    {
        M[arr[i]]++;
    }
    int s=M.size();
    int i=0;
    pair<int,int>p[s];
for (auto it = M.begin(); it != M.end(); ++it) 
        p[i++] = make_pair(it->first, it->second);
    sort(p,p+s,comp);
    
    cout << "Elements sorted by frequency are: "; 
    for (int i = 0; i < s; i++) 
    { 
        int freq = p[i].second; 
        while (freq--) 
            cout << p[i].first << " "; 
    } 
}

int main()
{
    int arr[]={2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12};
    int n = sizeof(arr)/ sizeof(arr[0]); 
    printSorted(arr, n); 
    return 0;
}