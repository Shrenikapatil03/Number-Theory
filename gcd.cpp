#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a & b: ";
    cin>>a>>b;
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    cout<<"GCD is:"<<a<<endl;
    
    return 0;
}