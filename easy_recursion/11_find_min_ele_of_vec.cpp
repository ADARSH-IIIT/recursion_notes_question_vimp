#include<iostream>
#include<vector>

using namespace std ; 



///// logic , let say mai last index (5 ) pe hoon 
// now agar koi mujhe 0th se 4th tak mein sabse min ele dede , then use main vec[5] se comapre kruga and jo chota hoga use return kr dunga  



/////// initially n is last index number 
int findmin( vector<int>vec , int n  ){
                 
                  
                  if(n==0)return vec[0] ; 



                  int min_left_to_me = findmin(   vec , n-1    ) ; 

                  
                  return  min_left_to_me <= vec[n] ? min_left_to_me : vec[n] ; 

}



int main(){



     vector<int> vec = {1,2,0,4,5,6} ; 

     cout << findmin( vec , vec.size()-1 ) ;




    return 0 ; 
}