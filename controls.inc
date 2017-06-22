;---------------------------------------------
; Read key in matrix
;
; Controlflag
;	$00 = Keyboard
;	$40 = Joykey
;	$80 = JoyMMC
;
; Select row and read column:
;
; X = key to be checked
;
; columnbit = 0 - key pressed,
;             1 - key not pressed
;---------------------------------------------

controlflag = $90

readkey:
	tax
	bit controlflag		; Check controls
	bvs joykey		; Control = Joykey
	bmi joymmc		; Control = JoyMMC

; Control = Keyboard -------------------------

keyboard:
	lda key_row,x
	ora #$f0
	sta $b000		; Select row

	lda $b001		; Read column
	and key_column,x
	bne not_pressed
	lda key_return,x
	rts

not_pressed:
	lda #0
	rts

;-----------------------------------------------------------------
; Game Keys:
;
;  Z  = Left
;  X  = Right
;  ;  = Up
;  .  = Down
; RET = Fire
;  P  = Freeze
; CPY = Unfreeze
; ESC = Restart
;-----------------------------------------------------------------

;                      Z   X  RET  ;   .   P  CPY ESC JL  JR  JA  JU  JD
key_row:	.byte $01,$03,$06,$02,$09,$01,$05,$00,$00,$00,$00,$00,$00
key_column:	.byte $20,$20,$02,$04,$08,$10,$02,$20,$02,$08,$01,$10,$04
key_return:	.byte $80,$80,$80,$80,$80,$80,$80,$80,$80,$80,$80,$80,$80

; Control = Joykey ---------------------------

joykey:
	cpx #5
	bcs keyboard
	inx
	inx
	inx
	inx
	inx
	inx
	inx
	inx
	jmp keyboard

; Control = JoyMMC ---------------------------
;
; PB0  -  Right
; PB1  -  Left
; PB2  -  Down
; PB3  -  Up
; PB4  -  Jump
; PB5  -  nc
; PB6  -  nc
; PB7  -  nc
; GND  -  GND

joymmc:
	cpx #5
	bcs keyboard
	jsr joyget
	sta joy_scan
scan_l:
	cpx #0
	bne scan_r
	and #$02
	beq scan_no
	lda #$80
	rts
scan_r:
	cpx #1
	bne scan_a
	lda joy_scan
	and #$01
	beq scan_no
	lda #$80
	rts
scan_a:
	cpx #2
	bne scan_u
	lda joy_scan
	and #$10
	beq scan_no
	lda #$80
	rts
scan_u:
	cpx #3
	bne scan_d
	lda joy_scan
	and #$08
	beq scan_no
	lda #$80
	rts
scan_d:
	cpx #4
	bne scan_no
	lda joy_scan
	and #$04
	beq scan_no
	lda #$80
	rts
scan_no:
	lda #0
	rts

joy_scan:	.byte 0
