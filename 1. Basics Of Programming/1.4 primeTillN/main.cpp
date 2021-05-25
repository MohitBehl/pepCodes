#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for(int fac = 2 ; fac * fac <= n ; fac++){
        if(n%fac == 0){
            return false;
        }
    }
    return true;
}
void printAllPrimes(int low,int high){
    while(low <= high){
        if(isPrime(low)){
            cout<<low<<endl;
        }
        low++;
    }
}
int main(){
    int low ,high;
    cin>>low>>high;
    printAllPrimes(low , high);
}