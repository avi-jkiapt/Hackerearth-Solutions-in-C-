#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int l=s.size();
      if(l!=10||s[0]=='0')
      {
      cout<<"NO"<<endl;     //mobile number is not valid
       continue;
      }
    else
      {
      int c=0;
      for(int i=0;i<l;i++)
       {
       if(s[i]<48||s[i]>57)
        c=1;
      }
      if(c==0)
      cout<<"YES"<<"\n";  //Mobile number is valid
       else
       cout<<"NO"<<"\n";   //Mobile number is not valid
      }
    
    }
    return 0;
}

