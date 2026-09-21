#include<bits/stdc++.h>
using namespace std;
int main(){
    int counter;
    cin>>counter;
    int n, even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=counter;i++){
    int num;
    cin>>num;
    if(num%2==0){
        even++;
    }
    else{
        odd++;
    }
    if(num>0){
        pos++;
    }
    else if(num<0){
        neg++;
    }
}
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<pos<<"\n";
    cout<<"Negative: "<<neg<<"\n";

}