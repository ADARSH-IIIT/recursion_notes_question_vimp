



//////     2^n =====   2*2*2*2*2....*2 n times
//////     2^n-1 =====   2*2*2*2*2....*2 n-1 times


// if someone give me 2^n-1 , then i will multiply 2 in it and will return the ans ; 




#include<iostream>


using namespace std ; 





int power_of_2(int n ){

     if(n==0)return 1 ; 

    int leftpower = power_of_2(n-1) ; 


    int ans = leftpower  * 2  ; 
    return ans ; 
}



    




int main(){



   cout << power_of_2( 0 ) ; 


    return 0; 
}