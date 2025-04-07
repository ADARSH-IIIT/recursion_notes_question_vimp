////////   sum(n) ===> 1+2+3+4+5......+n
///////   sum(n-1) ===> 1+2+3+4+5......+n-1


/// to find sum (5) , if some one give me sum(4) , then i will add 5 in it and return it 


#include<iostream>


using namespace std ; 





int sum(int n ){

     if(n==0)return 0 ; 

    int leftsum = sum(n-1) ; 


    int ans = leftsum + n ; 
    return ans ; 
}





int main(){



   cout << sum(3 ) ; 


    return 0; 
}