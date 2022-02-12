	.file	"programm.c"
	.text
	.section	.rodata
.LC0:
	.string	"enter runs"
.LC1:
	.string	"%d"
.LC2:
	.string	"enter wickets"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	movl	$0, %eax
	call	scoreboard
	movl	%eax, -16(%rbp)
	leaq	-20(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	name
	movl	%eax, -12(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC3:
	.string	"century good match"
.LC4:
	.string	"duckout"
.LC5:
	.string	"fivewickets great bolwer"
.LC6:
	.string	"most expensive bolwer"
	.text
	.globl	scoreboard
	.type	scoreboard, @function
scoreboard:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$100, -4(%rbp)
	jle	.L5
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	jmp	.L6
.L5:
	cmpl	$0, -4(%rbp)
	jg	.L6
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
.L6:
	cmpl	$4, -8(%rbp)
	jle	.L7
	leaq	.LC5(%rip), %rdi
	call	puts@PLT
	jmp	.L8
.L7:
	cmpl	$1, -8(%rbp)
	jg	.L8
	leaq	.LC6(%rip), %rdi
	call	puts@PLT
.L8:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	scoreboard, .-scoreboard
	.section	.rodata
.LC7:
	.string	"namee of player is virat"
.LC8:
	.string	"others"
	.text
	.globl	name
	.type	name, @function
name:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cmpl	$50, %eax
	jle	.L10
	leaq	.LC7(%rip), %rdi
	call	puts@PLT
	jmp	.L11
.L10:
	leaq	.LC8(%rip), %rdi
	call	puts@PLT
.L11:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	name, .-name
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
