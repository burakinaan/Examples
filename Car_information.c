#include <stdio.h>
#include <stdlib.h>

#define size 4
struct car{
	int gate;
	int year;
	int wheel;
	char model;
};
void car_print(struct car oto);
void takeinf(struct car *inf);

int main() {

struct car car1,car2,car3;
struct car sum[size];
int i =0;

for(i=0; i<size; i++){
	takeinf(&sum[i]);
	printf("\n%d. CAR INFORMATION\n",(i+1));
	car_print(sum[i]);
}
	return 0;
}

void car_print(struct car oto)
{
	printf("***************************************\n");	
	printf("Car year = %d \t Car model =%c \t  Car wheel = %d \t car gate : %d\n",oto.year,oto.model,oto.wheel,oto.gate);
	printf("***************************************\n\n");
}

void takeinf(struct car *inf){
	
	
	printf("Enter gate number : ");
	scanf("%d",&(inf->gate));
	printf("Enter model : ");
	scanf(" %c",&(inf->model));
	printf("Enter year : ");
	scanf("%d",&(inf->year));
	printf("Enter the number of wheels : ");
	scanf("%d",&(inf->wheel));
	
}