#include<stdio.h>

//Otopark ucreti hesaplama 3 saat üzerine saat başı 1 TL olarak hesaplanıyor


int main()
{
	float parkingtime , sum;
	
	
	printf("Kac dakika kaldiniz : ");
	scanf("%f" , &parkingtime); printf("\n");
	
	if(parkingtime>=0 & parkingtime<=60){
	
	
	printf("Kalma ucretiniz 3 TL");
	}
	else if(parkingtime>60 & parkingtime<=120){
	
	
	printf("Kalma ucretiniz 6 TL");
	}
	else if(parkingtime>120 & parkingtime<=180){
	
	
	printf("Kalma ucretiniz 9 TL");
	}
	else{
	
	parkingtime = parkingtime - 180;
	sum = 9 + (parkingtime/60);
	printf("Kalma ucretiniz %f TL" , sum);
	
	}
	return 0;
}