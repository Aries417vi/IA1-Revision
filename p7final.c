#include<stdio.h>

typedef struct _complex
{
    float real;
    float imaginary;
}Complex;


Complex input()
{
    Complex c;
    printf("Enter the Real part: ");
    scanf("%f", &c.real);
    printf("Enter the Imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("\nThe first complex number = %0.1f + %0.1fi\n",a.real, a.imaginary);
    printf("The second complex number = %0.1f + %0.1fi\n",b.real, b.imaginary);
    printf("\nThe sum of %0.1f + %0.1fi and %0.1f + %0.1fi = \n %0.1f + %0.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main()
{
    Complex c1, c2, sum;
    c1 = input();
    c2 = input();
    sum = add(c1, c2);
    output(c1, c2, sum);
    return 0;
}