#include <iostream>
using namespace std;
int main() {
    int T,i,n;
    cin>>T;
    for(i=1;i<=T;i++ ){
        cin>>n;
        if(n%2==0){
            cout<<"Even";
        }
        else{
            cout<<"Odd";
        }
    }
    return 0;
}
