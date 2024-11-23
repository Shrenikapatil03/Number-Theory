#include <iostream>
using namespace std;
int main() {
   int a;
   cout << "Enter a:";
   cin >> a;
   int i;
   for(i=2;i<(a-1);i++){
       if(a%i==0){
           cout<< "not prime number";
        break;
       }
   }
   if(a%i!=0){
       cout<<"prime number";
   }

   return 0;
}