#include<iostream>
using namespace std;
void solve(int marks){
    if(marks > 90){
        cout<<"excellent";
    }else if(marks > 80){
        cout<<"good";
    }else if(marks > 70){
        cout<<"fair";
    }else if(marks > 60){
        cout<<"meets expectations";
    }else{
        cout<<"below par";
    }
}
int main(){
    int marks;
    cin >> marks;

    solve(marks);
}