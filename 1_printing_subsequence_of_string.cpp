#include<iostream>
#include<string>


using namespace std ; 



void printallsub_not_pick_then_pick( string str , int i ,  string outputstr ){



         if( i==str.size() ){
              cout << outputstr << "\n" ;
              return ; 
         }

         //// not piking 
         /// have not picked age ka koi aur dekh lega
         printallsub_not_pick_then_pick( str , i+1 , outputstr ) ;


         //// lets pick current one 
         // aage ka koi aur dekh lega 

         outputstr = outputstr+ str[i] ; 
         printallsub_not_pick_then_pick( str , i+1 , outputstr ) ; 


}




void printallsub_pick_then_not_pick( string str , int i ,  string outputstr ){



         if( i==str.size() ){
              cout << outputstr << "\n" ;
              return ; 
         }

         string original_out = outputstr ; 

         //// lets pick current one 
        //// aage ka koi aur dekh lega 
         outputstr = outputstr+ str[i] ; 
         printallsub_pick_then_not_pick( str , i+1 , outputstr ) ; 

         //// not piking 
         // as we have added currect char in output , we have to remove it 
        //  outputstr = outputstr - str[i] ; 
        // but we cant subtract the string ////// so we are going to make copy of str
        outputstr = original_out ; 
        //// have not picked age ka koi aur dekh lega
         printallsub_pick_then_not_pick( str , i+1 , outputstr ) ;


    


}


int returncount( string str , int i ,  string outputstr , int count  ){



         if( i==str.size() ){
              cout << outputstr << "\n" ;
            //   count++ ; 
              return 1 ; 
         }

         //// not piking 
         /// have not picked age ka koi aur dekh lega
        int numberof_string_by_not_choosing =  returncount( str , i+1 , outputstr , count ) ;


         //// lets pick current one 
         // aage ka koi aur dekh lega 

         outputstr = outputstr+ str[i] ; 
        int numberof_string_by_choosing_choosing = returncount( str , i+1 , outputstr , count  ) ; 
         

        return numberof_string_by_choosing_choosing + numberof_string_by_not_choosing ;  

}





int main(){


   string s = "abc" ; 
   string outputstr = "" ; 

   printallsub_pick_then_not_pick(  s , 0 , outputstr  ) ; 
   cout << "-------" ;
   printallsub_not_pick_then_pick( s , 0 , outputstr  );

   cout << returncount(s , 0 , outputstr , 0 ) ; 



    return 0 ; 
}