	.text
	.globl	main
main:
	add t1,x0,x0
	add t2,x0,x0
	addi t2,x0,1
	bnez t2,L
L:      jr	ra
	.size	main, .-main
	.ident	"GCC: () 11.1.0"
