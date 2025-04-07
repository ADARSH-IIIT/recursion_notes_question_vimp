/*

logic for top node 

ans is =  (no of subset == target in left part) + (no of subset == target in right part)




*/


// no + - 0 anything 
#include<iostream>
#include<vector>

using namespace std ; 




int numberof( vector<int >&vec , vector<int>&temp , int i ,  int sum , int target  ){
                 


               if(i == vec.size()){
                           

                           if(sum==target) { 
                            //   for(auto ele : temp) cout << ele << " " ; cout << '\n' ;
                             return 1 ; }
                           else return 0 ; 
               }




                //////// no including 

                int fromleft = numberof( vec , temp , i+1 , sum , target  ) ; 



                /// including
                temp.push_back( vec[i] ) ; 
                sum = sum+vec[i] ; 
                int fromright = numberof( vec , temp , i+1 , sum , target  ) ; 

                // poppingon return as using & 
                sum = sum - vec[i] ; 
                temp.pop_back() ; 



                
                int finalans = fromleft + fromright ; 
                return finalans ; 




}



int main(){


     vector<int> vec = { 1,1 , 0 , -1 , 1   } ; 
     vector<int>temp;
     int sum = 0 ; 
     int target = 2 ; 
     int i = 0 ; 

     cout << numberof( vec , temp , i , sum , target) ; 
     

    return 0 ; 
}