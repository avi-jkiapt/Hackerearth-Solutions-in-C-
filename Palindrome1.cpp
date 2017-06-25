#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	b=a;
	reverse(b.begin(),b.end());
	if(a==b)
	cout<<"Palindrome"<<endl;
	else
	cout<<"Not Palindrome"<<endl;
	return 0;
}
