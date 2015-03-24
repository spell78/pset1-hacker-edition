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
    int summ = 0;
    int temp_value = 0;
    
    //askin user to input a credit card number
    do
    {
        printf("Number:");
        cc_num = GetLongLong();
    }
    while (cc_num != 13 || cc_num != 15 || != 16);// maybe i need to set digits into ''
    
    //converting number into string
    sprintf(cc_string, %llu, cc_num);
    length = strlen(cc_string);
    
    //starting from second to last digit
    for (int i = length - 1; i >= 0; i-=2)
    {
        temp_value = (cc_string[i] - 48) * 2;
        if (temp_value < 10)
        {
            sum = sum + temp_value;
        }
        else
        {
            sum = sum + 1 + (temp_value - 10);//add digits together if product is >10 (if 14 than 1+4)
        }
        for (i = length; i >= 0; i-=2)//add the sum of each other element started from non-second to last
        {
            sum = sum + (cc_string[i] - 48);
        }
    }
}
