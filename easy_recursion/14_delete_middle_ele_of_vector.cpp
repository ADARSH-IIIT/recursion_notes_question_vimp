




//////////////// agar yeh middle ele hai toh ise pop krdo 

////      else mai apne ele ko kuch der ke pop kr lunga , then return time wapas push 






#include<iostream>
#include<vector>



using namespace std ; 



void pop_mid( vector<int> &vec , int n , int len  ){


             
              if( n== len/2 ){
                      vec.pop_back();
                      return ; 
              }

              else{
                       
                        int temp_popped_ele = vec.back() ;
                        vec.pop_back() ; 

                        pop_mid(  vec , n-1 , len  ) ; 


                        //// re insert during return
                        vec.push_back( temp_popped_ele ) ; 

              }


}




int main(){



 vector<int > vec = { 1 ,2,3,4,5,6,7 } ; 

 pop_mid( vec , vec.size()-1  , vec.size()  ) ; 


 for(auto ele : vec )cout << ele << " " ;




    return 0 ; 
}