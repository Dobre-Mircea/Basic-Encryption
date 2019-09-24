#include <stdio.h>
#include <string.h>

void criptare() {
	printf("      ----Ai ales criptare----\n");
	char a[1000];
	int x, y, i, j, v[15], n;
	printf("\n");
	printf("## Dati parola pe care vreti sa o criptati ##\n   - ");
	fgets(a, 1000, stdin);
	a[strlen(a) - 1] = '\0';
	printf("@@Parola ta este: %s\n", a);
	printf("\n");
	printf("## Dati marimea cheii de criptare (min 5 - max 15) ##\n   - ");
	scanf("%d", &n);
	printf("## Dati formula de criptare##\n   - ");
	for (i = 0; i<n; i++)
		scanf("%d", &v[i]);
	printf("## Dati tipul criptarii ##\n   - ");
	scanf("%d%d", &x, &y);
	printf("\n");


	int z = 0, n2 = 0;
	//j si i pt repetitive
	printf("     @@@ Noua ta parola este @@@\n @- ");

	while (z<strlen(a))
	{
		for (i = 0; i<x; i++)
		{
			if (z == strlen(a))
				break;
			if (n2 == n)
				n2 = 0;
			printf("%d ",v[n2] + a[z]);
			z++;
			n2++;
		}

		for (j = 0; j<y; j++)
		{
			if (z == strlen(a))
				break;
			if (n2 == n)
				n2 = 0;
			printf("%d ",v[n2] - a[z]);
			z++;
			n2++;
		}
	}
	printf("\n");
	printf("\n");
	printf("## Cheia ta de decriptare are %d elemente si este ##\n   @- ",n);
	for (i = 0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");
	printf("@@ Tipul de criptare este: %d si %d @@\n", x, y);
	printf("\n");
	printf("$$ Parola ta are %d elemente $$\n",strlen(a));
	printf("\n");

	
}

void decriptare() {
	printf("---Ati ales decriptare---\n");
	printf("\n");
	int x, y, i = 0, j, v[15], n, v2[4000], n1 = 0;							
	printf("## Dati lungimea parolei care o decriptati ##\n   ");
	scanf("%d", &n1);														
	printf("@@@ Dati parola pe care vreti sa o decriptati @@@\n   ");
		for(i=0;i<n1;i++)													
		scanf("%d", &v2[i]);
	printf("\n");
	printf("## Dati marimea cheii de decriptare (min 5 - max 15) ##\n   ");	
	scanf("%d", &n);														
	printf(" ## Dati formula de decriptare##\n   ");	
		for (i = 0; i<n; i++)												
		scanf("%d", &v[i]);
	printf("## Dati tipul criptarii ##\n   ");							
	scanf("%d%d", &x, &y);													
	printf("\n");

	int z = 0, n2 = 0;														
					//j si i pt struct repetitive		
	printf("  $$$ Parola ta este: $$$\n   ");

	while (z<n1)
	{
		for (i = 0; i<x; i++)
		{
			if (z == n1)		
				break;
			if (n2 == n)		
				n2 = 0;
			printf("%c",v2[z]-v[n2]);	 
			z++;
			n2++;
		}

		for (j = 0; j<y; j++)
		{
			if (z == n1)		
				break;
			if (n2 == n)		
				n2 = 0;
			printf("%c",v[n2]-v2[z]);		
			z++;
			n2++;
		}
	}
	printf("\n");
	

}

int main() {
	printf("    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("    @######################################@\n");
	printf("    @##                                  ##@\n");
	printf("    @##  Criptator 9000 by WannaCry 2.0  ##@\n");
	printf("    @##                                  ##@\n");
	printf("    @######################################@\n");
	printf("    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("\n");
	printf("    @@Apasati ENTER pentru a continua@@\n");
	getchar();                //Cauta enter
	printf("  **Alegeti operatiunea pe care o vreti**\n");
	printf("    --C = Criptare si D = Decriptare--\n");
	char cript;
	fgets(&cript, 10, stdin);
	if (cript == 'c' || cript == 'C')
		criptare();
	else if (cript == 'd' || cript == 'D')
		decriptare();
	else printf("   !!!!!! Mai baga o fisa !!!!!!\n");
	return 0;
}