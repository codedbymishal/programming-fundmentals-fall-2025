#include <stdio.h>

struct complex 
{
    float real;
    float imag;
};

struct complex read() 
{
    struct complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);

    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);

    return c;
}

void print(struct complex c) 
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

struct complex add(struct complex a, struct complex b) 
{
    struct complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

struct complex multiply(struct complex a, struct complex b) 
{
    struct complex r;
    r.real = a.real * b.real - a.imag * b.imag;
    r.imag = a.real * b.imag + a.imag * b.real;
    return r;
}

int main() 
{
    struct complex c1, c2, sum, product;

    printf("--- Enter First Complex Number ---\n");
    c1 = read();

    printf("\n--- Enter Second Complex Number ---\n");
    c2 = read();

    sum = add(c1, c2);
    product = multiply(c1, c2);

    printf("\nSum = ");
    print(sum);

    printf("Product = ");
    print(product);

    return 0;
}

