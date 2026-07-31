#include <bits/stdc++.h>
using namespace std;

void f()
{
	long long int n,k=0,sum=0;
	cin>>n;
	vector<long long int>a;
	for(int i=0;i<n;i++)
	{
	    long long int x;
	    cin>>x;
	    a.push_back(x);
	    
	    
	}
	sort(a.begin(),a.end());
	
	for(int i=0;i<n;i++)
	{
	    if(a[i]>i+1)
	   {
	       k=-1;
	   }
	   else
	   sum=sum+i+1-a[i];
	   
	    
	}
	if(k==-1)
	cout<<-1;
	else
	cout<<sum;
	
	cout<<endl;
}
int main() 
{
    long long int t;
    cin>>t;
   	while(t--)
   	{
   		f();
	}
	// your code goes here
	return 0;
}