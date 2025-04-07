#include<iostream>
#include<string>
#include<vector>


using namespace std ;


void f( string str , int i , int n , int one , int zero , vector<string> &output  ){

       string origianl = str ; 


       if(i==n){
            cout << str << '\n' ;
            output.push_back(str) ; 
           return  ;
       }
        
        ////////////////   always taking 1 
        str = str + '1' ;
        f( str , i+1 , n , one+1 , zero , output ) ; 

       //////////////////////   taking zero is conditional 
       if( one > zero ){
                str = origianl ; 
                
               str = str + '0' ;
               f( str , i+1 , n , one , zero+1 , output) ; 
       }

      





}



int main(){



            vector<string>output ;
            f( "" , 0 , 3 , 0 , 0 , output  ) ; 

            // for( auto ele : output){
            //     cout << ele << " " ; 
            // }


    return 0 ; 
}