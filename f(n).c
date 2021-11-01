#include <stdio.h>

int primeOrNot(int n){
    int flag = 0,i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
          flag = 1;
          break;
        }
    }

    if (n == 1) {
        return 0;
    } 
    else if (flag == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int getFactorial(int n){
    int i, fact = 1;
    for(i = 1; i<=n ; i++){
        fact *= i;
    }
    return fact;
}

int getSumFactors(int n)
{
  int sum = 0;
  for (int i = 2; i < n; i++){
    if (n % i == 0){
        sum += i;  
    } 
  }
  return sum;
}

int getSumDigits(int n){
    int m, sum = 0; 
    while (n>0){
        m = n%10;
        sum += m;
        n = n/10;
    }
    return sum;
}

int main() {
    int n, stat;
    float fn;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    stat = primeOrNot(n);
    if(stat == 0){
        fn = getFactorial(n)/getSumFactors(n);
    }
    else{
        fn = getFactorial(n)/getSumDigits(n);
    }
    printf("\nf(n) = %f", fn);
    return 0;
}