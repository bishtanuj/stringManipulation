Program:-

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==s[i+1]&&s[i]==s[i+2])
	        {
	            s.erase(s.begin()+i,s.begin()+i+2);
	            i=-1;
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}

----
Input:-
3
6
aaabbb
7
abbbbbc
4
abcd

Output:-
ab
abc
abcd
