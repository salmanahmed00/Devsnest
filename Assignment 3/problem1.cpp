# include <bits/stdc++.h>
using namespace std;


int solve(int n, vector<int> arr){

	sort(arr.begin(), arr.end());

	int last = INT_MIN;
	int first = INT_MIN;

	for(int i = 0; i < n; i++){

		if(arr[i] > first){
			last = first;
			first = arr[i];
		}
	}

	return last;
}

int main(){

	vector<int> arr{2, 1, 2, 8, 7, 8};

	cout<<solve(6, arr)<<endl;
}