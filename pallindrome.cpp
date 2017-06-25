#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,k=0;
		string str1,str2;
		cin>>str1;
		int n=str1.length();
		for( i=0,j=n-1;i<n;i++,j--)
		str2[i]=str1[j];
		for(i=0;i<n;i++)
		{
			if(str1[i]!=str2[i])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
