#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#define print cout<<
#define input cin>>
#define S_input(s) getline(cin,s)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int top=0;
    string S;
    while(S_input(S))
    {
        string s="";
        for(int i=0;S[i];i++)
        {
            if (S[i]=='\"') 
            {
                if (top%2==0)
                    s=s+"\`\`";
                else
                    s=s+"\'\'";
                top++;
            }
            else
                s=s+S[i];
        }
        print s;
        print "\n";
    }
    return 0;
}
