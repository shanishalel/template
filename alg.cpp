#include <iterator>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include "alg.h"

using namespace std;

//from geeksforgeeks
bool isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s * s == x); 
} 

//from geeksforgeeks
bool isFibonacci(int n) 
{ 
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
    // is a perferct square 
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4); 
} 
template<typename T, typename R>
bool Fib (T a, R b) {
	while(a != b){
        if(isFibonacci(*a)){
            a++;
        }
        else{
            return false;
        }
    }
    return true;
}




int main(){
    //checking transpose
    // int ia[]={1,2,3,4,5,6,7,8};
    // int *p = Transpose(begin(ia),end(ia));
    // //one before
    // if(*p!=*end(ia)){
    //     for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
    //     cout<<*(p+i)<<endl;
    //     }
    // }
    // else{
    // cout<<*(p-1)<<endl;
    // p=begin(ia);
    //  for(int i=0;i<sizeof(ia)/sizeof(*ia);i++){
    //     cout<<*(p+i)<<endl;
    //     }
    // }
    
    //checking transform2
    // int ia[]={1,2,3,10,8,6};
    // vector<int> vec(100); 
    // auto p = Transform2(begin(ia), end(ia), vec.begin(),[](const int x, const int y){return x + y;});
    // cout<<*(p-3)<<endl;

    //checking fibbunatchi
    // int ia[] = {144};
    // bool f = Fib(begin(ia), end(ia));
    // if(f==true){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }
    
    
}