#include <iterator>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

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

/**gets iterator b (begin) and iterator e (end) 
return true - if the the set is seb string of fibunnatchi set 
else -return false **/
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




/*getting an iterator b (begin) and e (end) and 
 if the number of vars are odd or empty return b
 if number of var is even change between 2 var nearby var and return e */
  template <typename it > it Transpose(it b, it e){
    if(b==e){
        return b;
    }else if((e-b)%2==1){
        return b;
    }
    else{
        for(;b!=e;b=b+2){
          iter_swap(b,b+1);
  
        }
        return e;
    }
}

/* getting iterator b to begin and e to end , and iterator 
b2 to  begin of container 2, function f that gets 2 parameters  */
template <typename it1,typename it2 ,typename func > it2 Transform2
(it1 b, it1 e, it2 b2, func f ){
  if((e-b)%2==1){//is odd
    while(b!=(e-1)){
        *b2=f(*(b),*(b+1));
        b2++;b=b+2;
    }
  }
  else{
      while(b!=e){
        *b2=f(*(b),*(b+1));
        b2++;b=b+2;
    }

  }
  return b2;
  
}