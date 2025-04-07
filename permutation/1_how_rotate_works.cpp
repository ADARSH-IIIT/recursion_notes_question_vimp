#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 





void rotateAntiClockWise(   vector<int>&vec , int i , int k  ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 

       rotate( vec.begin()+i , vec.begin()+k+i , vec.end() ) ;          //// rotating acw 
}




void rotateClockwise(   vector<int> &vec , int i ,  int k    ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 
       rotate( vec.begin()+i , vec.begin()+ vec.size() - ( k )  , vec.end() ) ;          //// rotating acw 


}







int main(){


vector<int> vec = {1,2,3,4,5} ; 

rotateClockwise( vec , 2 , 8  ) ; 


for(auto ele : vec )cout << ele << "  " ;






    return 0 ; 
}












