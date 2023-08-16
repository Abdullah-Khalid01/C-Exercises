
#ifndef MY_STRING_H
#define MY_STRING_H

#ifndef NULL
#define NULL ((void *)0)
#endif // NULL
/*******************************************************************************************************************************************************************************************************
 * Function Name: my_memchr
 * Arguments    : str (pointer to required data to search in) , c (character to look for), Size(Number of bytes will be checked).
 * Return       : Pointer to void
 * Description  :(my_memchr) searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
 *******************************************************************************************************************************************************************************************************/
void *my_memchr(const void* str, unsigned char c, unsigned int Size);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_memcpy
 * Arguments    : Dest (pointer to the first location, where data will be copied) , Src (pointer to the first location, where data will be copied from), Size(Number of bytes to be copied).
 * Return       : Pointer to void
 * Description  :Copies n characters from src to dest.
 *******************************************************************************************************************************************************************************************************/
void *my_memcpy(void* Dest,const void* Src, unsigned int Size);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_memcmp
 * Arguments    : str1 , str2 (Compared against each other ), NumOfBytes(Number of bytes to be compared).
 * Return       : int -> 1 (str1 > str2) or -1 (str1 < str2) or 0 (str1 = str2).
 * Description  : Compares Str1 with Str2 for specific Number Of Bytes(NumOfBytes).
 ********************************************************************************************************************************************************************************************************/

int  my_memcmp(const void* str1 , const void* str2, unsigned int NumOfBytes);

/* Assign charachter to a specific block of memory from Dest to Dest + Size */
void *my_memset(void* Dest, char c, unsigned int Size);

/* Appends the string pointed to, by src to the end of the string pointed to by dest. */
char *my_strcat(char *dest, char* src);

/* Appends the string pointed to, by src to the end of the string pointed to by dest up to specific number of bytes (Size). */
char *my_strncat(char *dest, char* src, unsigned int Size);

/* Searches for the first occurrence of the character c */
char *my_strchr(const void* str, unsigned char c);

/* Compares the string pointed to by str1 to the string pointed to by str2.*/
int  my_strcmp(const char* str1,const char* str2);

/* Compares the string pointed to by str1 to the string pointed to by str2 up to specific number of bytes(Bytes) */
int  my_strncmp(const char* str1,const char* str2, unsigned int Bytes);

/* Copies string from src to dest. */
char *my_strcpy(char* dest, const char *src);

/* Copies specific number of bytes (Size) from src to dest. */
char *my_strncpy(char* dest, const char *src, unsigned int Size);

/* Calculates the length of the initial segment of str1 which consists entirely of characters not in str2. */
unsigned int my_strcspn(const char *str1 , const char *str2 );

/* Searches an internal array for the error number errnum and returns a pointer to an error message string. */
char *my_strerror(int errnum);

/* Calculates the length of a string (str) Without NULL  */
unsigned int my_strlen(const char *str);

/* Finds the first character in the string str1 that matches any character specified in str2. */
char *my_strpbrk(const char *str1, const char *str2);

/* Searches for the last occurrence of the character c (a char) in the string pointed to by the argument str. */
char *my_strrchr(const char *str, char c);

/* Calculates the length of the initial segment of str1 which consists entirely of characters in str2.*/
unsigned int my_strspn(const char *str1,const char *str2);

/* Finds the first occurrence of the entire string str2 (not including the terminating null character) which appears in the string str1.*/
char *my_strstr(const char *str1, const char *str2);

/* Breaks string str into a series of tokens separated by delim.*/
char *my_strtok(char *str, const char *delim);
#endif // MY_STRING_H
