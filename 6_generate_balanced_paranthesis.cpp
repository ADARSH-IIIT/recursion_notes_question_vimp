#include<iostream>
#include<string>
#include<vector>


using namespace std ;


void f( string str , int i , int n , int rightfacing , int leftfacing , vector<string> &output  ){

       string origianl = str ; 


       if(i==2*n){
            // cout << str << '\n' ;
            output.push_back(str) ; 
           return  ;
       }
        
       
       /////

       if( rightfacing < n ){
           str = str + '(' ; 
           f( str , i+1 , n , rightfacing+1 , leftfacing , output ) ; 
       }

       if(  rightfacing > leftfacing ){
              str = origianl ;
              str = str + ')' ; 
           f( str , i+1 , n , rightfacing , leftfacing+1 , output  ) ; 

       }
      





}



int main(){


            int n = 6 ;
            vector<string>output ;
            f( "" , 0 , n , 0 , 0 , output  ) ; 

            for( auto ele : output){
                cout << ele << " \n" ; 
            }


    return 0 ; 
}