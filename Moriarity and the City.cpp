#include <iostream>
using namespace std;
#define gc getchar_unlocked
 
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
 
int main()
{
   // cout << "Hello World!" << endl;
 
 int n;
 scanint(n);
 //cin>>n;
 int a[n];
 int i;
 int c=0;
 int max=0;
 for(i=0;i<n;i++)
 {int x;
 scanint(x);
 a[i]=x;
     //cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
     if(a[i]==a[i+1])
     c++;
     else
     {
         if(max<c)
         max=c;
         c=0;
     }
 }
 //cout<<max+1;
 printf("%d",max+1);
    return 0;
}
