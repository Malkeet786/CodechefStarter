#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    string b;
	   
	        cin>>b;
	    
	    int count=0;
	    int count1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]=='1')
	        {
	            count1++;
	        }
	        else if(b[i]=='0')
	        {
	            count++;
	        }
	    }
	    double res=0;
	    res=abs(count-count1);
	    cout<<ceil((double)(res/k)*1.00)<<endl;
	}
	return 0;
}