sound:
	sta note
	lda #0
snd_loop1:
	ldx note
snd_loop2:
	dex
	nop
	nop
	bne snd_loop2
	eor #4
	sta $b002
	dey
	bne snd_loop1
	rts

note:	.byte 0

noise:
	sta duration
n_loop:
	jsr L0B77
	ldy #2
	jsr sound
	dec duration
	bne n_loop
	rts
duration:	.byte 0
