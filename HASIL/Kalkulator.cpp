#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

int main(){
	int menu,opsi;
    int x,y,i;
    int total;
	
	Home:
	printf("\n\t\t\tKalkulator \n");
	printf("\t\t\t========== \n");
	printf("\nMenu Pilihan : \n\n");
    printf("[1] X + Y\n");
    printf("[2] X - Y\n");
    printf("[3] X * Y\n");
    printf("[4] X ^ Y\n");
    printf("[5] f(x)=2x^2 - 3x + 1 , X=>x=>Y\n");
	printf("\nInput Menu Pilihan : ");
    scanf("%d",&menu);
    
    
    switch(menu){
		
		case 1 :
    		printf("\nMasukkan X  : ");
			scanf("%d",&x);
			printf("Masukkan Y  : ");
			scanf("%d",&y);
			total=x+y;
			printf("\nHasil X + Y %d + %d = %d", x,y,total);
			printf("\n\nTekan 0 Untuk Kembali : "); scanf("%d", &opsi);
					if(opsi == 0){
					system("cls");
					goto Home;
				}
				else{
					break;
				}

		
		case 2 :
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			total=x-y;
			printf("\nHasil X - Y %d – %d = %d", x,y,total);
			printf("\n\nTekan 0 Untuk Kembali : "); scanf("%d", &opsi);
					if(opsi == 0){
					system("cls");
					goto Home;
				}
				else{
					break;
				}
		
		case 3 :
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			total=x*y;
			printf("\nHasil X * Y %d * %d = %d", x,y,total);
			printf("\n\nTekan 0 Untuk Kembali : "); scanf("%d", &opsi);
					if(opsi == 0){
					system("cls");
					goto Home;
				}
				else{
					break;
				}
		
		case 4 :
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			total = pow(x,y);
			printf("\nHasil %d X ^ Y %d = %d", x,y,total);
			printf("\n\nTekan 0 Untuk Kembali : "); scanf("%d", &opsi);
					if(opsi == 0){
					system("cls");
					goto Home;
				}
				else{
					break;
				}
			
		case 5 :
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			for(i=x;i<=y;i++){
				total = 2*(i*i) - (3*i)+1;
				printf("\nHasil = %d",total);
				}
				printf("\n\nTekan 0 Untuk Kembali : "); scanf("%d", &opsi);
					if(opsi == 0){
					system("cls");
					goto Home;
				}
				else{
					break;
				}
			}
			getch();
			return 0;
    }


