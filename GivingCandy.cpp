// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;

// str : Stores input string
// curr : Stores current subset
// index : Index in current subset, curr
void powerSet(int *str, int index = -1,string curr = "")
{
	int n = str.length();

	// base case
	if (index == n)
		return;

	// First print current subset
	cout << curr << "\n";

	// Try appending remaining characters
	// to current subset
	for (int i = index + 1; i < n; i++) {

		curr += str[i];
		powerSet(str, i, curr);

		// Once all subsets beginning with
		// initial "curr" are printed, remove
		// last character to consider a different
		// prefix of subsets.
		curr.erase(curr.size() - 1);
	}
	return;
}

// Driver code
int main()
{
	int N;
    cin>>N;
	int set[N];
	for(int i=0;i<N;i++){
        cin>>set[i];
	}
	powerSet(set);
	return 0;
}
