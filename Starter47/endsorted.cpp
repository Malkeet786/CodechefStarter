#include <bits/stdc++.h>
using namespace std;

void permut(){
    int n;
    cin>>n;
    vector<int>v(n);
    int t1,t2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1)t1=i;
        if(v[i]==n)t2=i;
    }
    if(t1<t2)
    {
    cout<<(n-1-t2)+(t1)<<endl;
    }
    else cout<<(n-1-t2)+(t1)-1<<endl;
    }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   permut();
	}
	return 0;
}