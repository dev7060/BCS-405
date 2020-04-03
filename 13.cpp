#include <iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"inside ctor"<<endl;
    }
    ~Test(){
        cout<<"inside dtor"<<endl;
    }
};
int main(){
    Test obj;
}
