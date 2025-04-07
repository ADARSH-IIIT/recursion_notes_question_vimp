#include<iostream>
#include<vector>


using namespace std ; 

///////// logic mai ith and len-1-i ko swap kr  deta hoon baki ka koi aur sambhal lega 


void swap(int &a , int&b){
           
            int temp = a ; 
            a=b ; 
            b= temp ; 

}

void reverse( vector<int>&arr , int i ){
         
         int len = arr.size() ; 

        if(i>=len/2)return ; 
    
        swap(  arr[i] , arr[len-1-i] ) ; 

        reverse(arr , i+ 1 ) ; 



}





int main(){



vector<int> vec = {1,2,3,4,5 } ; 

reverse(vec , 0) ;


for(auto ele : vec) cout << ele << "  " ; 



    return 0 ; 
}