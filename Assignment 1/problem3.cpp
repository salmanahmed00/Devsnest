# include <bits/stdc++.h>
using namespace std;


float solve(int a, int b){

    int div1 = a/b;
    float div2 = float(a)/float(b);

    return div1*div2;
}

int main(){

    int a,b;

    cin>>a>>b;

    cout<<solve(a,b)<<endl;
}