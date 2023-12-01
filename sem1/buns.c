/*WAP to do the following for a street vendor selling a basket full of one item, say "buns" 

(i) Store the name of the one item the street vendor sells 
(ii) Store the cost per piece of the item. Ensure this is a decimal value. This is the selling price. E.g. Rs.12.50. 
(iii) Make a provision to ask the customer of the street vendor to enter the quantity of the item he or she needs 
(iv) If the street vendor has the required quantity, prompt the price the customer has to pay 
(v) If the street vendor does not have the required quantity, prompt the same to the customer and ask if they still need the item with reduced quantity. If the answer is "Yes", 
proceed by displaying the price the customer has to pay 
(vi) Ask the street vendor every time a transaction is done (item is sold to customer), if the vendor wants to continue selling. 
(vii) If the vendor wants to continue, repeat the process. 
(viii)  If the vendor does not want to continue selling, stop the loop.  
(ix) When the street vendor's basket is empty (meaning all the items are sold), display the total money the vendor earned. 
(x) Display the total # of items sold by the vendor. 
(xi) Display how many items are unsold, if any.*/


#include<stdio.h>
int main()
{
    float sprice, cprice, profit, bill;
    int qty, totalqty;
    char item[10];
    int i = 0;
    char ans1, ans2;

    printf("\nEnter the name of the item: ");
    scanf("%s",item);

    printf("\nEnter cost of making %s: ", item);
    scanf("%f",&cprice);

    printf("\nEnter cost of selling %s: ",item);
    scanf("%f",&sprice);

    printf("\nEnter total quantity of %s: ",item);
    scanf("%d",&totalqty);

    while (i <= totalqty)
    {
        printf("\nEnter quantity of %s required: ",item);
        scanf("%d",&qty);
        if (qty <= (totalqty - i))
        {
            bill = qty * sprice;
            printf("\nThe bill is %f", bill);
            i += qty;
            printf("\nDo you want to continue selling?(y/n): ");
            scanf(" %c", &ans1);
            if (ans1 == 'y')
            {
                printf("\nEnter quantity of %s required: ",item);
                scanf("%d",&qty);
                if (qty <= (totalqty - i))
                {
                    bill = qty * sprice;
                    printf("\nThe bill is %f", bill);
                    i += qty;
                }
                else
                {
                    printf("\nItems are out of stock. Try later :(");
                }
            }
            else
            {
                printf("\nShop is closing");
                break;
            }
        }
        else
        {
            printf("\nOops! The required quantity is outof stock! Only %d items are left", totalqty - i);
            printf("\nWould you like a reduced quantity?(y/n): ");
            scanf(" %c",&ans2);
            if (ans2 == 'y')
            {
                printf("\nEnter quantity of %s required: ",item);
                scanf("%d",&qty);
                if (qty <= (totalqty - i))
                {
                    bill = qty * sprice;
                    printf("\nThe bill is %f", bill);
                    i += qty;
                }
                else
                {
                    printf("\nItems are out of stock. Try later :(");
                }
            }
            printf("\nDo you want to continue selling?(y/n): ");
            scanf(" %c", &ans1);
            if (ans1 == 'y')
            {
                printf("\nEnter quantity of %s required: ",item);
                scanf("%d",&qty);
                if (qty <= (totalqty - i))
                {
                    bill = qty * sprice;
                    printf("\nThe bill is %f", bill);
                    i += qty;
                }
                else
                {
                    printf("\nItems are out of stock. Try later :(");
                }
            }
            else
            {
                printf("\nShop is closing");
                break;
            }
        }
    }
    printf("\nItems sold are %d and items unsold are %d", i, totalqty - i);
    profit = (sprice * i) - (cprice * i);
    printf("\nProfit earned is: %f", profit);
}
