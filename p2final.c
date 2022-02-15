#include <stdio.h>
int input()
{
    int x;
    printf("Enter number = ");
    scanf("%d", &x);
    return x;
}

int largest(int x, int y, int z)
{
    int large;

    if (x >= y && x >= z)
        large = x;

    if ( y >= z)
        large = y;

    if (z >= x && z >= y)
        large = z;

    return large;
}

int output(int x, int y, int z, int result)
{
  
    printf("The Largest Number among %d, %d, %d is %d",x,y,z,result);
  return 0;
}

int main()
{
    int a = input();
    int b = input();
    int c = input();

    int largestNumber = largest(a,b,c);

    printf("Largest no = %d\n", largestNumber);

    output(a,b,c,largestNumber);

    return 0;

}