#include<iostream>
#include<vector>


using namespace std ; 


// choose------> not choose 
// using and 
void way1( vector<int>&vec ,   int i , vector<int> &tempvec  ){



     if(i==vec.size()){
           
            cout << "[ " ;

            for(auto ele : tempvec)cout << ele << "  " ; 


            cout << " ]" ; 


            return ; 
     }
       
      



      ///////////  choosing current ele 
      tempvec.push_back(  vec[i] ) ; 
      //////// baki ka koi aur dekh lega 
      way1( vec , i+1 , tempvec  ) ; 

      
      /// logically upper temp vec and lower vec down may be diff 
      /// but this the beauty of recursion , on jab ham , backtrack kr rhe then hum , ele pop kr rhe , isliye wapas same temp vec ban ja rha 

      tempvec.pop_back() ; 
      /////// not choosing current ele , baki ka koi aur dekh lega 
      way1( vec , i+1 , tempvec ) ; 

}






//  not choose ----> choose 
//   using &  
void way2( vector<int>&vec ,   int i , vector<int> &tempvec  ){



     if(i==vec.size()){
           
            cout << "[ " ;

            for(auto ele : tempvec)cout << ele << "  " ; 


            cout << " ]" ; 


            return ; 
     }
       
      

        /////// not choosing current ele , baki ka koi aur dekh lega 
          way2( vec , i+1 , tempvec ) ; 



      ///////////  choosing current ele 
      tempvec.push_back(  vec[i] ) ; 
      //////// baki ka koi aur dekh lega 
      way2( vec , i+1 , tempvec  ) ; 
      tempvec.pop_back() ;                ///// so that added ele get deleted just after backtrack , so that globally it wont cause any issue 
      
      

   

}




//  not choose ----> choose 
//  not   using &  
void way3( vector<int>&vec ,   int i , vector<int> tempvec  ){



     if(i==vec.size()){
           
            cout << "[ " ;

            for(auto ele : tempvec)cout << ele << "  " ; 


            cout << " ]" ; 


            return ; 
     }
       
      

        /////// not choosing current ele , baki ka koi aur dekh lega 
          way3( vec , i+1 , tempvec ) ; 



      ///////////  choosing current ele 
      tempvec.push_back(  vec[i] ) ; 
      //////// baki ka koi aur dekh lega 
      way3( vec , i+1 , tempvec  ) ; 
    //   tempvec.pop_back() ;                ///// so that added ele get deleted just after backtrack , so that globally it wont cause any issue 
        //  no need to pop back on return , as new copy is created everytime 
      

   

}






int main(){


 
  vector<int> vec = {1,2,3} ;
  vector<int> temp ; 


  way3(  vec , 0 , temp  ) ; 






    return 0 ; 
}




// tc ==> 2^n 
// sc = o(n^2) only 



/*
total no of ans , depends on choice 


0 0 0 
0 0 1
0 1 0 
0 1 1 
1 0 0
1 0 1 
1 1 0 
1 1 1 



2^n   -----> 2 choices on n places 
*/