#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    for(int i=2;i<(a)^1/2;i++){
        if (a%i==0)
        cout<<i<<endl;
    }

    
    return 0;
}