#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define capacity  10




typedef struct product
{
    int top;
    int *arrK;
}product;

product k1;
product w1;
product c1;
product dm1;
product p1;




int contd(){
    printf("Do you want to continue:\n");
    printf("1.Yes\n");
    printf("2.No\n");
    int x;
    scanf("%d",&x);
    if (x==1)
        return 1;
    else
        return 0;
}

void push(product x1)
{
    for (int i=0;i<capacity;i++)
    {
        //x1->top += 1;
        //x1->arrK[x1->top]=1;
    }
}

void initialStockFill()
{
    push(k1);
    push(w1);
    push(dm1);
    push(c1);
    push(p1);
}

int pop(product *p)
{
    if (p->top ==-1)
    {
        printf("The particular product is not in stock.\n Sorry for the inconvinience.\n");
        return -1;
    }
    else{
        int val=p->arrK[p->top];
        p->top--;
        return val;
    }
}

int selectProduct()
{
    int choice;
    printf("Please select the product!\n");
    printf("1. Kurkure (₹20)\n");
    printf("2. Wafers (₹10)\n");
    printf("3. Coke (₹40)\n");
    printf("5. Dairy Milk Chocolate (₹40)\n");
    printf("5. Pepsi (₹20)\n");
    printf(">>> ");
    scanf("%d",&choice);
    return choice;
}

int buyMore()
{
    printf("Do you want to buy more ?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 0;
        break;
    default:
        return 0;
        break;
    }
}

int purchaseProduct(int amt,int ch){

    switch (ch)
    {
    case 1:
        if (amt>=20){
            pop(k1);
            printf("Please collect the item\n");
            amt-=20;
            return amt;
        }
        else
            printf("Insufficient Balance!!\n");
            return amt;
    case 2:
        if (amt>=10){
            pop(w1);
            printf("Please collect the item\n");
            amt-=10;
            return amt;
        }
        else
            printf("Insufficient Balance!!\n");
            return amt;
        break;
    case 3:
        if (amt>=40){
            pop(c1);
            printf("Please collect the item\n");
            amt-=40;
            return amt;
        }
        else
            printf("Insufficient Balance!!\n");
            return amt;
        break;
    case 4:
        if (amt>=40){
            pop(dm1);
            printf("Please collect the item\n");
            amt-=40;
            return amt;
        }
        else
            printf("Insufficient Balance!!\n");
            return amt;
        break;
    case 5:
        if (amt>=20){
            pop(p1);
            printf("Please collect the item\n");
            amt-=20;
            return amt;
        }
        else
            printf("Insufficient Balance!!\n");
            return amt;
        break;
    default:
        printf("The entered choice is invalid!!");
        return amt;
        break;
    }
}

void purchase()
{
    bool ans = true;
    while (ans)
    {
        printf("Please enter the money into the machine: ");
        int amt;scanf("%d",&amt);
        int money=0;
        int flag =-1;
        if (amt%10 == 0 && amt<=100)
            flag = 0;
        else 
            flag = 1;
        if (flag==1)
        {
            printf("The amount entered should be a multiple of 10 and not greater than 100\n");
            int y = contd();
            if (y==1){
                ans = true;
                continue;
            }
            else 
                ans = false;
        }
        else if (flag ==0)
        {
            while (true)
            {
                int ch = selectProduct();
                amt = purchaseProduct(amt,ch);
                int answer = buyMore();
                if (answer ==1 && amt !=0)
                    continue;
                else if (answer == 0 || amt == 0)  
                    break;
            }

        }
    }
}


void initialMenu()
{
    printf("Welcome to the PDEU Vending Machine!!\n");
    printf("Select from the choices:\n");
    int ch;
    printf("1. Supplier login\n");
    printf("2. Customer login\n");
    printf(">>> ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 2:
        initialStockFill();
        purchase();
        break;
    case 1:
        
    default:
        
        break;
    }
}

int main(){
    product *k1 = (product *) malloc(sizeof(product));
    k1->arrK = (int *)malloc(capacity*sizeof(int));
    product *w1 = (product *) malloc(sizeof(product));
    w1->arrK = (int *)malloc(capacity*sizeof(int));
    product *c1 = (product *) malloc(sizeof(product));
    c1->arrK = (int *)malloc(capacity*sizeof(int));
    product *dm1 = (product *) malloc(sizeof(product));
    dm1->arrK = (int *)malloc(capacity*sizeof(int));
    product *p1 = (product *) malloc(sizeof(product));
    p1->arrK = (int *)malloc(capacity*sizeof(int));
    k1->top = -1;
    w1->top = -1;
    c1->top = -1;
    dm1->top = -1;
    p1->top = -1;
    initialMenu();
}