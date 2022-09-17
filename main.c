#include <stdio.h>
#include <stdio.h>

void triangle(int x);
void square(int x);
void XO(int x);
void frame(int x);
void frame_withX(int x);
void carpet(int x);

int main() {
	int x = 5;
	
	printf("Plese Enter Your x:\n");
	scanf_s("%d", &x);

	triangle(x);
	printf("\n");
	square(x);
	printf("\n");
	XO(x);
	printf("\n");
	frame(x);
	printf("\n");
	frame_withX(x);
	printf("\n");
	carpet(x);
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
int isInSquere(int i, int j, int x) {
	for (int r = 1; r <= x; r = r + 2) {
		if ((abs(i) == r || abs(j) == r) && r >= abs(i) && r >= abs(j))
			return 1;
	}
	return 0;
}
void carpet(int x) {
	for (int j = -x; j <= x; j++)
	{
		for (int i = -x; i <= x; i++)
		{
			if (isInSquere(i, j, x) == 1) {
				printf("x");
			}
			else 
				printf("o");

		}
		printf("\n");
	}
}
