section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

section .text
global _start	; Entry point
_start
	push	rbp
	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf
	pop 	rbp
	mov	rax,60	; Exit syscall
	xor	rdi, rdi	; Return code 0
	syscall
