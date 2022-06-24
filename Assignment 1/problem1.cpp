# include <bits/stdc++.h>
using namespace std;


string solve(string str){

    string s = "Hello, ";

    s += str;
    s += '!';

    return s;

}


int main(){
    string str;

    cin>>str;

    cout<<solve(str)<<endl;
}