
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

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_memset
 * Arguments    : Dest (pointer to the first location, where data will be written) , c (character to be written), Size(Number of bytes will be checked).
 * Return       : Pointer to void.
 * Description  : Assign charachter to a specific block of memory from Dest to Dest + Size.
 ********************************************************************************************************************************************************************************************************/
void *my_memset(void* Dest, char c, unsigned int Size);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strcat
 * Arguments    : dest (pointer to the first location, where data will be appended) , src (pointer to the first location of the string will be appended to string in dest).
 * Return       : Pointer to char.
 * Description  : Appends the string pointed to, by src to the end of the string pointed to by dest.
 ********************************************************************************************************************************************************************************************************/
char *my_strcat(char *dest, char* src);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strncat
 * Arguments    : dest (pointer to the first location, where data will be appended) , src (pointer to the first location of the string will be appended to string in dest), Size(Number of bytes to be appended).
 * Return       : Pointer to char.
 * Description  : Appends the string pointed to, by src to the end of the string pointed to by dest up to specific number of bytes (Size).
 ********************************************************************************************************************************************************************************************************/
char *my_strncat(char *dest, char* src, unsigned int Size);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strchr
 * Arguments    : str (pointer to the required string to search in) , c (character to look for).
 * Return       : Pointer to char.
 * Description  : Searches for the first occurrence of the character c.
 ********************************************************************************************************************************************************************************************************/
char *my_strchr(const void* str, unsigned char c);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strcmp
 * Arguments    : str1 , str2 (Compared against each other ).
 * Return       : int -> 1 (str1 > str2) or -1 (str1 < str2) or 0 (str1 = str2).
 * Description  : Compares the string pointed to by str1 to the string pointed to by str2.
 ********************************************************************************************************************************************************************************************************/
int  my_strcmp(const char* str1,const char* str2);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strncmp
 * Arguments    : str1 , str2 (Compared against each other ), NumOfBytes(Number of bytes to be compared).
 * Return       : int -> 1 (str1 > str2) or -1 (str1 < str2) or 0 (str1 = str2).
 * Description  : Compares the string pointed to by str1 to the string pointed to by str2 for a specific number of characters.
 ********************************************************************************************************************************************************************************************************/
int  my_strncmp(const char* str1,const char* str2, unsigned int Bytes);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strcpy
 * Arguments    : Dest (pointer to the first location, where data will be copied) , Src (pointer to the first location, where data will be copied from).
 * Return       : Pointer to char.
 * Description  : Copies string from src to dest..
 ********************************************************************************************************************************************************************************************************/
char *my_strcpy(char* dest, const char *src);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strncpy
 * Arguments    : Dest (pointer to the first location, where data will be copied) , Src (pointer to the first location, where data will be copied from), Size(Number of bytes to be copied).
 * Return       : Pointer to char.
 * Description  : Copies specific number of bytes (Size) from src to dest.
 ********************************************************************************************************************************************************************************************************/
char *my_strncpy(char* dest, const char *src, unsigned int Size);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strcspn
 * Arguments    : str1 (string to search in), str2 (string to search for).
 * Return       : unsigned int.
 * Description  : Calculates the length of the initial segment of str1 which consists entirely of characters not in str2.
 ********************************************************************************************************************************************************************************************************/
unsigned int my_strcspn(const char *str1 , const char *str2 );

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strerror
 * Arguments    : int (Error Number).
 * Return       : Pointer to char.
 * Description  : Searches an internal array for the error number errnum and returns a pointer to an error message string.
 ********************************************************************************************************************************************************************************************************/
char *my_strerror(int errnum);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strlen
 * Arguments    : str (string -> pointer to charcter).
 * Return       : unsigned int.
 * Description  : Calculates the length of a string (str) Without NULL.
 ********************************************************************************************************************************************************************************************************/
unsigned int my_strlen(const char *str);
/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strpbrk
 * Arguments    : str1 (String to search in) , str2 (String to -> search for any of its characters).
 * Return       : Pointer to char.
 * Description  : Finds the first character in the string str1 that matches any character specified in str2.
 ********************************************************************************************************************************************************************************************************/
char *my_strpbrk(const char *str1, const char *str2);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strrchr
 * Arguments    : str (pointer to the required string to search in) , c (character to look for).
 * Return       : Pointer to char.
 * Description  : Searches for the last occurrence of the character c (a char) in the string pointed to by the argument str.
 ********************************************************************************************************************************************************************************************************/
char *my_strrchr(const char *str, char c);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strspn
 * Arguments    : str1 (string to search in), str2 (string to search for).
 * Return       : unsigned int.
 * Description  : Calculates the length of the initial segment of str1 which consists entirely of characters in str2.
 ********************************************************************************************************************************************************************************************************/
unsigned int my_strspn(const char *str1,const char *str2);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strstr
 * Arguments    : str1 (string to search in), str2 (string to search for).
 * Return       : Pointer to char.
 * Description  : Finds the first occurrence of the entire string str2 (not including the terminating null character) which appears in the string str1.
 ********************************************************************************************************************************************************************************************************/
char *my_strstr(const char *str1, const char *str2);

/*******************************************************************************************************************************************************************************************************
 * Function Name: my_strtok
 * Arguments    : str (string to be broken into tokens), delim(Delimiter of the string).
 * Return       : Pointer to char.
 * Description  : Breaks string str into a series of tokens separated by delim..
 ********************************************************************************************************************************************************************************************************/
char *my_strtok(char *str, const char *delim);
#endif // MY_STRING_H
