# include <bits/stdc++.h>
using namespace std;


vector<int> solve(vector<vector<int>> mat)
{
	int last = INT_MAX;
	int first = INT_MAX;

	int n = mat.size();

	vector<int> ans;

	for(int i = 0; i < n; i++){
		if(mat[i][1] < first){
			first = mat[i][1];
		}
	}


	for(int j = 0; j < n; j++){
		if(mat[j][1] < last && mat[j][1] != first){
			last = mat[j][1];
		}
	}

	for(int l = 0; l < n; l++){
		if(mat[l][1] == last){
			ans.push_back(mat[l][0]);
		}
	}

	sort(ans.begin(), ans.end());

	return ans;
}

int main(){

	vector<vector<int>> arr{{5,2},{3,37},{1,41},{2,37},{5,41},{4,35}};

	vector<int> ds(solve(arr));

	for(auto i: ds){
		cout<<i<<" "<<endl;
	}
}