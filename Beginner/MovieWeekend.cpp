#include <iostream>
using namespace std;

int main() {int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int l[n],r[n];
    int max=0,ri=0,x=0; 
    for(int i=0 ; i<n;i++){
        cin>>l[i];
    }
    for(int i=0 ; i<n;i++){
        cin>>r[i];
    }
    for(int i=0 ; i<n;i++)
    {
        if(max<=l[i]*r[i] && ri<r[i]){
            max=l[i]*r[i];
            ri=r[i];
            x=i;
        }
    }
    cout<<x+1<<endl;
 }
	return 0;
}