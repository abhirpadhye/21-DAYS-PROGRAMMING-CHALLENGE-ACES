#include<iostream>
#include<vector>

using namespace std;
int main(){
   int n,q;
   cin>>n>>q;
   int index,value,col,size;
   vector<int>andarwala;
   vector<vector<int> >main;
   
   for(int i=0;i<n;i++){
       vector<int>andarwala;
       cin>>size;
   }

   for(int j=0;j<size;j++){
       cin>>value;
       andarwala.push_back(value);
   }

   main.push_back(andarwala);

   for(int k=0;k<q;k++){
       cin>>col>>index;
       cout<<main[col][index]<<endl;
   }
    

   
   


}

