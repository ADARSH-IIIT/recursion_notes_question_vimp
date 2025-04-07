


/*


repertion is allowed 

we can reuse any of value any no of time 


arr =    1 2  3 4 

target 5 

2 3 
1 4 
1 1 1 1 1 
1 1 1 2 
1 1 3 and so many possibility 

we can any number any time we want 


size of temp var can be anything , no issue   


*/





/*

logic 

normal q 

pick , move to next
noit pick move to next 




here 
not pick ==> move to next 
pick====> dont move to next , call again pick not pick 
basically pick krne ke baad hum sidhe aage nhi badh rhe , e kbaar pick kiye , now 2 option pick again or leave it 


return condition when i is out of  array , or tempsum >target ==> it means we cant get ans below to this node
if tempsum == target ===> we got an answer print and return back 

*/




#include<iostream>
#include<vector>
using namespace std ; 




void print_target_sum_with_repetition(   vector<int>&originalvec , vector<int>&tempvec , int i , int sum , int target   ){

                            


                          if( sum == target ){
                                    
                                    cout << "got it " ; 

                                    cout << "[ " ; 

                                    for(auto ele : tempvec)cout << ele << "  " ; 

                                    cout << " ]\n" ; 


                                    return ; 
                          }


                          if(i == originalvec.size()){
                            return ; 
                          }

                          if(    sum>target    ){
                            return ; 
                          }


 
        

                          ///////// not taking
                          print_target_sum_with_repetition( originalvec , tempvec , i+1 , sum , target  ) ; 


                          ////// taking 
                          sum = sum+ originalvec[i] ;
                          tempvec.push_back(originalvec[i]) ; 
                          print_target_sum_with_repetition( originalvec , tempvec , i , sum , target  ) ; 

                          /// remobing on backtracking as we are using &tempvec
                          tempvec.pop_back() ; 
                        //   sum = sum -originalvec[i] ;    // no need because sum is pass by value 









}






int main(){


vector<int> vec = {1,2,3,4} ; 
int target = 5 ; 

int sum = 0 ; 

vector<int>temp;


print_target_sum_with_repetition( vec , temp , 0 , sum , target) ; 





    return 0 ; 
}



