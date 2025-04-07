


///// print n =====>  1 to n 
////  print n-1 ==>   1 to n-1 


// pehle app 1 to n-1 print krdo 
// then mai n print kr dunga , if it is odd




#include<iostream>
using namespace std ; 



void print(int n ){

    if(n==0){
        return ; 
    }


    print(n-1) ;
    n%2==1 ? cout << n : cout <<  " "; 
}


int main(){


   print(5) ; 

 

    return 0 ; 
}