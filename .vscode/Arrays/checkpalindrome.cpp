#include <iostream> 
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            check=0;
            break;
        }

    }
    if(check==true){
        cout<<"Palindrome";
    }
    else{
         cout<<" Not Palindrome";
    }
}