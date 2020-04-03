#include <iostream>
using namespace std;
int x;
int fun(int y){
    if(y==0){
        return 1;
    }
    return x*fun(y-1);
}
int main(){
    int y;
    cin>>x>>y;
    cout<<fun(y);
}
