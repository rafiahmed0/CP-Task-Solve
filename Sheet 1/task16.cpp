#include<bits/stdc++.h>
using namespace std;
int main(){
    char x,a;
    cin>>x;
    if(65<=x && x<=90){
        a=x+32;
        cout<<a<<endl;
    }
    else if(97<=x && x<=122){
        a=x-32;
        cout<<a<<endl;
    }
}