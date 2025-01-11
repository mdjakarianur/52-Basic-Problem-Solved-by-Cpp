#include <iostream>
using namespace std;
int main() {
    int T,n;
    cin>>T;
    for(int i=1;i<=T;i++ ){
        cin>>n;
        if(n%2==0){
            cout<<"Even"<<endl;
        }
        else{
            cout<<"Odd" <<endl;
        }
    }
    return 0;
}
