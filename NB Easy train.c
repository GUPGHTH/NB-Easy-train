#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tae();
int ss,gs,i,c2,c1;
int price[] = {16,23,26,30,33,37,40,44};
int main(int argc, char *argv[]) {
	int A,B,C,D,E,F,a,b,c,d,e,f;
	int x,y,s;
	for (i=0;i<8;i++) {
		x =i+1;
		printf("    Station %d",x);
	}
	printf("\n\n");
	printf("Where station you live now : ");scanf("%d",&ss);
	system("cls");
	for (i=0;i<8;i++) {
		x =i+1;
		printf("    Station %d",x);
	}
	printf("\n");
	for (i=0;i<8;i++) {
		x=i+1;
		if (x==ss) {
			printf("    [X]	");
		}
		else {
			printf("        ");
		}
	}
	printf("\n");
	printf("What station do you want going : ");scanf("%d",&gs);
	system("cls");
bruh :	for (i=0;i<8;i++) {
		x =i+1;
		printf("    Station %d",x);
	}
	printf("\n");
	for (i=0;i<8;i++) {
		x=i+1;
		if(ss<gs) {
			if (x<ss) {
				printf("             ");
			}
			if (ss==x) {
				printf("    [x]------");
			}
			
			if(ss<x&&gs>x) {
				printf("--------------");
			}
			if(gs==x) {
				printf("----[x] ");
			}
		}
		if(ss>gs) {
			if (x<gs) {
				printf("             ");
			}
			if (gs==x) {
				printf("    [x]------");
			}
			
			if(gs<x&&ss>x) {
				printf("--------------");
			}
			if(ss==x) {
				printf("----[x] ");
			}
		}
	}
	printf("\n");
	s = tae();
	s-=1;
	printf("Price : %d\n", price[s]);
	printf("Enter Money : ");scanf("%d",&y);
	if (price[s] > y) {
		printf("pls try again.\n");
		system("pause&&cls");
		goto bruh;
	}
	y=y-price[s];
	printf("Change = %d\n", y);
	a = y / 500; A = y % 500;
	b = A / 100;      B = A % 100;
	c = B / 50;       C = B % 50;
	d = C / 20;       D = C % 20;
	e = D / 10;       E = D % 10;
	f = E / 5;        F = E % 5;
	printf("500 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n1 = %d", a, b, c, d, e, f, F);

	return 0;
}
int tae() {
	int x;
	c1 = ss - gs;
	c2 = gs-ss;
	if (c1>c2) {
		x=c1;
	}
	else {
		x=c2;
	}
	return x;
}
