
#include <stdio.h>
#include <stdlib.h>
#include "My_String.h"
#include <String.h>

unsigned char* Sen="Hi From My String Library";
unsigned char arr1[80] = "goto15not10true1this is the result";
unsigned char arr2[80] = "Hi From My String Library";

int main()
{
    char *result = my_strtok(arr2,"From");

    while(result != NULL)
    {
    printf("-%s \n",result);
    result = my_strtok(NULL,"From");
    }
    puts("==================================================");

    char *result2 = strtok(arr2,"From");
    while(result2 != NULL)
    {
    printf("%s \n",result2);
    result2 = strtok(NULL,"From");
    }

    printf("\nlen= %i",my_strlen("From"));


    return 0;
}
