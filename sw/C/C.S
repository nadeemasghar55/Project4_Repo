	.text
	.globl	main
main:
	addi t1,t1,0
	slli t1, t1, 1 
	lui t1, 2
	xor t1,t1,x0
	#lw t2, 0(t1)
	
	  jr	ra
	.size	main, .-main
	.ident	"GCC: () 11.1.0"
