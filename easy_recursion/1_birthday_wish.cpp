#include<iostream>
using namespace std ; 





void give_wish( int n ){
        
           
           if(n==0){
                cout << "hurray... it is your happy birthday" ;
                return ; 
           }

           ////// mai aaaj wala wish kr deta hoon , baki koi aur dekh lega 
           cout << n << " days remaining.....\n" ;

           give_wish(n-1) ; 
}






int main(){


     give_wish(5) ;




    return 0 ; 
}