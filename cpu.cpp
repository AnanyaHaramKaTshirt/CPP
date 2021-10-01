#include<bits/stdc++.h>
using namespace std;

void fcfs(vector<   pair<pair<int,int>,int>  > &p){
	sort(p.begin(),p.end());
	int minat=(p[1].first).first;
	vector<int>Awt;
	vector<int>Atat;

	cout<<"proc"<<" A"<<" B"<<" T"<<" W"<<endl;
	for(int i=1;i<p.size();i++){

		int at=(p[i].first).first;

		int bt=(p[i].first).second;

		int cumbt=0;
		for(int j=1;j<=i;j++)
			cumbt+=(p[j].first).second;

		int tat=cumbt-at+minat;
		Atat.push_back(tat);
		int wt=tat-bt;
		Awt.push_back(wt);

		cout<<"pro"<<p[i].second<<" "<<at<<" "<<bt<<" "<<tat<<" "<<wt<<endl;
	}
	cout<<"\n<WT>="<<(float)accumulate(Awt.begin(), Awt.end(), 0)/(p.size()-1)<<endl;
	cout<<"<TAT>="<<(float)accumulate(Atat.begin(), Atat.end(), 0)/(p.size()-1);
	
}



int main(){
	int n,bt,at;
	cin>>n;
	vector<   pair<pair<int,int>,int>  > p;
	p.push_back({{0,0},0});
	for(int i=1;i<=n;i++){
		cin>>at>>bt;
		p.push_back({{at,bt},i});
	}

	fcfs(p);
	
}