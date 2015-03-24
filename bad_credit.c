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
    do
    {
        printf("Number:");
        cc_num = GetLongLong();
    }
    while (cc_num != 13 || cc_num != 15 || != 16);
    
    sprintf(cc_string, %llu, cc_num);
    length = strlen(cc_string);
    
    for (int i = length - 1; i >= 0; i-=2)
    {
        temp_value = (cc_string[i] - 48) * 2;
        if (temp_value < 10)
        {
            sum = sum + temp_value;
        }
        else
        {
            sum = sum + 1 + (temp_value - 10);
        }
        for (i = length; i >= 0; i-=2)
        {
            sum = sum + (cc_string[i] - 48);
        }
    }
}
