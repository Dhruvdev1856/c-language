#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char pnm[50],upnm[50],username [50],phno[50];
    int qty,pno,uqty, upno, choice, price, flag=0; 
    FILE *f1, *f2;
    f1=fopen("stock.txt","r");
    f2=fopen("fullbill.txt", "a");
    printf("Enter 1 to search via pno\nEnter 2 to search via pro name\nYour choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter the product number to be searched:"); 
            scanf("%d", &upno);
            break;
        case 2:
            printf("Enter the product name to be searched:");
            scanf("%s",&upnm);
            break;
    }
    while(1)
    {
        fscanf(f1,"%d",&pno);
            if (feof(f1)) //EOF // -1
            {
                break;
            }
        fscanf(f1,"%s", pnm);
        fscanf(f1,"%d",&price);
        fscanf(f1, "%d",&qty);

        if (choice =1)
        {
            if(pno==upno)
            {
                flag=1;
                printf("Enter the quantity to be purchased: ");
                scanf("%d", &uqty);
                if(uqty<=qty)
                {
                    printf("Enter the username :");
                    scanf("%s",&username);
                    printf("Enter the phoneno :");
                    scanf("%s",&phno);
                    fprintf(f2," customer's name = %s \n phone number = %s \n product number = %d \n product name = %s",username,phno,pno,pnm);
                    fprintf(f2,"\n purchased quantity = %d \n total = %d \n",uqty,uqty*price);
                }
                else
                {
                    printf("\n Sorry currently we only have %d quantity for this product !",qty);
                }
            }
        }
        if (choice =2)
        {
            if(strcmp(upnm,pnm)==0)
            {
                flag=1;
                printf("Enter the quantity to be purchased: ");
                scanf("%d", &uqty);
                if(uqty<=qty)
                {
                    printf("Enter the username :");
                    scanf("%s",&username);
                    printf("Enter the phoneno :");
                    scanf("%s",&phno);
                    fprintf(f2," customer's name = %s \n phone number = %s \n product number = %d \n product name = %s",username,phno,pno,pnm);
                    fprintf(f2,"\n purchased quantity = %d \n total = %d \n",uqty,uqty*price);
                }
                else
                {
                    printf("\n Sorry currently we only have %d quantity for this product !",qty);
                }
            }
        }
    }
    fclose(f1);
    fclose(f2);
    if(!flag)
    {
        printf("\n sorry this product not found");
    }
    return 0;
}