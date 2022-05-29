#include <stdio.h>
#include <stdio.h>

void triangle(int x);
void square(int x);
void XO(int x);
void frame(int x);
void frame_withX(int x);

int main() {
	int x = 5;
	/*
	printf("Plese Enter Your x:\n");
	scanf_s("%d", &x);

	triangle(x);
	printf("\n");
	square(x);
	printf("\n");
	XO(x);
	
	frame(x);
	*/
	frame_withX(x);
}
	


void triangle(int x) {

	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < j; i++)
		{
			printf("x");
		}
		printf("\n");
	}
}


void square(int x){
	
	for (int j = 0; j < x; j++) 
	{
		for (int i = 0; i < x; i++) 
		{
		printf("x");
		}
		printf("\n");
	}
}

void XO(int x) {

	for (int j = 0; j < x; j++) {

		for (int i = 0; i < x; i++) {
			int c = (j) % 2;
			if (c == 1) {
				printf("ox");
			}
			else
			{
				printf("xo");
			}
		}
		printf("\n");
	}
}

void frame(int x) {
	for (int j = -x; j <= x; j++)
	{
		for (int i = -x; i <= x; i++)
		{ 
			if (i==-x ||i ==x || j==x || j==-x)
			printf("x");
			else
			printf("o");

		}
		printf("\n");
	}
}

void frame_withX(int x) {
	for (int j = -x; j <= x; j++)
	{
		for (int i = -x; i <= x; i++)
		{
			if (i == -x || i == x || j == x || j == -x || abs(i)==abs(j))
				printf("x");
			else
				printf("o");

		}
		printf("\n");
	}
}