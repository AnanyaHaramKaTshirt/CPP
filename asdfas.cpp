#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	fast;
	int n;
	cin>>n;
	pair<int, char> p[n];
	
	for(int i=0;i<n;i++)
		cin>>p[i].first>>p[i].second;

	for(int i=0;i<n;i++)
		cout<<p[i].first<<" "<<p[i].second<<"\n";
}
