

///// print n =====>>> n to 1 but only odd numbers 
///// print n-1 =====>> n-1 to 1 , but only odd ones 

////  dekho mai n print kr dunga , baki ka koi aur dekhega 
//// if n odd mai print krdunga else nahi kruga , aage ka koi aur dekehega 





#include<iostream>
using namespace std ; 




void print( int n ){


       if(n==0)return ; 

       /// cout n based on condition 
      if(n%2==1)cout << n << " " ;

       //// next function call for further work print( n-1 )
       print(n-1) ; 



}

int main(){



print(5) ; 



}