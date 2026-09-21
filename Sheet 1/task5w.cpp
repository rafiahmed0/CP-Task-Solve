#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,space,star;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int space=1;space<=row-i;space++){
            cout<<" ";
        }
        for(star=1;star<=(2*i)-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        for(int space=1;space<=row-i;space++){
            cout<<" ";
        }
        for(int star=1; star<=(2*i)-1;star++){
            cout<<"*";
        }
        cout<<endl;
    }
}