//////////////////  all ele are unique 

// using rotation technique to get all permutations 



///// used set here 

#include<iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace  std ; 



void rotateAntiClockWise(   vector<int>&vec , int i , int k  ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 

       rotate( vec.begin()+i , vec.begin()+k+i , vec.end() ) ;          //// rotating acw 
}




void rotateClockwise(   vector<int> &vec , int i ,  int k    ){


       if(   k>=vec.size() ) k = k% (vec.size()-i) ;                    // handling kth overflow etc etc 
       rotate( vec.begin()+i , vec.begin()+ vec.size() - ( k )  , vec.end() ) ;          //// rotating acw 


}





void f(  vector<int> &vec , int i , vector<vector<int>>& ans , set<int> mySet   ){


    mySet.clear() ;                                     /////// for lower node we want clean empty set thats why 
 
      if(i== vec.size()-1 ){
             
              cout << " [ " ;

              for(auto ele : vec ) cout << ele << " " ; 

              cout << " ]\n" ;

               ans.push_back(  vec   ) ; 



           return ;
      }


      


      for(  int j = 0 ; j< vec.size()-i  ; j++    ){
                        
     

                      
                     rotateAntiClockWise( vec , i , j  ) ;    //  first rotate
                     
                   
                    //  check is it has been fixed or not in that posisition 
                     if (mySet.find(vec[i]) != mySet.end()) {
                          
                            // yes fixed 
                          //// do noting just skip it 
                       


                        } else {
                               
                               // push in set 
                                mySet.insert(vec[i]); 
                                //  baki ka yeh  aur dekhege 
                                f( vec , i+1 ,  ans , mySet  ) ;
                              
                                //  mySet.erase(vec[j]);    dont do this , else jo lee abhi push hua tha , suru mein wo pop ho jayega 


                        }
                     
                        rotateClockwise( vec , i , j   ) ;   /// rotate kiya tha toh unrootate bhi kro , as pass by reference ho rha hai 
                      




      }



}





int main(){



vector <int> vec = {1 , 1 , 2   } ;

// rotateAnticlockwise( vec , 2  ) ; 
set<int> mySet;
vector<vector<int>> ans ;
f(  vec , 0 , ans , mySet   ) ; 


// for(  auto ele : vec ) cout << ele << "   "  ; 










    return 0 ; 
}