/*

if even atleast one subse has sum = target =============> return true 
if none of thenm have sum == target , return false 

*/



/*

logic 

bool f() retur ntrue if subse sum = target 

if will apply f() on left part and right part indivally on any node 
if any one of them return true ans is true 
if both false , ans is false 


*/





#include<iostream>
#include<vector>
using namespace std ; 



bool check( vector<int> &vec , vector<int>&tempvec , int i ,  int sum , int target , int &count   ){
       
       count++ ; 


        if( sum == target ){
                return true ; 
        }

        if( i== vec.size() ){
            return false ;  
        }

        if( sum > target  ){
               return false ; 
        }
            
             


///////// not including 
   
    bool ansfromleft = check( vec , tempvec , i+1 , sum , target , count  ) ; 


////// including 
     sum = sum + vec[i] ; 
     tempvec.push_back(vec[i]);
     bool ansfromright = check( vec , tempvec , i+1 , sum , target , count   ) ; 
     sum = sum - vec[i] ; 
     tempvec.pop_back() ;

       
     return ansfromleft || ansfromright ;   




}





int main(){


       

    vector<int> vec = { 1 , 2 ,3 , 1   } ; 
    vector<int> tempvec  ;
    int sum = 0 ; 
    int count = 0 ; 
    cout << check( vec , tempvec , 0  , sum , 1 , count ) << "\n" ; 


 cout << count << "\n" ;



    return 0 ; 
}



