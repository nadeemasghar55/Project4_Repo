	.text
	.globl main
	
main:
	
	
	# For 2 consecutive Compressed Instructions 
	mv t1,t1
	mv t1,t1
	add t6,t6,x0
	

	sub t3,t3,t1
 	xor t1,t1,x0
 	or  s1,s1,s1
 	and s2,s2,s1
	jr ra
	.size main, .-main
	.ident "GCC: () 11.1.0"
	

