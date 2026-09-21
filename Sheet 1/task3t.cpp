#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=n;row>=1;row--){
    for(int star=1;star<=row;star++){
        cout<<"*";
    }
    cout<<endl;
}
}