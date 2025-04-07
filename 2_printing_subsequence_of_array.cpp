#include<iostream>
#include<vector>


using namespace std ; 


void printallsub(  vector<int> input , int i , vector<int>bucket ){

      

          if(  i==input.size()  ){
  
               cout << "[ " ;

               for( auto ele : bucket){
                  cout << ele << "  " ;
               }

               cout << " ]\n" ;

            return ; 
          }
        
           //////// not selecting currect element 
        //    bucket mein current ele nahi lenge 
        //// aage ka kaam yeh karege 
           printallsub( input ,  i+1 , bucket ) ; 


           ///// lets pick current ele 
           bucket.push_back( input[i] );
           //aage ka kaam yeh dekehge
           printallsub( input ,  i+1 , bucket ) ; 





}





int main(){



vector<int> input ={1,2,3 , 4 } ; 

vector<int> bucket = {} ; 

printallsub( input , 0 , bucket ) ; 





    return 0 ; 
}