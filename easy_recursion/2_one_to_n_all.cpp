#include<iostream>
using namespace std ; 





void print( int n  ){


        if(n==0)return ; 


        print( n-1 ) ; 
     

        cout << n  << " " ; 

        
          
}




int main(){



    
    print(   6);


    // print n =====> print 1 to n 
    // print n-1 ===> print 1 to n-1 

    // basically pehle tum 1 to n-1 print krdo , then mai n print kr dunga apne se 






    return 0 ; 
}