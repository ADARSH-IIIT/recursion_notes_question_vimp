




///////////////// same logic as linear search 
// bas yah nmid , and new function call condition pe hoga 






#include<iostream>
#include<vector>

using namespace std ; 



int binarysearchrecursive( vector<int>vec ,  int target  ,  int left , int right ){

      
       if(left>right) return -1 ; 


      int mid = left - (left-right)/2 ; 
  
    
      
      if(  vec[mid] == target   )return mid ; 

      else if (  vec[mid] <  target  ){
           return  binarysearchrecursive(  vec , target , mid+1 , right  ) ; 
      }
      else{
           return  binarysearchrecursive(  vec , target , left  , mid-1  ) ; 


      }

}






int main(){

   vector<int> vec = {1,2,3,4,5,6,7,8} ; 

   int target = 20; 

   cout << binarysearchrecursive( vec , target , 0 , vec.size()-1 ) ; 



    return 0 ; 
}