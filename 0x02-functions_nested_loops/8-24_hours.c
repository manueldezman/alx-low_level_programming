#include "main.h"

/**
 * jack_bauer - a functon that prints time from 00:00 to 23:58
 * Return: returns nothing
 */

void jack_bauer(void)
{
	int i;
    int j;
    
    for (i = 00; i < 24; i++){
        for (j = 00; j < 60; j++){
            if(i < 10)
                printf("0");
            printf("%d:", i);
              if(j < 10)
                printf("0");
            _putchar("\n", j);
	    _putchar("\n";
}
