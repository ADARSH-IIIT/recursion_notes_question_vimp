/////////////////////   fact(n)==> 1*2*3*4*5*6.....*n
/////////////////////   fact(n-1)==> 1*2*3*4*5*6....*n-1


////////   fact(n) =   n *  fact(n-1)




#include<iostream>
using namespace std ; 



int fact(int n ){


   if(n==0)return 1 ; 



 ///////////// this will give us fact(n-1)
   int fact_of_n_minus_1 = fact(n-1);

   // as we have got fact(n-1) , then i will multiply it with n , and then i will return ; 


   return n * fact_of_n_minus_1 ; 


}




int main(){





 cout << fact(4) ;



    return 0 ; 
}