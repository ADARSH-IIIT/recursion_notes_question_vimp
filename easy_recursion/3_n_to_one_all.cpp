#include<iostream>
using namespace std ; 





void print( int n  ){


         if(n==0){
                   return ; 
         }


        cout << n << "  " ; 


        print( n-1 ) ; /////////////// yeh 


        
          
}




int main(){



    
    print(  6);


//    print n ==> n to 1 
//    print n-1 ==> print n-1  to 1 

    //   mai n print kr deta hoon , baki n-1 to 1 koi aue print krega 





    return 0 ; 
}