





#include<iostream>
#include<vector>
using namespace std ; 



void print( vector<int> &vec , vector<int>&tempvec , int i , int&sum  ){
          


           if(i==vec.size()){
             
             cout << "[ " ; 
             for(auto ele : tempvec ) cout << ele << " " ;
             cout << " ]  and sum = " << sum << " ]\n" ;  



             return ; 
           }


           //// not choosing 
           print( vec , tempvec , i+ 1 , sum  ) ;


           //// choosing 
           tempvec.push_back( vec[i] ) ;
           sum = sum + vec[i] ; 
           print(vec , tempvec , i+1 , sum  ) ;
           tempvec.pop_back() ; 
           sum = sum-vec[i] ; 

          

}



int main(){


    vector<int> vec = {1,2,3 , 4  } ; 
    vector<int> tempvec  ;
    int sum = 0 ; 
    print( vec , tempvec , 0  , sum ) ; 




    return 0 ; 
}