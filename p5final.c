#include<stdio.h>

float input(){
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float my_sqrt(float n){
    if(n == 0 || n == 1){
        return n;
    }

    float i = 1, ans = 1;
    while(ans <= n){
        i++;
        ans = i * i;
    }
    return i - 1;
}

void output(float n, float sqrt_result){
    printf("The Square root of %0.2f is: %0.2f\n", n, sqrt_result);
}

int main(){
    float n, sqrt_result;
    n = input();
    sqrt_result = my_sqrt(n);
    output(n, sqrt_result);
    return 0;
} 