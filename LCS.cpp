#include<bits/stdc++.h>
using namespace std;

void printPowerSet(int *set, int setSize){
	unsigned int powSetSize = pow(2, setSize);
	int i, j,A=0;
	for(i=0; i<powSetSize; i++){
        for(j=0; j<setSize; j++){
            if(i & (1<<j)){
                cout<<set[j];
            }
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cin>>N;
	int set[N];
	for(int i=0;i<N;i++){
        cin>>set[i];
	}
	printPowerSet(set, N);
	return 0;
}
