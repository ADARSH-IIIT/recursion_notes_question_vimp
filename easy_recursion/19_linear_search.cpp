


////////  if [i] == target hai toh , ans hamara i hai , hum i return kr denge 
///////    else  agar i+1 ke aage  koi aur ans hua toh yeh function  krke dega and  hum wo return krege 






#include<iostream>
#include<vector>


using namespace std ; 




int linearsearch(   vector<int> vec , int i , int target  ){

         
         if(i==vec.size())return -1 ; 





          if( vec[i] == target ){
                      return i ; 
          }
          else{
                     
                      int ans_find_for_i_plus_1 = linearsearch( vec , i+1 , target  ) ; 

                      return ans_find_for_i_plus_1 ; 
          }
         
}



int main(){




    vector<int> vec = { 5,12,34,2,6,7} ; 

    cout << linearsearch( vec , 0 , 7  ) ; 




    return 0 ; 
}