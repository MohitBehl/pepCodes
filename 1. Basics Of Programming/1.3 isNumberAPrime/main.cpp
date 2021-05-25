#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int fac = 2; fac * fac <= n ; fac++){
        if(n % fac == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;

    cin >> t;

    while(t-- > 0){
        int n ;
        cin >> n;

        cout << (isPrime(n) ? "prime\n" : "not prime\n");
    }
}