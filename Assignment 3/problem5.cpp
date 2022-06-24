# include <bits/stdc++.h>
using namespace std;


int solve(int n){

    int pow = 1;

    while(pow <= n){
        
        if(n == pow){
            return 1;
        }
        pow = 2*pow;

    }

    return 0;
}


int main(){

    int n;
    cin>>n;

    cout<<solve(n)<<endl;
}