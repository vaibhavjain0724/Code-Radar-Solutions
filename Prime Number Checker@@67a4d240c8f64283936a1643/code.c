// Your code here...
#include <math.h>

int isPrime(int num){
    for(int i = 0 ; i < pow(num,0.5) ; i ++){
        if(num % i == 0 ){
            return 0;
        }
    }
    return 1;
}