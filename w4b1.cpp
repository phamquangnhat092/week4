#include<stdio.h>

main(){
	char name[50];
	int a;
	printf("Hay nhap ten ban :");
	scanf("%s", &name);
	
	printf("Nhap 1 so tu nhien bat ki: \n");
	scanf("%d", &a);
	if (a<=30){printf("Ban sap chet cmnr");
	} else printf("Ban di chet me di");
	return 0;
	 
}
