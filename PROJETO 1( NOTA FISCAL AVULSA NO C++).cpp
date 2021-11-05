//projeto : produzir nota fiscal avulsa na linguagem C++. codigo projetado no programa  "DeV-C++"
# include  <stdlib.h>
# include  <locale.h>

    int  main () 
	{
	setlocale (LC_ALL, " Portuguese_Brazil " );

	char produto1 [ 18 ], produto2 [ 18 ], produto3 [ 18 ], produto4 [ 18 ],  produto5 [ 18 ],  produto6 [ 18 ],  produto7 [ 18 ], produto8 [ 18 ];
	float valor_p1, valor_p2, valor_p3, valor_p4, valor_p5, valor_p6, valor_p7, valor_p8;
	int qtd_p1, qtd_p2, qtd_p3, qtd_p4, qtd_p5, qtd_p6, qtd_p7, qtd_p8;
	int codigo1 = 234, codigo2 = 345, codigo3 = 480, codigo4 = 567, codigo5= 789, codigo6 = 987, codigo7= 123, codigo8= 654;
	float total;

	printf("NOTA FISCAL ( OU COMPROVANTE DE VENDA )\n\n");

    printf("\nnome do produto 1: ");
	gets(produto1);
	printf("valor do produto 1: ");
	scanf("%f", &valor_p1);
	printf("Quantidade do Produto 1: ");
	scanf("%d", &qtd_p1);
	fflush(stdin);

    printf("\nnome do produto 2: ");
	gets(produto2);
	printf("valor do produto 2: ");
	scanf("%f", &valor_p2);
	printf("quantidade do produto 2: ");
	scanf("%d", &qtd_p2);
	fflush(stdin);

	printf("\nnome do produto 3: ");
	gets(produto3);
	printf("valor do produto 3: ");
	scanf("%f", &valor_p3);
    printf("quantidade do produto 3: ");
	scanf("%d", &qtd_p3);
	fflush(stdin);

    printf("\nnome do produto 4: ");
	gets(produto4);
	printf("valor do produto 4: ");
	scanf("%f", &valor_p4);
	printf("quantidade do produto 4: ");
	scanf("%d", &qtd_p4);
	fflush(stdin);

    printf("\nnome do produto 5:");
	gets(produto5);
	printf("valor do produto 5: ");
	scanf("%f", &valor_p5);
	printf("quantidade do produto 5: ");
	scanf("%d", &qtd_p5);
	fflush(stdin);

	printf("\nnome do produto 6: ");
	gets(produto6);
	printf("valor do produto 6: ");
	scanf("%f", &valor_p6);
    printf("quantidade do produto 6: ");
	scanf("%d", &qtd_p6);
	fflush(stdin);

	printf("\nnome do produto 7: ");
	gets(produto7);
	printf("valor do produto 7: ");
	scanf("%f", &valor_p7);
    printf("quantidade do produto 7: ");
	scanf("%d", &qtd_p7);
	fflush(stdin);

	printf("\nnome do produto 8: ");
	gets(produto8);
	printf("valor do produto 8: ");
	scanf("%f", &valor_p8);
	printf("quantidade do produto 8:");
	scanf("%d", &qtd_p8);
	fflush(stdin);

	total = valor_p1 * qtd_p1 + valor_p2 * qtd_p2 + valor_p3 * qtd_p3 + valor_p4 *qtd_p4 + valor_p5 * qtd_p5 + valor_p6 * qtd_p6 + valor_p7 * qtd_p7 + valor_p8 * qtd_p8;


	system("cls");

	printf("%-7s| %-7s| %-15s |%-15s| %-15s\n","Codigo", "Quantidade", "Discriminacao", "Preco Unitario", "Preco Total");
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo1, qtd_p1, produto1, valor_p1, valor_p1*qtd_p1);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo2, qtd_p2, produto2, valor_p2, valor_p2*qtd_p2);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo3, qtd_p3, produto3, valor_p3, valor_p3*qtd_p3);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo4, qtd_p4, produto4, valor_p4, valor_p4*qtd_p4);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo5, qtd_p5, produto5, valor_p5, valor_p5*qtd_p5);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo6, qtd_p6, produto6, valor_p6, valor_p6*qtd_p6);
	printf("%-7d| %-7d| %-15s |R$ %-12.2f |R$ %-12.2f|\n", codigo7, qtd_p7, produto7, valor_p7, valor_p7*qtd_p7);
	printf("%-7d|%-7d |%-15s  |R$ %-12.2f |R$ %-12.2f|\n", codigo8, qtd_p8, produto8, valor_p8, valor_p8*qtd_p8);
	printf("%-7s| %-7s| %-15s |%-15s |R$ %-15f\n", "", "", "", "Total", total);
	//codigo projetado no programa  "DeV-C++"

	system("pause");

	return 0 ;

}
