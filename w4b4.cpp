#include<stdio.h>
main(){
	int a;
	printf("nhap chieu rong cua truong ban muon(bytes):");
	scanf("%d", &a);
	if (a==1){
		printf("ban vua nhap chieu rong truong char");
	} else if (a==2){
		printf("ban vua nhap truong short ");
	} else if (a==4){
		printf("ban vua nhap int hoac long hoac float");
	} else if (a==8){
		printf("ban vua nhap double");
	} else {
		printf("ban nhap cai con me j vay");
	}
	return 0;
}
