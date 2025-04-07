

//                                                               way 1 
//////////////////// sum of ele of arr /// from -------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


///   agar koi mujhe 0 to lastindex-1 tak ka sum dede , then usme main arr[lastind] add krke ans return kr dunga , this is best dsoln 
//// first find sum from arr[0 to n-2 ] the nadd arr[n-1] in it and return 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//                                                               way 2
//////////////////// sum of ele of arr /// from <<<<<<<<<<<<<<<<<<<<<<--------------------------------------------------


///   agar koi mujhe 1 to lastindex tak ka sum dede , then usme main arr[0] add krke ans return kr dunga , this is best dsoln 
//// first find sum from arr[1  to n-1 ] the nadd arr[ 0  ] in it and return 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<vector>

using namespace std ; 








int way1( vector<int> arr , int n  ){
       
       
        if(n==-1)return 0 ; 

       return   arr[n] + way1( arr, n-1 ) ; 

}




int way2( vector<int> arr , int i  ){
       
       if(i==arr.size())return 0 ; 


       int rightsum = way2( arr , i+1 ) ; 
       return arr[i] + rightsum ; 
}







int main(){


    
    vector<int> vec = {1,2,3,4,5} ; 
    // cout << way2(vec , 0 ) ; 

    cout << way1( vec , vec.size()-1  ) ; 




    return 0 ; 
}