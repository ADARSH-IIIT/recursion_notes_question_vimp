//////// mai ith ele print baki i+1 to n tak koi aur sambhal lega 




#include<iostream>
#include<vector>
using namespace std ; 




void print_array(int i  , vector<int>arr ){

  


            if(i==arr.size())return ;

            /// maine ith print kr diya 
          cout << arr[i] << " " ; 

 ///////////// baki ka yeh dekhege 
          print_array(i+1 , arr ) ; 

       
}



void print_in_reverse(int i , vector<int>arr){

        if(i==-1)return ; 

        //  i last index hai , mai last index print kr dunga 
        /// rest piche k elements koi aur print krega 

        cout << arr[i] << "  " ;


        print_in_reverse( i-1 , arr  ) ; 


}



int main(){


   vector <int> vec = {1,2,3,4,5,6,700};

//    print_array(0, vec) ;

 print_in_reverse(  vec.size()-1 , vec  ) ; 



    return 0 ; 
}