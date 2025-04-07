
/*
print all subse with sum == target 
*/




#include<iostream>
#include<vector>
using namespace std ; 



void print( vector<int> &vec , vector<int>&tempvec , int i , int&sum , int target  ){
          
            
        // if(sum == target ) { cout << "[ " ; 
        //      for(auto ele : tempvec ) cout << ele << " " ;
        //      cout << " ]  and sum = " << sum << " ]\n" ;  
        //           return ; 
        //    }
           

           if(i==vec.size() ){
             
           if(sum == target ) { cout << "[ " ; 
             for(auto ele : tempvec ) cout << ele << " " ;
             cout << " ]  and sum = " << sum << " ]\n" ;  

           }

             return ; 
           }


           //// not choosing 
           print( vec , tempvec , i+ 1 , sum , target  ) ;


           //// choosing 
           tempvec.push_back( vec[i] ) ;
           sum = sum + vec[i] ; 
           print(vec , tempvec , i+1 , sum , target   ) ;
           tempvec.pop_back() ; 
           sum = sum-vec[i] ; 

          

}



int main(){


    vector<int> vec = { 5 , 6 , 4 , 5 , 0   } ; 
    vector<int> tempvec  ;
    int sum = 0 ; 

    print( vec , tempvec , 0  , sum , 10 ) ; 




    return 0 ; 
}








/*



           if(i==vec.size() ){
             
           if(sum == target ) { cout << "[ " ; 
             for(auto ele : tempvec ) cout << ele << " " ;
             cout << " ]  and sum = " << sum << " ]\n" ;  

           }

             return ; 
           }

agar base conditon yeh h it means 
it will make all possible subse , then in end of making of each each subse , it compare target sum 


*/




/*


         
        if(sum == target ) { cout << "[ " ; 
             for(auto ele : tempvec ) cout << ele << " " ;
             cout << " ]  and sum = " << sum << " ]\n" ;  
                  return ; 
           }
           

           if(i==vec.size() ){
             
           if(sum == target ) { cout << "[ " ; 
             for(auto ele : tempvec ) cout << ele << " " ;
             cout << " ]  and sum = " << sum << " ]\n" ;  

           }

             return ; 
           }


       agar beech mein hi target mil jata h toh , us node ke aage ke tree , sirf us node ke aage ke trees construct nhi honge 



*/



/*

when to use 

if all no>0 , strictly , not even 0 
then way 2 , beech mein hi stop krdo , because aage jane se sum sirf badhega hi 


if no of are + 0 or - , the method 1 kya pata , aage 0 ho ya sum increase hoke decrese hoke target jitna ho jaye 


*/









/*


if all + 


if(   sum>= target   ){

        if(sum==target){
                print subse 
          }

          if(> ) do not print 


        retur nin both case   
 
 }

*/