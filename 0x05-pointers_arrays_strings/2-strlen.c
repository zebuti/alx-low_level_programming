#include "main.h"
/**
* _strlen - this function change the initial.
*
* @s: this is a parameter to change.
*
* Return: length of the string
*/
int _strlen(char *s)
{
int index;

for (index = 0; s[index]  != '\0' ; index++);
return (index);
}
