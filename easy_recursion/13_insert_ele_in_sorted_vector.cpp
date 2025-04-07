/////// logic 1 4 7 9  

/// let say i have to insert 6 



/// method 1 
//     we will go from -------->
//    if 1 > 6 insert 6 , else reduce array for now 
/// 4 7 9  isnert 6 .  ==> 7 9 ==> insert 6 now 
   
//    6 7 9 ===>   4 6 7 9 ===> 1 4 6 7 9 
// on backtracking 

// but we have only push back so we cant go with this 


// we will remove and insert ele from end   <<<<<<<------------- in this order 


//   1 4 7 9 , insert 6 

// 1 4 7 ===> 1 4 ===>   insert 6 ====> 1 4 6 ===> return start ===>  push 7 and 9 




#include<iostream>
#include<vector>

using namespace std ; 




void insert( vector<int> & vec , int n , int target   ){


           
           if( vec[n] <= target ){
                     
                     vec.push_back( target  ) ; 
                     return ; 
           }
           else{

                    int temp_popped_ele = vec.back() ; 

                    vec.pop_back() ; 

                    insert( vec , n-1 , target  ) ; 


                    vec.push_back( temp_popped_ele  ) ;                  ////// return krte time wapas push honge ,  yeh temp popped ele

           }



}






int main(){

     
     vector<int> vec = {1,4,6,9} ; 

     insert(vec , vec.size()-1 ,  6 ) ; 



     for( auto ele : vec )cout << ele << "   " ;
 




    return 0 ; 
}