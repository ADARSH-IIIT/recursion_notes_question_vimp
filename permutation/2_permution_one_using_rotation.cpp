//////////////////  all ele are unique 

// using rotation technique to get all permutations 




#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std ; 



void rotateAntiClockWise(   vector<int>&vec , int i , int k  ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 

       rotate( vec.begin()+i , vec.begin()+k+i , vec.end() ) ;          //// rotating acw 
}




void rotateClockwise(   vector<int> &vec , int i ,  int k    ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 
       rotate( vec.begin()+i , vec.begin()+ vec.size() - ( k )  , vec.end() ) ;          //// rotating acw 


}




void f(  vector<int>& vec , int i , vector<vector<int>>& ans   ){





      if(i== vec.size()-1 ){
             
              cout << " [ " ;

              for(auto ele : vec ) cout << ele << " " ; 

              cout << " ]\n" ;

               ans.push_back(  vec   ) ; 



           return ;
      }


      for(  int j = 0 ; j< vec.size()-i  ; j++    ){

             
                    rotateAntiClockWise( vec , i , j  ) ; 

                    f( vec , i+1 ,  ans  ) ;

                    rotateClockwise( vec , i , j  ) ; 



      }



}





int main(){



vector <int> vec = {1 , 2 , 3   } ;

// rotateAnticlockwise( vec , 2  ) ; 

vector<vector<int>> ans ;
f(  vec , 0 , ans  ) ; 


// for(  auto ele : vec ) cout << ele << "   "  ; 










    return 0 ; 
}