explode:
	ldx #$ff
	stx expl_cnt
L30D2:
	jsr L2F92
	ldx expl_cnt
	bne L30D2

	ldx #$ff
	stx expl_cnt
L30DD:
	jsr L2F92
	ldx expl_cnt
	bne L30DD
	rts

L2F92:
	dec expl_tmp
	beq L2F97
	rts
L2F97:
	lda #$1e
	sta expl_tmp
	dec expl_cnt
	sty expl_nr
	ldy expl_cnt
	lda $ff00,y
	and #$04
	sta $b002
	lda $f000,y
	ldy expl_nr
	and #$04
	sta $b002
	rts

expl_cnt:	.byte 0
expl_tmp:	.byte 0
expl_nr:	.byte 0