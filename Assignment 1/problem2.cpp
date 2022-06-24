# include <bits/stdc++.h>
using namespace std;


int solve(int a, int b){


    int sum = a+b;
    int dif = a-b;

    return sum*dif; 
}


int main(){

    int a,b;

    cin>>a>>b;

    cout<<solve(a,b)<<endl;
}