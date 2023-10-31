#include <stdio.h>

main()
{
	//Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların toplamını bulan c programı.
	
	int i,n,sonuc=0;
	printf("bir sayi giriniz:	");
	scanf("%d",&n);
	i=1;
		
	while(i<=n)
	{
		
		sonuc = sonuc +i;
		i=i+2;
		
		
	}
	
	
	printf("n sayisina kadar olan tek sayilarin toplami=	%d",sonuc);


	return 0 ;
}
