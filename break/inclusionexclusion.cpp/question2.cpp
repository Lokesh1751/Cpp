#include <iostream>  // euclid algorithm to find GCD
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int gcd(int a,int b){
    while (b!=0)
    {
        int rem =a%b;
        a=b;
        b=rem;

    }
    return a;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}