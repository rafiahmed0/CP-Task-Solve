#include <iostream>
using namespace std;
int main(){
    long long a,b,x;
    char s;
    cin>>a>>s>>b;
    if(s=='+'){
        x=a+b;
        cout<<x<<endl;
    }
    else if(s=='-'){
        x=a-b;
        cout<<x<<endl;
    }
    else if(s=='*'){
        x=a*b;
        cout<<x<<endl;
    }
    else if(s=='/'){
        x=a/b;
        cout<<x<<endl;
    }
}