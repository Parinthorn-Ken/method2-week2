#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void sum(float x[]) {
	printf("%f + %f = %f\n", x[0], x[1], x[0] + x[1]);
}
void minus(float x[]) {
	printf("%f - %f = %f\n", x[0], x[1], x[0] - x[1]);
}
void multiple(float x[]) {
	printf("%f * %f = %f\n", x[0], x[1], x[0] * x[1]);
}
void divide(float x[]) {
	printf("%f +/%f = %f\n", x[0], x[1], x[0] / x[1]);
}
int main() {

	float x[2];
	printf("enter the number :");
	scanf("%f", &x[0]);
	printf("enter another number : ");
	scanf("%f", &x[1]);
	sum(x);
	minus(x);
	multiple(x);
	divide(x);

	return 0;
}

