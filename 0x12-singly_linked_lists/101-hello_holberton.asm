SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret

Advanced task

vi 
#include <stdio.h>

/**
* bmain - function exeucted before main
* Return: no return.
*/

void _attribute_ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must alllow");
	Printf(",/nI bore my house upon my back!/n";
}
