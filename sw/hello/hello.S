	.text
	.globl	main
main:
	addi t1,t1,1
	lw    t2,1(t1) //load unalligned
	sw    t2,1(t1) //store unalligned
	bnez   t1,6	//pc unaligned
	
	ebreak
	  jr	ra
	.size	main, .-main
	.ident	"GCC: () 11.1.0"
