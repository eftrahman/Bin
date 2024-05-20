#include<stdio.h>
//(a)
struct soldGoods {
    int Code;
    char Name[30];
    float Buying_Price;
    float Price;
    char Date[10];
};
//(b)
int main()
{   //(i)
    struct soldGoods info[10];
    int i;
    for(i=0;i<2;i++){
        printf("Product code:");
        scanf("%d",&info[i].Code);
        printf("Product name:");
        gets(info[i].Name);
        printf("Buying Price:");
        scanf("%f",&info[i].Buying_Price);
        printf("Selling Price:");
        scanf("%f",&info[i].Price);
        printf("Date of selling:");
        gets(info[i].Date);
        printf("\n\n");

    }
    //(ii)
    FILE *file;
    file = fopen("soldProductInfo.txt","a");
    if (file==NULL){
        printf("file error");
        return 0;
        }
    else
        printf("file created");
    float n;
    for(i=0;i<2;i++){
		fprintf(file,"Product code:%d\n", info[i].Code);
		fprintf(file,"Product name:%s\n", info[i].Name);
		fprintf(file,"Buying Price:%.2f\nSelling Price: %.2f\n",info[i].Buying_Price,info[i].Price);
		fprintf(file,"Product name:%s\n", info[i].Date);
        n += info[i].Price-info[i].Buying_Price;
        }
    printf("Total Profit = %.2f",n);
	fprintf(file,"Total Profit = %.2f",n);
    fclose(file);
}
