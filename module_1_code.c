Qn 1
#include <stdio.h>
 
void checkEvenOdd(int N)
{
    
    int r = N % 2;
 
    
    if (r == 0) {
        printf("Even");
    }
 
 
    else {
        printf("Odd");
    }
}
 

int main()
{
    
    int N = 101;
 
    
    checkEvenOdd(N);
 
    return 0;
}





Qn 2


#include <stdio.h>
 

int main()
{
    
    float P = 1, R = 1, T = 1;
 
  
    float SI = (P * T * R) / 100;
 
  
    printf("Simple Interest = %f\n", SI);
 
    return 0;
}