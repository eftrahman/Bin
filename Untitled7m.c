#include<stdio.h>
struct accountInfo
{
    int Product_code;
    char Product_name[20];
    float Buying_Price;
    float Selling_Price;
    int Date_of_Sale;
};
typedef struct accountInfo af;
int main()
{
    int i;
    af n[10];
    float Profit;
    FILE *saved;
    saved = fopen("soldProductInfo.txt", "a");
    for(i =0 ; i < 2; i++)
    {
        printf("\nEnter Product_code: ");
        scanf("%d",&n[i].Product_code);

        printf("Enter Product_name: ");
        scanf("%s",n[i].Product_name);
        printf("Enter Buying_Price: ");
        scanf("%f",&n[i].Buying_Price);
        printf("Enter Selling_Price: ");
        scanf("%f",&n[i].Selling_Price);
	}
	printf("Enter Date_of_Sale: ");
        scanf("%d",&n->Date_of_Sale);
    Profit=0;
	for(i=0;i<2;i++){
		fprintf(saved,"%d %s %.2f %.2f %d\n", n[i].Product_code, n[i].Product_name,n[i].Buying_Price,n[i].Selling_Price, n[i].Date_of_Sale);
        Profit += n[i].Selling_Price-n[i].Buying_Price;
	}
    printf("Total Profit = %.2f",Profit);
	fprintf(saved,"Total Profit = %.2f",Profit);
    fclose (saved);
    return 0;
}

