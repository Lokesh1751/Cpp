#include <iostream>  
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
    int n=4;
    int arr[n]={-1,4,7,2};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
              for(int k=i;k<=j;k++){
                  cout<<arr[k]<<" ";
              }
        cout<<endl;
        }
    }

    
}