	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 5	sdk_version 15, 5
	.globl	_render_board                   ; -- Begin function render_board
	.p2align	2
_render_board:                          ; @render_board
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	sturh	w0, [x29, #-2]
	sturh	w1, [x29, #-4]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	mov	w8, #8                          ; =0x8
	stur	w8, [x29, #-12]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-12]
	tbnz	w8, #31, LBB0_12
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w9, [x29, #-12]
	mov	w8, #1                          ; =0x1
	lsl	w8, w8, w9
	stur	w8, [x29, #-8]
	ldurh	w8, [x29, #-2]
	ldur	w9, [x29, #-8]
	and	w8, w8, w9
	cbz	w8, LBB0_4
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	b	LBB0_8
LBB0_4:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldurh	w8, [x29, #-4]
	ldur	w9, [x29, #-8]
	and	w8, w8, w9
	cbz	w8, LBB0_6
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	b	LBB0_7
LBB0_6:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-12]
	add	w10, w8, #1
	mov	x9, sp
                                        ; implicit-def: $x8
	mov	x8, x10
	str	x8, [x9]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_8
LBB0_8:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-12]
	mov	w10, #3                         ; =0x3
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	cbnz	w8, LBB0_10
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	b	LBB0_10
LBB0_10:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_11
LBB0_11:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-12]
	subs	w8, w8, #1
	stur	w8, [x29, #-12]
	b	LBB0_1
LBB0_12:
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_legal_move                     ; -- Begin function legal_move
	.p2align	2
_legal_move:                            ; @legal_move
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	strh	w0, [sp, #6]
	strh	w1, [sp, #4]
	strh	w2, [sp, #2]
	ldrsh	w9, [sp, #2]
	mov	w8, #1                          ; =0x1
	subs	w9, w9, #1
	lsl	w8, w8, w9
	strh	w8, [sp]
	ldrh	w8, [sp, #6]
	ldrh	w9, [sp, #4]
	orr	w8, w8, w9
	ldrsh	w9, [sp]
	and	w8, w8, w9
	cbz	w8, LBB1_2
	b	LBB1_1
LBB1_1:
	adrp	x8, l_.str.5@PAGE
	add	x8, x8, l_.str.5@PAGEOFF
	str	x8, [sp, #8]
	b	LBB1_3
LBB1_2:
                                        ; kill: def $x8 killed $xzr
	str	xzr, [sp, #8]
	b	LBB1_3
LBB1_3:
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_check_input                    ; -- Begin function check_input
	.p2align	2
_check_input:                           ; @check_input
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	strh	w0, [sp, #6]
	ldrsh	w9, [sp, #6]
	mov	w8, #1                          ; =0x1
	subs	w8, w8, w9
	b.gt	LBB2_2
	b	LBB2_1
LBB2_1:
	ldrsh	w8, [sp, #6]
	subs	w8, w8, #9
	b.le	LBB2_3
	b	LBB2_2
LBB2_2:
	adrp	x8, l_.str.6@PAGE
	add	x8, x8, l_.str.6@PAGEOFF
	str	x8, [sp, #8]
	b	LBB2_4
LBB2_3:
                                        ; kill: def $x8 killed $xzr
	str	xzr, [sp, #8]
	b	LBB2_4
LBB2_4:
	ldr	x0, [sp, #8]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_get_player_input               ; -- Begin function get_player_input
	.p2align	2
_get_player_input:                      ; @get_player_input
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	sturh	w0, [x29, #-2]
	sturh	w1, [x29, #-4]
	stur	x2, [x29, #-16]
	sturh	wzr, [x29, #-20]
	b	LBB3_1
LBB3_1:                                 ; =>This Inner Loop Header: Depth=1
	ldurh	w8, [x29, #-20]
	cbnz	w8, LBB3_7
	b	LBB3_2
LBB3_2:                                 ;   in Loop: Header=BB3_1 Depth=1
	ldur	x8, [x29, #-16]
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.7@PAGE
	add	x0, x0, l_.str.7@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #18
	str	x8, [x9]
	adrp	x0, l_.str.8@PAGE
	add	x0, x0, l_.str.8@PAGEOFF
	bl	_scanf
	ldursh	w0, [x29, #-18]
	bl	_check_input
	str	x0, [sp, #16]
	ldr	x8, [sp, #16]
	cbz	x8, LBB3_4
	b	LBB3_3
LBB3_3:                                 ;   in Loop: Header=BB3_1 Depth=1
	ldr	x8, [sp, #16]
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.9@PAGE
	add	x0, x0, l_.str.9@PAGEOFF
	bl	_printf
	b	LBB3_1
LBB3_4:                                 ;   in Loop: Header=BB3_1 Depth=1
	ldurh	w0, [x29, #-2]
	ldurh	w1, [x29, #-4]
	ldursh	w2, [x29, #-18]
	bl	_legal_move
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	cbz	x8, LBB3_6
	b	LBB3_5
LBB3_5:                                 ;   in Loop: Header=BB3_1 Depth=1
	ldr	x8, [sp, #8]
	mov	x9, sp
	str	x8, [x9]
	adrp	x0, l_.str.9@PAGE
	add	x0, x0, l_.str.9@PAGEOFF
	bl	_printf
	b	LBB3_1
LBB3_6:                                 ;   in Loop: Header=BB3_1 Depth=1
	mov	w8, #1                          ; =0x1
	sturh	w8, [x29, #-20]
	b	LBB3_1
LBB3_7:
	ldursh	w0, [x29, #-18]
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_apply_move                     ; -- Begin function apply_move
	.p2align	2
_apply_move:                            ; @apply_move
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	x0, [sp, #8]
	str	w1, [sp, #4]
	ldr	w9, [sp, #4]
	mov	w8, #1                          ; =0x1
	subs	w9, w9, #1
	lsl	w10, w8, w9
	ldr	x9, [sp, #8]
	ldrh	w8, [x9]
	orr	w8, w8, w10
	strh	w8, [x9]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_check_win                      ; -- Begin function check_win
	.p2align	2
_check_win:                             ; @check_win
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-8]
	str	x1, [sp, #16]
	str	x2, [sp, #8]
	str	wzr, [sp, #4]
	b	LBB5_1
LBB5_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w8, [sp, #4]
	subs	w8, w8, #8
	b.ge	LBB5_8
	b	LBB5_2
LBB5_2:                                 ;   in Loop: Header=BB5_1 Depth=1
	ldur	x8, [x29, #-8]
	ldrh	w8, [x8]
	ldr	x9, [sp, #8]
	ldrsw	x10, [sp, #4]
	ldrh	w9, [x9, x10, lsl #1]
	and	w8, w8, w9
	ldr	x9, [sp, #8]
	ldrsw	x10, [sp, #4]
	ldrh	w9, [x9, x10, lsl #1]
	subs	w8, w8, w9
	b.ne	LBB5_4
	b	LBB5_3
LBB5_3:
	adrp	x0, l_.str.10@PAGE
	add	x0, x0, l_.str.10@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	bl	_exit
LBB5_4:                                 ;   in Loop: Header=BB5_1 Depth=1
	ldr	x8, [sp, #16]
	ldrh	w8, [x8]
	ldr	x9, [sp, #8]
	ldrsw	x10, [sp, #4]
	ldrh	w9, [x9, x10, lsl #1]
	and	w8, w8, w9
	ldr	x9, [sp, #8]
	ldrsw	x10, [sp, #4]
	ldrh	w9, [x9, x10, lsl #1]
	subs	w8, w8, w9
	b.ne	LBB5_6
	b	LBB5_5
LBB5_5:
	adrp	x0, l_.str.11@PAGE
	add	x0, x0, l_.str.11@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	bl	_exit
LBB5_6:                                 ;   in Loop: Header=BB5_1 Depth=1
	b	LBB5_7
LBB5_7:                                 ;   in Loop: Header=BB5_1 Depth=1
	ldr	w8, [sp, #4]
	add	w8, w8, #1
	str	w8, [sp, #4]
	b	LBB5_1
LBB5_8:
	ldur	x8, [x29, #-8]
	ldrh	w8, [x8]
	ldr	x9, [sp, #16]
	ldrh	w9, [x9]
	orr	w8, w8, w9
	subs	w8, w8, #511
	b.ne	LBB5_10
	b	LBB5_9
LBB5_9:
	adrp	x0, l_.str.12@PAGE
	add	x0, x0, l_.str.12@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	bl	_exit
LBB5_10:
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #80
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	adrp	x8, l___const.main.win_pattern@PAGE
	add	x8, x8, l___const.main.win_pattern@PAGEOFF
	ldr	q0, [x8]
	str	q0, [sp, #32]
	str	wzr, [sp, #28]
	b	LBB6_1
LBB6_1:                                 ; =>This Inner Loop Header: Depth=1
	add	x8, sp, #28
	str	x8, [sp, #16]                   ; 8-byte Folded Spill
	ldrh	w0, [sp, #28]
	ldrh	w1, [sp, #30]
	bl	_render_board
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	add	x1, x0, #2
	add	x2, sp, #32
	str	x2, [sp, #8]                    ; 8-byte Folded Spill
	bl	_check_win
	ldrh	w0, [sp, #28]
	ldrh	w1, [sp, #30]
	adrp	x2, l_.str.13@PAGE
	add	x2, x2, l_.str.13@PAGEOFF
	bl	_get_player_input
	mov	x8, x0
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	strh	w8, [sp, #26]
	ldrsh	w1, [sp, #26]
	bl	_apply_move
	ldrh	w0, [sp, #28]
	ldrh	w1, [sp, #30]
	bl	_render_board
	ldr	x2, [sp, #8]                    ; 8-byte Folded Reload
	ldr	x0, [sp, #16]                   ; 8-byte Folded Reload
	add	x1, x0, #2
	bl	_check_win
	ldrh	w0, [sp, #30]
	ldrh	w1, [sp, #28]
	adrp	x2, l_.str.14@PAGE
	add	x2, x2, l_.str.14@PAGEOFF
	bl	_get_player_input
	ldr	x8, [sp, #16]                   ; 8-byte Folded Reload
	strh	w0, [sp, #26]
	add	x0, x8, #2
	ldrsh	w1, [sp, #26]
	bl	_apply_move
	b	LBB6_1
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"\n\t"

l_.str.1:                               ; @.str.1
	.asciz	"O "

l_.str.2:                               ; @.str.2
	.asciz	"X "

l_.str.3:                               ; @.str.3
	.asciz	"%d "

l_.str.4:                               ; @.str.4
	.asciz	"\n"

l_.str.5:                               ; @.str.5
	.asciz	"Illegal move: Space occupied.\n"

l_.str.6:                               ; @.str.6
	.asciz	"Illegal move: Write input as 1-9.\n"

l_.str.7:                               ; @.str.7
	.asciz	"Play as %s: "

l_.str.8:                               ; @.str.8
	.asciz	"%hd"

l_.str.9:                               ; @.str.9
	.asciz	"%s"

l_.str.10:                              ; @.str.10
	.asciz	"NOUGHT WINS!\n"

l_.str.11:                              ; @.str.11
	.asciz	"CROSSES WINS!\n"

l_.str.12:                              ; @.str.12
	.asciz	"Full board. DRAW!\n"

	.section	__TEXT,__literal16,16byte_literals
	.p2align	1, 0x0                          ; @__const.main.win_pattern
l___const.main.win_pattern:
	.short	7                               ; 0x7
	.short	56                              ; 0x38
	.short	448                             ; 0x1c0
	.short	292                             ; 0x124
	.short	146                             ; 0x92
	.short	73                              ; 0x49
	.short	84                              ; 0x54
	.short	273                             ; 0x111

	.section	__TEXT,__cstring,cstring_literals
l_.str.13:                              ; @.str.13
	.asciz	"O"

l_.str.14:                              ; @.str.14
	.asciz	"X"

.subsections_via_symbols
