// string  has lowercase , convert it to uppercase 


//  logic 

// mai current char ko uppercase mein kr deta hoon 
// baki ka koi aur sambhal lega 




#include<iostream>
#include<string>


using namespace std ; 


void convert_to_uppercase(    string &str , int i    ){

          

           if(i==str.size())return ; 


           str[i] = str[i]-32 ; 

           convert_to_uppercase(  str , i+1  ) ; 

                                   


      



}



int main(){



    string str = "adarsh" ; 
      
      convert_to_uppercase(str , 0 ) ;

    cout << str ; 





}