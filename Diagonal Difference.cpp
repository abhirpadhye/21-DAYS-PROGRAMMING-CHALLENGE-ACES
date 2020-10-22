#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n,sum_rhd=0,sum_lhd=0,difference;
    
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j){
                sum_lhd+=a[i][j];
                              
            }
            if(i+j==n-1){
		       	sum_rhd+=a[i][j];
			   }
            
        }
        
    }
     
    
    difference=abs(sum_lhd-sum_rhd);
    cout<<difference;

}



