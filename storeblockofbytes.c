//Program to store block of bytes using fwrite()
#include<stdio.h>
typedef struct bank
{
    int accno; //4
    char acname[30]; //30
    double balance; //8
}bank;
bank getDetails()
{
    bank customer;
    printf("Account Number: ");
    scanf("%d",&customer.accno);
    printf("Account Name: ");
    scanf("%s",customer.acname);
    printf("Balance: ");
    scanf("%lf",&customer.balance);
    return customer;
}
int main()
{
    bank customer;
    FILE *fptr;
    char filename[30];
    printf("Enter database name: ");
    scanf("%s",filename);
    fptr = fopen(filename,"a+"); //append & read 
    if(fptr==NULL)
    {
        printf("File creation error!");
        return 0;
    }
    //file is created
    customer = getDetails();
    //writing block of bytes into the file pointer
    fwrite(&customer,sizeof(customer),1,fptr);
    fclose(fptr);
}