#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int flag=1;
	    int val,count;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==1)
	        {
	            count=i+1;
	            break;
	        }
	    }
	 //  cout<<count;
	    for(int i=count;i<=n;i++)
	    {
	        if(a[i]==1)
	        {
	           val=i-count+1;
	          // cout<<val;
	           if(val<6)
	           {
	               flag=0;
	               break;
	           }
	           else
	           count=i+1;
	            
	        }
	    }
	    if(flag==0)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
