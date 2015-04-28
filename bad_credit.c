/*
* Lev Blankfeld
* les2265@mail.ru
*
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    long long cc_num = 0;
    char cc_string[17];
    int length = 0;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    int temp_value = 0;
    
    //askin user to input credit card number
    do
    {
        printf("Number:");
        cc_num = GetLongLong();
    }
    while (cc_num < 1);
    
    sprintf(cc_string, "%llu", cc_num);
    length = strlen(cc_string);
    
    for (int i = length - 2; i >= 0; i-=2)
    {
        temp_value = (cc_string[i] - 48) * 2;
        if (temp_value < 10)
        {
            sum1 = sum1 + temp_value;
        }
        else
        {
            sum1 = sum1 + 1 + (temp_value - 10);//add digits together if product is >10 (if 14 than 1+4)
        }
    }
    for (int j = length-1; j >= 0; j-=2)//add the sum of each other element started from non-second to last
    {
        sum2 = sum2 + (cc_string[j] - 48);
    }
    sum = sum1 + sum2;
    
    /*if (sum % 10 == 0)
    {
        if (length == 13 || length == 16 && cc_string[0] == '4')
        {
            printf("Visa\n");
        }
        else if (length == 16 && cc_string[0] == '5' && cc_string[1] == '1' || cc_string[1] == '2' || cc_string[1] == '3' || cc_string[1] == '4' || cc_string[1] == '5')
        {
            printf("Master Card\n");
        }
    }
    else
    {
        printf("Invalid credit card\n");
    }
    */
    
    printf("%i\n", sum);       
}
