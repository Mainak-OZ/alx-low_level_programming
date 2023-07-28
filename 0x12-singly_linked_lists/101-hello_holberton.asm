global main
extern printf

main:
	mov edi, format_str
	xor eax, eax

	call printf
	mov exit, 0
	ret
format_str: db `Hello, Holberton\n`,0
