// Link for practice the program:  https://www.codechef.com/problems/CONSTR
// Problem Statement:-
// 	Consider a string S consisting of lowercase Latin alphabets. 
// 	In one operation, you can pick an index from string S and replace the character at that index with 3 occurrences of the same character.
// Program for Printing the unique elements:-

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter the size of String:";
	cin>>n;
	cout<<"Enter the String:";
	string s;
	cin>>s;
	for(int i=0; i<n; i++)
	{
	    if(s[i]==s[i+1] && s[i]==s[i+2])
	    {
		//Below line convert the repeated same element into one
	        s.erase(s.begin()+i,s.begin()+i+2);
	        i=-1;
	    }
	}
	cout<<"The Unique String is "<<s<<endl;
	return 0;
}

----
Input:-
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
