section		.text
	extern	printf
	global	main
main:
	mov			edi, mymsg
	mov			eax, 0
	call		printf
section		.data
	mymsg	db	'Hello, Holberton' , 0xa, 0
