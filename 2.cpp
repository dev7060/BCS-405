#include <iostream>
using namespace std;

int main(){
    int first=0, second=1, term, n;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    n-=2;
    while(n--){
        term=first+second;
        cout<<term<<" ";
        first=second;
        second=term;
    }
}
