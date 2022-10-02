.global main

.text
main:
	str x30, [sp, #-16]
	ldr x0, =hw_str
	mov x0, 0
	ldr x30, [sp], #16
	ret

.data
	hw_str: .ascii "Hello, asm!\n"
