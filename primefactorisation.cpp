#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    for (int i = 2; i < a; i++) {
        while (a % i == 0) {
            cout << i<<endl;
            a = a / i;
        }
    }

    return 0;
}