#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex c1, complex c2);

int main() {
    complex c1, c2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = add(c1, c2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}

complex add(complex c1, complex c2) {
    complex tp;
    tp.real = c1.real + c2.real;
    tp.imag = c1.imag + c2.imag;
    return (tp);
}



