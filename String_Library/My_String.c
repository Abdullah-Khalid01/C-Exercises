#include <stdio.h>
#include "My_String.h"


void *my_memchr(const void* str, unsigned char c, unsigned int Size)
{
    if(NULL != str)
    {
        while(Size)
        {
            if((*((unsigned char*)str)) != c)
            {
                str=(unsigned char*)str +1;
                Size--;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("NULL => no string");
    }
    return ((Size > 0) ? str:NULL) ;
}

void *my_memcpy(void* Dest,const void* Src, unsigned int Size)
{
    unsigned char*      DestPtr  = Dest;
    const unsigned char* SrcPtr  = Src ;

    if((NULL != Dest) && (NULL != Src))
    {
            while(Size)
            {
                *DestPtr++ = *SrcPtr++;
                Size--;
            }
    }
    else
    {
        printf("NULL pointer assigned");
    }

    return Dest;
}

int  my_memcmp(const void* str1 , const void* str2, unsigned int NumOfBytes)
{
    unsigned int counter=0;
    signed int Result   =0;
    if((str1 != NULL) && (str2 != NULL))
    {

    for(counter=0;counter<NumOfBytes;counter++)
    {
        if(((unsigned char*)str1)[counter] < ((unsigned char*)str2)[counter])
        {
            Result = -1;
            break;
        }
        else if(((unsigned char*)str1)[counter] > ((unsigned char*)str2)[counter])
        {
            Result =  1;
            break;
        }
    }
    return Result;
    }
    else
    {
        printf("NULL pointer!!");
    }
}
void *my_memset(void* Dest, char c, unsigned int Size)
{
    if(Dest!= NULL)
    {
    unsigned char* TempPtr = Dest;
    unsigned int    counter=    0;

    for(counter = 0; counter < Size; counter++)
    {
        *TempPtr++ = c;
    }
    return Dest;
    }
    else
    {
        printf("NULL pointer!!");
    }
}

char *my_strcat(char *dest, char* src)
{

    if((NULL != dest) && (NULL != src))
    {
    static char array[100]={0};


    char *Temp = dest;
    unsigned int Destcounter =0;
    unsigned int Srccounter =0;
    while (Temp[Destcounter] != NULL)
    {
        if(Destcounter == 100)
        {
            printf("Too long string to be appended, so part of it gets truncated!! \n");
            break;
        }
        array[Destcounter]=Temp[Destcounter];
        Destcounter++;
    }

    while(src[Srccounter] != NULL)
    {
        if((Destcounter == 100) )
        {
            printf("Too long string to be appended, so part of it gets truncated!! \n");
            break;
        }
        array[Destcounter] = src[Srccounter];
        Destcounter++;
        Srccounter++ ;
    }
    array[Destcounter]='\0';

    dest =array;
    }
    else
    {
        dest=NULL;
        printf("NULL pointer!! \n");
    }
    return dest;
}

char *my_strncat(char *dest, char* src, unsigned int Size)
{
    if((NULL != dest) && (NULL != src))
    {
        unsigned char i =0;

        while(dest[i]!=NULL)
        {
            i++;
        }

        unsigned char* ptr=(unsigned char *)calloc(sizeof(char),(Size+i));
        char *Temp = dest;
        unsigned int Destcounter =0;
        unsigned int Srccounter =0;
        while (Temp[Destcounter] != NULL)
        {
            ptr[Destcounter]=Temp[Destcounter];
            Destcounter++;
        }

        while(Srccounter < Size)
        {
            ptr[Destcounter] = src[Srccounter];
            Destcounter++;
            Srccounter++ ;
        }
        ptr[Destcounter]='\0';

        dest =ptr;
    }
    else
    {
        dest=NULL;
        printf("NULL pointer!! \n");
    }
    return dest;
}

char *my_strchr(const void* str, unsigned char c)
{
        if(NULL != str)
    {
        while((*((unsigned char*)str)) != '\0')
        {
            if((*((unsigned char*)str)) != c)
            {
                str=(unsigned char*)str +1;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("NULL => no string\n");
    }
    return ((*((unsigned char*)str)) ? str:NULL) ;
}

int  my_strcmp(const char* str1,const char* str2)
{
    unsigned int result=0;
    if((str1 != NULL) && (str2 != NULL))
    {
    unsigned int counter=0;
    while((str1[counter] != '\0') && ((str2[counter] != '\0')))
    {
        if(str1[counter]<str2[counter])
        {
            result = -1;
            break;
        }
        else if(str1[counter]>str2[counter])
        {
            result = 1;
            break;
        }
        counter++;
    }
    }
    else
    {
        printf("NULL pointer!!\n");
    }

    return  result;
}

int  my_strncmp(const char* str1,const char* str2, unsigned int Bytes)
{
    unsigned int result=0;
    if((str1 != NULL) && (str2 != NULL))
    {
        unsigned int counter =0;
        while((str1[counter] != '\0') && (str2[counter] != '\0') && (counter <Bytes))
        {
            if(str1[counter]<str2[counter])
            {
                result = -1;
                break;
            }
            else if(str1[counter]>str2[counter])
            {
                result = 1;
                break;
            }
            counter++;
    }
    }
    else
    {
        printf("NULL pointer!!\n");
    }

    return  result;
}

char *my_strcpy(char* dest, const char *src)
{

    if((dest != NULL) && (src!= NULL))
    {

        unsigned int counter=0;
        while(src[counter] != '\0')
        {
            dest[counter] = src[counter];
            counter++;
        }
        dest[counter] = '\0';
    }
    else
    {
        printf("NULL => NO String!!");
    }
    return dest;
}

char *my_strncpy(char* dest, const char *src, unsigned int Size)
{

    if((dest != NULL) && (src!= NULL))
    {

        unsigned int counter=0;
        while((src[counter] != '\0') && (counter < Size))
        {
            dest[counter] = src[counter];
            counter++;
        }
        dest[counter] = '\0';
    }
    else
    {
        printf("NULL => NO String!!\n");
    }
    return dest;
}
unsigned int my_strcspn(const char *str1 , const char *str2 )
{
    unsigned int counter=0;
   if((str1 != NULL) && (str2!= NULL))
   {

       while((str1[counter] != NULL) && (str2[0] != str1[counter]))
       {
           counter++;
       }
       if(str1[counter]=='\0')
       {
               counter=0;
       }
   }
   else
   {
        printf("NULL => NO String!!\n");
   }
   return counter;
}

char *my_strerror(int errnum)
{
    static char Messages[5][30]={ "No such file or directory",
                                  "Error Type",
                                  "Wrong Value",
                                  "Value can't be adjusted",
                                  "EOF is reached"};

    return Messages[errnum];
}

unsigned int my_strlen(const char *str)
{
    unsigned int counter=0;
    if(str != NULL)
    {
        while(str[counter] != '\0')
        {
            counter++;
        }
    }
    else
    {
        printf("NULL => No String\n");
    }
    return counter;
}

char *my_strpbrk(const char *str1, const char *str2)
{
    static char* ptr = NULL;
    unsigned int counter1=0;
    unsigned int counter2=0;

    if((str1 != NULL) && (str2 != NULL))
    {
        while((str1[counter1] != NULL))
        {
            while(str2[counter2] != NULL)
            {
                if(str1[counter1] == str2[counter2])
                {
                    ptr=&str1[counter1];
                    break;
                }
                else
                {
                    counter2++;
                }
            }
            if(ptr!=NULL)
            {
                break;
            }
            else
            {
               counter2=0;
               counter1++;
            }

        }

    }
    else
    {
        printf("NULL => No String\n");
    }

    return ptr;
}

char *my_strrchr(const char *str, char c)
{
    unsigned int counter=0;
    static char *ResultPtr=NULL;
    if(str != NULL)
    {
           while(str[counter] != NULL)
           {
               if(str[counter] == c)
               {
                   ResultPtr = &str[counter];
               }
               else
               {

               }
               counter++;
           }
    }
    else
    {
        printf("NULL => No String\n");
    }
    return ResultPtr;
}

unsigned int my_strspn(const char *str1,const char *str2)
{
    unsigned int counter1=0;
    unsigned int counter2=0;
    unsigned int result=0;

    if((str1 != NULL) && (str2 != NULL))
    {
        while((str1[counter1] != NULL))
        {
            while(str2[counter2] != NULL)
            {
                if(str1[counter1] == str2[counter2])
                {
                    result++;
                    break;
                }
                else
                {
                    counter2++;
                }
            }
               counter2=0;
               counter1++;
        }

    }
    else
    {
        printf("NULL => No String\n");
    }
    return result;
}

char *my_strstr(const char *str1, const char *str2)
{
    unsigned int counter1=0;
    unsigned int counter2=0;
    unsigned char *TemPtr=NULL;

    if((str1 != NULL) && (str2 != NULL))
    {
        #if 0
        /* Loop to find the 1st letter of the key  */
        while(str1[counter1]!= NULL)
        {
            if(str2[0] == str1[counter1])
            {
                break;
            }
            else
            {
                counter1++;
            }
        }
        /* counter1 = index of 1st letter + 1 and counter2++ */
        while(str[counter1+1] != NULL)

        /* if counter2 == Null the key exists */

        /* if counter1 == Null the key is not exist */
        #endif // 0
        while(str1[counter1]!= NULL)
        {
            if(str1[counter1]==str2[counter2])
            {
                counter1++;
                counter2++;
                if(str2[counter2]==NULL)
                {
                    TemPtr = str2;
                    break;
                }
                else
                {

                }
            }
            else
            {
                counter1++;
                counter2=0;
            }
        }
    }
    else
    {
        printf("NULL => No String\n");
    }
    return TemPtr;
}

char *my_strtok(char *str, const char *delim)
{
    static char Buffer[200]       =  {0}       ;

    static char Copy[200]         =  {0}       ;

    static unsigned int counter   =   0        ;

    unsigned int delimCounter     =   0        ;

    unsigned int Buffercounter    =   0        ;

    if( str != NULL)
    {
        counter = 0                            ;
        my_strcpy(Copy,str)                    ;
    }
    else
    {

    }
    while((delim[delimCounter] != '\0') && (Copy[counter] != '\0'))
    {

        if(Copy[counter]==delim[delimCounter])
        {
            delimCounter++;
        }
        else
        {
            delimCounter = 0 ;
        }
        Buffer[Buffercounter] = Copy[counter]  ;
        counter++                              ;
        Buffercounter++                        ;
    }
    Buffer[Buffercounter-delimCounter] = '\0'               ;


    return (Buffer[0]!='\0') ? Buffer : NULL   ;

}
