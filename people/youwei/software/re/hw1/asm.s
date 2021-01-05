	.file	"asm1.c"
	.intel_syntax noprefix
	.text
	.globl main
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	r12d, 0
	mov	ebx, 0
	jmp	.L2
.L3:
	add	r12d, ebx
	add	ebx, 2
.L2:
	cmp	ebx, 2017
	jbe	.L3
	mov	eax, r12d
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
