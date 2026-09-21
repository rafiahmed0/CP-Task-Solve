#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,years,days,months,M;
    cin>>N;
    years=N/365;
    M=N%365;
    months=M/30;
    days=M%30;

    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;

}