/*  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a[5],min = INT_MAX, max=INT_MIN,sum=0,A=0,B=0;
    for(long long int i=0;i<5;i++){
        cin>>a[i];
        if (min > a[i])
            min = a[i];
            
        if (max < a[i])
            max = a[i];
            
        sum+=a[i];
    }

 
    A=sum-max;
    cout<<A<<" ";

    B=sum-min;
    cout<<B;
    
}
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int max=INT_MIN;

    long long int a[n];

    for(long long int i=0;i<n;i++){
        cin>>a[i];
        if (max < a[i])
            max = a[i];

        
        

    }
    cout<<max;
}


