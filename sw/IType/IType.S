	.text
	.globl main
	
main:
	addi t1,t1,0
	addi t1,t1,1
	lw t2,1(t1)  #load unalligned
	sw t2,1(t1)  #store unalligned
	bnez t1,6   #PC Unaligned
	ebreak
	
	
	andi s2,s2,12
 	srai s3,s3,1
 	lui t1,0x20
	# Uncompressed after Compressed
	srli x8,x8,3 # i-type
	jal s0, label
	
label:	slli s0,s0,1 # c-type
	
	# Compressed after Uncompressed
	slli s0,s0,1 # C-Type
	slli s1,s2,3 # I-Type
	add t6,t6,x0
	li s1,1
	j 1f
	
	
   1:   beqz s1,label
 	li s2,2

 	
	
	jr ra
	
	
	.size main, .-main
	.ident "GCC: () 11.1.0"
	

