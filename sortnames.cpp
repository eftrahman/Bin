#include <bits/stdc++.h>
using namespace std;
void print(vector<string> names){
	for(int i=0;i<names.size();i++)
		cout<<names[i]<<endl;
}
bool mycomp(string a, string b){
	return a<b;
}
vector<string> alphabaticallySort(vector<string> a){
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	n=n+1;
	vector<string> names;
	string name;
	for(int i=0;i<n;i++){
		getline(cin,name);
		names.push_back(name);
	}
	names=alphabaticallySort(names);
	print(names);
	return 0;
}
