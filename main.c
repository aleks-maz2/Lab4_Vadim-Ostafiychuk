#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "ua");

	int abuse,tip;
	//zavdanya1();
	//zavdanya3();
	

	printf("Введiть номер завдання: (1-4)");
	scanf("%d", &abuse);

	if(abuse == 1) 
	{
		 zavdanyaOne();
		
	}
	else if (abuse == 2) 
	{
		printf("Введiть тип завдання: (1-3)");
		scanf("%d", &tip);
		if(tip == 1) {
			zavdanyaTwoA();
		}
		else if(tip == 2) {
			zavdanyaTwoB();
		}
		else if(tip == 3) {
			zavdanyaTwoC();
		}
		else {
			printf("Такого типу завдання 2 немає!");
		}
		
	} 
	else if (abuse == 3) 
	{
		zavdanyaThree();
	}
	else if (abuse == 4) 
	{
		zavdanyaFour();
	}	
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

int zavdanyaOne() {
	int x;
    int y;
    float f;
 
    printf("Введiть значення x= ");
	scanf("%d",&x);
	printf("Введiть значення y= ");
	scanf("%d",&y);

	while((pow(x,2)-x*y+pow(y,2)) == 0) {
		printf("Помилка! Дiлення на ноль неможливе(%d^2-%d%d+%d^2) = 0\n", x,x,y,y);
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введіть значення y= ");
		scanf("%d",&y);
		
	}
	while((1-pow(y,2)) == 0) {
		printf("Помилка! Дiлення на ноль неможливе(1-%d^2) = 0\n ", y);
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введіть значення y= ");
		scanf("%d",&y);
	}
	while((1-pow(x,2)) == 0) {
		printf("Помилка! Дiлення на ноль неможливе(1-%d^2) = 0\n ", x);
		printf("Введiть значення x= ");
		scanf("%d",&x);
		printf("Введіть значення y= ");
		scanf("%d",&y);
	}
	// Провіряв у калькуляторі сходиться
	f = ((x+y)/(pow(x,2)-x*y+pow(y,2)))+((sin(x))/(1-pow(y,2)))+((cos(y))/(1-pow(x,2)));


	printf("%f", f);
	return 0;
}
int zavdanyaTwoA() {
	//з використанням циклу з параметром
	int x;

	long long int multiplication = 1;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);
	
	for(int i = x ; i <= 50; i++) {
		if(i < 10) {
			printf("Число менше 10");
			break;
		}else {
			if((i%2) == 0) {
			multiplication *= i; 
			
			}
		}
		
	}
	printf("%d\n", multiplication);
	return 0;
};
int zavdanyaTwoB() {
	// з використанням циклу з передумовою
	int x;

	long long int multiplication = 1;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);

	while(x<10) {
		printf("Введiть початкове число (цiле число бiльше 10): ");
		scanf("%d", &x);
	}
	int i = x;
	while(i<=50) {
		
		if((i%2) == 0) {
			multiplication *= i; 
			
		}
		i++;
	}
	printf("%d\n", multiplication);
	return 0;
}

int zavdanyaTwoC() {
	//  з використанням циклу з післяумовою
	int x;

	long long int multiplication = 1;
	printf("Введiть початкове число (цiле число бiльше 10): ");
	scanf("%d", &x);
	
	int i = x;
	do {
		if (i % 2 == 0 && i >= 10) {
			multiplication *= i;
		}
		i++;
	} while (i <= 50);
	printf("%d\n", multiplication);

}
int zavdanyaThree() {
	int j, i, s, p = 0;
	for (i = 1; i <= 20; i++){ 
		for (s = 1, j = i;j <= 30; j++) s += i/j;
		p += s;
	}
	printf("p=%d\n", p);
	return 0;
}
int zavdanyaFour() {
	float a = 1.25,b = 6.75,dx=0.25, y,x;
	printf("\t   x\t\t|\t  y=f(x)\n\n");
	
	while(a<=b) {
		x = a;
		y = pow(x,1/3)+log(3*x);
		printf("\t%f\t|\ty=%f\n",x,y);
		a +=dx;
	}
	return 0;
}

