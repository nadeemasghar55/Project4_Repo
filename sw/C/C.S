	.text
	.globl	main
main:
	add t1,x0,x0
	#addi t1, t1, 1
	addi t2, t2, 1
	slli t1, t1, 1
    	#andi t1, t1, 2 
	lui t1, 0x00020
	#xor t1,t1,x0
	sw t2, 0(t1)
	lw t3, 0(t1)
	
	  jr	ra
	.size	main, .-main
	.ident	"GCC: () 11.1.0"
