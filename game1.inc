;
; Code equates
;

soundflag =1

L0000	= $00		; 10x lb enemy sprite address
L000A	= $0a		; 10x hb enemy sprite address
L0014	= $14		; 10x X-pos enemy
L001E	= $1e		; 10x Y-pos enemy
L0028	= $28		; 10x Status enemy, 0 = on, ff = off
L0032	= $32		; 10x lb enemy shadow screen address
L003C	= $3c		; 10x hb enemy shadow screen address

L0046	= $46           ; 10x ??
L0050	= $50		; 10x ??

L005A	= $5a		; Bullet1 Y-pos
L005B	= $5b		; Bullet2 Y-pos
L005C	= $5c		; Bullet3 Y-pos

L005D	= $5d		; Bullet1 X-pos
L005E	= $5e		; Bullet2 X-pos
L005F	= $5f		; Bullet3 X-pos

L0060	= $60		; Bullet1 sprite
L0061	= $61		; Bullet2 sprite
L0062	= $62		; Bullet3 sprite

L0063	= $63

L0077	= $77		; Temp mask byte
L007B	= $7b		; Bullets on screen

L007C	= $7c		; Map address pointer
L007D	= $7d

L007E	= $7e		; Temp sprite counter

L007F	= $7F		; Timer
L0080	= $80		; Level
L0081	= $81		; Lives

L0082	= $82		; Targets hit on background

L0083	= $83		; Deathflag, FF=ok, 0-8=ship explosion

L0084	= $84

L0085	= $85		; White screen slide up, 0=down, FF=up 

L0086	= $86		; Ship X-pos
L0087	= $87		; Ship Y-pos

L0088	= $88		; lb Shadow address ship
L0089	= $89		; hb Shadow address ship

L008A	= $8a		; Address
L008B	= $8b

L008C	= $8c
L008D	= $8d
L008E	= $8e
L008F	= $8f

L0091	= $91		; lb-score
L0092	= $92		; hb score

L0093	= $93		; Nr of enemies on the screen

L0094	= $94
L0095	= $95
L0096	= $96
L0097	= $97
L0098	= $98
L0099	= $99
L009A	= $9a
L009B	= $9b
L009C	= $9c

L00D0	= $d0
L00D1	= $d1
L00D2	= $d2
L00D3	= $d3
L00D4	= $d4
L00D5	= $d5
L00D6	= $d6
L00D7	= $d7
L00D8	= $d8
L00D9	= $d9
L00DA	= $da
L00DB	= $db
L00DC	= $dc
L00DD	= $dd

L00E0	= $e0		; lb Display address
L00E1	= $e1		; hb Display address

L00E2	= $e2		; lb Font address
L00E3	= $e3		; hb Font address

L00E4	= $e4
L00E5	= $e5		; First initial
L00E6	= $e6		; Second initial
L00E7	= $e7		; Third initial

L00E8	= $e8		; Temp X save

L00F8	= $f8		; lb Print string address
L00F9	= $f9		; hb Print string address

L00FC	= $fc		; A save IRQ

L05BA       = L05B9+1
L05BB       = L05B9+2
L05BD       = L05B9+4
L05BE       = L05B9+5
L05CA       = L05C9+1
L05CB       = L05C9+2
L05CD       = L05C9+4
L05CE       = L05C9+5
L05DA       = L05D9+1
L05DB       = L05D9+2
L05DD       = L05D9+4
L05DE       = L05D9+5
L067F       = L067E+1
L0680       = L067E+2
L068C       = L068B+1
L068D       = L068B+2
L0699       = L0698+1
L069A       = L0698+2
L085E       = L085C+2
L0CEF       = L0CEE+1
L0CF3       = L0CF2+1
L11B7       = L11B6+1
L11B8       = L11B6+2
L11BA       = L11B6+4
L11BB       = L11B6+5
L11BD       = L11B6+7
L11BE       = L11B6+8
L11C7       = L11C6+1
L11C8       = L11C6+2
L11CA       = L11C6+4
L11CB       = L11C6+5
L11CD       = L11C6+7
L11CE       = L11C6+8
L1278       = L1277+1
L1279       = L1277+2
L1280       = L127F+1
L1281       = L127F+2
L12D1       = L12D0+1
L12D2       = L12D0+2
L12D6       = L12D0+6
L12D7       = L12D0+7
L1795       = L1793+2

L6B38       = $8307	; Display top left row 0
L6C38       = $8407	; row 1
L6D38       = $8507	
L6E38       = $8607	
L6F38       = $8707	
L7038       = $8807	
L7138       = $8907	
L7238       = $8A07	
L7338       = $8B07	
L7438       = $8C07	
L7538       = $8D07	
L7638       = $8E07	
L7738       = $8F07	
L7838       = $9007	
L7938       = $9107	
L7A38       = $9207	
L7B38       = $9307	
L7C38       = $9407	; row 17

LFE40       = $FE40
LFE41       = $FE41
LFE43       = $FE43
LFE44       = $b804	; Timer VIA
LFE45       = $b805	; Timer VIA
LFE4B       = $FE4B
LFE4D       = $FE4D
LFE4E       = $FE4E
LFE4F       = $FE4F
LFE6E       = $FE6E

LFFF0       = $FFF0
LFFFC       = $FFFC
LFFFD       = $FFFD
LFFFF       = $FFFF
;
; Start of code
;
;            *= $0000
;

L0200:      .byte $CD
L0201:      .byte $D9
L0202:      .byte $CD
L0203:      .byte $D9
L0204:      .byte $EB
L0205:      .byte $00

;-------------------------------------------
; Background-level table 4x
;-------------------------------------------

            .byte <L1900
L0207:      .byte >L1900,<L1900,>L1900,<L2100,>L2100,<L2100,>L2100

L020E:      .byte <L2900
L020F:      .byte >L2900,<L2FAD,>L2FAD,<L36BC,>L36BC,<L3CA5,>L3CA5

;-------------------------------------------
; Buffer background enemy table 10x 32 bytes
;-------------------------------------------

L0216:      .byte <L5380,<L53A0,<L53C0,<L53E0,<L5480,<L54A0,<L54C0,<L54E0
            .byte <L5580,<L55A0

L0220:      .byte >L5380,>L53A0,>L53C0,>L53E0,>L5480,>L54A0,>L54C0,>L54E0
            .byte >L5580,>L55A0

;-------------------------------------------
; Ship sprite table 4x
;-------------------------------------------

; Mask

L022A:      .byte <L4804
L022B:      .byte >L4804,<L4894,>L4894,<L4924,>L4924,<L49B4,>L49B4

; Ship

L0232:      .byte <L5670
L0233:      .byte >L5670,<L5770,>L5770,<L5870,>L5870,<L5970,>L5970
            .byte <L5A70,>L5A70,<L5B70,>L5B70,<L5C70,>L5C70,<L5D70,>L5D70

;-------------------------------------------
;-------------------------------------------

L0242:      .byte $1E,$14,$1E,$1E

;-------------------------------------------
; Program entry
;-------------------------------------------

L0246:
	lda #$f0
	sta $b000

            lda #$4D               ; A9 4D
            sta L008C              ; 85 8C
            eor #$4A               ; 49 4A
            sta L008D              ; 85 8D
            eor #$41               ; 49 41
            sta L008E              ; 85 8E

;            lda LFFFC              ; AD FC FF
;            sta L0200              ; 8D 00 02
;            sta L0202              ; 8D 02 02
;            lda LFFFD              ; AD FD FF
;            sta L0201              ; 8D 01 02
;            sta L0203              ; 8D 03 02

;            lda #<L0BEB               ; A9 EB
;            sta L0204              ; 8D 04 02
;            lda #>L0BEB               ; A9 0B
;            sta L0205              ; 8D 05 02

;            lda #$7F               ; A9 7F
;            sta LFE4E              ; 8D 4E FE
;            sta LFE6E              ; 8D 6E FE
;            lda #$C2               ; A9 C2
;            sta LFE4E              ; 8D 4E FE
            lda #$00               ; A9 00
;            sta LFE4B              ; 8D 4B FE
            sta L007F              ; 85 7F
            sta L009A              ; 85 9A
            jmp L028A              ; 4C 8A 02

; Dummy
L0287:      jmp L0287              ; 4C 87 02

L028A:      cli                    ; 58

L028B:      ldx #$FF               ; A2 FF
;            txs                    ; 9A

            inx                    ; E8
            stx L0091              ; 86 91
            stx L0092              ; 86 92
            stx L0080              ; Level
            stx L008F              ; 86 8F
            stx L0084              ; 86 84

            lda #$04               ; A9 04
            sta L0081              ; Lives

            jsr L0946              ; Display intro screens 1+2

; Game loop

L02A0:      lda #$00               ; A9 00
            sta L0082              ; 85 82
            sta L008F              ; 85 8F

            jsr L0925              ; Find last position background

            jsr L0B80              ; Clear display
L02AC:      jsr L0302              ; Get Ready screen

            jsr L0CAF              ; Set background address $7C/7D
            jsr L03AF              ; Main game loop

            jsr L0B80              ; Clear display

            lda L0083              ; A5 83
            bmi L02C9              ; 30 0D

L02BC:      dec L0081              ; Decrement lives
            bpl L02AC              ; Check if lives are gone
            jsr L0319              ; Game Over screen
            jsr L179B              ; Check if score added to table
            jmp L028B              ; Restart

L02C9:      jsr L034E              ; Strafe run screen
            ldy L0080              ; Level
            lda L0082              ; A5 82
            cmp L0242,Y            ; D9 42 02
            jsr L0364              ; (UN)Successful screen
            bcs L02EB              ; Successfull run, add bonus + next level

            lda L0084              ; A5 84
            eor #$01               ; 49 01
            sta L0084              ; 85 84
            bne L02A0              ; D0 C0
            sta L0082              ; 85 82
            jsr L0CAF              ; Set background address map pointer
            jsr L0B80              ; Clear display
            jmp L02BC              ; 4C BC 02

;--------------------------------------------
; Add bonus (1000) to score + goto next level
;--------------------------------------------

L02EB:      lda L0091              ; A5 91
            clc                    ; 18
            adc #$64               ; 69 64
            sta L0091              ; 85 91
            bcc L02F6              ; 90 02
            inc L0092              ; E6 92

; Increment level

L02F6:      lda L0080              ; Level
            clc                    ; 18
            adc #$01               ; 69 01
            and #$03               ; 29 03
            sta L0080              ; Level
            jmp L02A0              ; 4C A0 02

;-------------------------------------------
; Get Ready screen
;-------------------------------------------

L0302:      jsr L0A40              ; 20 40 0A
            .byte $04,$06
            .byte "GET"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $02,$0A
            .byte "READY"
            .byte $00

            jmp L0B2D		   ; Fade shadow screen onto display

;-------------------------------------------
; Game Over screen
;-------------------------------------------

L0319:      jsr L0A40              ; 20 40 0A
            .byte $03,$06
            .byte "GAME"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $03,$0A
            .byte "OVER"
            .byte $00

            jsr L0B2D		   ; Fade shadow screen onto display
            jsr L0B80              ; Clear display
            jsr L0A40              ; 20 40 0A
            .byte $03,$05
            .byte "YOUR"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $02,$08
            .byte "SCORE"
            .byte $00

            jsr L174D
            jmp L0B2D		   ; Fade shadow screen onto display

;-------------------------------------------
; Strafe run screen
;-------------------------------------------

L034E:      jsr L0A40              ; 20 40 0A
            .byte $01,$02
            .byte "STRAFE"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $04,$05
            .byte "RUN"
            .byte $00
            rts                    ; 60

;-------------------------------------------
; (UN)Successful screen
;-------------------------------------------

L0364:      php
            bcs L038A

            jsr L0AC3
            .byte $01,$0A
            .byte "UNSUCCESSFUL"
            .byte $00

            jsr L0AC3
            .byte $03,$0D
            .byte "NO@BONUS"
            .byte $00

            jmp L03AA
L038A:
            jsr L0AC3
            .byte $02,$0A
            .byte "SUCCESSFUL"
            .byte $00

            jsr L0AC3
            .byte $02,$0D
            .byte "BONUS@1000"
            .byte $00
L03AA:
            jsr L0B2D              ; Fade shadow screen onto display
            plp                    ; 28
            rts                    ; 60

;-------------------------------------------
; Main game loop
;-------------------------------------------

L03AF:      ldx #$00               ; A2 00
            stx L007B              ; 86 7B
            stx L005A              ; 86 5A
            stx L005B              ; 86 5B
            stx L005C              ; 86 5C
            stx L0085              ; Set white screen slide down flag

            dex                    ; CA
            stx L0083              ; 86 83

            lda #$18               ; A9 18
            sta L0086              ; Ship X-pos
            lda #$70               ; A9 70
            sta L0087              ; Ship Y-pos

            jsr L0872              ; Fill buffer background from L6500 up
            jsr L0630              ; Plot shadow from ship
            jsr L0522              ; Calc ship screen address and plot

            ldx #$18               ; A2 18
            jsr L0BAB              ; 20 AB 0B
            jsr L08FD              ; Slide white screen down

            dec L0085              ; Set white screen slide up flag
            jsr L08FD              ; Slide white screen up

            jsr L05FA              ; Wipe ship
            jsr L129D              ; 20 9D 12
            jsr L1133              ; Plot all enemies
            jsr L0522              ; Calc ship screen address and plot

            lda #$07               ; A9 07
            sta L0CF3              ; 8D F3 0C

L03ED:      jsr L05FA              ; Wipe ship
            jsr L11EA              ; Check enemies
            jsr L076A              ; Check bullets
            jsr L06B6              ; Restore background shadow from ship
            jsr L0CCA              ; 20 CA 0C
            dec L0CF3              ; CE F3 0C
            bpl L0411              ; 10 10

            lda #$07               ; A9 07
            sta L0CF3              ; 8D F3 0C
            lda L007C              ; A5 7C
            clc                    ; 18
            adc #$0E               ; 69 0E
            sta L007C              ; 85 7C
            bcc L0411              ; 90 02
            inc L007D              ; E6 7D

L0411:      lda #$01               ; Check X
            jsr L0C83              ; Key check routine
            bpl L0423              ; 10 0B
            lda L0086              ; A5 86
            clc                    ; 18
            adc #$02               ; 69 02
            cmp #$2E               ; C9 2E
            bcs L0423              ; B0 02
            sta L0086              ; 85 86

L0423:      lda #$00               ; Check Z
            jsr L0C83              ; Key check routine
            bpl L0433              ; 10 09
            lda L0086              ; A5 86
            sec                    ; 38
            sbc #$02               ; E9 02
            bmi L0433              ; 30 02
            sta L0086              ; 85 86

L0433:      lda #$04               ; Check .
            jsr L0C83              ; Key check routine
            bpl L0445              ; 10 0B
            lda L0087              ; A5 87
            clc                    ; 18
            adc #$02               ; 69 02
            cmp #$9A               ; C9 9A
            bcs L0445              ; B0 02
            sta L0087              ; 85 87

L0445:      lda #$03               ; Check ;
            jsr L0C83              ; Key check routine
            bpl L0457              ; 10 0B
            lda L0087              ; A5 87
            sec                    ; 38
            sbc #$02               ; E9 02
            cmp #$32               ; C9 32
            bcc L0457              ; 90 02
            sta L0087              ; 85 87

L0457:
	lda #$07               ; Check ESC
	jsr L0C83              ; Key check routine
	bpl L0458              ; 10 0B
	lda #0
	sta L0081
	sta L0083
	rts

L0458:
	lda L0087
	sec
	sbc #$10
	lsr a
	lsr a
	lsr a
	sta L00E4
	lda L0086
	lsr a
	lsr a
	clc
	adc #$01
	sta L00E5

            ldy #$09               ; A0 09
L046C:      lda L0028,Y            ; Check if enemy on screen
            bmi L048C              ; If not, skip

            lda L0050,Y            ; B9 50 00
            bmi L048C              ; 30 16

            lda L001E,Y            ; Check Y-pos enemy/ship
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp L00E4              ; C5 E4
            bne L048C              ; D0 0C

            lda L0014,Y            ; Check X-pos enemy/ship
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp L00E5              ; C5 E5
            bne L048C              ; D0 03
            jmp L04D5              ; Hit ship with enemy 

L048C:      dey                    ; 88
            bpl L046C              ; 10 DD

            lda L0087              ; A5 87
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            tay                    ; A8
            dey                    ; 88
            dey                    ; 88
            lda L007C              ; A5 7C
            sec                    ; 38
            sbc L0C9D,Y            ; F9 9D 0C
            sta L00E2              ; 85 E2
            lda L007D              ; A5 7D
            sbc #$00               ; E9 00
            sta L00E3              ; 85 E3
            lda L0086              ; A5 86
            lsr A                  ; 4A
            lsr A                  ; 4A
            sec                    ; 38
            adc L00E2              ; 65 E2
            sta L00E2              ; 85 E2
            bcc L04B2              ; 90 02
            inc L00E3              ; E6 E3

L04B2:      ldy #$00               ; A0 00
            lda (L00E2),Y          ; B1 E2
            cmp #$F0               ; C9 F0
            bcc L04C0              ; 90 06
            cmp #$FD               ; C9 FD
            bcs L04C0              ; B0 02
            bcc L04D5              ; 90 15

L04C0:      lda L00E2              ; A5 E2
            sec                    ; 38
            sbc #$2A               ; E9 2A
            sta L00E2              ; 85 E2
            bcs L04CB              ; B0 02
            dec L00E3              ; C6 E3

L04CB:      lda (L00E2),Y          ; B1 E2
            cmp #$F0               ; C9 F0
            bcc L04F8              ; 90 27
            cmp #$FD               ; C9 FD
            bcs L04F8              ; B0 23

L04D5:      inc L0083              ; E6 83
            ldx #$06               ; A2 06
            jsr L0BAB              ; 20 AB 0B

L04DC:      jsr L0522              ; Calc ship screen address and plot

            ldx #$0A               ; A2 0A
L04E1:      jsr L10BB              ; Copy buffer to screen
            dex                    ; CA
            bne L04E1              ; D0 FA

            jsr L05FA              ; Wipe ship

            lda L0083              ; A5 83
            clc                    ; 18
            adc #$01               ; 69 01
            sta L0083              ; 85 83
            cmp #$08               ; C9 08
            bcc L04DC              ; 90 E7
            jmp L10BB              ; Copy buffer to screen

L04F8:      jsr L06F0              ; Create space between bullets at repeat fire
            jsr L0630              ; Plot shadow from ship
            jsr L073D              ; Plot bullets
            lda L0093              ; A5 93
            bne L0508              ; D0 03
            jsr L129D              ; 20 9D 12
L0508:      jsr L1133              ; Plot all enemies
            jsr L0522              ; Calc ship screen address and plot
            jsr L10BB              ; Copy buffer to screen

            lda #$05               ; Check P
            jsr L0C83              ; Key check routine
            bpl L051F              ; 10 07

L0518:      lda #$06               ; Check @
            jsr L0C83              ; Key check routine
            bpl L0518              ; 10 F9

L051F:      jmp L03ED              ; 4C ED 03

;---------------------------------------------
; Calc ship screen address and plot
;---------------------------------------------

crash:	.byte 10,20,30,40,50,60,70,80

L0522:
.if soundflag
	lda L0083
	bmi L0523
	tay
	lda crash,y
	ldy #5
	jsr sound
.endif

L0523:
            lda L0087              ; A5 87
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc #>L5200               ; 69 52
            sta L00E1              ; 85 E1
            sta L0089              ; 85 89
 
            lda L0086              ; A5 86
            and #$FC               ; 29 FC
            asl A                  ; 0A
            sta L00E0              ; 85 E0

            lda L0087              ; A5 87
            and #$07               ; 29 07
            ora L00E0              ; 05 E0
            sta L00E0              ; 85 E0
            sta L0088              ; 85 88

            lda L0083              ; A5 83
            bmi L0577              ; 30 34

.if soundflag
	cmp #7
	bne L0525
	jsr explode
L0525:
.endif

            asl A                  ; 0A
            tax                    ; AA
            lda L0232,X            ; BD 32 02
            sta L05BA              ; 8D BA 05
            sta L05CA              ; 8D CA 05
            sta L05DA              ; 8D DA 05

            clc                    ; 18
            adc #$48               ; 69 48
            sta L05BD              ; 8D BD 05
            sta L05CD              ; 8D CD 05
            sta L05DD              ; 8D DD 05

            lda L0233,X            ; BD 33 02
            sta L05BB              ; 8D BB 05
            sta L05CB              ; 8D CB 05
            sta L05DB              ; 8D DB 05

            adc #$00               ; 69 00
            sta L05BE              ; 8D BE 05
            sta L05CE              ; 8D CE 05
            sta L05DE              ; 8D DE 05

            jmp L05AC              ; Plot ship

L0577:      lda L0086              ; A5 86
            and #$03               ; 29 03
            asl A                  ; 0A
            tax                    ; AA
            lda L022A,X            ; BD 2A 02
            sta L05BA              ; 8D BA 05
            sta L05CA              ; 8D CA 05
            sta L05DA              ; 8D DA 05
            clc                    ; 18
            adc #$48               ; 69 48
            sta L05BD              ; 8D BD 05
            sta L05CD              ; 8D CD 05
            sta L05DD              ; 8D DD 05
            lda L022B,X            ; BD 2B 02
            sta L05BB              ; 8D BB 05
            sta L05CB              ; 8D CB 05
            sta L05DB              ; 8D DB 05
            adc #$00               ; 69 00
            sta L05BE              ; 8D BE 05
            sta L05CE              ; 8D CE 05
            sta L05DE              ; 8D DE 05

; Plot ship

L05AC:
            lda #$18               ; A9 18
            sta L007E              ; 85 7E

            ldx #$00               ; A2 00
L05B2:
            ldy #$00               ; A0 00
            lda (L00E0),Y          ; B1 E0
            sta L5270,X            ; 9D 70 52
L05B9:
            and LFFFF,X            ; 3D FF FF
            ora LFFFF,X            ; 1D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8

            ldy #$08               ; A0 08
            lda (L00E0),Y          ; B1 E0
            sta L5270,X            ; 9D 70 52
L05C9:
            and LFFFF,X            ; 3D FF FF
            ora LFFFF,X            ; 1D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8

            ldy #$10               ; A0 10
            lda (L00E0),Y          ; B1 E0
            sta L5270,X            ; 9D 70 52
L05D9:
            and LFFFF,X            ; 3D FF FF
            ora LFFFF,X            ; 1D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            inc L00E0              ; E6 E0
            lda L00E0              ; A5 E0
            and #$07               ; 29 07
            bne L05F5              ; D0 0B
            lda L00E0              ; A5 E0
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L00E0              ; 85 E0
            bcc L05F5              ; 90 02
            inc L00E1              ; E6 E1
L05F5:      dec L007E              ; C6 7E
            bne L05B2              ; D0 B9
            rts                    ; 60

;---------------------------------------------
; Wipe ship
;---------------------------------------------

L05FA:      lda #$18               ; A9 18
            sta L007E              ; 85 7E

            ldx #$00               ; A2 00
L0600:      ldy #$00               ; A0 00
            lda L5270,X            ; BD 70 52
            sta (L0088),Y          ; 91 88
            inx                    ; E8

            ldy #$08               ; A0 08
            lda L5270,X            ; BD 70 52
            sta (L0088),Y          ; 91 88
            inx                    ; E8

            ldy #$10               ; A0 10
            lda L5270,X            ; BD 70 52
            sta (L0088),Y          ; 91 88
            inx                    ; E8

            inc L0088              ; E6 88
            lda L0088              ; A5 88
            and #$07               ; 29 07
            bne L062B              ; D0 0B
            lda L0088              ; A5 88
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L0088              ; 85 88
            bcc L062B              ; 90 02
            inc L0089              ; E6 89

L062B:      dec L007E              ; C6 7E
            bne L0600              ; D0 D1
            rts                    ; 60

;---------------------------------------------
; Plot shadow from ship
;---------------------------------------------

L0630:      lda L0087              ; Calc ship shadow hb
            sec                    ; 38
            sbc #$08               ; E9 08
            tay                    ; A8
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc #>L5200               ; 69 52
            sta L00E1              ; 85 E1
            sta L008B              ; 85 8B

            lda L0086              ; Calc ship shadow lb
            clc                    ; 18
            adc #$03               ; 69 03
            tax                    ; AA
            and #$FC               ; 29 FC
            asl A                  ; 0A
            sta L00E0              ; 85 E0

            tya                    ; 98
            and #$07               ; 29 07
            ora L00E0              ; 05 E0
            sta L00E0              ; 85 E0
            sta L008A              ; 85 8A

            txa                    ; Get ship sprite address
            and #$03               ; 29 03
            asl A                  ; 0A
            tax                    ; AA
            lda L022A,X            ; BD 2A 02
            sta L067F              ; 8D 7F 06
            sta L068C              ; 8D 8C 06
            sta L0699              ; 8D 99 06

            lda L022B,X            ; BD 2B 02
            sta L0680              ; 8D 80 06
            sta L068D              ; 8D 8D 06
            sta L069A              ; 8D 9A 06

; Plot shadow from ship

            lda #$18               ; A9 18
            sta L007E              ; 85 7E

            ldx #$00               ; A2 00
L0677:      ldy #$00               ; A0 00
            lda (L00E0),Y          ; B1 E0
            sta L52B8,X            ; Column 1
L067E:
            and LFFFF,X            ; 3D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8

            ldy #$08               ; A0 08
            lda (L00E0),Y          ; B1 E0
            sta L52B8,X            ; Column 2
L068B:
            and LFFFF,X            ; 3D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8

            ldy #$10               ; A0 10
            lda (L00E0),Y          ; B1 E0
            sta L52B8,X            ; Column 3
L0698:
            and LFFFF,X            ; 3D FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            inc L00E0              ; E6 E0
            lda L00E0              ; A5 E0
            and #$07               ; 29 07
            bne L06B1              ; D0 0B
            lda L00E0              ; A5 E0
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L00E0              ; 85 E0
            bcc L06B1              ; 90 02
            inc L00E1              ; E6 E1
L06B1:      dec L007E              ; C6 7E
            bne L0677              ; D0 C2
            rts                    ; 60

;---------------------------------------------
; Restore background shadow from ship
;---------------------------------------------

L06B6:      lda #$18               ; A9 18
            sta L007E              ; 85 7E

            ldx #$00               ; A2 00
L06BC:      ldy #$00               ; A0 00
            lda L52B8,X            ; BD B8 52
            sta (L008A),Y          ; 91 8A
            inx                    ; E8

            ldy #$08               ; A0 08
            lda L52B8,X            ; BD B8 52
            sta (L008A),Y          ; 91 8A
            inx                    ; E8

            ldy #$10               ; A0 10
            lda L52B8,X            ; BD B8 52
            sta (L008A),Y          ; 91 8A
            inx                    ; E8

            inc L008A              ; E6 8A
            lda L008A              ; A5 8A
            and #$07               ; 29 07
            bne L06E7              ; D0 0B

            lda L008A              ; A5 8A
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L008A              ; 85 8A
            bcc L06E7              ; 90 02
            inc L008B              ; E6 8B

L06E7:      dec L007E              ; C6 7E
            bne L06BC              ; D0 D1
            rts                    ; 60

;---------------------------------------------
; Bullet sprite
;---------------------------------------------

L06EC:      .byte $80,$20,$08,$02

;---------------------------------------------
; Create space between bullets at repeat fire
;---------------------------------------------

L06F0:      lda L008F              ; A5 8F
            eor #$01               ; 49 01
            sta L008F              ; 85 8F
            beq L06FF              ; F0 07

            lda #$02               ; Check RET
            jsr L0C83              ; Key check routine
            bmi L0700              ; Bullet fired

L06FF:      rts                    ; 60

;---------------------------------------------
; Bullet fired
;---------------------------------------------

L0700:      lda L007B              ; Increment nr bullets on screen
            clc                    ; 18
            adc #$01               ; 69 01
            cmp #$04               ; Max 3
            bcs L06FF              ; B0 F6
            sta L007B              ; 85 7B

.if soundflag
	lda #70
	ldy #10
	jsr sound
.endif

            ldx #$00               ; A2 00
            jsr L0BAB              ; 20 AB 0B

            ldx #$00               ; Find free location
            lda L005A,X            ; B5 5A
            beq L071C              ; F0 06
            inx                    ; E8
            lda L005A,X            ; B5 5A
            beq L071C              ; F0 01
            inx                    ; E8

L071C:      lda L0086              ; Determine bullet sprite
            and #$03               ; 29 03
            tay                    ; A8
            lda L06EC,Y            ; B9 EC 06
            sta L0060,X            ; 95 60

            lda L0087              ; Calc bullet Y-pos
            and #$F8               ; 29 F8
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc #>L5200               ; 69 52
            sta L005A,X            ; 95 5A

            lda L0086              ; Calc bullet X-pos
            clc                    ; 18
            adc #$04               ; 69 04
            and #$FC               ; 29 FC
            asl A                  ; 0A
            sta L005D,X            ; 95 5D
            rts                    ; 60

;---------------------------------------------
; Plot bullets
;---------------------------------------------

L073D:      ldx #$00               ; A2 00
L073F:      stx L007E              ; 86 7E

            lda L005A,X            ; B5 5A
            beq L0762              ; F0 1D

            sta L00E1              ; 85 E1
            lda L005D,X            ; B5 5D
            sta L00E0              ; 85 E0
            lda L0060,X            ; B5 60
            sta L00E2              ; 85 E2

            txa                    ; 8A
            asl A                  ; 0A
            asl A                  ; 0A
            asl A                  ; 0A
            tax                    ; AA

            ldy #$07               ; Plot bullet
L0756:      lda (L00E0),Y          ; B1 E0
            sta L0063,X            ; 95 63
            ora L00E2              ; 05 E2
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            dey                    ; 88
            bpl L0756              ; 10 F4

L0762:      ldx L007E              ; A6 7E
            inx                    ; E8
            cpx #$03               ; E0 03
            bne L073F              ; D0 D6
            rts                    ; 60

;---------------------------------------------
;Check bullets
;---------------------------------------------

L076A:      ldx #$02               ; Calc hb bullet in shadow screen
L076C:      stx L007E              ; 86 7E
            lda L005A,X            ; B5 5A
            beq L07E5              ; F0 73
            sta L00E1              ; 85 E1

            lda L005D,X            ; Calc lb bullet in shadow screen
            sta L00E0              ; 85 E0
            txa                    ; 8A
            asl A                  ; 0A
            asl A                  ; 0A
            asl A                  ; 0A
            tax                    ; AA

            ldy #$07               ; Plot bullet sprite
L077F:      lda L0063,X            ; B5 63
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            dey                    ; 88
            bpl L077F              ; 10 F8

            ldx L007E              ; A6 7E
            jsr L07E9              ; 20 E9 07

            ldx L007E              ; A6 7E
            lda L005A,X            ; B5 5A
            beq L07E5              ; F0 53

            sec                    ; 38
            sbc #$01               ; E9 01
            cmp #$54               ; C9 54
            bcc L07D6              ; 90 3D
            sta L005A,X            ; 95 5A
            sta L00E5              ; 85 E5

            sec                    ; 38
            sbc #$53               ; E9 53
            tay                    ; A8

            lda L007C              ; A5 7C
            sec                    ; 38
            sbc L0C9D,Y            ; F9 9D 0C
            sta L00E2              ; 85 E2

            lda L007D              ; A5 7D
            sbc #$00               ; E9 00
            sta L00E3              ; 85 E3

            lda L00E0              ; A5 E0
            sta L00E4              ; 85 E4

            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc L00E2              ; 65 E2
            sta L00E2              ; 85 E2
            bcc L07BF              ; 90 02
            inc L00E3              ; E6 E3

L07BF:      ldy #$00               ; A0 00
            lda (L00E2),Y          ; B1 E2

            cmp #$F0               ; C9 F0
            bcc L07E5              ; 90 1E
            cmp #$FD               ; C9 FD
            bcc L07D6              ; 90 0B
            bne L07E5              ; D0 18

            lda #$FE               ; A9 FE
            sta (L00E2),Y          ; 91 E2
            jsr L0849              ; 20 49 08
            inc L0082              ; E6 82

L07D6:      ldx L007E              ; A6 7E
            lda L007B              ; A5 7B
            sec                    ; 38
            sbc #$01               ; E9 01
            bmi L07E1              ; 30 02
            sta L007B              ; 85 7B
L07E1:      lda #$00               ; A9 00
            sta L005A,X            ; 95 5A
L07E5:      dex                    ; CA
            bpl L076C              ; 10 84
            rts                    ; 60

;--------------------------------------------
; Check hit enemies
;--------------------------------------------

L07E9:
            lda L00E1              ; A5 E1
            sec                    ; 38
            sbc #$54               ; E9 54
            sta L00E4              ; 85 E4
            lda L00E0              ; A5 E0
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            sta L00E5              ; 85 E5

            ldy #$09               ; A0 09
L07F9:      lda L001E,Y            ; B9 1E 00
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp L00E4              ; C5 E4
            bne L0845              ; D0 42
            lda L0014,Y            ; B9 14 00
            lsr A                  ; 4A
            lsr A                  ; 4A
            cmp L00E5              ; C5 E5
            beq L0813              ; F0 07
            clc                    ; 18
            adc #$01               ; 69 01
            cmp L00E5              ; C5 E5
            bne L0845              ; D0 32

L0813:      lda L0050,Y            ; B9 50 00
            bmi L0845              ; 30 2D

            lda #<L166A               ; A9 6A
            sta L0000,Y            ; 99 00 00
            lda #>L166A               ; A9 16
            sta L000A,Y            ; 99 0A 00

            lda L007B              ; A5 7B
            sec                    ; 38
            sbc #$01               ; E9 01
            bmi L082B              ; 30 02
            sta L007B              ; 85 7B

L082B:      lda #$00               ; A9 00
            sta L005A,X            ; 95 5A
            lda #$FF               ; A9 FF
            sta L0050,Y            ; 99 50 00

            ldx #$0C               ; A2 0C
            jsr L0BAB              ; 20 AB 0B

            lda L0091              ; A5 91
            clc                    ; 18
            adc #$0A               ; 69 0A
            sta L0091              ; 85 91
            bcc L0844              ; 90 02
            inc L0092              ; E6 92
L0844:

.if soundflag
	lda #10
	jsr noise		; Exploding enemy
.endif

            rts                    ; 60

L0845:      dey                    ; 88
            bpl L07F9              ; 10 B1
            rts                    ; 60

;--------------------------------------------
;--------------------------------------------

L0849:      ldx #$12               ; A2 12
            jsr L0BAB              ; 20 AB 0B

            inc L0091              ; Increment score with 10
            bne L0854              ; D0 02
            inc L0092              ; E6 92

L0854:      ldx #$00               ; A2 00

            lda L0CF3              ; AD F3 0C
            eor #$07               ; 49 07
            tay                    ; A8
L085C:      lda LFFF0,X            ; BD F0 FF
            sta (L00E4),Y          ; 91 E4
            inx                    ; E8
            cpx #$08               ; E0 08
            beq L0871              ; F0 0B
            iny                    ; C8
            cpy #$08               ; C0 08
            bne L085C              ; D0 F1

            ldy #$00               ; A0 00
            inc L00E5              ; E6 E5
            bne L085C              ; D0 EB

L0871:      rts                    ; 60

;--------------------------------------------
; Fill buffer background from L6500 up
;
; $7C/7D = Startaddress background level
; $E0/E1 = Buffer address
; $E2/E3 = Background tile address
;--------------------------------------------

L0872:      lda #>L6500               ; Last line
            sta L00E3              ; 85 E3
            lda #<L6500               ; A9 00
            sta L00E2              ; 85 E2

            lda #$11               ; A9 11
            sta L007E              ; 85 7E

L087E:      ldx #$0D               ; A2 0D
L0880:      ldy #$00               ; A0 00
            sty L00E1              ; 84 E1
            lda (L007C),Y          ; B1 7C
            asl A                  ; 0A
            rol L00E1              ; 26 E1
            asl A                  ; 0A
            rol L00E1              ; 26 E1
            asl A                  ; 0A
            rol L00E1              ; 26 E1
	clc
	adc #<L1900
            sta L00E0              ; 85 E0
            lda L00E1              ; A5 E1
            clc                    ; 18
            adc L0CEF              ; 6D EF 0C
            sta L00E1              ; 85 E1

            ldy #$07               ; A0 07
L089B:      lda (L00E0),Y          ; B1 E0
            sta (L00E2),Y          ; 91 E2
            dey                    ; 88
            bpl L089B              ; 10 F9

            lda L007C              ; A5 7C
            clc                    ; 18
            adc #$01               ; 69 01
            sta L007C              ; 85 7C
            bcc L08AD              ; 90 02
            inc L007D              ; E6 7D

L08AD:      lda L00E2              ; A5 E2
            clc                    ; 18
            adc #$08               ; 69 08
            sta L00E2              ; 85 E2
            bcc L08B8              ; 90 02
            inc L00E3              ; E6 E3

L08B8:      dex                    ; CA
            bpl L0880              ; 10 C5

            lda L00E2              ; A5 E2
            sec                    ; 38
            sbc #$70               ; E9 70
            sta L00E2              ; 85 E2
            lda L00E3              ; A5 E3
            sec                    ; 38
            sbc #$01               ; E9 01
            sta L00E3              ; 85 E3
            dec L007E              ; C6 7E
            bpl L087E              ; 10 B1
            rts                    ; 60

;--------------------------------------------
; Draw 1 white into display
;
; Y = Cursor Y
;
; $85 = $00 -> Slide window down
;       $ff -> Slide window up and copy shadow
;
; $E0/E1 = Display address
; $E2/E3 = Shadow address
;--------------------------------------------

L08CE:      tya                    ; Set displayadress = Y/8+$6B38
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc #>L6B38               ; Set hb display address
            sta L00E1              ; 85 E1

            sec                    ; Set shadow address = Y/8+$5400
            sbc #$2f               ; Display - $2f00 = shadow
            sta L00E3              ; 85 E3

            tya                    ; 98
            and #$07               ; 29 07
            tay                    ; A8
	lda display,y
	clc
	adc #<L6B38

;            lda #<L6B38               ; Set lb display address
            sta L00E0              ; 85 E0
            lda #$00               ; Set lb shadow address
            sta L00E2              ; 85 E2

	lda #0
	sta counter
            ldx #$0D               ; A2 0D
L08EA:      lda (L00E2),Y          ; B1 E2
            bit L0085              ; 24 85
            bmi L08F2              ; 30 02

            lda #$FF               ; Set white screen
L08F2:
	sty tmp_y
	ldy counter
            sta (L00E0),Y          ; 91 E0
	ldy tmp_y

            tya                    ; Set to 1 byte right
            clc                    ; 18
            adc #$08               ; 69 08
            tay                    ; A8
	inc counter
            dex                    ; CA
            bpl L08EA              ; 10 EE

.if soundflag
	lda #4
	jsr noise		; Sliding window
.endif

            rts                    ; 60

counter:	.byte 0
tmp_y:		.byte 0

;--------------------------------------------
; Slide white screen down and copy shadow in
; display when sliding screen up
;--------------------------------------------

L08FD:      ldy L007E              ; A4 7E
            jsr L08CE              ; Slide white window 1 line down into display
            lda L007E              ; A5 7E
            eor #$FF               ; 49 FF
            sec                    ; 38
            sbc #$70               ; E9 70
            tay                    ; A8
            jsr L08CE              ; Slide white window 1 line down into display

            lda L007F              ; A5 7F
L090F:      cmp L007F              ; Wait loop
;            beq L090F              ; F0 FC
;	jsr $fe66
;	jsr $fe66

            inc L007E              ; E6 7E
            lda L007E              ; A5 7E
            bit L0085              ; 24 85
            bpl L0920              ; 10 05
            cmp #$90               ; C9 90
            bne L08FD              ; D0 DE
            rts                    ; End slide up

L0920:      cmp #$48               ; C9 48
            bne L08FD              ; D0 D9
            rts                    ; End slide down

;-------------------------------------------
; Find last position background
;-------------------------------------------

L0925:      lda #>(L437C-1)               ; A9 43
            sta L00E1              ; 85 E1
            lda #<(L437C-1)               ; A9 7B
            sta L00E0              ; 85 E0

            ldy #$00               ; A0 00
L092F:      lda (L00E0),Y          ; B1 E0
            cmp #$FE               ; C9 FE
            bne L0939              ; D0 04

            lda #$FD               ; A9 FD
            sta (L00E0),Y          ; 91 E0

L0939:      dec L00E0              ; C6 E0
            bne L092F              ; D0 F2

            dec L00E1              ; C6 E1
            lda L00E1              ; A5 E1
            cmp #>L2900               ; C9 29
            bcs L092F              ; B0 EA

            rts                    ; 60

;-------------------------------------------
; Intro screens 
;-------------------------------------------

; Intro screen 1

L0946:      jsr L0B80              ; Clear display
            jsr L0A40              ; 20 40 0A
            .byte $04,$1
            .byte "WAR"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $06,$04
            .byte "BY"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $00,$07
            .byte "MICHAEL"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $01,$0A
            .byte "ARCHER"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $00,$0E
            .byte "COPYRIGHT@1986"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$0F
            .byte "SOFTWARE"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $00,$10
            .byte "COMMUNICATIONS"
            .byte $00

; Intro screen 2

            jsr L0B2D              ; Fade shadow screen onto display
            jsr L0A34              ; Wait loop
            jsr L0B80              ; Clear display

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$01
            .byte "GRAPHICS"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $06,$03
            .byte "BY"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$05
            .byte "MJA@JAS"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $02,$07
            .byte "TUBS@MARK"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $02,$0B
            .byte "THANKS@TO"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$0D
            .byte "MP@DW@MC"
            .byte $00
            jsr L0AC3              ; 20 C3 0A
            .byte $03,$0E
            .byte "DW@RB@CG"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$0F
            .byte "RW@PV@HP"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$10
            .byte "TM@RB@ND"
            .byte $00

            jsr L0B2D              ; Fade shadow screen onto display
            jsr L0A34              ; Wait loop
            jmp L16C0              ; High score screen

; Wait loop countdown timer

L0A34:      ldy #$28               ; A0 28
L0A36:      lda L007F              ; A5 7F
            cmp L007F              ; C5 7F
;            beq L0A36              ; F0 FA
            dey                    ; 88
            bne L0A36              ; D0 F7
            rts                    ; 60

;-------------------------------------------
; Print String in 16x16 characters
; Stackpointer at X,Y,String,$00
; $F8/F9 = Stringpointer
; $E0/E1 = Cursor pointer
;-------------------------------------------

L0A40:      pla                    ; Set stringaddress
            sta L00F8              ; 85 F8
            pla                    ; 68
            sta L00F9              ; 85 F9

            ldy #$01               ; Set cursoraddress
            lda (L00F8),Y          ; Read X
            asl A                  ; 0A
            asl A                  ; 0A
            asl A                  ; 0A
            sta L00E0              ; 85 E0

            iny                    ; Read Y
            lda (L00F8),Y          ; B1 F8
            clc                    ; 18
            adc #>L5400               ; Add hi-byte shadow screen
            sta L00E1              ; 85 E1

            lda L00F8              ; Set pointer to start string
            clc                    ; 18
            adc #$03               ; 69 03
            sta L00F8              ; 85 F8
            bcc L0A62              ; 90 02
            inc L00F9              ; E6 F9

L0A62:      ldy #$00               ; A0 00
            lda (L00F8),Y          ; Read character
            beq L0A73              ; Return if $00

            jsr L0A7A              ; Display character 16x16

            inc L00F8              ; Next char
            bne L0A62              ; D0 F3
            inc L00F9              ; E6 F9
            bne L0A62              ; D0 EF

L0A73:      lda L00F9              ; Set returnaddress
            pha                    ; 48
            lda L00F8              ; A5 F8
            pha                    ; 48
            rts                    ; 60

;-------------------------------------------
; Display character 16x16 in A
; $E2/E3 = Font address
; $E0/E1 = Cursor pointer
;-------------------------------------------


L0A7A:      ldy #$00               ; A0 00
            sty L00E3              ; 84 E3

            sec                    ; 38
            sbc #$40               ; @=0
            asl A                  ; Multiply by 32
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3

            adc #<L44A4               ; 69 A4
            sta L00E2              ; 85 E2
            lda L00E3              ; A5 E3
            adc #>L44A4               ; 69 44
            sta L00E3              ; 85 E3

            ldy #$0F               ; Display top 16x8 char
L0A9C:      lda (L00E2),Y          ; B1 E2
            sta (L00E0),Y          ; 91 E0
            dey                    ; 88
            bpl L0A9C              ; 10 F9

            inc L00E1              ; Cursor 2 char right
            lda L00E2              ; A5 E2
            clc                    ; 18
            adc #$10               ; 69 10
            sta L00E2              ; 85 E2

            bcc L0AB0              ; 90 02
            inc L00E3              ; E6 E3

L0AB0:      ldy #$0F               ; Display bottom 16x8 char
L0AB2:      lda (L00E2),Y          ; B1 E2
            sta (L00E0),Y          ; 91 E0
            dey                    ; 88
            bpl L0AB2              ; 10 F9

            dec L00E1              ; C6 E1
            lda L00E0              ; A5 E0
            clc                    ; 18
            adc #$10               ; 69 10
            sta L00E0              ; 85 E0
            rts                    ; 60

;-------------------------------------------
; Print String in 8x8 characters
; Stackpointer at X,Y,String,$00
; $F8/F9 = Stringpointer
; $E0/E1 = Cursor pointer
;-------------------------------------------

L0AC3:      pla                    ; Set stringaddress
            sta L00F8              ; 85 F8
            pla                    ; 68
            sta L00F9              ; 85 F9

            ldy #$01               ; Set Cursor address
            lda (L00F8),Y          ; Read X
            asl A                  ; 0A
            asl A                  ; 0A
            asl A                  ; 0A
            sta L00E0              ; 85 E0

            iny                    ; C8
            lda (L00F8),Y          ; Read Y
            clc                    ; 18
            adc #>L5400               ; Add hi-byte shadow screen
            sta L00E1              ; 85 E1

            lda L00F8              ; Set pointer to start string
            clc                    ; 18
            adc #$03               ; 69 03
            sta L00F8              ; 85 F8
            bcc L0AE5              ; 90 02
            inc L00F9              ; E6 F9

L0AE5:      ldy #$00               ; A0 00
            lda (L00F8),Y          ; Read character
            beq L0AFD              ; Return if $00

            jsr L0B04              ; Display character 8x8

            lda L00E0              ; Cursor 1 char right
            clc                    ; 18
            adc #$08               ; 69 08
            sta L00E0              ; 85 E0

            inc L00F8              ; Next char
            bne L0AE5              ; D0 EC
            inc L00F9              ; E6 F9
            bne L0AE5              ; D0 E8

L0AFD:      lda L00F9              ; Set returnaddress
            pha                    ; 48
            lda L00F8              ; A5 F8
            pha                    ; 48
            rts                    ; 60

;-------------------------------------------
; Display character 8x8 in A
; $E2/E3 = Font address
; $E0/E1 = Cursor pointer
;-------------------------------------------

L0B04:      ldy #$00               ; A0 00
            sty L00E3              ; 84 E3

            cmp #$3A               ; Check if number
            bcs L0B0E              ; Is char, skip
            adc #$2C               ; Is number, point to number

L0B0E:      sbc #$40               ; @=0
            asl A                  ; Multiply by 8
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3
            asl A                  ; 0A
            rol L00E3              ; 26 E3

            adc #<L437C               ; Add font base address
            sta L00E2              ; 85 E2
            lda L00E3              ; A5 E3
            adc #>L437C               ; 69 43
            sta L00E3              ; 85 E3

            ldy #$07               ; Display 8x8 char
L0B25:      lda (L00E2),Y          ; B1 E2
            sta (L00E0),Y          ; 91 E0
            dey                    ; 88
            bpl L0B25              ; 10 F9

            rts                    ; 60

;-------------------------------------------
; Fade shadow screen onto display
; $E0/E1 = Display address
; $E2/E3 = Shadow screen address
; $E4/E5 = Random fade byte between #E000-#FFFF
;-------------------------------------------

L0B2D:      ldx #$14               ; Repeat counter
	stx tmp_x

L0B2F:      lda #<L6B38               ; Set top left display address
            sta L00E0              ; 85 E0
            lda #>L6B38               ; A9 6B
            sta L00E1              ; 85 E1

            lda #>L5400               ; Set address shadow screen
            sta L00E3              ; 85 E3
            lda #<L5400               ; A9 00
            sta L00E2              ; 85 E2

L0B3F:      jsr L0B77              ; Get random number
            and #$F0               ; 29 F0
            ora #$E0               ; 09 E0
            sta L00E5              ; Set hb at #E0 or #F0
 
            jsr L0B77              ; Get random number
            sta L00E4              ; 85 E4

            ldx #$00               ; A0 00
L0B4F:
	ldy display,x
            lda (L00E0),Y          ; Get display byte
            and (L00E4),Y          ; Fade with random byte
            sta L0077              ; Save byte

            lda (L00E4),Y          ; Get random byte
            eor #$FF               ; Invert
	pha
	txa
	tay
	pla
            and (L00E2),Y          ; AND with shadow screen byte
            ora L0077              ; ORA with save byte  
	ldy display,x
            sta (L00E0),Y          ; Display byte 

;            iny                    ; C8
;            cpy #$70               ; C0 70
	inx
	cpx #$70
            bne L0B4F              ; D0 EB

	ldx tmp_x

            inc L00E3              ; Next shadowscreen byte
            inc L00E1              ; Next display byte

            lda L00E1              ; A5 E1
            cmp #$95               ; Check for end of display screen
            bne L0B3F              ; D0 D1

            ldy #$01               ; A0 01
            jsr L0A36              ; Wait loop

            dec tmp_x                    ; CA
            bne L0B2F              ; D0 B9
            rts                    ; 60

tmp_x:	.byte 0

; Get random number

L0B77:      lda LFE44              ; AD 44 FE
            eor LFE45              ; 4D 45 FE
            eor L007F              ; 45 7F
	inc L007F
            rts                    ; 60

;-------------------------------------------
; Clear display
;-------------------------------------------

L0B80:      ldx #$14               ; A2 14

            lda #>L5200               ; A9 52
            sta L00E1              ; 85 E1
            lda #<L5200               ; A9 00
            sta L00E0              ; 85 E0

L0B8A:      ldy #$6F               ; A0 6F
L0B8C:      lda #$00               ; A9 00
            sta (L00E0),Y          ; 91 E0
            dey                    ; 88
            bpl L0B8C              ; 10 F9
            inc L00E1              ; E6 E1
            dex                    ; CA
            bpl L0B8A              ; 10 F2
            rts                    ; 60

;-------------------------------------------

L0B99:      sta LFE4F              ; 8D 4F FE
            ldx #$00               ; A2 00
            stx LFE40              ; 8E 40 FE
            nop                    ; EA
            nop                    ; EA
            nop                    ; EA
            nop                    ; EA
            ldx #$08               ; A2 08
            stx LFE40              ; 8E 40 FE
            rts                    ; 60

L0BAB:      sei                    ; 78
            ldy #$00               ; A0 00
L0BAE:      lda L0BCD,X            ; BD CD 0B
            sta L0094,Y            ; 99 94 00
            inx                    ; E8
            iny                    ; C8
            cpy #$06               ; C0 06
            bne L0BAE              ; D0 F4

            lda L0099              ; A5 99
            sta L009B              ; 85 9B
            lda #$F0               ; A9 F0
            sta L009C              ; 85 9C
            lda #$E7               ; A9 E7
            jsr L0B99              ; 20 99 0B
            lda #$01               ; A9 01
            sta L009A              ; 85 9A
            cli                    ; 58
            rts                    ; 60

L0BCD:      .byte $05,$02,$01,$10,$0A,$02
            .byte $00,$00,$01,$10,$1E,$02
            .byte $05,$00,$01,$11,$0C,$04
            .byte $02,$00,$00,$11,$03,$02
            .byte $01,$08,$00,$10,$1D,$05

;-------------------------------------------
; IRQ routine
;-------------------------------------------

L0BEB:
;            txa                    ; 8A
;            pha                    ; 48
;            tya                    ; 98
;            pha                    ; 48
;            lda #$02               ; A9 02
;            bit LFE4D              ; 2C 4D FE
;            bvs L0C12              ; 70 1C
;            beq L0C0B              ; F0 13
;
;            lda #$E0               ; A9 E0
;            sta LFE44              ; 8D 44 FE
;            lda #$39               ; A9 39
;            sta LFE45              ; 8D 45 FE
;
;            lda LFE41              ; AD 41 FE
;            lda L009A              ; A5 9A
;            cmp #$01               ; C9 01
;            beq L0C1E              ; F0 13
;
;L0C0B:      pla                    ; 68
;            tay                    ; A8
;            pla                    ; 68
;            tax                    ; AA
;            lda L00FC              ; A5 FC
;            rti                    ; 40
;
; 
;
;L0C12:      dec L007F              ; Decrement counter
;            lda LFE44              ; AD 44 FE
;            pla                    ; 68
;            tay                    ; A8
;            pla                    ; 68
;            tax                    ; AA
;            lda L00FC              ; A5 FC
;            rti                    ; 40
;
;L0C1E:      dec L009B              ; C6 9B
;            bne L0C0B              ; D0 E9
;
;            lda #$FF               ; A9 FF
;            sta LFE43              ; 8D 43 FE
;
;            sei                    ; 78
;            lda L0099              ; A5 99
;            sta L009B              ; 85 9B
;            dec L0098              ; C6 98
;            beq L0C5C              ; F0 2C
;            lda L0096              ; A5 96
;            clc                    ; 18
;            adc L0094              ; 65 94
;            sta L0094              ; 85 94
;            lda #$C0               ; A9 C0
;            jsr L0B99              ; 20 99 0B
;            lda L0094              ; A5 94
;            and #$3F               ; 29 3F
;            jsr L0B99              ; 20 99 0B
;            lda L0097              ; A5 97
;            clc                    ; 18
;            adc L0095              ; 65 95
;            sta L0095              ; 85 95
;            and #$0F               ; 29 0F
;            ora L009C              ; 05 9C
;            jsr L0B99              ; 20 99 0B
;            and #$0F               ; 29 0F
;            ora L009C              ; 05 9C
;            jsr L0B99              ; 20 99 0B
;            cli                    ; 58
;            jmp L0C0B              ; 4C 0B 0C
;
;L0C5C:      lda #$DF               ; A9 DF
;            jsr L0B99              ; 20 99 0B
;            lda #$FF               ; A9 FF
;            jsr L0B99              ; 20 99 0B
;            cli                    ; 58
;            lda #$00               ; A9 00
;            sta L009A              ; 85 9A
;            beq L0C0B              ; F0 9E
L0C6D:      ldy #$08               ; A0 08
L0C6F:      lda L008C              ; A5 8C
            and #$48               ; 29 48
            adc #$38               ; 69 38
            asl A                  ; 0A
            asl A                  ; 0A
            rol L008E              ; 26 8E
            rol L008D              ; 26 8D
            rol L008C              ; 26 8C
            dey                    ; 88
            bne L0C6F              ; D0 EF
            lda L008C              ; A5 8C
            rts                    ; 60

;--------------------------------------------
; Key check routine
;
; A = key to check, A= #80 is pressed
;--------------------------------------------

L0C83	= readkey


;            sei                    ; 78

;            ldx #$03               ; Stop autoscan
;            stx LFE40              ; 8E 40 FE
;            ldx #$7F               ; PA0-6 output
;            stx LFE43              ; 8E 43 FE

;            sta LFE4F              ; Key to read
;            lda LFE4F              ; #80 if key pressed
;            php                    ; 08
;            ldx #$0B               ; A2 0B

;            stx LFE40              ; 8E 40 FE
;            plp                    ; 28

;            cli                    ; 58
;            rts                    ; 60

;-------------------------------------------

L0C9D:      .byte $00,$0E,$1C,$2A,$38,$46,$54,$62
            .byte $70,$7E,$8C,$9A,$A8,$B6,$C4,$D2
            .byte $E0,$EE

;-------------------------------------------
; Set background address $7C/7D
;-------------------------------------------

L0CAF:      lda L0080              ; A5 80
            asl A                  ; 0A
            tay                    ; A8
            lda L020E,Y            ; B9 0E 02
            sta L007C              ; 85 7C
            lda L020F,Y            ; B9 0F 02
            sta L007D              ; 85 7D
            lda L0207,Y            ; B9 07 02
            sta L0CEF              ; 8D EF 0C
            clc                    ; 18
            adc #$07               ; 69 07
            sta L085E              ; 8D 5E 08
            rts                    ; 60

;-------------------------------------------

L0CCA:      lda L007D              ; A5 7D
            sta L00E5              ; 85 E5
            lda L007C              ; A5 7C
            sta L00E4              ; 85 E4

            ldx #$0D               ; A2 0D
L0CD4:      ldy #$00               ; A0 00
            sty L00E1              ; 84 E1
            lda (L00E4),Y          ; B1 E4
            cmp #$FF               ; C9 FF
            bne L0CE1              ; D0 03
            pla                    ; 68
            pla                    ; 68
            rts                    ; 60

L0CE1:      asl A                  ; 0A
            rol L00E1              ; 26 E1
            asl A                  ; 0A
            rol L00E1              ; 26 E1
            asl A                  ; 0A
            rol L00E1              ; 26 E1
;	clc
;	adc #<L1900
            sta L00E0              ; 85 E0
            lda L00E1              ; A5 E1
L0CEE:
            adc #$FF               ; 69 FF
            sta L00E1              ; 85 E1
L0CF2:
            ldy #$07               ; A0 07
            lda (L00E0),Y          ; B1 E0
            sta L00D0,X            ; 95 D0
            lda L00E4              ; A5 E4
            clc                    ; 18
            adc #$01               ; 69 01
            sta L00E4              ; 85 E4
            bcc L0D03              ; 90 02
            inc L00E5              ; E6 E5
L0D03:      dex                    ; CA
            bpl L0CD4              ; 10 CE
            lda L00DD              ; A5 DD
            sta L5307              ; 8D 07 53
            lda L00DC              ; A5 DC
            sta L530F              ; 8D 0F 53
            lda L00DB              ; A5 DB
            sta L5317              ; 8D 17 53
            lda L00DA              ; A5 DA
            sta L531F              ; 8D 1F 53
            lda L00D9              ; A5 D9
            sta L5327              ; 8D 27 53
            lda L00D8              ; A5 D8
            sta L532F              ; 8D 2F 53
            lda L00D7              ; A5 D7
            sta L5337              ; 8D 37 53
            lda L00D6              ; A5 D6
            sta L533F              ; 8D 3F 53
            lda L00D5              ; A5 D5
            sta L5347              ; 8D 47 53
            lda L00D4              ; A5 D4
            sta L534F              ; 8D 4F 53
            lda L00D3              ; A5 D3
            sta L5357              ; 8D 57 53
            lda L00D2              ; A5 D2
            sta L535F              ; 8D 5F 53
            lda L00D1              ; A5 D1
            sta L5367              ; 8D 67 53
            lda L00D0              ; A5 D0
            sta L536F              ; 8D 6F 53

; Scroll shadowscreen down

            ldy #$00               ; A0 00

L0D4E:      lda L6506,Y            ; Line 1
            sta L6507,Y            ; 99 07 65
            lda L6505,Y            ; B9 05 65
            sta L6506,Y            ; 99 06 65
            lda L6504,Y            ; B9 04 65
            sta L6505,Y            ; 99 05 65
            lda L6503,Y            ; B9 03 65
            sta L6504,Y            ; 99 04 65
            lda L6502,Y            ; B9 02 65
            sta L6503,Y            ; 99 03 65
            lda L6501,Y            ; B9 01 65
            sta L6502,Y            ; 99 02 65
            lda L6500,Y            ; B9 00 65
            sta L6501,Y            ; 99 01 65
            lda L6407,Y            ; B9 07 64
            sta L6500,Y            ; 99 00 65

            lda L6406,Y            ; Line 2
            sta L6407,Y            ; 99 07 64
            lda L6405,Y            ; B9 05 64
            sta L6406,Y            ; 99 06 64
            lda L6404,Y            ; B9 04 64
            sta L6405,Y            ; 99 05 64
            lda L6403,Y            ; B9 03 64
            sta L6404,Y            ; 99 04 64
            lda L6402,Y            ; B9 02 64
            sta L6403,Y            ; 99 03 64
            lda L6401,Y            ; B9 01 64
            sta L6402,Y            ; 99 02 64
            lda L6400,Y            ; B9 00 64
            sta L6401,Y            ; 99 01 64
            lda L6307,Y            ; B9 07 63
            sta L6400,Y            ; 99 00 64

            lda L6306,Y            ; Line 3
            sta L6307,Y            ; 99 07 63
            lda L6305,Y            ; B9 05 63
            sta L6306,Y            ; 99 06 63
            lda L6304,Y            ; B9 04 63
            sta L6305,Y            ; 99 05 63
            lda L6303,Y            ; B9 03 63
            sta L6304,Y            ; 99 04 63
            lda L6302,Y            ; B9 02 63
            sta L6303,Y            ; 99 03 63
            lda L6301,Y            ; B9 01 63
            sta L6302,Y            ; 99 02 63
            lda L6300,Y            ; B9 00 63
            sta L6301,Y            ; 99 01 63
            lda L6207,Y            ; B9 07 62
            sta L6300,Y            ; 99 00 63

            lda L6206,Y            ; Line 4
            sta L6207,Y            ; 99 07 62
            lda L6205,Y            ; B9 05 62
            sta L6206,Y            ; 99 06 62
            lda L6204,Y            ; B9 04 62
            sta L6205,Y            ; 99 05 62
            lda L6203,Y            ; B9 03 62
            sta L6204,Y            ; 99 04 62
            lda L6202,Y            ; B9 02 62
            sta L6203,Y            ; 99 03 62
            lda L6201,Y            ; B9 01 62
            sta L6202,Y            ; 99 02 62
            lda L6200,Y            ; B9 00 62
            sta L6201,Y            ; 99 01 62
            lda L6107,Y            ; B9 07 61
            sta L6200,Y            ; 99 00 62

            lda L6106,Y            ; Line 5
            sta L6107,Y            ; 99 07 61
            lda L6105,Y            ; B9 05 61
            sta L6106,Y            ; 99 06 61
            lda L6104,Y            ; B9 04 61
            sta L6105,Y            ; 99 05 61
            lda L6103,Y            ; B9 03 61
            sta L6104,Y            ; 99 04 61
            lda L6102,Y            ; B9 02 61
            sta L6103,Y            ; 99 03 61
            lda L6101,Y            ; B9 01 61
            sta L6102,Y            ; 99 02 61
            lda L6100,Y            ; B9 00 61
            sta L6101,Y            ; 99 01 61
            lda L6007,Y            ; B9 07 60
            sta L6100,Y            ; 99 00 61

            lda L6006,Y            ; Line 6
            sta L6007,Y            ; 99 07 60
            lda L6005,Y            ; B9 05 60
            sta L6006,Y            ; 99 06 60
            lda L6004,Y            ; B9 04 60
            sta L6005,Y            ; 99 05 60
            lda L6003,Y            ; B9 03 60
            sta L6004,Y            ; 99 04 60
            lda L6002,Y            ; B9 02 60
            sta L6003,Y            ; 99 03 60
            lda L6001,Y            ; B9 01 60
            sta L6002,Y            ; 99 02 60
            lda L6000,Y            ; B9 00 60
            sta L6001,Y            ; 99 01 60
            lda L5F07,Y            ; B9 07 5F
            sta L6000,Y            ; 99 00 60

            lda L5F06,Y            ; Line 7
            sta L5F07,Y            ; 99 07 5F
            lda L5F05,Y            ; B9 05 5F
            sta L5F06,Y            ; 99 06 5F
            lda L5F04,Y            ; B9 04 5F
            sta L5F05,Y            ; 99 05 5F
            lda L5F03,Y            ; B9 03 5F
            sta L5F04,Y            ; 99 04 5F
            lda L5F02,Y            ; B9 02 5F
            sta L5F03,Y            ; 99 03 5F
            lda L5F01,Y            ; B9 01 5F
            sta L5F02,Y            ; 99 02 5F
            lda L5F00,Y            ; B9 00 5F
            sta L5F01,Y            ; 99 01 5F
            lda L5E07,Y            ; B9 07 5E
            sta L5F00,Y            ; 99 00 5F

            lda L5E06,Y            ; Line 8
            sta L5E07,Y            ; 99 07 5E
            lda L5E05,Y            ; B9 05 5E
            sta L5E06,Y            ; 99 06 5E
            lda L5E04,Y            ; B9 04 5E
            sta L5E05,Y            ; 99 05 5E
            lda L5E03,Y            ; B9 03 5E
            sta L5E04,Y            ; 99 04 5E
            lda L5E02,Y            ; B9 02 5E
            sta L5E03,Y            ; 99 03 5E
            lda L5E01,Y            ; B9 01 5E
            sta L5E02,Y            ; 99 02 5E
            lda L5E00,Y            ; B9 00 5E
            sta L5E01,Y            ; 99 01 5E
            lda L5D07,Y            ; B9 07 5D
            sta L5E00,Y            ; 99 00 5E

            lda L5D06,Y            ; Line 9
            sta L5D07,Y            ; 99 07 5D
            lda L5D05,Y            ; B9 05 5D
            sta L5D06,Y            ; 99 06 5D
            lda L5D04,Y            ; B9 04 5D
            sta L5D05,Y            ; 99 05 5D
            lda L5D03,Y            ; B9 03 5D
            sta L5D04,Y            ; 99 04 5D
            lda L5D02,Y            ; B9 02 5D
            sta L5D03,Y            ; 99 03 5D
            lda L5D01,Y            ; B9 01 5D
            sta L5D02,Y            ; 99 02 5D
            lda L5D00,Y            ; B9 00 5D
            sta L5D01,Y            ; 99 01 5D
            lda L5C07,Y            ; B9 07 5C
            sta L5D00,Y            ; 99 00 5D

            lda L5C06,Y            ; Line 10
            sta L5C07,Y            ; 99 07 5C
            lda L5C05,Y            ; B9 05 5C
            sta L5C06,Y            ; 99 06 5C
            lda L5C04,Y            ; B9 04 5C
            sta L5C05,Y            ; 99 05 5C
            lda L5C03,Y            ; B9 03 5C
            sta L5C04,Y            ; 99 04 5C
            lda L5C02,Y            ; B9 02 5C
            sta L5C03,Y            ; 99 03 5C
            lda L5C01,Y            ; B9 01 5C
            sta L5C02,Y            ; 99 02 5C
            lda L5C00,Y            ; B9 00 5C
            sta L5C01,Y            ; 99 01 5C
            lda L5B07,Y            ; B9 07 5B
            sta L5C00,Y            ; 99 00 5C

            lda L5B06,Y            ; Line 11
            sta L5B07,Y            ; 99 07 5B
            lda L5B05,Y            ; B9 05 5B
            sta L5B06,Y            ; 99 06 5B
            lda L5B04,Y            ; B9 04 5B
            sta L5B05,Y            ; 99 05 5B
            lda L5B03,Y            ; B9 03 5B
            sta L5B04,Y            ; 99 04 5B
            lda L5B02,Y            ; B9 02 5B
            sta L5B03,Y            ; 99 03 5B
            lda L5B01,Y            ; B9 01 5B
            sta L5B02,Y            ; 99 02 5B
            lda L5B00,Y            ; B9 00 5B
            sta L5B01,Y            ; 99 01 5B
            lda L5A07,Y            ; B9 07 5A
            sta L5B00,Y            ; 99 00 5B

            lda L5A06,Y            ; Line 12
            sta L5A07,Y            ; 99 07 5A
            lda L5A05,Y            ; B9 05 5A
            sta L5A06,Y            ; 99 06 5A
            lda L5A04,Y            ; B9 04 5A
            sta L5A05,Y            ; 99 05 5A
            lda L5A03,Y            ; B9 03 5A
            sta L5A04,Y            ; 99 04 5A
            lda L5A02,Y            ; B9 02 5A
            sta L5A03,Y            ; 99 03 5A
            lda L5A01,Y            ; B9 01 5A
            sta L5A02,Y            ; 99 02 5A
            lda L5A00,Y            ; B9 00 5A
            sta L5A01,Y            ; 99 01 5A
            lda L5907,Y            ; B9 07 59
            sta L5A00,Y            ; 99 00 5A

            lda L5906,Y            ; Line 13
            sta L5907,Y            ; 99 07 59
            lda L5905,Y            ; B9 05 59
            sta L5906,Y            ; 99 06 59
            lda L5904,Y            ; B9 04 59
            sta L5905,Y            ; 99 05 59
            lda L5903,Y            ; B9 03 59
            sta L5904,Y            ; 99 04 59
            lda L5902,Y            ; B9 02 59
            sta L5903,Y            ; 99 03 59
            lda L5901,Y            ; B9 01 59
            sta L5902,Y            ; 99 02 59
            lda L5900,Y            ; B9 00 59
            sta L5901,Y            ; 99 01 59
            lda L5807,Y            ; B9 07 58
            sta L5900,Y            ; 99 00 59

            lda L5806,Y            ; Line 14
            sta L5807,Y            ; 99 07 58
            lda L5805,Y            ; B9 05 58
            sta L5806,Y            ; 99 06 58
            lda L5804,Y            ; B9 04 58
            sta L5805,Y            ; 99 05 58
            lda L5803,Y            ; B9 03 58
            sta L5804,Y            ; 99 04 58
            lda L5802,Y            ; B9 02 58
            sta L5803,Y            ; 99 03 58
            lda L5801,Y            ; B9 01 58
            sta L5802,Y            ; 99 02 58
            lda L5800,Y            ; B9 00 58
            sta L5801,Y            ; 99 01 58
            lda L5707,Y            ; B9 07 57
            sta L5800,Y            ; 99 00 58

            lda L5706,Y            ; Line 15
            sta L5707,Y            ; 99 07 57
            lda L5705,Y            ; B9 05 57
            sta L5706,Y            ; 99 06 57
            lda L5704,Y            ; B9 04 57
            sta L5705,Y            ; 99 05 57
            lda L5703,Y            ; B9 03 57
            sta L5704,Y            ; 99 04 57
            lda L5702,Y            ; B9 02 57
            sta L5703,Y            ; 99 03 57
            lda L5701,Y            ; B9 01 57
            sta L5702,Y            ; 99 02 57
            lda L5700,Y            ; B9 00 57
            sta L5701,Y            ; 99 01 57
            lda L5607,Y            ; B9 07 56
            sta L5700,Y            ; 99 00 57

            lda L5606,Y            ; Line 16
            sta L5607,Y            ; 99 07 56
            lda L5605,Y            ; B9 05 56
            sta L5606,Y            ; 99 06 56
            lda L5604,Y            ; B9 04 56
            sta L5605,Y            ; 99 05 56
            lda L5603,Y            ; B9 03 56
            sta L5604,Y            ; 99 04 56
            lda L5602,Y            ; B9 02 56
            sta L5603,Y            ; 99 03 56
            lda L5601,Y            ; B9 01 56
            sta L5602,Y            ; 99 02 56
            lda L5600,Y            ; B9 00 56
            sta L5601,Y            ; 99 01 56
            lda L5507,Y            ; B9 07 55
            sta L5600,Y            ; 99 00 56

            lda L5506,Y            ; Line 17
            sta L5507,Y            ; 99 07 55
            lda L5505,Y            ; B9 05 55
            sta L5506,Y            ; 99 06 55
            lda L5504,Y            ; B9 04 55
            sta L5505,Y            ; 99 05 55
            lda L5503,Y            ; B9 03 55
            sta L5504,Y            ; 99 04 55
            lda L5502,Y            ; B9 02 55
            sta L5503,Y            ; 99 03 55
            lda L5501,Y            ; B9 01 55
            sta L5502,Y            ; 99 02 55
            lda L5500,Y            ; B9 00 55
            sta L5501,Y            ; 99 01 55
            lda L5407,Y            ; B9 07 54
            sta L5500,Y            ; 99 00 55

            lda L5406,Y            ; Line 18
            sta L5407,Y            ; 99 07 54
            lda L5405,Y            ; B9 05 54
            sta L5406,Y            ; 99 06 54
            lda L5404,Y            ; B9 04 54
            sta L5405,Y            ; 99 05 54
            lda L5403,Y            ; B9 03 54
            sta L5404,Y            ; 99 04 54
            lda L5402,Y            ; B9 02 54
            sta L5403,Y            ; 99 03 54
            lda L5401,Y            ; B9 01 54
            sta L5402,Y            ; 99 02 54
            lda L5400,Y            ; B9 00 54
            sta L5401,Y            ; 99 01 54
            lda L5307,Y            ; B9 07 53
            sta L5400,Y            ; 99 00 54

            tya                    ; 98
            clc                    ; 18
            adc #$08               ; 69 08
            tay                    ; A8
            cmp #$70               ; C9 70
            beq L10BA              ; F0 03
            jmp L0D4E              ; 4C 4E 0D

L10BA:      rts                    ; 60

;--------------------------------------------
; Copy buffer to screen
;--------------------------------------------

L10BB:
	stx tmp_x
	ldx #$6F               ; A0 6F

;            lda L007F              ; A5 7F
;L10BF:      cmp L007F              ; Wait loop
;            beq L10BF              ; F0 FC


L10C3:	ldy display,X
            lda L5400,X            ; B9 00 54
            sta L6B38,Y            ; 99 38 6B
            lda L5500,X            ; B9 00 55
            sta L6C38,Y            ; 99 38 6C
            lda L5600,X            ; B9 00 56
            sta L6D38,Y            ; 99 38 6D
            lda L5700,X            ; B9 00 57
            sta L6E38,Y            ; 99 38 6E
            lda L5800,X            ; B9 00 58
            sta L6F38,Y            ; 99 38 6F
            lda L5900,X            ; B9 00 59
            sta L7038,Y            ; 99 38 70
            lda L5A00,X            ; B9 00 5A
            sta L7138,Y            ; 99 38 71
            lda L5B00,X            ; B9 00 5B
            sta L7238,Y            ; 99 38 72
            lda L5C00,X            ; B9 00 5C
            sta L7338,Y            ; 99 38 73
            lda L5D00,X            ; B9 00 5D
            sta L7438,Y            ; 99 38 74
            lda L5E00,X            ; B9 00 5E
            sta L7538,Y            ; 99 38 75
            lda L5F00,X            ; B9 00 5F
            sta L7638,Y            ; 99 38 76
            lda L6000,X            ; B9 00 60
            sta L7738,Y            ; 99 38 77
            lda L6100,X            ; B9 00 61
            sta L7838,Y            ; 99 38 78
            lda L6200,X            ; B9 00 62
            sta L7938,Y            ; 99 38 79
            lda L6300,X            ; B9 00 63
            sta L7A38,Y            ; 99 38 7A
            lda L6400,X            ; B9 00 64
            sta L7B38,Y            ; 99 38 7B
            lda L6500,X            ; B9 00 65
            sta L7C38,Y            ; 99 38 7C
;            dey                    ; 88
	dex
            bpl L10C3              ; 10 91

	ldx tmp_x
            rts                    ; 60

display:
	.byte $00,$20,$40,$60,$80,$a0,$c0,$e0
	.byte $01,$21,$41,$61,$81,$a1,$c1,$e1
	.byte $02,$22,$42,$62,$82,$a2,$c2,$e2
	.byte $03,$23,$43,$63,$83,$a3,$c3,$e3
	.byte $04,$24,$44,$64,$84,$a4,$c4,$e4
	.byte $05,$25,$45,$65,$85,$a5,$c5,$e5
	.byte $06,$26,$46,$66,$86,$a6,$c6,$e6
	.byte $07,$27,$47,$67,$87,$a7,$c7,$e7
	.byte $08,$28,$48,$68,$88,$a8,$c8,$e8
	.byte $09,$29,$49,$69,$89,$a9,$c9,$e9
	.byte $0a,$2a,$4a,$6a,$8a,$aa,$ca,$ea
	.byte $0b,$2b,$4b,$6b,$8b,$ab,$cb,$eb
	.byte $0c,$2c,$4c,$6c,$8c,$ac,$cc,$ec
	.byte $0d,$2d,$4d,$6d,$8d,$ad,$cd,$ed

;--------------------------------------------
; Plot all enemies
;--------------------------------------------

L1133:      ldx #$00               ; A2 00
            stx L0085              ; 86 85
L1137:      jsr L1143              ; Plot single enemy
            inc L0085              ; E6 85
            ldx L0085              ; A6 85
            cpx #$0A               ; E0 0A
            bne L1137              ; D0 F5
L1142:      rts                    ; 60

;--------------------------------------------
; Plot single enemy
;--------------------------------------------

L1143:      lda L0028,X            ; B5 28
            bmi L1142              ; 30 FB

            lda L001E,X            ; B5 1E
            tay                    ; A8
            lsr A                  ; 4A
            lsr A                  ; 4A
            lsr A                  ; 4A
            clc                    ; 18
            adc #>L5200               ; 69 52
            sta L00E1              ; 85 E1
            sta L003C,X            ; 95 3C
            lda L0014,X            ; B5 14
            and #$FC               ; 29 FC
            asl A                  ; 0A
            sta L00E0              ; 85 E0

            tya                    ; 98
            and #$07               ; 29 07
            ora L00E0              ; 05 E0
            sta L00E0              ; 85 E0
            sta L0032,X            ; 95 32

            lda L0216,X            ; BD 16 02
            sta L11B7              ; 8D B7 11
            sta L11C7              ; 8D C7 11

            lda L0220,X            ; BD 20 02
            sta L11B8              ; 8D B8 11
            sta L11C8              ; 8D C8 11

            lda L0000,X              ; B5 00
            sta L00E2              ; 85 E2

            lda L000A,X            ; B5 0A
            sta L00E3              ; 85 E3

            ldy #$00               ; A0 00
            lda (L00E2),Y          ; B1 E2
            sta L00E4              ; 85 E4
            iny                    ; C8

            lda (L00E2),Y          ; B1 E2
            sta L00E5              ; 85 E5
            iny                    ; C8

            lda (L00E4),Y          ; B1 E4
            sta L11BA              ; 8D BA 11
            sta L11CA              ; 8D CA 11
            clc                    ; 18
            adc #$20               ; 69 20
            sta L11BD              ; 8D BD 11
            sta L11CD              ; 8D CD 11

            iny                    ; C8
            lda (L00E4),Y          ; B1 E4
            sta L11BB              ; 8D BB 11
            sta L11CB              ; 8D CB 11
            adc #$00               ; 69 00
            sta L11BE              ; 8D BE 11
            sta L11CE              ; 8D CE 11


; Plot enemy in shadow screen

            lda #$10               ; A9 10
            sta L007E              ; 85 7E

            ldx #$00               ; A2 00
L11B2:      ldy #$00               ; A0 00
            lda (L00E0),Y          ; B1 E0
L11B6:
            sta LFFFF,X            ; 9D FF FF
            and LFFFF,X            ; 3D FF FF
            ora LFFFF,X            ; 1D FF FF

            sta (L00E0),Y          ; 91 E0
            ldy #$08               ; A0 08
            inx                    ; E8
            lda (L00E0),Y          ; B1 E0
L11C6:
            sta LFFFF,X            ; 9D FF FF
            and LFFFF,X            ; 3D FF FF
            ora LFFFF,X            ; 1D FF FF
            sta (L00E0),Y          ; 91 E0

            inx                    ; E8

            inc L00E0              ; E6 E0
            lda L00E0              ; A5 E0
            and #$07               ; 29 07
            bne L11E5              ; D0 0B

            lda L00E0              ; A5 E0
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L00E0              ; 85 E0
            bcc L11E5              ; 90 02
            inc L00E1              ; E6 E1

L11E5:      dec L007E              ; C6 7E
            bne L11B2              ; D0 C9
            rts                    ; 60

;--------------------------------------------
; Check enemies
;--------------------------------------------

L11EA:      ldx #$09               ; A2 09
L11EC:      stx L0085              ; 86 85
            lda L0028,X            ; Check if enemy on screen
            bmi L1251              ; If not, next enemy

            jsr L1255              ; Copy enemy background to buffer

            ldx L0085              ; A6 85
            dec L0046,X            ; D6 46
            bne L1251              ; D0 56

            lda #$01               ; A9 01
            sta L0046,X            ; 95 46

            lda L0000,X              ; B5 00
            clc                    ; 18
            adc #$02               ; 69 02
            sta L00E4              ; 85 E4
            sta L0000,X              ; 95 00
            lda L000A,X            ; B5 0A
            adc #$00               ; 69 00
            sta L00E5              ; 85 E5
            sta L000A,X            ; 95 0A

            ldy #$01               ; A0 01
            lda (L00E4),Y          ; B1 E4
            cmp #$FF               ; C9 FF
            bne L1221              ; D0 09

            lda #$FF               ; A9 FF
            sta L0028,X            ; 95 28
            dec L0093              ; C6 93
            jmp L1251              ; 4C 51 12

L1221:      lda (L00E4),Y          ; B1 E4
            sta L00E3              ; 85 E3
            dey                    ; 88
            lda (L00E4),Y          ; B1 E4
            sta L00E2              ; 85 E2

            lda L0014,X            ; B5 14
            clc                    ; 18
            adc (L00E2),Y          ; 71 E2
            cmp #$30               ; Check if above top of screen
            bcc L123B              ; 90 08
            lda #$FF               ; If so, destroy enemy
            sta L0028,X            ; 95 28
            dec L0093              ; C6 93
            lda #$00               ; A9 00
L123B:      sta L0014,X            ; 95 14
            iny                    ; C8

            lda L001E,X            ; B5 1E
            clc                    ; 18
            adc (L00E2),Y          ; 71 E2
            cmp #$9E               ; Check if below screen
            bcc L124F              ; 90 08
            lda #$FF               ; If so, destroy enemy
            sta L0028,X            ; 95 28
            dec L0093              ; C6 93
            lda #$00               ; A9 00
L124F:      sta L001E,X            ; 95 1E

L1251:      dex                    ; CA
            bpl L11EC              ; 10 98
            rts                    ; 60

;---------------------------------------------
; Copy enemy background to buffer
;
; $E0/E1 = Background address enemy
;---------------------------------------------

L1255:      lda L0032,X            ; Background address enemy
            sta L00E0              ; 85 E0
            lda L003C,X            ; B5 3C
            sta L00E1              ; 85 E1

            lda L0216,X            ; Bufferaddress enemy
            sta L1278              ; 8D 78 12
            sta L1280              ; 8D 80 12
            lda L0220,X            ; BD 20 02
            sta L1279              ; 8D 79 12
            sta L1281              ; 8D 81 12

            lda #$10               ; A9 10
            sta L007E              ; 85 7E
            ldx #$00               ; A2 00
L1275:      ldy #$00               ; A0 00
L1277:
            lda LFFFF,X            ; BD FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            ldy #$08               ; A0 08
L127F:
            lda LFFFF,X            ; BD FF FF
            sta (L00E0),Y          ; 91 E0
            inx                    ; E8
            inc L00E0              ; E6 E0
            lda L00E0              ; A5 E0
            and #$07               ; 29 07
            bne L1298              ; D0 0B
            lda L00E0              ; A5 E0
            clc                    ; 18
            adc #$F8               ; 69 F8
            sta L00E0              ; 85 E0
            bcc L1298              ; 90 02
            inc L00E1              ; E6 E1
L1298:      dec L007E              ; C6 7E
            bne L1275              ; D0 D9
            rts                    ; 60

;---------------------------------------------
; Fill enemy tables
;---------------------------------------------

L129D:      jsr L0C6D              ; 20 6D 0C
            and #$03               ; 29 03
            asl A                  ; 0A
            tay                    ; A8

            lda L12E2,Y            ; B9 E2 12
            sta L12D1              ; 8D D1 12
            lda L12E3,Y            ; B9 E3 12
            sta L12D2              ; 8D D2 12

            lda L1312,Y            ; B9 12 13
            sta L12D6              ; 8D D6 12
            lda L1313,Y            ; B9 13 13
            sta L12D7              ; 8D D7 12

            ldx #$00               ; A2 00
L12BE:      lda L1342,Y            ; B9 42 13
            sta L0000,X              ; 95 00
            lda L1343,Y            ; B9 43 13
            sta L000A,X            ; 95 0A

            lda #$00               ; A9 00
            sta L001E,X            ; 95 1E
            sta L0028,X            ; 95 28
            sta L0050,X            ; 95 50
L12D0:
            lda LFFFF,X            ; BD FF FF
            sta L0046,X            ; 95 46
            lda LFFFF,X            ; BD FF FF
            sta L0014,X            ; 95 14

            inx                    ; E8
            cpx #$0A               ; E0 0A
            bne L12BE              ; D0 DF
            stx L0093              ; 86 93
            rts                    ; 60

L12E2:      .byte <L12EA
L12E3:      .byte >L12EA,<L12F4,>L12F4,<L12FE,>L12FE,<L1308,>L1308

L12EA:
            .byte $01,$03,$05,$07,$09
            .byte $0B,$0D,$0F,$11,$13
L12F4:
            .byte $14,$0F,$0A,$05,$01
            .byte $01,$05,$0A,$0F,$14
L12FE:
            .byte $01,$05,$0A,$0F,$14
            .byte $14,$0F,$0A,$05,$01
L1308:
            .byte $01,$05,$0A,$0F,$14
            .byte $19,$1E,$23,$28,$2D

L1312:      .byte <L131A
L1313:      .byte >L131A,<L1324,>L1324,<L132E,>L132E,<L1338,>L1338

L131A:
            .byte $06,$0A,$0E,$12,$16
            .byte $1C,$20,$24,$28,$2C
L1324:
            .byte $06,$0A,$0E,$12,$16
            .byte $1C,$20,$24,$28,$2C
L132E:
            .byte $2C,$28,$24,$20,$1C
            .byte $16,$12,$0E,$0A,$06
L1338:
            .byte $08,$08,$08,$08,$08
            .byte $08,$08,$08,$08,$08

; Waves

L1342:      .byte <L134A
L1343:      .byte >L134A,<L14C0,>L14C0,<L14F2,>L14F2,<L1590,>L1590

; Enemy planes wave

L134A:
            .byte <L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498
            .byte <L1498,>L1498
            .byte <L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L149C,>L149C,<L149C
            .byte >L149C,<L149C,>L149C,<L149C,>L149C,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L14A0
            .byte >L14A0,<L14A0,>L14A0,<L14A0,>L14A0,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L1498,>L1498,<L1498
            .byte >L1498,<L1498,>L1498,<L1498,>L1498,<L14A4,>L14A4,<L14A4
            .byte >L14A4,<L14A8,>L14A8,<L14A8,>L14A8,<L14AC,>L14AC,<L14AC
            .byte >L14AC,<L14B0,>L14B0,<L14B0,>L14B0,<L14B4,>L14B4,<L14B4
            .byte >L14B4,<L14B8,>L14B8,<L14B8,>L14B8,<L14B8,>L14B8,<L14B8
            .byte >L14B8,<L14B8,>L14B8,<L14B8,>L14B8,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC,>L14BC,<L14BC
            .byte >L14BC,<L14BC,>L14BC,$FF,$FF

L1498:      .byte $00,$02,<L4CC4,>L4CC4	; Enemy1
L149C:      .byte $00,$01,<L4CC4,>L4CC4	; Enemy1
L14A0:      .byte $00,$00,<L4CC4,>L4CC4	; Enemy1
L14A4:      .byte $00,$01,<L4D04,>L4D04	; Enemy1 flip 1
L14A8:      .byte $00,$01,<L4D44,>L4D44	; Enemy1 flip 2
L14AC:      .byte $00,$01,<L4D84,>L4D84	; Enemy1 flip 3
L14B0:      .byte $00,$FF,<L4DC4,>L4DC4	; Enemy1 flip 4
L14B4:      .byte $00,$FF,<L4E04,>L4E04	; Enemy1 flip 5
L14B8:      .byte $00,$FD,<L4E44,>L4E44	; Enemy1 flip 6
L14BC:      .byte $00,$FE,<L4E44,>L4E44	; Enemy1 flip 6

L14C0:
            .byte <L1560,>L1560,<L1564
            .byte >L1564,<L1568,>L1568,<L156C,>L156C,<L1570,>L1570,<L1574
            .byte >L1574,<L1560,>L1560,<L1564,>L1564,<L1568,>L1568,<L156C
            .byte >L156C,<L1570,>L1570,<L1574,>L1574,<L1560,>L1560,<L1564
            .byte >L1564,<L1568,>L1568,<L156C,>L156C,<L1570,>L1570,<L1574
            .byte >L1574,<L1560,>L1560,<L1564,>L1564,<L1568,>L1568,<L156C
            .byte >L156C,<L1570,>L1570,<L1574,>L1574,$FF,$FF
L14F2:
            .byte <L1578
            .byte >L1578,<L157C,>L157C,<L1580,>L1580,<L1584,>L1584,<L1588
            .byte >L1588,<L158C,>L158C,<L1578,>L1578,<L157C,>L157C,<L1580
            .byte >L1580,<L1584,>L1584,<L1588,>L1588,<L158C,>L158C,<L1578
            .byte >L1578,<L157C,>L157C,<L1580,>L1580,<L1584,>L1584,<L1588
            .byte >L1588,<L158C,>L158C,<L1578,>L1578,<L157C,>L157C,<L1580
            .byte >L1580,<L1584,>L1584,<L1588,>L1588,<L158C,>L158C,<L1578
            .byte >L1578,<L157C,>L157C,<L1580,>L1580,<L1584,>L1584,<L1588
            .byte >L1588,<L158C,>L158C,<L1578,>L1578,<L157C,>L157C,<L1580
            .byte >L1580,<L1584,>L1584,<L1588,>L1588,<L158C,>L158C,<L1578
            .byte >L1578,<L157C,>L157C,<L1580,>L1580,<L1584,>L1584,<L1588
            .byte >L1588,<L158C,>L158C,<L1578,>L1578,<L157C,>L157C,<L1580
            .byte >L1580,<L1584,>L1584,<L1588,>L1588,<L158C,>L158C,<L1578
            .byte >L1578,<L157C,>L157C,<L1580,>L1580,<L1584,>L1584,<L1588
            .byte >L1588,<L158C,>L158C,$FF,$FF

; Enemy table

L1560:      .byte $00,$06,<L4FC4,>L4FC4	; Enemy disc
L1564:      .byte $00,$06,<L5004,>L5004	; Enemy4 rotate 0
L1568:      .byte $00,$06,<L5044,>L5044	; Enemy4 rotate 1
L156C:      .byte $00,$06,<L5084,>L5084	; Enemy4 rotate 2
L1570:      .byte $00,$06,<L50C4,>L50C4	; Enemy4 rotate 3
L1574:      .byte $00,$06,<L5104,>L5104	; Enemy4 rotate 4

L1578:      .byte $00,$03,<L4FC4,>L4FC4	; Enemy4 disc 
L157C:      .byte $00,$03,<L5004,>L5004	; Enemy4 rotate 0
L1580:      .byte $00,$03,<L5044,>L5044	; Enemy4 rotate 1
L1584:      .byte $00,$03,<L5084,>L5084	; Enemy4 rotate 2
L1588:      .byte $00,$03,<L50C4,>L50C4	; Enemy4 rotate 3
L158C:      .byte $00,$03,<L5104,>L5104	; Enemy4 rotate 4

L1590:
            .byte <L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1662,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1662,>L1662,<L1662,>L1662,<L1662,>L1662,<L1662
            .byte >L1662,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L165E,>L165E,<L165E
            .byte >L165E,<L165E,>L165E,<L165E,>L165E,<L1666,>L1666,<L1666
            .byte >L1666,<L1666,>L1666,<L1666,>L1666,<L1666,>L1666,<L1666
            .byte >L1666,$FF,$FF

L165E:      .byte $03,$02,<L4F84,>L4F84
L1662:      .byte $FD,$02,<L4F84,>L4F84
L1666:      .byte $00,$01,<L4F84,>L4F84


L166A:
            .byte <L1698,>L1698,<L169C,>L169C
            .byte <L16A0,>L16A0,<L169C,>L169C
            .byte <L16A0,>L16A0,<L16A4,>L16A4,<L16A8,>L16A8,<L16AC,>L16AC,<L16A8
            .byte >L16A8,<L16AC,>L16AC,<L16B0,>L16B0,<L16AC,>L16AC,<L16B0
            .byte >L16B0,<L16B4,>L16B4,<L16B8,>L16B8,<L16B4,>L16B4,<L16B8
            .byte >L16B8,<L16B4,>L16B4,<L16B8,>L16B8,<L16BC,>L16BC,<L16B8
            .byte >L16B8,<L16BC,>L16BC,$FF,$FF

; Explosion table

L1698:      .byte $00,$00,<L4A44,>L4A44	; Explosion 0
L169C:      .byte $00,$00,<L4A84,>L4A84	; Explosion 1
L16A0:      .byte $00,$00,<L4AC4,>L4AC4	; Explosion 2
L16A4:      .byte $00,$00,<L4B04,>L4B04	; Explosion 3
L16A8:      .byte $00,$00,<L4B44,>L4B44	; Explosion 4
L16AC:      .byte $00,$00,<L4B84,>L4B84	; Explosion 5
L16B0:      .byte $00,$00,<L4BC4,>L4BC4	; Explosion 6
L16B4:      .byte $00,$00,<L4C04,>L4C04	; Explosion 7
L16B8:      .byte $00,$00,<L4C44,>L4C44	; Explosion 8
L16BC:      .byte $00,$00,<L4C84,>L4C84	; Explosion 9

;--------------------------------------------
; High score screen
;--------------------------------------------

L16C0:      jsr L0B80              ; Clear display

            jsr L0AC3              ; 20 C3 0A
            .byte $05,$01
            .byte "HIGH"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $04,$02
            .byte "SCORES"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $02,$0F
            .byte "PRESS@FIRE"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $03,$10
            .byte "TO@BEGIN"
            .byte $00

            ldx #$00               ; Set cursor address
L16F9:      txa                    ; 8A
            asl A                  ; 0A
            clc                    ; 18
            adc #$59               ; 69 59
            sta L00E1              ; 85 E1
            lda #$08               ; A9 08
            sta L00E0              ; 85 E0

            jsr L1717              ; Display top 5 ranking + score

            inx                    ; E8

            cpx #$05               ; E0 05
            bne L16F9              ; D0 ED

            jsr L0B2D              ; Fade shadow screen onto display

L170F:      lda #$02               ; Check RET
            jsr L0C83              ; Key check routine
            bpl L170F              ; 10 F9

            rts                    ; 60

;--------------------------------------------
; Display top 5 ranking + score
;--------------------------------------------

L1717:      txa                    ; 8A
            clc                    ; 18
            adc #$31               ; 69 31
            jsr L0B04              ; Display rank

            stx L00E4              ; lb score
            lda L18C5,X            ; BD C5 18
            sta L00E7              ; hb score
            lda L18CA,X            ; BD CA 18
            sta L00E6              ; 85 E6
            jsr L175D              ; Display score

            ldx L00E4              ; Display 1st letter
            lda #$50               ; A9 50
            sta L00E0              ; 85 E0
            lda L18D4,X            ; BD D4 18
            jsr L0B04              ; Display character 8x8

            lda #$58               ; Display 2nd letter
            sta L00E0              ; 85 E0
            lda L18D9,X            ; BD D9 18
            jsr L0B04              ; Display character 8x8

            lda #$60               ; Display 3rd letter
            sta L00E0              ; 85 E0
            lda L18DE,X            ; BD DE 18
            jmp L0B04              ; Display character 8x8

;--------------------------------------------
; Display number
;--------------------------------------------

; Entry display current score

L174D:
            lda L0091              ; Get current score
            sta L00E6              ; 85 E6
            lda L0092              ; A5 92
            sta L00E7              ; 85 E7

            lda #>L6118               ; Set cursor address
            sta L00E1              ; 85 E1
            lda #<L6118               ; A9 18
            sta L00E0              ; 85 E0

; Entry display score

L175D:      ldx #$00               ; A2 00
L175F:      ldy #$10               ; A0 10
            lda #$00               ; A9 00
L1763:      asl L00E6              ; 06 E6
            rol L00E7              ; 26 E7
            rol A                  ; 2A
            cmp #$0A               ; C9 0A
            bcc L1770              ; 90 04
            sbc #$0A               ; E9 0A
            inc L00E6              ; E6 E6
L1770:      dey                    ; 88
            bne L1763              ; D0 F0
            clc                    ; 18
            adc #$30               ; 69 30
            pha                    ; Save decimal nibble

            inx                    ; E8
            lda L00E6              ; A5 E6
            ora L00E7              ; 05 E7
            bne L175F              ; D0 E1

            lda L1795,X            ; BD 95 17
            sta L00E0              ; 85 E0

L1783:      pla                    ; Get decimal nibble
            jsr L0B04              ; Display character 8x8
            lda L00E0              ; Cursor 1 position to right
            clc                    ; 18
            adc #$08               ; 69 08
            sta L00E0              ; 85 E0
            dex                    ; CA
            bne L1783              ; D0 F2

            lda #$30               ; Set trailing 0
L1793:
            jmp L0B04              ; Display character 8x8

            .byte $38
L1797:      .byte $30,$28
L1799:      .byte $20,$18

;--------------------------------------------
; Check if score added to table
;--------------------------------------------

L179B:      ldx #$00
L179D:      lda L0092              ; A5 92
            cmp L18C5,X            ; DD C5 18
            bcc L17AD              ; 90 09
            bne L17B3              ; D0 0D
            lda L0091              ; A5 91
            cmp L18CA,X            ; DD CA 18
            bcs L17B3              ; B0 06
L17AD:      inx                    ; E8
            cpx #$05               ; E0 05
            bne L179D              ; D0 EB
            rts                    ; 60

;--------------------------------------------
; Well done screen
;--------------------------------------------

L17B3:      stx L00E8              ; 86 E8
            jsr L0B80              ; Clear display

            jsr L0A40              ; 20 40 0A
            .byte $03,$01
            .byte "WELL"
            .byte $00

            jsr L0A40              ; 20 40 0A
            .byte $03,$04
            .byte "DONE"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $02,$08
            .byte "YOU@ARE@IN"
            .byte $00

            jsr L0AC3              ; 20 C3 0A
            .byte $01,$0A
            .byte "THE@TOP@FIVE"
            .byte $00

            jsr L0AC3
            .byte $04,$0C
            .byte "SELECT"
            .byte $00

            jsr L0AC3
            .byte $03,$0D
            .byte "INITIALS"
            .byte $00

            jsr L0B2D              ; Fade shadow screen onto display

            lda #$63               ; A9 63
            sta L00E1              ; 85 E1

            ldx #$20               ; Enter first initial
            lda #$50               ; A9 50
            jsr L186C              ; 20 6C 18
            sta L00E5              ; 85 E5

            lda #$4F               ; Enter second initial
            jsr L186C              ; 20 6C 18
            sta L00E6              ; 85 E6

            lda #$57               ; Enter third initial
            jsr L186C              ; 20 6C 18
            sta L00E7              ; 85 E7

            ldx L00E8              ; Check rank
            ldy L18CF,X            ; BC CF 18
            beq L1852              ; F0 25

            ldx #$03               ; Shift lower ranks one down
L182F:      lda L18C5,X            ; BD C5 18
            sta L18C6,X            ; 9D C6 18
            lda L18CA,X            ; BD CA 18
            sta L18CB,X            ; 9D CB 18
            lda L18D4,X            ; BD D4 18
            sta L18D5,X            ; 9D D5 18
            lda L18D9,X            ; BD D9 18
            sta L18DA,X            ; 9D DA 18
            lda L18DE,X            ; BD DE 18
            sta L18DF,X            ; 9D DF 18
            dex                    ; CA
            dey                    ; 88
            bne L182F              ; D0 DE

            inx                    ; E8

L1852:      lda L0091              ; Fill in new score
            sta L18CA,X            ; 9D CA 18
            lda L0092              ; A5 92
            sta L18C5,X            ; 9D C5 18
            lda L00E5              ; A5 E5
            sta L18D4,X            ; 9D D4 18
            lda L00E6              ; A5 E6
            sta L18D9,X            ; 9D D9 18
            lda L00E7              ; A5 E7
            sta L18DE,X            ; 9D DE 18
            rts                    ; 60

;--------------------------------------------
; Enter initials
;--------------------------------------------

L186C:      sta L007E              ; Start letter
            stx L0085              ; Cursor pos
L1870:
            lda L007E
            ldx L0085              ; A6 85
            stx L00E0              ; 86 E0
            jsr L0A7A              ; 20 7A 0A
            jsr L10BB              ; Copy buffer to screen

            lda #$00               ; Check Z
            jsr L0C83              ; Key check routine
            bpl L1895              ; 10 12

            lda L007E              ; Pick previous letter
            sec                    ; 38
            sbc #$01               ; E9 01
            cmp #$40               ; C9 40
            bcs L188E              ; B0 02
            lda #$5A               ; A9 5A
L188E:      sta L007E              ; 85 7E

            jsr $fb8a              ; Wait 0,1 sec
            jsr $fb8a              ; Wait 0,1 sec

L1895:      lda #$01               ; Check X
            jsr L0C83              ; Key check routine
            bpl L18AE              ; 10 12

            lda L007E              ; Pick next letter
            clc                    ; 18
            adc #$01               ; 69 01
            cmp #$5B               ; C9 5B
            bcc L18A7              ; 90 02
            lda #$40               ; A9 40
L18A7:      sta L007E              ; 85 7E

            jsr $fb8a              ; Wait 0,1 sec
            jsr $fb8a              ; Wait 0,1 sec

L18AE:      lda #$02               ; Check RET
            jsr L0C83              ; Key check routine
            bpl L1870              ; 10 BB

L18B5:      lda #$02               ; Check RET
            jsr L0C83              ; Key check routine
            bmi L18B5              ; 30 F9

            lda L0085              ; A5 85
            clc                    ; 18
            adc #$10               ; 69 10
            tax                    ; AA

            lda L007E              ; A5 7E
            rts                    ; 60

;--------------------------------------------
; Score data
;--------------------------------------------

L18C5:      .byte $03			; hb score
L18C6:      .byte $03,$03,$02,$02

L18CA:      .byte $E8			; lb score
L18CB:      .byte $84,$20,$BC,$58

L18CF:      .byte $04,$03,$02,$01,$00

; Score initials

L18D4:      .byte $4D			; First initial
L18D5:      .byte $46,$4D,$44,$53

L18D9:      .byte $4A			; Second initial
L18DA:      .byte $54,$55,$41,$49

L18DE:      .byte $41			; Third initial
L18DF:      .byte $41,$4D,$44,$53

;--------------------------------------------

L18E3:
;            .byte $00,$00,$00,$00,$00,$00,$00,$00
;            .byte $00,$00,$00,$00,$00,$00,$00,$00
;            .byte $00,$00,$00,$00,$00,$00,$00,$00
;            .byte $00,$00,$00,$00,$00

	.repeat ($1900-*)
	  .byte 0
	.endrep

;------------------------------------------------
; Background 0 tiles
;
; Tiles 8x8
;------------------------------------------------

L1900:
            .byte $00,$00,$00,$00,$00,$00,$00
            .byte $00,$88,$22,$49,$10,$84,$11,$44
            .byte $22,$89,$20,$09,$80,$22,$00,$48
            .byte $02,$01,$20,$04,$00,$40,$02,$80
            .byte $10,$00,$08,$80,$00,$01,$40,$08
            .byte $00,$42,$00,$B0,$34,$00,$02,$20
            .byte $04,$08,$41,$08,$00,$26,$06,$00
            .byte $49,$82,$18,$58,$02,$20,$09,$62
            .byte $60,$00,$00,$10,$00,$00,$04,$40
            .byte $00,$00,$00,$00,$08,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$20,$01,$80,$18,$18,$00,$81
            .byte $10,$00,$00,$40,$00,$02,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$C3,$FF
            .byte $3C,$60,$60,$C0,$C0,$C0,$C0,$60
            .byte $60,$06,$06,$03,$03,$03,$03,$06
            .byte $06,$55,$BB,$55,$EB,$5D,$FA,$5F
            .byte $83,$55,$BA,$55,$EE,$7F,$A3,$C1
            .byte $81,$55,$EE,$59,$B0,$D4,$A1,$C8
            .byte $A2,$5A,$EC,$79,$B0,$44,$E0,$60
            .byte $89,$34,$34,$2C,$AD,$B5,$34,$2C
            .byte $2C,$C3,$3C,$24,$FF,$55,$AB,$55
            .byte $AB,$09,$83,$27,$0E,$9D,$3A,$75
            .byte $EA,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$C3,$C3,$66,$3C,$08,$24,$E7
            .byte $C3,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D7,$FA,$55,$2F,$75,$2E,$83
            .byte $12,$55,$6A,$7D,$26,$97,$02,$27
            .byte $0A,$01,$8B,$DF,$FA,$55,$AE,$57
            .byte $EA,$10,$FA,$5F,$EA,$55,$AA,$77
            .byte $AA,$66,$66,$6C,$6C,$7A,$79,$75
            .byte $73,$55,$AA,$5F,$A2,$43,$A2,$55
            .byte $AA,$59,$BA,$59,$BA,$59,$BA,$59
            .byte $BA,$55,$A2,$45,$A2,$65,$AA,$65
            .byte $AA,$55,$80,$D5,$AA,$D5,$AA,$D5
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$45,$02,$1B,$6E,$35,$6A,$D5
            .byte $AA,$03,$22,$07,$07,$2D,$7E,$D5
            .byte $6B,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$56,$AE,$54,$A9,$58,$A8,$5C
            .byte $A9,$00,$00,$10,$38,$10,$00,$00
            .byte $00,$44,$44,$24,$24,$14,$54,$0C
            .byte $8C,$55,$AA,$00,$FE,$FE,$AA,$55
            .byte $AA,$55,$AA,$45,$82,$45,$EA,$E5
            .byte $EA,$D5,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$A8,$55,$A8,$55,$A8,$55
            .byte $A8,$60,$A8,$58,$B4,$DC,$A8,$76
            .byte $AB,$48,$C0,$E2,$A0,$74,$BA,$D7
            .byte $BA,$77,$3A,$15,$3A,$77,$2B,$75
            .byte $2E,$75,$1B,$0D,$4A,$1D,$0B,$9F
            .byte $3A,$10,$80,$44,$21,$10,$8A,$44
            .byte $A2,$40,$04,$20,$04,$10,$44,$08
            .byte $84,$55,$BA,$7D,$FE,$55,$BA,$55
            .byte $AA,$D5,$80,$D5,$AA,$D5,$AA,$D5
            .byte $AA,$55,$00,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$00,$55,$A8,$55,$A8,$55
            .byte $A8,$D5,$AA,$D5,$AA,$D5,$AA,$D5
            .byte $AA,$D5,$AA,$D5,$AA,$D5,$AA,$D5
            .byte $FF,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $FF,$55,$A8,$55,$A8,$55,$A8,$55
            .byte $FE,$51,$A8,$54,$AA,$55,$AA,$55
            .byte $AA,$00,$70,$10,$10,$10,$10,$70
            .byte $00,$01,$41,$05,$01,$11,$81,$01
            .byte $09,$7F,$40,$02,$58,$18,$41,$10
            .byte $40,$FF,$00,$40,$02,$10,$00,$00
            .byte $04,$FF,$01,$11,$01,$91,$01,$05
            .byte $81,$00,$82,$18,$3C,$3C,$18,$00
            .byte $00,$7F,$4C,$0C,$4C,$1D,$4C,$0C
            .byte $4C,$FF,$18,$5A,$18,$FB,$18,$1A
            .byte $18,$FF,$19,$19,$19,$FB,$19,$19
            .byte $19,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$AE,$04,$82,$43,$C2,$41
            .byte $28,$00,$44,$00,$50,$01,$40,$12
            .byte $40,$01,$50,$04,$40,$10,$40,$2A
            .byte $00,$00,$42,$00,$01,$48,$00,$AA
            .byte $00,$01,$41,$01,$09,$01,$01,$AB
            .byte $00,$00,$10,$10,$10,$10,$10,$0C
            .byte $00,$0D,$4C,$1D,$4C,$09,$44,$2A
            .byte $00,$98,$1A,$FB,$18,$08,$10,$AA
            .byte $00,$59,$19,$FB,$19,$89,$11,$AB
            .byte $00,$50,$90,$C2,$A0,$D0,$A0,$C2
            .byte $F8,$51,$10,$05,$88,$45,$28,$55
            .byte $7E,$51,$90,$D5,$AA,$D5,$AA,$D5
            .byte $FF,$51,$10,$55,$A8,$55,$A8,$55
            .byte $FE,$00,$FF,$BF,$9F,$8F,$87,$80
            .byte $88,$00,$FC,$FA,$F6,$EE,$DE,$1E
            .byte $1E,$4D,$0A,$1D,$0A,$05,$0E,$0D
            .byte $2A,$0C,$4C,$0C,$5D,$0C,$4C,$0D
            .byte $4C,$18,$58,$18,$FB,$18,$58,$1A
            .byte $18,$19,$59,$19,$FB,$19,$99,$19
            .byte $19,$10,$48,$08,$C1,$20,$40,$02
            .byte $18,$00,$18,$1A,$00,$18,$1A,$00
            .byte $00,$24,$34,$2C,$A5,$A4,$35,$2C
            .byte $24,$40,$20,$40,$80,$40,$80,$40
            .byte $20,$00,$00,$00,$00,$00,$82,$55
            .byte $28,$80,$41,$22,$14,$08,$04,$A2
            .byte $41,$90,$A0,$D4,$A0,$D4,$AA,$FF
            .byte $BA,$21,$00,$55,$08,$55,$A8,$FF
            .byte $BA,$80,$AA,$D5,$AA,$D5,$AA,$FF
            .byte $BA,$01,$A8,$55,$A8,$55,$A8,$FF
            .byte $BA,$88,$80,$88,$85,$80,$80,$80
            .byte $FF,$9E,$1E,$1E,$5E,$0E,$06,$02
            .byte $FE,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$45,$0A,$01,$80,$01,$82,$40
            .byte $0A,$15,$0A,$05,$0A,$15,$2A,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$80,$40,$A0,$50
            .byte $28,$95,$CB,$65,$B0,$5D,$AA,$5D
            .byte $2B,$56,$2C,$58,$00,$50,$A0,$50
            .byte $20,$55,$AA,$55,$AA,$55,$AA,$45
            .byte $0A,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$66,$66,$6C,$60,$0A,$20,$20
            .byte $00,$D5,$AA,$D5,$A2,$C8,$80,$C0
            .byte $00,$55,$A8,$55,$A0,$09,$88,$00
            .byte $22,$40,$04,$20,$04,$00,$04,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$55,$AA,$55,$A2,$05,$0A,$05
            .byte $0A,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$FD,$AA,$5D,$BF,$65,$CB,$95
            .byte $2B,$50,$A0,$50,$F8,$58,$2C,$56
            .byte $2B,$45,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$AA,$54,$AA,$54,$AA,$55
            .byte $AA,$75,$3A,$15,$3A,$15,$3A,$75
            .byte $2A,$55,$AA,$54,$AA,$50,$84,$52
            .byte $A0,$55,$EA,$75,$2E,$05,$0E,$59
            .byte $0A,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$60,$06,$00,$4C,$6A,$69,$75
            .byte $73,$48,$80,$C5,$A0,$C1,$AA,$D5
            .byte $AE,$00,$00,$40,$88,$51,$A8,$55
            .byte $A8,$00,$04,$00,$00,$00,$44,$08
            .byte $84,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$55,$AA,$55,$AA,$51,$A0,$40
            .byte $80,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$55,$B2,$55,$B2,$55,$B2,$55
            .byte $AA,$00,$20,$00,$00,$08,$00,$00
            .byte $41,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$54,$AA,$54,$AA,$54,$AA,$55
            .byte $AA,$15,$3A,$15,$3A,$75,$2A,$75
            .byte $AA,$48,$A2,$40,$A8,$51,$AA,$55
            .byte $AA,$25,$02,$87,$22,$35,$E6,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$66,$8A,$20,$0A,$00,$0B,$15
            .byte $CB,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$65,$8A,$21,$28,$20,$C8,$61
            .byte $E3,$B1,$A1,$84,$A2,$A0,$81,$99
            .byte $82,$51,$A4,$41,$AC,$41,$08,$45
            .byte $04,$55,$80,$D5,$AA,$E5,$AA,$E5
            .byte $AA,$55,$00,$55,$A8,$65,$A8,$65
            .byte $A8,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D5,$80,$C5,$E2,$F1,$B8,$DC
            .byte $AE,$55,$03,$57,$AE,$5D,$BB,$75
            .byte $EB,$D5,$80,$40,$A0,$50,$28,$14
            .byte $0A,$55,$AC,$59,$32,$05,$2A,$05
            .byte $82,$D5,$80,$D5,$AA,$D5,$AA,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$55,$00,$55,$AA,$50,$B0,$75
            .byte $EA,$55,$80,$D5,$AA,$00,$00,$54
            .byte $CA,$55,$00,$55,$A8,$55,$28,$15
            .byte $08,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$65,$EA,$74,$E8,$71,$A7,$7F
            .byte $AA,$EF,$AA,$D6,$00,$AA,$00,$00
            .byte $00,$B4,$5C,$2C,$14,$0C,$FC,$70
            .byte $AA,$D9,$AA,$D8,$A8,$D9,$AA,$D5
            .byte $FF,$05,$A8,$55,$A8,$65,$A8,$55
            .byte $FE,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D5,$AB,$D7,$AE,$DD,$BC,$F5
            .byte $EC,$D7,$AF,$5D,$B9,$71,$E3,$C5
            .byte $8B,$C5,$E2,$71,$38,$5C,$2E,$57
            .byte $2B,$01,$80,$40,$A0,$50,$C8,$54
            .byte $CA,$55,$AA,$55,$2A,$15,$0A,$15
            .byte $0F,$55,$AB,$55,$AB,$55,$AB,$55
            .byte $FF,$55,$A0,$65,$AA,$65,$AB,$65
            .byte $AB,$55,$02,$59,$AA,$59,$2A,$59
            .byte $2A,$15,$08,$15,$08,$15,$08,$15
            .byte $1E,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$06,$06,$0C,$0C,$3A,$39,$75
            .byte $73,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D5,$EC,$F5,$BC,$DD,$AE,$D7
            .byte $AB,$C5,$E3,$71,$B9,$5D,$AF,$57
            .byte $AB,$57,$2E,$5C,$38,$71,$E2,$C5
            .byte $8A,$55,$CA,$54,$C8,$50,$A0,$40
            .byte $80,$15,$00,$15,$2A,$55,$AA,$55
            .byte $AA,$01,$AB,$55,$AB,$55,$AB,$55
            .byte $AB,$65,$AA,$67,$AA,$67,$AA,$65
            .byte $BF,$59,$AA,$59,$AA,$D9,$AA,$59
            .byte $FA,$14,$08,$15,$08,$15,$08,$15
            .byte $08,$01,$02,$05,$0A,$15,$2A,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$01
            .byte $02,$55,$AA,$00,$00,$00,$00,$01
            .byte $02,$55,$AA,$55,$AA,$55,$AA,$55
            .byte $AA,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D7,$AE,$DC,$B8,$F1,$E2,$C5
            .byte $FF,$D5,$EB,$75,$BB,$5D,$AE,$57
            .byte $FF,$55,$2A,$54,$28,$50,$A0,$40
            .byte $FF,$81,$02,$25,$02,$19,$2C,$56
            .byte $FF,$55,$AA,$D5,$AA,$D5,$AA,$D5
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$D5,$EB,$75,$BF,$5F,$AA,$55
            .byte $FF,$55,$2A,$54,$F8,$F1,$AA,$D5
            .byte $FF,$15,$28,$55,$A8,$55,$A8,$55
            .byte $FF,$55,$AA,$54,$A8,$50,$A0,$40
            .byte $80,$55,$AA,$00,$00,$00,$00,$00
            .byte $00,$05,$0A,$15,$2A,$55,$AA,$55
            .byte $AA,$05,$08,$15,$28,$55,$A8,$55
            .byte $A8,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$55,$82,$D7,$AE,$DD,$BA,$F5
            .byte $EB,$F5,$BA,$DD,$AE,$D7,$AB,$D5
            .byte $FF,$51,$A0,$45,$88,$15,$28,$55
            .byte $FE,$00,$AB,$D1,$B8,$D5,$BE,$D4
            .byte $FF,$00,$AA,$D4,$AA,$D4,$AA,$D4
            .byte $FF,$45,$0A,$01,$80,$01,$82,$40
            .byte $0A,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF

;------------------------------------------------
; Background 1 tiles
;
; Tiles 8x8
;------------------------------------------------

L2100:
            .byte $00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$5D,$B8,$70,$A0,$60,$E0
            .byte $41,$0A,$01,$00,$51,$A8,$50,$A8
            .byte $54,$2A,$15,$2A,$15,$0A,$15,$0A
            .byte $15,$2A,$55,$AA,$45,$AA,$55,$AA
            .byte $15,$AA,$55,$8A,$54,$AA,$15,$AA
            .byte $55,$AA,$15,$A8,$45,$AA,$11,$AA
            .byte $45,$42,$15,$A8,$41,$20,$08,$A2
            .byte $41,$AC,$58,$B0,$60,$A0,$40,$C0
            .byte $40,$A2,$65,$A2,$45,$C2,$45,$A2
            .byte $61,$AA,$55,$AB,$5F,$BA,$75,$B8
            .byte $55,$AA,$55,$AA,$55,$EA,$7D,$8E
            .byte $5D,$AA,$5D,$B8,$75,$A8,$60,$A0
            .byte $51,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$7D,$E8,$54,$E8,$50,$80
            .byte $41,$02,$05,$0A,$15,$2A,$55,$AA
            .byte $55,$AA,$55,$AA,$45,$AA,$55,$2A
            .byte $51,$C0,$41,$C2,$01,$80,$01,$87
            .byte $50,$AE,$5C,$AC,$58,$B8,$F0,$C0
            .byte $00,$2A,$15,$2A,$11,$2A,$55,$0A
            .byte $55,$AA,$55,$BA,$75,$A0,$50,$A0
            .byte $50,$AA,$15,$AA,$57,$BE,$7D,$EA
            .byte $D1,$AA,$51,$AA,$55,$2A,$05,$02
            .byte $05,$0A,$50,$8A,$11,$A0,$09,$82
            .byte $40,$A0,$71,$E0,$41,$E2,$41,$AA
            .byte $55,$B8,$59,$AA,$51,$B2,$55,$B2
            .byte $51,$B8,$55,$BA,$74,$B8,$50,$A0
            .byte $54,$A2,$01,$82,$01,$00,$01,$00
            .byte $50,$AA,$55,$AA,$55,$AA,$55,$A0
            .byte $00,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $15,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$FF,$D5,$AA,$D5,$AA,$D5,$AA
            .byte $D5,$FE,$54,$AA,$54,$AA,$54,$AA
            .byte $54,$A0,$15,$AA,$55,$8A,$55,$AA
            .byte $55,$00,$05,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$2A,$15,$0A,$05,$02
            .byte $01,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$EA,$C4,$E8,$74,$A8,$40,$A8
            .byte $55,$82,$01,$00,$01,$00,$00,$80
            .byte $50,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$54,$8A,$45,$82,$45,$82
            .byte $41,$AA,$51,$B2,$51,$B2,$55,$B2
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AC,$58,$B0,$60,$A0,$40,$C0
            .byte $40,$00,$00,$02,$15,$2A,$55,$AA
            .byte $55,$02,$01,$00,$40,$A4,$5E,$AB
            .byte $57,$AA,$55,$8A,$51,$2A,$15,$2A
            .byte $15,$AA,$D5,$AA,$D5,$AA,$D5,$AA
            .byte $80,$AA,$54,$AA,$54,$AA,$54,$AA
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$02,$01,$02,$01,$02,$01,$02
            .byte $01,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A2,$51,$A0,$50,$AA,$54,$AA
            .byte $55,$AA,$45,$A2,$45,$A2,$55,$A2
            .byte $55,$AA,$55,$A6,$41,$A3,$43,$AE
            .byte $55,$C0,$C1,$C2,$81,$82,$85,$82
            .byte $85,$AA,$51,$AA,$55,$8A,$55,$AA
            .byte $55,$AA,$55,$AA,$5D,$BA,$51,$AA
            .byte $55,$8A,$C5,$C2,$C4,$E2,$E1,$E2
            .byte $C1,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$5D,$B8,$74,$AA,$74,$A8
            .byte $40,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$B2,$51,$B2,$51,$A2,$65,$A2
            .byte $65,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$0A,$05,$0A,$55,$A8,$50,$A8
            .byte $54,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$55,$AA,$55,$AA,$75,$FA
            .byte $75,$82,$85,$82,$41,$C2,$41,$80
            .byte $41,$AA,$55,$B2,$41,$A2,$55,$8A
            .byte $54,$AA,$55,$AB,$55,$AB,$57,$AF
            .byte $7F,$E0,$C1,$E0,$C0,$80,$80,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$15,$0A,$05,$0A,$05,$02
            .byte $01,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$B2,$51,$B2,$51,$B0,$59,$A8
            .byte $59,$82,$05,$80,$15,$82,$45,$A2
            .byte $55,$AE,$1C,$AC,$58,$A8,$70,$C0
            .byte $00,$2A,$15,$2A,$11,$2A,$55,$0A
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$82,$41,$A0,$41,$A8,$50,$AA
            .byte $55,$A2,$51,$A0,$50,$AA,$55,$AA
            .byte $55,$AA,$FF,$BD,$00,$00,$40,$A8
            .byte $55,$FE,$F8,$C0,$00,$00,$00,$00
            .byte $00,$00,$01,$00,$01,$02,$01,$0A
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$FE,$54,$A8,$54,$A8,$54,$A8
            .byte $54,$00,$40,$80,$40,$80,$50,$A0
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$02,$01,$00,$00,$00,$00,$00
            .byte $00,$AA,$15,$2A,$15,$02,$05,$02
            .byte $01,$A8,$59,$A8,$59,$A8,$51,$B2
            .byte $51,$A0,$15,$A0,$55,$8A,$45,$AA
            .byte $55,$00,$05,$AA,$55,$AA,$55,$AA
            .byte $55,$FF,$D5,$AA,$95,$8A,$C5,$A2
            .byte $D1,$FE,$54,$AC,$58,$B2,$64,$CA
            .byte $94,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$51,$A0,$01,$82,$01,$02
            .byte $15,$AA,$54,$AA,$54,$A8,$54,$A8
            .byte $50,$3A,$1D,$1A,$1D,$0E,$0D,$0E
            .byte $05,$AA,$D5,$AA,$D5,$AA,$D5,$80
            .byte $80,$A8,$54,$A8,$54,$A8,$54,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$80,$40,$80,$40,$A0,$40,$A8
            .byte $54,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$02,$01,$00,$01,$00,$00,$00
            .byte $00,$A8,$59,$A8,$51,$B0,$51,$AA
            .byte $59,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$D7,$A8,$D9,$B2,$E5,$8A
            .byte $80,$AA,$54,$2A,$14,$8A,$44,$A2
            .byte $00,$AA,$5F,$FE,$F5,$6A,$37,$BE
            .byte $17,$AA,$D5,$FA,$F5,$BB,$5F,$AA
            .byte $55,$AE,$DD,$FC,$7D,$A8,$51,$A8
            .byte $15,$A8,$50,$A8,$50,$A8,$54,$A8
            .byte $54,$0A,$0D,$0A,$1D,$0E,$05,$0E
            .byte $1D,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$80,$00,$A0,$41,$AA
            .byte $55,$00,$00,$00,$01,$02,$05,$AA
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$02
            .byte $15,$02,$01,$02,$05,$02,$05,$0A
            .byte $55,$00,$00,$A0,$55,$AA,$55,$AA
            .byte $55,$00,$00,$00,$00,$A0,$55,$AA
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A8,$50,$A8,$50,$A8,$54,$A8
            .byte $54,$0A,$1D,$0A,$1D,$3A,$15,$3A
            .byte $75,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$FF,$D5,$AA,$D5,$A0,$D5,$A2
            .byte $D5,$FE,$54,$AA,$58,$2A,$74,$AA
            .byte $74,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A8,$54,$A8,$54,$AA,$54,$AA
            .byte $54,$2A,$35,$2A,$55,$6A,$55,$AA
            .byte $D5,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A2,$D5,$A0,$DF,$AA,$D5,$AA
            .byte $80,$AA,$74,$0A,$F4,$AA,$58,$AA
            .byte $00,$AB,$56,$BC,$71,$A2,$64,$C8
            .byte $91,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A8,$54,$A8,$54,$A8,$54,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$A0,$E4,$A0,$E4,$A0,$E4,$A0
            .byte $E4,$AA,$55,$AA,$55,$2A,$15,$0A
            .byte $05,$AA,$55,$BF,$75,$AA,$75,$AA
            .byte $75,$AA,$45,$EC,$EC,$EC,$EC,$EC
            .byte $EC,$AA,$55,$02,$04,$0A,$04,$08
            .byte $04,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$FF,$55,$FF,$E0,$A0,$F5,$A0
            .byte $E4,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$FF,$55,$FF,$00,$00,$55,$00
            .byte $00,$0A,$05,$02,$05,$02,$05,$0A
            .byte $05,$AA,$75,$AA,$75,$AA,$55,$BA
            .byte $55,$E8,$74,$E8,$74,$E8,$74,$E8
            .byte $74,$2A,$14,$2A,$14,$2A,$14,$2A
            .byte $14,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$AA,$F5,$BA,$51,$28,$11,$88
            .byte $44,$FF,$55,$AA,$55,$AA,$55,$AA
            .byte $55,$0A,$15,$0A,$15,$0A,$15,$0A
            .byte $15,$AA,$55,$BA,$55,$AA,$5D,$AF
            .byte $51,$B8,$70,$B8,$70,$B8,$70,$F8
            .byte $70,$2A,$14,$28,$50,$28,$50,$08
            .byte $50,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$A8,$54,$A8,$54,$A8,$54,$A8
            .byte $54,$A8,$51,$A2,$45,$8A,$15,$2A
            .byte $55,$AA,$D5,$AA,$D5,$AA,$D5,$AA
            .byte $D5,$AA,$55,$AA,$55,$AA,$55,$00
            .byte $00,$A2,$D1,$68,$74,$BA,$5C,$AE
            .byte $56,$2A,$55,$2A,$55,$2A,$55,$AA
            .byte $55,$AC,$55,$AC,$55,$AC,$55,$A8
            .byte $55,$AA,$71,$AA,$71,$A2,$55,$AA
            .byte $55,$C0,$50,$C0,$50,$C0,$50,$AA
            .byte $55,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$5F,$FE,$F5,$6A,$37,$BE
            .byte $17,$AA,$D5,$FA,$F5,$BB,$5F,$AA
            .byte $55,$AE,$DD,$FC,$7D,$A8,$51,$A8
            .byte $15,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$AA,$5F,$FE,$F5,$6A,$37,$BE
            .byte $17,$AA,$F5,$FF,$57,$AA,$55,$22
            .byte $55,$AA,$D5,$FA,$7D,$AA,$51,$A8
            .byte $15,$8A,$55,$8A,$40,$A0,$40,$A8
            .byte $55,$2A,$55,$0A,$01,$00,$00,$00
            .byte $00,$A8,$50,$A0,$00,$80,$00,$00
            .byte $00,$FF,$D4,$BA,$F4,$A2,$D0,$A8
            .byte $80,$AA,$55,$A6,$41,$A3,$43,$AE
            .byte $55,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF

;------------------------------------------------
; Map data
;
; Tile based, 14 tiles wide
;------------------------------------------------

L2900:							; Level 1
            .byte $07,$03,$04,$09,$0B,$03,$08
            .byte $07,$08,$08,$08,$0A,$03,$05,$04
            .byte $03,$04,$0C,$09,$08,$03,$03,$08
            .byte $08,$0A,$03,$0A,$03,$0C,$04,$0C
            .byte $0C,$0C,$00,$08,$0B,$08,$04,$04
            .byte $0A,$0A,$09,$03,$03,$0C,$09,$0C
            .byte $09,$08,$00,$08,$05,$0A,$03,$08
            .byte $09,$03,$0C,$0C,$04,$0A,$0C,$08
            .byte $09,$08,$08,$04,$0C,$03,$0C,$0C
            .byte $03,$03,$0C,$0C,$03,$03,$08,$09
            .byte $08,$0A,$09,$03,$00,$0C,$03,$0C
            .byte $03,$03,$02,$07,$02,$08,$09,$09
            .byte $0A,$0C,$03,$04,$09,$0C,$04,$02
            .byte $03,$02,$04,$04,$0A,$03,$09,$03
            .byte $03,$05,$04,$42,$03,$0B,$07,$03
            .byte $03,$08,$0C,$03,$09,$03,$07,$04
            .byte $04,$09,$02,$02,$02,$02,$08,$04
            .byte $09,$0A,$08,$08,$08,$08,$04,$04
            .byte $04,$02,$05,$02,$04,$04,$04,$0C
            .byte $0C,$0A,$08,$08,$04,$02,$04,$04
            .byte $04,$08,$04,$04,$0A,$09,$0C,$08
            .byte $0A,$04,$02,$02,$04,$08,$08,$0C
            .byte $04,$09,$0C,$0A,$08,$09,$04,$02
            .byte $05,$02,$02,$04,$0A,$04,$03,$03
            .byte $0A,$03,$08,$0A,$04,$0B,$03,$02
            .byte $03,$04,$0C,$0A,$09,$0A,$03,$05
            .byte $03,$0C,$0A,$05,$02,$03,$08,$0C
            .byte $28,$03,$09,$03,$03,$01,$0B,$04
            .byte $28,$01,$02,$08,$08,$09,$00,$09
            .byte $0A,$08,$08,$0B,$02,$04,$0A,$02
            .byte $03,$08,$0A,$0C,$42,$0A,$09,$0A
            .byte $08,$04,$03,$0B,$03,$05,$02,$03
            .byte $00,$00,$00,$00,$08,$00,$00,$08
            .byte $03,$03,$05,$02,$03,$00,$00,$08
            .byte $0C,$00,$00,$00,$08,$09,$00,$03
            .byte $03,$03,$03,$08,$09,$09,$09,$09
            .byte $08,$00,$00,$09,$09,$00,$08,$08
            .byte $00,$0C,$00,$09,$00,$00,$00,$09
            .byte $08,$00,$00,$00,$09,$0C,$00,$0C
            .byte $00,$00,$0C,$09,$05,$03,$03,$00
            .byte $09,$08,$00,$03,$04,$00,$03,$00
            .byte $08,$08,$03,$08,$08,$00,$00,$00
            .byte $03,$03,$03,$03,$09,$09,$0C,$03
            .byte $03,$08,$05,$08,$00,$04,$03,$03
            .byte $09,$1B,$12,$03,$03,$03,$42,$03
            .byte $08,$00,$00,$08,$05,$13,$1B,$6C
            .byte $3B,$11,$13,$07,$02,$03,$00,$03
            .byte $09,$00,$08,$25,$17,$22,$37,$17
            .byte $17,$27,$0C,$0C,$03,$09,$00,$08
            .byte $08,$0C,$31,$C0,$C1,$95,$96,$27
            .byte $0C,$1B,$10,$11,$13,$00,$00,$0C
            .byte $30,$B0,$6C,$85,$86,$17,$11,$17
            .byte $80,$81,$82,$10,$11,$0C,$24,$39
            .byte $3B,$17,$17,$17,$17,$17,$70,$71
            .byte $72,$17,$17,$0B,$1A,$22,$37,$17
            .byte $2F,$25,$2F,$25,$17,$17,$2F,$25
            .byte $17,$1A,$17,$2F,$25,$2F,$0C,$1A
            .byte $10,$12,$24,$2F,$03,$04,$25,$25
            .byte $2F,$1B,$10,$11,$11,$17,$17,$17
            .byte $27,$1A,$13,$04,$04,$1B,$10,$17
            .byte $17,$39,$3A,$3A,$3A,$3A,$3B,$25
            .byte $17,$13,$28,$25,$17,$17,$2F,$38
            .byte $FD,$6C,$FD,$FD,$2D,$1B,$17,$17
            .byte $10,$39,$3A,$3A,$3A,$17,$17,$21
            .byte $21,$17,$17,$3A,$3A,$3A,$3B,$38
            .byte $17,$17,$6C,$17,$4D,$4E,$4E,$4F
            .byte $17,$6C,$17,$85,$2D,$38,$6C,$60
            .byte $61,$17,$57,$58,$5A,$59,$17,$62
            .byte $63,$17,$2D,$38,$17,$50,$51,$17
            .byte $57,$5A,$5A,$59,$17,$52,$53,$95
            .byte $2D,$38,$95,$96,$17,$17,$57,$58
            .byte $5A,$59,$17,$95,$96,$17,$2D,$38
            .byte $85,$86,$95,$17,$43,$44,$44,$45
            .byte $17,$85,$86,$6C,$2D,$22,$36,$36
            .byte $36,$17,$17,$90,$90,$17,$6C,$36
            .byte $36,$36,$37,$1D,$17,$17,$17,$38
            .byte $FD,$62,$61,$FD,$2D,$17,$17,$17
            .byte $17,$09,$25,$1C,$17,$38,$FD,$50
            .byte $53,$FD,$2D,$17,$1C,$1C,$2F,$04
            .byte $05,$08,$24,$35,$36,$36,$36,$36
            .byte $37,$2F,$03,$03,$08,$12,$04,$05
            .byte $0A,$0C,$1E,$39,$3B,$33,$0C,$03
            .byte $0B,$0A,$1B,$17,$11,$13,$0C,$0C
            .byte $88,$89,$8A,$33,$0C,$03,$0A,$1A
            .byte $17,$95,$95,$17,$13,$0B,$09,$00
            .byte $09,$33,$04,$0A,$04,$30,$17,$85
            .byte $86,$17,$27,$08,$09,$09,$0B,$08
            .byte $04,$04,$08,$24,$17,$FA,$FB,$17
            .byte $2F,$04,$08,$08,$08,$8B,$0B,$28
            .byte $0A,$0A,$25,$F9,$6F,$6D,$12,$04
            .byte $78,$79,$7A,$7B,$08,$0C,$05,$0C
            .byte $1A,$39,$8D,$7D,$2F,$04,$1E,$38
            .byte $2D,$33,$08,$04,$0A,$0C,$30,$22
            .byte $37,$17,$11,$12,$1E,$22,$37,$33
            .byte $1B,$10,$13,$1B,$17,$17,$17,$1D
            .byte $1D,$17,$39,$3A,$3A,$3B,$1B,$95
            .byte $96,$39,$3B,$25,$2E,$04,$1A,$17
            .byte $38,$4D,$4F,$2D,$17,$85,$86,$22
            .byte $37,$04,$05,$0B,$1C,$1C,$38,$57
            .byte $59,$2D,$2F,$25,$1C,$1D,$17,$1B
            .byte $10,$13,$03,$0A,$38,$57,$59,$2D
            .byte $0A,$0C,$08,$0A,$25,$17,$17,$17
            .byte $13,$1B,$38,$57,$59,$2D,$12,$1A
            .byte $10,$11,$12,$17,$39,$3A,$3A,$3A
            .byte $17,$57,$59,$17,$3A,$3A,$3A,$3B
            .byte $17,$17,$38,$95,$4B,$17,$FD,$43
            .byte $45,$FD,$17,$49,$4B,$2D,$17,$17
            .byte $38,$3F,$41,$17,$36,$36,$36,$36
            .byte $17,$85,$86,$2D,$17,$17,$38,$FD
            .byte $FD,$2D,$17,$17,$17,$13,$38,$FD
            .byte $FD,$2D,$17,$17,$38,$FD,$FD,$2D
            .byte $2F,$25,$17,$17,$38,$FD,$FD,$2D
            .byte $17,$24,$35,$36,$36,$37,$0A,$1A
            .byte $17,$2F,$35,$36,$36,$36,$2F,$03
            .byte $1E,$39,$3B,$33,$28,$25,$2F,$05
            .byte $1E,$39,$3B,$33,$03,$12,$1E,$38
            .byte $2D,$33,$04,$0C,$02,$09,$1E,$38
            .byte $2D,$33,$03,$2F,$1E,$22,$37,$33
            .byte $0C,$02,$08,$04,$1E,$35,$37,$33
            .byte $1A,$03,$39,$3A,$3A,$3A,$3A,$13
            .byte $04,$94,$3A,$3A,$3A,$3B,$17,$1A
            .byte $38,$FD,$FD,$FD,$FD,$95,$08,$84
            .byte $FD,$FD,$FD,$2D,$17,$17,$38,$17
            .byte $17,$6C,$95,$8B,$07,$96,$6C,$17
            .byte $17,$2D,$17,$17,$38,$2B,$2B,$17
            .byte $95,$85,$04,$86,$86,$2B,$2B,$2D
            .byte $17,$17,$38,$21,$17,$39,$96,$8A
            .byte $04,$96,$95,$17,$21,$2D,$17,$2F
            .byte $38,$17,$21,$38,$85,$BD,$BE,$BF
            .byte $6C,$21,$17,$2D,$17,$12,$16,$2C
            .byte $17,$38,$17,$AD,$AE,$AF,$2D,$17
            .byte $3C,$32,$25,$17,$13,$16,$2C,$38
            .byte $17,$85,$9E,$86,$2D,$17,$32,$00
            .byte $1B,$17,$27,$00,$38,$22,$36,$36
            .byte $36,$36,$37,$2D,$04,$1A,$17,$17
            .byte $27,$08,$38,$17,$17,$FD,$FD,$17
            .byte $17,$2D,$00,$31,$17,$80,$81,$13
            .byte $22,$36,$1E,$39,$3B,$33,$36,$37
            .byte $1B,$17,$17,$70,$71,$72,$12,$05
            .byte $1E,$38,$2D,$33,$09,$00,$25,$2F
            .byte $25,$24,$2F,$25,$2E,$03,$1E,$38
            .byte $2D,$33,$04,$1A,$11,$10,$13,$12
            .byte $03,$09,$03,$02,$1E,$38,$2D,$33
            .byte $03,$25,$17,$39,$3B,$17,$11,$10
            .byte $12,$02,$1E,$38,$2D,$33,$0C,$0C
            .byte $25,$22,$37,$17,$17,$17,$2E,$08
            .byte $1E,$38,$2D,$33,$0C,$0C,$03,$30
            .byte $17,$C0,$C1,$27,$08,$0C,$1E,$38
            .byte $2D,$33,$1A,$12,$08,$31,$17,$B0
            .byte $B1,$17,$12,$0C,$1E,$38,$2D,$33
            .byte $25,$2E,$0C,$30,$17,$39,$3B,$17
            .byte $2F,$03,$1E,$38,$2D,$33,$08,$00
            .byte $1A,$39,$3B,$22,$37,$17,$11,$12
            .byte $1E,$35,$37,$33,$08,$1B,$17,$22
            .byte $37,$17,$2F,$25,$39,$3A,$3A,$3A
            .byte $3A,$3A,$3A,$3B,$2F,$25,$17,$2F
            .byte $09,$09,$38,$39,$3A,$3A,$3A,$3A
            .byte $3B,$2D,$00,$0C,$25,$39,$3A,$3A
            .byte $17,$38,$20,$20,$20,$20,$2D,$17
            .byte $3A,$3A,$3B,$38,$17,$17,$39,$17
            .byte $21,$FD,$FD,$21,$17,$3B,$17,$17
            .byte $2D,$38,$2B,$17,$38,$2B,$17,$17
            .byte $17,$17,$2B,$2D,$17,$2B,$2D,$38
            .byte $2B,$17,$38,$FD,$FD,$21,$21,$FD
            .byte $FD,$2D,$17,$2B,$2D,$38,$2B,$17
            .byte $22,$36,$36,$36,$36,$36,$36,$37
            .byte $17,$2B,$2D,$38,$2B,$17,$17,$17
            .byte $17,$17,$17,$17,$17,$17,$17,$2B
            .byte $2D,$38,$FC,$FC,$FC,$FC,$EE,$FD
            .byte $FD,$17,$FC,$FC,$FC,$FC,$EF,$38
            .byte $EC,$ED,$ED,$FC,$DD,$FD,$FD,$17
            .byte $FC,$00,$ED,$ED,$DE,$22,$36,$36
            .byte $36,$FC,$00,$FD,$FD,$36,$FC,$00
            .byte $36,$36,$37,$17,$27,$1E,$39,$EC
            .byte $00,$38,$2D,$1E,$EC,$00,$33,$25
            .byte $17,$17,$27,$1E,$38,$2D,$33,$38
            .byte $2D,$1E,$38,$2D,$33,$04,$25,$17
            .byte $2F,$1E,$38,$2D,$33,$38,$2D,$1E
            .byte $38,$2D,$33,$03,$1B,$2F,$03,$1E
            .byte $38,$2D,$33,$38,$2D,$1E,$38,$2D
            .byte $33,$1B,$17,$13,$04,$1E,$38,$2D
            .byte $33,$38,$2D,$1E,$38,$2D,$33,$25
            .byte $17,$17,$12,$1E,$22,$37,$33,$38
            .byte $2D,$1E,$22,$37,$33,$04,$25,$17
            .byte $26,$39,$3A,$3A,$3A,$17,$17,$3A
            .byte $3A,$3A,$3B,$0B,$1B,$17,$26,$38
            .byte $FD,$FD,$17,$62,$63,$17,$FD,$FD
            .byte $2D,$04,$31,$17,$2E,$38,$38,$2D
            .byte $17,$52,$53,$17,$38,$2D,$2D,$1B
            .byte $17,$2E,$0B,$38,$22,$37,$17,$17
            .byte $17,$17,$22,$37,$2D,$25,$17,$3A
            .byte $3A,$17,$17,$17,$17,$17,$17,$17
            .byte $17,$17,$17,$3A,$3A,$39,$3B,$17
            .byte $39,$3A,$3A,$3A,$3A,$3A,$3A,$3B
            .byte $17,$39,$3B,$22,$37,$17,$38,$80
            .byte $81,$82,$17,$80,$81,$82,$17,$22
            .byte $37,$2C,$17,$17,$38,$70,$71,$72
            .byte $17,$70,$71,$72,$17,$17,$3C,$16
            .byte $2C,$17,$22,$36,$36,$36,$36,$36
            .byte $36,$37,$17,$3C,$32,$17,$16,$2C
            .byte $17,$17,$17,$17,$17,$17,$17,$17
            .byte $3C,$32,$31,$17,$2F,$16,$2C,$17
            .byte $17,$17,$17,$17,$17,$3C,$32,$03
            .byte $30,$17,$13,$02,$16,$2C,$17,$39
            .byte $3B,$17,$3C,$32,$03,$1B,$38,$17
            .byte $17,$13,$08,$16,$2C,$22,$37,$3C
            .byte $32,$04,$1A,$17,$17,$17,$17,$17
            .byte $12,$08,$16,$2C,$3C,$32,$09,$03
            .byte $24,$17,$17,$25,$17,$17,$2E,$03
            .byte $03,$16,$32,$08,$0B,$08,$04,$24
            .byte $1D,$03,$25,$2F,$04,$09,$07,$08
            .byte $04,$04,$01,$09,$08,$04,$04,$03
            .byte $03,$03,$09,$04,$08,$03,$03,$07
            .byte $03,$03,$03,$08,$03,$FF
L2FAD:							; Level 2
            .byte $04,$04
            .byte $04,$04,$1B,$12,$09,$0C,$0C,$09
            .byte $04,$03,$03,$03,$25,$10,$13,$0C
            .byte $25,$17,$12,$09,$08,$09,$1B,$13
            .byte $03,$09,$1B,$17,$2F,$03,$03,$25
            .byte $17,$13,$08,$1B,$17,$2E,$09,$09
            .byte $17,$17,$12,$02,$03,$1B,$17,$27
            .byte $04,$25,$2E,$04,$09,$1B,$17,$17
            .byte $2F,$04,$1B,$17,$17,$27,$04,$0C
            .byte $03,$09,$1A,$17,$17,$2E,$0C,$04
            .byte $25,$1C,$1C,$2F,$1B,$13,$03,$1B
            .byte $17,$39,$17,$13,$1B,$04,$04,$0B
            .byte $01,$02,$25,$2F,$03,$24,$17,$35
            .byte $C0,$C1,$17,$13,$13,$04,$02,$1B
            .byte $12,$0C,$04,$09,$24,$39,$B0,$B1
            .byte $17,$17,$17,$13,$1B,$17,$17,$12
            .byte $08,$04,$1A,$22,$39,$3B,$17,$17
            .byte $17,$17,$17,$27,$25,$17,$12,$1A
            .byte $17,$39,$22,$37,$17,$2F,$24,$17
            .byte $17,$27,$04,$24,$17,$17,$17,$22
            .byte $39,$3B,$17,$13,$08,$25,$17,$2F
            .byte $42,$04,$25,$C0,$C1,$39,$35,$37
            .byte $17,$17,$12,$1B,$17,$12,$04,$06
            .byte $1B,$B0,$B1,$35,$80,$81,$82,$3B
            .byte $FD,$FD,$FA,$FB,$13,$04,$31,$39
            .byte $3B,$39,$70,$71,$72,$37,$FD,$FD
            .byte $F9,$6F,$6D,$11,$17,$22,$37,$22
            .byte $39,$3B,$39,$3B,$39,$3B,$17,$8D
            .byte $7D,$3B,$17,$17,$17,$2F,$35,$37
            .byte $35,$37,$22,$37,$2F,$25,$35,$37
            .byte $2F,$25,$2E,$02,$39,$3B,$FD,$FD
            .byte $17,$2F,$04,$04,$25,$2E,$02,$02
            .byte $02,$04,$35,$37,$FD,$FD,$17,$13
            .byte $04,$04,$04,$02,$06,$02,$04,$0B
            .byte $25,$17,$17,$2E,$24,$2F,$0B,$02
            .byte $02,$02,$1B,$13,$04,$04,$04,$25
            .byte $2E,$04,$04,$02,$02,$02,$1B,$11
            .byte $17,$17,$13,$1B,$13,$04,$04,$04
            .byte $1A,$12,$06,$02,$25,$17,$FD,$FD
            .byte $FA,$FB,$17,$13,$04,$1B,$17,$2F
            .byte $02,$04,$04,$25,$FD,$FD,$F9,$6F
            .byte $17,$17,$11,$17,$17,$11,$12,$04
            .byte $04,$04,$24,$1D,$17,$8D,$39,$3B
            .byte $39,$3B,$39,$3B,$2F,$42,$1B,$12
            .byte $04,$04,$24,$17,$35,$37,$35,$37
            .byte $35,$37,$11,$11,$17,$17,$13,$04
            .byte $04,$25,$39,$3B,$FD,$FD,$FA,$FB
            .byte $39,$3B,$39,$3B,$11,$10,$10,$13
            .byte $22,$37,$FD,$FD,$F9,$6F,$6D,$37
            .byte $35,$37,$17,$17,$17,$17,$17,$2E
            .byte $25,$17,$17,$8D,$7D,$1C,$1D,$1C
            .byte $1C,$17,$17,$2F,$2F,$01,$01,$25
            .byte $1C,$1C,$2E,$03,$03,$08,$05,$25
            .byte $2F,$05,$0B,$02,$03,$06,$04,$00
            .byte $04,$06,$03,$08,$08,$04,$04,$04
            .byte $01,$02,$03,$04,$08,$08,$08,$08
            .byte $08,$04,$04,$06,$08,$08,$01,$03
            .byte $04,$06,$04,$00,$00,$00,$00,$00
            .byte $04,$06,$08,$28,$04,$04,$04,$09
            .byte $00,$00,$00,$00,$00,$00,$00,$08
            .byte $08,$08,$06,$08,$09,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$09,$04,$03
            .byte $04,$08,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$0C,$08,$07,$0C
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$09,$08,$03,$09,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $09,$06,$0C,$09,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$08,$08
            .byte $06,$08,$00,$00,$00,$00,$0A,$00
            .byte $00,$00,$00,$00,$09,$04,$03,$09
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$09,$04,$02,$03,$09,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$09
            .byte $04,$07,$07,$03,$09,$0A,$0A,$00
            .byte $00,$00,$00,$00,$00,$09,$04,$03
            .byte $02,$02,$07,$04,$09,$00,$00,$00
            .byte $00,$00,$09,$04,$03,$0B,$03,$02
            .byte $03,$06,$04,$04,$09,$09,$09,$04
            .byte $04,$07,$03,$03,$03,$03,$03,$02
            .byte $03,$07,$04,$03,$03,$07,$03,$03
            .byte $0B,$0B,$0B,$03,$04,$04,$04,$04
            .byte $04,$06,$04,$02,$04,$03,$0B,$0B
            .byte $02,$03,$03,$04,$0A,$04,$04,$04
            .byte $04,$04,$04,$02,$03,$03,$03,$04
            .byte $03,$04,$08,$09,$09,$04,$04,$04
            .byte $04,$0B,$03,$03,$08,$28,$08,$04
            .byte $08,$08,$03,$03,$09,$09,$04,$09
            .byte $03,$02,$04,$08,$08,$03,$04,$08
            .byte $03,$09,$03,$04,$03,$04,$04,$03
            .byte $11,$12,$08,$03,$08,$09,$1B,$10
            .byte $10,$11,$12,$03,$03,$03,$39,$3B
            .byte $13,$08,$08,$1B,$39,$3B,$39,$3B
            .byte $17,$12,$03,$1B,$35,$37,$17,$10
            .byte $11,$17,$35,$37,$35,$37,$17,$17
            .byte $10,$17,$80,$81,$82,$3B,$E3,$E4
            .byte $E5,$E6,$E7,$3B,$39,$3B,$80,$81
            .byte $70,$71,$72,$37,$D3,$D4,$D5,$D6
            .byte $D7,$37,$22,$37,$70,$71,$39,$3B
            .byte $39,$3B,$C3,$C4,$C5,$C6,$C7,$3B
            .byte $FA,$FB,$39,$3B,$22,$37,$22,$37
            .byte $B3,$B4,$B5,$B6,$B7,$37,$F9,$6F
            .byte $6D,$37,$39,$3B,$FD,$FD,$39,$3B
            .byte $39,$3A,$39,$3B,$39,$8D,$7D,$3B
            .byte $22,$37,$FD,$FD,$22,$37,$35,$37
            .byte $22,$37,$22,$37,$22,$37,$C0,$C1
            .byte $39,$3B,$39,$3B,$39,$3B,$80,$81
            .byte $82,$3B,$49,$4B,$B0,$B1,$35,$37
            .byte $22,$37,$22,$37,$70,$71,$72,$37
            .byte $3F,$41,$39,$3B,$39,$3B,$FA,$FB
            .byte $39,$3B,$39,$3B,$FD,$FD,$39,$3B
            .byte $22,$37,$22,$37,$F9,$6F,$6D,$37
            .byte $22,$37,$FD,$FD,$22,$37,$49,$4B
            .byte $39,$3B,$39,$8D,$7D,$3B,$39,$3B
            .byte $39,$3B,$39,$3B,$3F,$41,$22,$37
            .byte $22,$37,$22,$37,$22,$37,$22,$37
            .byte $22,$37,$39,$3B,$39,$3B,$39,$3B
            .byte $39,$3B,$E3,$E9,$EA,$E6,$E7,$3B
            .byte $35,$37,$35,$37,$35,$37,$35,$37
            .byte $D3,$D9,$DA,$D6,$D7,$37,$39,$3B
            .byte $FA,$FB,$39,$3B,$FD,$FD,$C3,$C9
            .byte $CA,$C6,$C7,$3B,$22,$37,$F9,$6F
            .byte $6D,$37,$FD,$FD,$B3,$B9,$BA,$B6
            .byte $B7,$37,$39,$3B,$39,$8D,$7D,$3B
            .byte $39,$3B,$39,$3B,$39,$3B,$39,$3B
            .byte $35,$37,$35,$37,$35,$37,$35,$37
            .byte $35,$37,$35,$37,$35,$37,$39,$E9
            .byte $EA,$EB,$FD,$FD,$17,$17,$17,$17
            .byte $FD,$FD,$39,$3B,$D8,$D9,$DA,$DB
            .byte $FD,$FD,$17,$17,$17,$17,$FD,$FD
            .byte $35,$37,$C8,$C9,$CA,$CB,$17,$17
            .byte $1C,$1D,$17,$17,$17,$17,$39,$3B
            .byte $35,$B9,$BA,$BB,$17,$2E,$09,$08
            .byte $25,$17,$17,$17,$35,$37,$39,$3B
            .byte $17,$17,$2E,$03,$08,$04,$08,$30
            .byte $17,$17,$FA,$FB,$35,$37,$17,$27
            .byte $04,$04,$04,$08,$09,$31,$17,$17
            .byte $F9,$6F,$80,$81,$82,$27,$03,$08
            .byte $04,$04,$00,$25,$17,$17,$39,$8D
            .byte $70,$71,$72,$2F,$03,$08,$03,$03
            .byte $08,$08,$30,$17,$35,$37,$39,$3B
            .byte $17,$13,$03,$03,$03,$03,$08,$0C
            .byte $25,$17,$39,$3B,$35,$37,$17,$2F
            .byte $02,$03,$0C,$08,$0C,$09,$0C,$31
            .byte $35,$37,$2F,$24,$17,$13,$02,$04
            .byte $08,$04,$03,$0C,$08,$25,$17,$17
            .byte $09,$08,$25,$2F,$03,$02,$02,$08
            .byte $04,$03,$0C,$04,$25,$1C,$02,$04
            .byte $04,$08,$03,$02,$0B,$02,$02,$03
            .byte $08,$08,$04,$0C,$09,$03,$03,$03
            .byte $05,$03,$02,$01,$01,$08,$03,$0C
            .byte $0C,$0C,$04,$03,$02,$03,$03,$08
            .byte $03,$03,$05,$02,$03,$03,$03,$03
            .byte $0C,$04,$02,$03,$03,$04,$05,$03
            .byte $08,$04,$02,$01,$01,$0C,$09,$03
            .byte $03,$05,$08,$08,$09,$08,$04,$04
            .byte $02,$04,$02,$02,$28,$08,$03,$03
            .byte $04,$08,$08,$08,$08,$04,$08,$04
            .byte $05,$02,$09,$04,$06,$03,$04,$05
            .byte $08,$04,$08,$0B,$08,$04,$04,$06
            .byte $04,$04,$03,$03,$03,$03,$09,$04
            .byte $08,$04,$08,$03,$0C,$03,$04,$02
            .byte $03,$04,$04,$04,$08,$0C,$08,$08
            .byte $08,$08,$03,$03,$08,$0C,$07,$03
            .byte $0C,$91,$08,$08,$08,$08,$07,$08
            .byte $03,$04,$03,$08,$03,$03,$04,$04
            .byte $09,$00,$08,$00,$08,$04,$1A,$12
            .byte $03,$08,$08,$08,$08,$08,$08,$28
            .byte $00,$42,$1A,$11,$17,$39,$13,$03
            .byte $08,$1A,$10,$11,$12,$00,$1B,$10
            .byte $17,$17,$17,$22,$17,$12,$03,$25
            .byte $FD,$17,$FD,$13,$25,$17,$17,$FD
            .byte $3B,$39,$17,$2E,$04,$1B,$17,$2F
            .byte $25,$2F,$09,$24,$17,$FD,$37,$22
            .byte $2F,$08,$09,$25,$FD,$12,$03,$04
            .byte $08,$08,$30,$39,$3B,$39,$12,$04
            .byte $09,$03,$25,$2F,$05,$04,$04,$1B
            .byte $17,$22,$37,$22,$17,$11,$12,$04
            .byte $08,$08,$03,$03,$1A,$17,$17,$FA
            .byte $FB,$39,$39,$3B,$27,$09,$08,$03
            .byte $03,$04,$25,$1C,$17,$F9,$6F,$6D
            .byte $22,$37,$27,$00,$08,$1B,$11,$13
            .byte $03,$04,$25,$1C,$8D,$7D,$C0,$C1
            .byte $17,$12,$08,$25,$17,$17,$10,$12
            .byte $04,$05,$24,$35,$B0,$B1,$17,$FD
            .byte $13,$08,$30,$FD,$FD,$17,$13,$03
            .byte $03,$25,$FA,$FB,$17,$FD,$2F,$08
            .byte $30,$FD,$FD,$17,$27,$02,$03,$08
            .byte $F9,$6F,$6D,$2F,$00,$08,$31,$FD
            .byte $FD,$17,$17,$13,$11,$12,$1C,$8D
            .byte $7D,$12,$08,$00,$25,$17,$17,$80
            .byte $81,$82,$3B,$39,$0B,$25,$2F,$1B
            .byte $13,$91,$00,$25,$17,$70,$71,$72
            .byte $37,$22,$01,$01,$03,$24,$2F,$09
            .byte $28,$00,$24,$17,$17,$17,$1D,$17
            .byte $03,$02,$1B,$13,$04,$0B,$04,$00
            .byte $09,$25,$1C,$2F,$09,$24,$04,$1A
            .byte $17,$17,$11,$10,$12,$1A,$13,$09
            .byte $03,$1A,$10,$11,$10,$17,$17,$17
            .byte $17,$17,$17,$17,$17,$13,$1A,$17
            .byte $17,$17,$3B,$39,$3B,$39,$3B,$39
            .byte $3B,$39,$3B,$39,$3B,$39,$3B,$39
            .byte $37,$35,$37,$22,$37,$FC,$FC,$FC
            .byte $FC,$EE,$37,$22,$37,$22,$3B,$80
            .byte $81,$82,$3B,$EC,$ED,$ED,$ED,$DE
            .byte $3B,$80,$81,$82,$37,$70,$71,$72
            .byte $37,$22,$37,$22,$37,$22,$37,$70
            .byte $71,$72,$3B,$39,$3B,$39,$3B,$E3
            .byte $E4,$E5,$E6,$E7,$3B,$39,$3B,$39
            .byte $37,$35,$37,$22,$37,$D3,$D4,$D5
            .byte $D6,$D7,$37,$22,$37,$35,$3B,$08
            .byte $06,$39,$3B,$C3,$C4,$C5,$C6,$C7
            .byte $3B,$08,$09,$39,$37,$05,$08,$22
            .byte $37,$B3,$B4,$B5,$B6,$B7,$37,$08
            .byte $05,$22,$3B,$39,$3B,$39,$3B,$39
            .byte $3B,$39,$3B,$39,$3B,$39,$3B,$39
            .byte $37,$35,$37,$35,$37,$22,$37,$22
            .byte $37,$22,$37,$22,$37,$22,$17,$17
            .byte $17,$17,$2F,$25,$1D,$1C,$2F,$25
            .byte $17,$39,$3B,$39,$2F,$25,$1C,$2F
            .byte $00,$04,$00,$04,$00,$04,$25,$22
            .byte $37,$22,$03,$04,$0B,$04,$03,$31
            .byte $10,$13,$04,$04,$1B,$17,$17,$17
            .byte $04,$00,$04,$03,$00,$25,$1D,$2F
            .byte $04,$00,$25,$1D,$1C,$2E,$03,$05
            .byte $09,$03,$04,$09,$03,$04,$05,$04
            .byte $03,$04,$0B,$04,$FF
L36BC:							; Level 3
            .byte $01,$01,$07
            .byte $4D,$01,$26,$27,$01,$01,$05,$01
            .byte $01,$01,$4D,$5B,$01,$01,$01,$07
            .byte $16,$17,$01,$05,$01,$05,$07,$06
            .byte $01,$4B,$01,$07,$3D,$01,$01,$01
            .byte $07,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$70,$EA,$71,$15,$01,$01
            .byte $05,$01,$01,$11,$01,$01,$01,$06
            .byte $E9,$B7,$01,$CB,$CB,$CB,$CB,$CB
            .byte $CB,$CB,$CB,$11,$01,$01,$20,$01
            .byte $61,$01,$01,$01,$01,$3B,$01,$01
            .byte $01,$01,$06,$01,$01,$BB,$01,$15
            .byte $01,$5C,$5D,$5E,$5F,$11,$01,$05
            .byte $01,$05,$01,$BB,$11,$01,$06,$29
            .byte $4D,$4E,$4F,$01,$01,$01,$06,$01
            .byte $01,$BB,$01,$01,$01,$19,$3D,$3E
            .byte $3F,$01,$11,$CB,$CB,$CB,$CB,$DA
            .byte $01,$44,$01,$2C,$2D,$2E,$2F,$01
            .byte $3B,$11,$01,$01,$01,$01,$06,$01
            .byte $01,$01,$1D,$1E,$01,$01,$01,$11
            .byte $06,$01,$01,$06,$01,$01,$01,$26
            .byte $27,$01,$01,$01,$01,$06,$05,$11
            .byte $01,$01,$05,$06,$01,$16,$17,$01
            .byte $11,$01,$01,$01,$01,$01,$11,$01
            .byte $05,$06,$11,$01,$01,$01,$05,$01
            .byte $05,$3B,$01,$15,$01,$22,$23,$01
            .byte $01,$05,$05,$01,$01,$01,$05,$11
            .byte $01,$01,$01,$12,$13,$14,$05,$73
            .byte $87,$88,$01,$01,$01,$0F,$06,$01
            .byte $0D,$02,$03,$08,$62,$63,$64,$65
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$FA,$FB,$FC,$54,$01,$67,$01
            .byte $01,$01,$01,$15,$01,$84,$85,$F7
            .byte $F8,$F9,$01,$01,$57,$13,$14,$06
            .byte $01,$01,$73,$74,$75,$01,$01,$01
            .byte $01,$01,$02,$48,$04,$01,$01,$62
            .byte $63,$64,$65,$05,$01,$01,$01,$01
            .byte $01,$01,$01,$06,$FA,$FB,$FC,$54
            .byte $01,$01,$01,$05,$01,$01,$01,$11
            .byte $01,$3B,$F1,$F2,$F3,$0F,$01,$01
            .byte $01,$1B,$1C,$05,$01,$01,$01,$01
            .byte $01,$11,$11,$05,$01,$01,$05,$0B
            .byte $0C,$01,$01,$01,$5B,$01,$01,$01
            .byte $01,$0D,$01,$01,$3E,$01,$01,$01
            .byte $01,$01,$4B,$01,$01,$11,$01,$01
            .byte $06,$01,$01,$01,$01,$01,$06,$01
            .byte $70,$26,$27,$01,$01,$05,$EB,$CB
            .byte $CB,$CB,$CB,$CB,$CB,$CB,$01,$16
            .byte $17,$01,$01,$01,$BB,$01,$5C,$5D
            .byte $5E,$5F,$01,$01,$20,$01,$01,$01
            .byte $01,$44,$BB,$01,$4C,$5B,$4E,$4F
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $BB,$05,$3C,$4B,$01,$3F,$01,$01
            .byte $22,$CB,$CB,$CB,$CB,$CB,$FD,$01
            .byte $2C,$2D,$2E,$2F,$01,$01,$57,$06
            .byte $01,$22,$23,$01,$BB,$01,$01,$1D
            .byte $1E,$01,$01,$06,$02,$3B,$01,$12
            .byte $13,$14,$BB,$05,$01,$01,$01,$01
            .byte $05,$01,$05,$11,$01,$02,$03,$44
            .byte $BB,$01,$01,$01,$05,$01,$01,$3B
            .byte $01,$01,$11,$01,$84,$85,$AB,$CB
            .byte $CB,$CB,$E8,$01,$01,$05,$11,$01
            .byte $01,$73,$74,$75,$05,$73,$87,$88
            .byte $BB,$06,$01,$4D,$06,$05,$62,$63
            .byte $64,$65,$62,$63,$64,$65,$BB,$01
            .byte $01,$01,$01,$FA,$FB,$FC,$54,$FA
            .byte $FB,$FC,$54,$01,$BB,$06,$01,$0D
            .byte $05,$7B,$7C,$7D,$01,$F7,$F8,$F9
            .byte $01,$01,$BB,$01,$01,$01,$11,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $BB,$01,$01,$01,$01,$4D,$01,$01
            .byte $4D,$01,$01,$01,$01,$01,$BB,$01
            .byte $01,$05,$01,$01,$01,$01,$9E,$9F
            .byte $05,$01,$11,$01,$BB,$01,$01,$01
            .byte $01,$11,$01,$01,$8E,$8F,$5B,$01
            .byte $01,$70,$01,$71,$5C,$5D,$5E,$01
            .byte $01,$4D,$7E,$7F,$4B,$01,$01,$E9
            .byte $FD,$E7,$4C,$4D,$4E,$05,$01,$01
            .byte $6E,$6F,$01,$01,$11,$20,$DB,$61
            .byte $3C,$01,$3E,$05,$11,$01,$01,$01
            .byte $11,$01,$01,$01,$05,$01,$2C,$00
            .byte $2E,$01,$05,$01,$01,$01,$01,$01
            .byte $26,$27,$01,$01,$01,$1D,$1E,$01
            .byte $15,$01,$01,$11,$01,$01,$16,$17
            .byte $01,$01,$11,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$05,$84,$01,$01,$01,$05,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$73
            .byte $74,$15,$01,$01,$05,$01,$4D,$01
            .byte $01,$05,$05,$01,$62,$63,$64,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$FA,$FB,$FC,$54,$11,$01,$08
            .byte $08,$01,$01,$01,$01,$01,$01,$F7
            .byte $F8,$F9,$01,$01,$26,$26,$6D,$01
            .byte $84,$85,$4D,$01,$01,$01,$01,$01
            .byte $06,$0D,$7B,$7C,$7D,$73,$74,$75
            .byte $01,$01,$11,$01,$01,$01,$4D,$01
            .byte $01,$11,$62,$63,$64,$65,$22,$23
            .byte $01,$01,$01,$01,$01,$01,$01,$FA
            .byte $FB,$FC,$54,$01,$12,$13,$14,$01
            .byte $01,$01,$01,$11,$01,$F1,$F2,$F3
            .byte $4D,$01,$02,$03,$04,$01,$3B,$01
            .byte $01,$01,$01,$01,$01,$01,$11,$01
            .byte $01,$01,$01,$01,$01,$01,$06,$01
            .byte $67,$23,$06,$01,$01,$01,$01,$01
            .byte $5B,$01,$01,$01,$44,$01,$57,$13
            .byte $14,$01,$01,$01,$01,$06,$4B,$01
            .byte $01,$0D,$01,$01,$02,$03,$01,$11
            .byte $01,$26,$27,$01,$01,$11,$01,$01
            .byte $05,$01,$01,$06,$01,$07,$15,$16
            .byte $17,$08,$11,$01,$3D,$01,$01,$11
            .byte $01,$01,$FD,$FD,$FD,$FD,$FD,$FD
            .byte $FD,$11,$01,$01,$01,$01,$01,$FD
            .byte $FD,$FD,$FD,$FD,$FD,$FD,$FD,$FD
            .byte $01,$01,$01,$01,$01,$01,$FD,$FD
            .byte $FD,$05,$FD,$FD,$FD,$11,$01,$01
            .byte $3D,$01,$01,$06,$01,$3A,$06,$3B
            .byte $07,$C8,$01,$11,$07,$01,$84,$01
            .byte $01,$4D,$01,$2A,$01,$07,$01,$11
            .byte $01,$01,$01,$62,$74,$CB,$CB,$E8
            .byte $01,$1A,$06,$01,$26,$27,$06,$01
            .byte $FA,$FB,$FC,$07,$01,$BB,$01,$0A
            .byte $01,$01,$0B,$0C,$01,$01,$7B,$7C
            .byte $7D,$15,$01,$BB,$01,$08,$11,$01
            .byte $01,$01,$01,$01,$4D,$15,$01,$4D
            .byte $01,$BB,$01,$01,$01,$06,$01,$06
            .byte $01,$01,$01,$01,$01,$CB,$CB,$DA
            .byte $08,$01,$01,$01,$01,$06,$01,$01
            .byte $07,$01,$01,$01,$01,$26,$27,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$16,$17,$06,$01,$01
            .byte $15,$05,$01,$01,$01,$01,$01,$22
            .byte $23,$01,$01,$01,$01,$05,$11,$11
            .byte $01,$44,$01,$01,$01,$12,$13,$14
            .byte $30,$31,$FD,$FD,$FD,$FD,$30,$31
            .byte $01,$01,$08,$02,$03,$04,$20,$21
            .byte $FD,$FD,$FD,$FD,$20,$21,$01,$1B
            .byte $1C,$31,$30,$31,$30,$31,$01,$ED
            .byte $EE,$EF,$EC,$01,$30,$0B,$0C,$21
            .byte $89,$8A,$10,$21,$01,$DD,$DE,$DF
            .byte $DC,$01,$20,$21,$20,$31,$79,$7A
            .byte $34,$31,$01,$CD,$CE,$CF,$CC,$01
            .byte $30,$31,$30,$21,$69,$6A,$24,$21
            .byte $01,$BD,$BE,$BF,$BC,$01,$20,$21
            .byte $20,$31,$30,$31,$30,$31,$01,$FD
            .byte $01,$FD,$01,$01,$30,$31,$30,$21
            .byte $89,$8A,$10,$21,$15,$ED,$EE,$EF
            .byte $EC,$15,$20,$21,$20,$31,$79,$7A
            .byte $34,$31,$01,$DD,$DE,$DF,$DC,$01
            .byte $30,$31,$A9,$21,$69,$6A,$24,$21
            .byte $01,$CD,$CE,$CF,$CC,$01,$20,$21
            .byte $99,$31,$30,$31,$30,$31,$01,$BD
            .byte $BE,$BF,$BC,$01,$30,$31,$30,$21
            .byte $89,$8A,$10,$21,$01,$FD,$01,$FD
            .byte $01,$01,$20,$21,$20,$31,$79,$7A
            .byte $34,$31,$15,$ED,$EE,$EF,$EC,$15
            .byte $30,$31,$30,$21,$69,$6A,$24,$21
            .byte $01,$DD,$DE,$DF,$DC,$01,$20,$21
            .byte $20,$31,$30,$31,$30,$31,$01,$CD
            .byte $CE,$CF,$CC,$01,$30,$31,$30,$21
            .byte $20,$21,$20,$21,$01,$BD,$BE,$BF
            .byte $BC,$01,$20,$21,$20,$31,$30,$31
            .byte $30,$31,$30,$31,$30,$31,$30,$31
            .byte $30,$31,$30,$21,$20,$21,$20,$21
            .byte $20,$21,$20,$21,$20,$21,$20,$21
            .byte $20,$01,$01,$01,$30,$31,$30,$FD
            .byte $FD,$31,$30,$31,$01,$11,$01,$44
            .byte $01,$01,$20,$21,$20,$FD,$FD,$21
            .byte $20,$21,$01,$01,$0F,$01,$01,$01
            .byte $01,$01,$01,$01,$4D,$01,$01,$01
            .byte $01,$01,$05,$05,$01,$01,$11,$01
            .byte $01,$84,$85,$01,$01,$26,$27,$01
            .byte $01,$15,$01,$01,$01,$01,$73,$74
            .byte $75,$01,$01,$16,$17,$01,$01,$01
            .byte $01,$11,$05,$62,$63,$64,$65,$71
            .byte $01,$11,$01,$15,$01,$01,$01,$01
            .byte $FA,$FB,$FC,$54,$E9,$FD,$CB,$CB
            .byte $FD,$CB,$CB,$01,$01,$01,$F7,$F8
            .byte $F9,$01,$20,$61,$01,$01,$BB,$01
            .byte $11,$11,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$BB,$01,$01,$01
            .byte $01,$0F,$01,$01,$01,$06,$3B,$01
            .byte $01,$01,$BB,$01,$06,$01,$01,$01
            .byte $01,$01,$01,$01,$22,$23,$11,$01
            .byte $BB,$01,$01,$01,$01,$4D,$01,$06
            .byte $01,$01,$12,$13,$14,$01,$AB,$CB
            .byte $CB,$06,$01,$01,$01,$01,$01,$01
            .byte $02,$03,$04,$01,$01,$06,$01,$01
            .byte $01,$01,$15,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$FF
L3CA5:							; Level 4
            .byte $44,$01
            .byte $01,$01,$01,$06,$11,$01,$01,$11
            .byte $01,$01,$0F,$01,$01,$01,$06,$01
            .byte $01,$01,$44,$01,$01,$06,$01,$01
            .byte $01,$01,$4D,$01,$01,$06,$84,$85
            .byte $01,$01,$5C,$5D,$5E,$5F,$01,$11
            .byte $44,$01,$3B,$73,$74,$75,$06,$01
            .byte $4C,$4D,$4E,$4F,$01,$3E,$01,$11
            .byte $62,$63,$64,$65,$11,$01,$3C,$3D
            .byte $3E,$3F,$01,$05,$11,$FA,$FB,$FC
            .byte $54,$01,$01,$01,$2C,$2D,$2E,$2F
            .byte $01,$01,$07,$7B,$7C,$7D,$01,$01
            .byte $15,$01,$01,$1D,$1E,$1E,$01,$01
            .byte $26,$27,$01,$01,$01,$01,$01,$01
            .byte $05,$01,$01,$01,$01,$30,$16,$17
            .byte $01,$01,$01,$01,$01,$01,$EB,$CB
            .byte $CB,$CB,$CB,$01,$01,$3E,$01,$01
            .byte $01,$06,$07,$01,$BB,$01,$01,$01
            .byte $01,$20,$01,$01,$01,$01,$06,$3B
            .byte $07,$01,$BB,$01,$01,$01,$01,$01
            .byte $CB,$CB,$CB,$CB,$CB,$CB,$CB,$CB
            .byte $C3,$CB,$E8,$0F,$01,$01,$05,$01
            .byte $4D,$4D,$01,$01,$01,$01,$01,$01
            .byte $BB,$01,$01,$01,$01,$01,$05,$05
            .byte $01,$01,$01,$05,$01,$01,$BB,$05
            .byte $01,$01,$05,$07,$01,$01,$9E,$9F
            .byte $01,$01,$01,$0F,$BB,$01,$01,$01
            .byte $07,$18,$08,$01,$8E,$8F,$3E,$1B
            .byte $1C,$01,$BB,$01,$01,$3B,$12,$13
            .byte $14,$18,$7E,$7F,$05,$0B,$0C,$01
            .byte $BB,$01,$01,$01,$02,$03,$08,$05
            .byte $6E,$6F,$01,$01,$01,$01,$BB,$01
            .byte $01,$01,$05,$05,$15,$01,$01,$01
            .byte $30,$31,$30,$31,$BB,$05,$01,$01
            .byte $05,$01,$01,$05,$01,$01,$20,$21
            .byte $20,$21,$BB,$01,$01,$44,$30,$31
            .byte $30,$31,$30,$31,$30,$31,$30,$31
            .byte $AB,$CB,$CB,$CB,$20,$21,$20,$21
            .byte $20,$21,$20,$21,$20,$21,$20,$21
            .byte $20,$21,$30,$31,$A9,$AA,$30,$31
            .byte $ED,$EE,$EF,$EC,$A9,$AA,$30,$31
            .byte $20,$21,$99,$9A,$20,$21,$DD,$DE
            .byte $DF,$DC,$99,$9A,$20,$21,$30,$31
            .byte $30,$31,$30,$31,$CD,$CE,$CF,$CC
            .byte $30,$31,$30,$31,$20,$21,$20,$21
            .byte $20,$21,$BD,$BE,$BF,$BC,$20,$21
            .byte $20,$21,$30,$31,$30,$31,$30,$31
            .byte $01,$01,$01,$01,$30,$31,$30,$31
            .byte $20,$21,$89,$8A,$10,$21,$01,$FD
            .byte $FD,$01,$89,$8A,$10,$21,$30,$31
            .byte $79,$7A,$34,$31,$01,$FD,$FD,$01
            .byte $79,$7A,$34,$31,$20,$21,$69,$6A
            .byte $24,$21,$01,$01,$01,$01,$69,$6A
            .byte $24,$21,$30,$31,$30,$31,$30,$31
            .byte $30,$31,$30,$31,$30,$31,$30,$31
            .byte $20,$21,$20,$21,$20,$21,$20,$21
            .byte $20,$21,$20,$21,$20,$21,$30,$31
            .byte $A9,$AA,$30,$31,$ED,$EE,$EF,$EC
            .byte $A9,$AA,$30,$31,$20,$21,$99,$9A
            .byte $20,$21,$DD,$DE,$DF,$DC,$99,$9A
            .byte $20,$21,$01,$01,$01,$01,$FD,$01
            .byte $CD,$CE,$CF,$CC,$01,$FD,$01,$01
            .byte $01,$01,$01,$01,$01,$FD,$BD,$BE
            .byte $BF,$BC,$FD,$01,$01,$01,$30,$31
            .byte $30,$31,$30,$31,$30,$31,$30,$31
            .byte $30,$31,$30,$31,$20,$21,$20,$21
            .byte $20,$21,$20,$21,$20,$21,$20,$21
            .byte $20,$21,$A9,$AA,$01,$01,$01,$01
            .byte $30,$31,$01,$01,$01,$01,$A9,$AA
            .byte $99,$9A,$01,$FD,$FD,$01,$20,$21
            .byte $01,$FD,$FD,$01,$99,$9A,$30,$31
            .byte $01,$01,$01,$01,$30,$31,$01,$01
            .byte $01,$01,$30,$31,$20,$21,$ED,$EE
            .byte $EF,$EC,$20,$21,$ED,$EE,$EF,$EC
            .byte $20,$21,$30,$31,$DD,$DE,$DF,$DC
            .byte $30,$31,$DD,$DE,$DF,$DC,$30,$31
            .byte $20,$21,$CD,$CE,$CF,$CC,$20,$21
            .byte $CD,$CE,$CF,$CC,$20,$21,$30,$31
            .byte $BD,$BE,$BF,$BC,$30,$31,$BD,$BE
            .byte $BF,$BC,$30,$31,$20,$21,$01,$01
            .byte $01,$01,$20,$21,$01,$01,$01,$01
            .byte $20,$21,$30,$31,$01,$FD,$FD,$01
            .byte $A9,$AA,$01,$FD,$FD,$01,$30,$31
            .byte $20,$21,$01,$01,$01,$01,$99,$9A
            .byte $01,$01,$01,$01,$20,$21,$30,$31
            .byte $ED,$EE,$EF,$EC,$30,$31,$ED,$EE
            .byte $EF,$EC,$30,$31,$20,$21,$DD,$DE
            .byte $DF,$DC,$20,$21,$DD,$DE,$DF,$DC
            .byte $20,$21,$30,$31,$CD,$CE,$CF,$CC
            .byte $30,$31,$CD,$CE,$CF,$CC,$30,$31
            .byte $20,$21,$BD,$BE,$BF,$BC,$20,$21
            .byte $BD,$BE,$BF,$BC,$20,$21,$30,$31
            .byte $01,$01,$01,$01,$30,$31,$01,$01
            .byte $01,$01,$30,$31,$20,$21,$01,$01
            .byte $01,$01,$20,$21,$01,$01,$01,$01
            .byte $20,$21,$30,$31,$30,$31,$30,$31
            .byte $FD,$FD,$30,$31,$30,$31,$30,$31
            .byte $20,$21,$FD,$FD,$20,$21,$FD,$FD
            .byte $20,$21,$FD,$FD,$20,$21,$30,$31
            .byte $30,$31,$30,$31,$30,$31,$30,$31
            .byte $30,$31,$30,$31,$20,$21,$20,$21
            .byte $89,$8A,$10,$21,$89,$8A,$10,$21
            .byte $20,$21,$A9,$AA,$30,$31,$79,$7A
            .byte $34,$31,$79,$7A,$34,$31,$A9,$AA
            .byte $99,$9A,$20,$21,$69,$6A,$24,$21
            .byte $69,$6A,$24,$21,$99,$9A,$30,$31
            .byte $30,$31,$30,$31,$FD,$FD,$30,$31
            .byte $30,$31,$30,$31,$20,$21,$20,$21
            .byte $20,$21,$FD,$FD,$20,$21,$20,$21
            .byte $20,$21,$01,$01,$30,$31,$30,$31
            .byte $A9,$AA,$30,$31,$30,$31,$01,$01
            .byte $11,$01,$20,$21,$20,$21,$99,$9A
            .byte $20,$21,$20,$21,$01,$11,$06,$44
            .byte $01,$BB,$FD,$FD,$06,$01,$FD,$FD
            .byte $BB,$01,$01,$01,$01,$01,$01,$BB
            .byte $FD,$01,$01,$01,$06,$FD,$BB,$01
            .byte $15,$06,$01,$01,$06,$BB,$01,$01
            .byte $26,$27,$01,$01,$BB,$01,$11,$01
            .byte $CB,$CB,$CB,$DA,$06,$01,$16,$17
            .byte $01,$01,$BB,$06,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $BB,$01,$01,$44,$11,$01,$01,$01
            .byte $01,$0D,$01,$01,$01,$01,$BB,$01
            .byte $01,$01,$01,$15,$01,$01,$01,$01
            .byte $06,$01,$01,$01,$AB,$CB,$CB,$CB
            .byte $01,$01,$01,$06,$01,$06,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$26,$01,$01,$5C,$5D,$5E
            .byte $5F,$01,$06,$01,$06,$11,$01,$11
            .byte $06,$01,$01,$4C,$4D,$4E,$4F,$01
            .byte $01,$06,$11,$01,$06,$01,$01,$01
            .byte $01,$3C,$01,$3E,$3F,$01,$05,$01
            .byte $01,$44,$01,$01,$01,$01,$06,$2C
            .byte $2D,$2E,$2F,$01,$01,$01,$11,$01
            .byte $39,$01,$15,$01,$01,$01,$1D,$1E
            .byte $06,$06,$01,$3B,$06,$01,$29,$01
            .byte $01,$01,$05,$01,$44,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$0D,$01
            .byte $01,$01,$01,$06,$01,$06,$4D,$01
            .byte $01,$01,$05,$01,$01,$01,$11,$01
            .byte $01,$01,$11,$01,$01,$06,$11,$3B
            .byte $01,$11,$01,$05,$01,$01,$0F,$01
            .byte $01,$67,$68,$01,$01,$01,$01,$01
            .byte $01,$84,$85,$01,$01,$84,$85,$57
            .byte $58,$59,$01,$06,$11,$01,$73,$63
            .byte $75,$06,$73,$74,$75,$02,$48,$01
            .byte $0F,$01,$01,$62,$63,$64,$65,$84
            .byte $63,$64,$65,$01,$01,$01,$01,$01
            .byte $FA,$FB,$FC,$54,$FA,$FB,$FC,$54
            .byte $0A,$05,$01,$01,$01,$01,$F7,$F8
            .byte $F9,$01,$7B,$7C,$7D,$01,$01,$01
            .byte $06,$01,$06,$22,$23,$01,$01,$01
            .byte $01,$01,$01,$01,$06,$01,$01,$01
            .byte $01,$12,$13,$14,$05,$05,$06,$01
            .byte $0D,$01,$06,$01,$0F,$06,$01,$02
            .byte $03,$04,$01,$01,$0F,$01,$06,$01
            .byte $01,$06,$06,$01,$06,$01,$01,$15
            .byte $01,$01,$01,$01,$06,$01,$01,$01
            .byte $84,$85,$01,$01,$01,$01,$01,$06
            .byte $FD,$FD,$01,$06,$01,$73,$74,$75
            .byte $01,$01,$01,$06,$01,$01,$FD,$FD
            .byte $01,$07,$62,$63,$64,$65,$07,$01
            .byte $5B,$01,$01,$01,$01,$01,$01,$FA
            .byte $FB,$FC,$54,$07,$01,$01,$4B,$01
            .byte $5C,$5D,$5E,$5F,$01,$F1,$F2,$F3
            .byte $01,$01,$01,$01,$06,$01,$4C,$4D
            .byte $4E,$4F,$01,$01,$01,$01,$06,$01
            .byte $01,$01,$01,$01,$3C,$3D,$07,$3F
            .byte $11,$06,$06,$9E,$9F,$01,$01,$11
            .byte $01,$06,$2C,$2D,$2E,$2F,$01,$01
            .byte $01,$8E,$8F,$06,$01,$01,$01,$01
            .byte $01,$1D,$84,$85,$01,$4D,$01,$7E
            .byte $7F,$01,$06,$01,$44,$01,$01,$73
            .byte $74,$75,$01,$11,$01,$6E,$6F,$01
            .byte $01,$01,$01,$01,$62,$63,$64,$65
            .byte $FD,$FD,$01,$08,$06,$01,$01,$0D
            .byte $01,$FA,$FB,$FC,$54,$08,$FD,$FD
            .byte $01,$0F,$01,$01,$01,$11,$01,$F7
            .byte $F8,$F9,$01,$01,$01,$11,$84,$85
            .byte $01,$06,$07,$01,$01,$01,$01,$01
            .byte $06,$01,$01,$73,$74,$75,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $62,$63,$64,$65,$01,$01,$01,$01
            .byte $01,$06,$01,$01,$01,$FA,$FB,$FC
            .byte $54,$01,$06,$01,$01,$01,$01,$4D
            .byte $01,$01,$01,$F1,$F2,$F3,$11,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$06
            .byte $01,$01,$05,$01,$01,$06,$01,$01
            .byte $01,$05,$01,$01,$01,$01,$01,$06
            .byte $39,$5D,$5E,$5F,$05,$01,$05,$05
            .byte $01,$07,$0F,$01,$05,$18,$29,$01
            .byte $4E,$4F,$01,$01,$01,$4D,$01,$01
            .byte $01,$06,$01,$06,$19,$01,$06,$3F
            .byte $05,$0D,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$09,$2D,$2E,$2F,$01,$01
            .byte $01,$06,$01,$0D,$44,$01,$01,$06
            .byte $01,$1D,$1E,$84,$85,$01,$01,$C8
            .byte $C8,$05,$01,$01,$01,$01,$01,$01
            .byte $73,$74,$75,$01,$05,$C8,$C8,$01
            .byte $01,$01,$01,$0D,$01,$62,$63,$64
            .byte $65,$01,$01,$01,$01,$01,$5B,$01
            .byte $01,$01,$FA,$FB,$FC,$54,$01,$01
            .byte $01,$01,$0D,$06,$4B,$01,$01,$05
            .byte $F7,$F8,$F9,$01,$01,$01,$06,$3D
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$15,$01,$01
            .byte $01,$06,$4D,$01,$06,$01,$01,$01
            .byte $1B,$1C,$01,$01,$22,$23,$4D,$01
            .byte $01,$01,$01,$01,$01,$01,$0B,$0C
            .byte $05,$01,$12,$13,$14,$01,$06,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $02,$03,$04,$01,$01,$01,$0D,$01
            .byte $01,$01,$0F,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$4D,$01
            .byte $01,$01,$3D,$3D,$0D,$01,$3D,$44
            .byte $01,$15,$01,$01,$06,$01,$01,$01
            .byte $05,$06,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$01,$01,$01,$01,$01
            .byte $01,$01,$01,$06,$FF

;------------------------------------------------
;Small font A-Z + 0-9
;------------------------------------------------

L437C:
            .byte $00,$00,$00,$00,$00,$00,$00,$00	; Space
            .byte $0C,$0C,$2C,$26,$5E,$46,$EE,$00	; A - #41
            .byte $EC,$66,$66,$6C,$66,$66,$EC,$00	; B
            .byte $2E,$62,$E0,$E0,$E0,$62,$2E,$00	; C
            .byte $E8,$6C,$66,$66,$66,$6C,$E8,$00	; D
            .byte $EE,$66,$60,$6C,$60,$66,$EE,$00	; E
            .byte $EE,$66,$60,$6C,$60,$60,$F0,$00	; F
            .byte $2E,$66,$E0,$EE,$E6,$66,$2C,$00	; G
            .byte $F6,$66,$66,$6E,$66,$66,$F6,$00	; H
            .byte $3C,$18,$18,$18,$18,$18,$3C,$00	; I
            .byte $1E,$0C,$0C,$0C,$6C,$6C,$38,$00	; J
            .byte $F6,$64,$68,$6C,$6E,$66,$F6,$00	; K
            .byte $F0,$60,$60,$60,$62,$66,$FE,$00	; L
            .byte $C6,$EE,$7E,$B6,$86,$86,$CE,$00	; M
            .byte $66,$72,$3A,$5E,$4E,$46,$E6,$00	; N
            .byte $2C,$66,$66,$66,$66,$66,$2C,$00	; O
            .byte $EC,$66,$66,$6C,$60,$60,$F0,$00	; P
            .byte $2C,$66,$66,$66,$66,$2C,$0E,$00	; Q
            .byte $EC,$66,$66,$6C,$68,$64,$F6,$00	; R
            .byte $2E,$66,$60,$3C,$06,$66,$6C,$00	; S
            .byte $7E,$5A,$18,$18,$18,$18,$18,$00	; T
            .byte $F6,$62,$62,$62,$62,$62,$2C,$00	; U
            .byte $F6,$62,$62,$62,$22,$3C,$18,$00	; V
            .byte $E6,$C2,$C2,$D2,$DA,$EC,$C6,$00	; W
            .byte $CE,$CC,$68,$30,$58,$4C,$CE,$00	; X
            .byte $E6,$62,$34,$18,$18,$18,$3C,$00	; Y
            .byte $76,$46,$0C,$18,$18,$18,$3C,$00	; Z - #5A
            .byte $2C,$66,$66,$66,$66,$66,$2C,$00	; 0 - #30
            .byte $38,$18,$18,$18,$18,$18,$3C,$00	; 1
            .byte $2C,$66,$06,$0C,$30,$06,$7E,$00	; 2
            .byte $34,$66,$06,$14,$06,$66,$34,$00	; 3
            .byte $06,$16,$26,$46,$7F,$06,$0F,$00	; 4
            .byte $7E,$18,$40,$6C,$06,$66,$6C,$00	; 5
            .byte $2C,$66,$60,$6C,$66,$66,$2C,$00	; 6
            .byte $7E,$60,$04,$0C,$18,$18,$18,$00	; 7
            .byte $2C,$66,$66,$2C,$66,$66,$2C,$00	; 8
            .byte $2C,$66,$66,$2E,$06,$66,$2C,$00	; 9 - #39

;------------------------------------------------
; Big font
;------------------------------------------------

L44A4:
            .byte $00,$00,$00,$00,$00,$00,$00,$00	; Space
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00

            .byte $01,$01,$05,$0C,$0C,$0C,$0C,$18	; A
            .byte $E0,$E0,$E0,$F0,$F0,$F0,$78,$78
            .byte $18,$18,$33,$30,$30,$30,$78,$00
            .byte $78,$3C,$FC,$3C,$1E,$1E,$3F,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3C	; B
            .byte $F8,$3C,$1E,$1E,$1E,$1E,$3C,$F8
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7D,$00
            .byte $3C,$1E,$1E,$1E,$1E,$3C,$F8,$00

            .byte $0D,$18,$38,$38,$78,$78,$78,$78	; C
            .byte $EC,$7C,$3C,$1C,$00,$00,$00,$00
            .byte $78,$78,$78,$38,$38,$18,$0D,$00
            .byte $00,$00,$00,$1C,$1C,$78,$E0,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3C	; D
            .byte $F8,$3E,$1E,$0F,$0F,$0F,$0F,$0F
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7D,$00
            .byte $0F,$0F,$0F,$0F,$1E,$3E,$F8,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3D	; E
            .byte $FE,$3E,$0E,$06,$00,$20,$60,$E0
            .byte $3D,$3C,$3C,$3C,$3C,$3C,$7D,$00
            .byte $E0,$60,$20,$06,$0E,$3E,$FE,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3D	; F
            .byte $FE,$3E,$0E,$06,$00,$20,$60,$E0
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $60,$20,$00,$00,$00,$00,$00,$00

            .byte $0D,$18,$38,$38,$78,$78,$78,$78	; G
            .byte $EC,$7C,$3C,$1C,$00,$00,$00,$00
            .byte $78,$78,$78,$38,$38,$18,$0D,$00
            .byte $7E,$3C,$3C,$3C,$3C,$78,$F0,$00

            .byte $7C,$3C,$3C,$3C,$3C,$3C,$3C,$3D	; H
            .byte $7E,$3C,$3C,$3C,$3C,$3C,$3C,$FC
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00

            .byte $07,$03,$03,$03,$03,$03,$03,$03	; I
            .byte $E0,$C0,$C0,$C0,$C0,$C0,$C0,$C0
            .byte $03,$03,$03,$03,$03,$03,$07,$00
            .byte $C0,$C0,$C0,$C0,$C0,$C0,$E0,$00

            .byte $00,$00,$00,$00,$00,$00,$00,$00	; J
            .byte $7E,$3C,$3C,$3C,$3C,$3C,$3C,$3C
            .byte $00,$00,$00,$1E,$3E,$3E,$1F,$00
            .byte $3C,$3C,$3C,$3C,$3C,$38,$70,$00

            .byte $7C,$3C,$3C,$3C,$3C,$3D,$3D,$3D	; K
            .byte $3C,$18,$30,$60,$C0,$C0,$C0,$E0
            .byte $3D,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $E0,$F0,$F0,$78,$78,$3C,$7E,$00

            .byte $7E,$3C,$3C,$3C,$3C,$3C,$3C,$3C	; L
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $00,$00,$00,$06,$0E,$3E,$FE,$00

            .byte $7E,$1E,$1F,$2F,$2F,$2F,$37,$37	; M
            .byte $3F,$3E,$5E,$5E,$5E,$DE,$DE,$DE
            .byte $37,$33,$33,$33,$31,$31,$78,$00
            .byte $DE,$DE,$DE,$DE,$9E,$9E,$BF,$00

            .byte $7F,$1F,$2F,$2F,$37,$37,$33,$33	; N
            .byte $0F,$06,$86,$86,$C6,$C6,$E6,$E6
            .byte $31,$31,$30,$30,$30,$30,$78,$00
            .byte $F6,$F6,$FA,$FA,$7C,$7C,$3E,$00

            .byte $07,$1E,$3C,$3C,$78,$78,$78,$78	; O
            .byte $70,$3C,$1E,$1E,$0F,$0F,$0F,$0F
            .byte $78,$78,$78,$3C,$3C,$1E,$07,$00
            .byte $0F,$0F,$0F,$1E,$1E,$3C,$70,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3D	; P
            .byte $F8,$3C,$1E,$1E,$1E,$1E,$3C,$F8
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00

            .byte $07,$1E,$3C,$3C,$78,$78,$78,$78	; Q
            .byte $70,$3C,$1E,$1E,$0F,$0F,$0F,$0F
            .byte $78,$78,$78,$3C,$3C,$1E,$07,$00
            .byte $0F,$0F,$0F,$9E,$DE,$7C,$7E,$00

            .byte $7D,$3C,$3C,$3C,$3C,$3C,$3C,$3D	; R
            .byte $F8,$3C,$1E,$1E,$1E,$1E,$3C,$F8
            .byte $3C,$3C,$3C,$3C,$3C,$3C,$7E,$00
            .byte $3C,$1E,$1E,$1E,$1E,$1F,$0E,$00

            .byte $1F,$7C,$F8,$F8,$FC,$FF,$7F,$3F	; S
            .byte $7F,$1F,$07,$03,$00,$80,$F0,$FC
            .byte $07,$00,$00,$60,$70,$7C,$7F,$00
            .byte $FE,$FF,$1F,$0F,$0F,$1E,$78,$00

            .byte $7B,$7B,$73,$63,$03,$03,$03,$03	; T
            .byte $DE,$DE,$CE,$C6,$C0,$C0,$C0,$C0
            .byte $03,$03,$03,$03,$03,$03,$07,$00
            .byte $C0,$C0,$C0,$C0,$C0,$C0,$E0,$00

            .byte $7E,$3C,$3C,$3C,$3C,$3C,$3C,$3C	; U
            .byte $0F,$06,$06,$06,$06,$06,$06,$06
            .byte $3C,$3C,$3C,$3C,$3C,$1E,$0F,$00
            .byte $06,$06,$06,$06,$06,$0E,$BC,$00

            .byte $7F,$3E,$3E,$1F,$1F,$1F,$0F,$0F	; V
            .byte $0F,$06,$06,$06,$06,$0C,$8C,$8C
            .byte $0F,$07,$07,$07,$03,$03,$00,$00
            .byte $8C,$D8,$D8,$D8,$E0,$E0,$E0,$00

            .byte $FD,$79,$79,$79,$7B,$7B,$7B,$7B	; W
            .byte $1E,$8C,$8C,$8C,$CC,$CC,$CC,$EC
            .byte $7B,$7B,$7B,$7A,$7A,$7A,$FA,$00
            .byte $EC,$EC,$F4,$F4,$F4,$78,$78,$00

            .byte $7F,$1F,$0F,$0F,$07,$07,$03,$03	; X
            .byte $8F,$06,$8C,$98,$D0,$C0,$E0,$E0
            .byte $01,$05,$0C,$18,$30,$60,$E0,$00
            .byte $F0,$F0,$F8,$F8,$7C,$7C,$FE,$00

            .byte $7E,$3E,$1F,$1F,$0F,$0F,$07,$07	; Y
            .byte $0F,$06,$0C,$0C,$98,$D8,$D0,$D0
            .byte $03,$03,$03,$03,$03,$03,$07,$00
            .byte $C0,$C0,$C0,$C0,$C0,$C0,$E0,$00

            .byte $7F,$7C,$70,$60,$01,$01,$03,$03	; Z
            .byte $7C,$7C,$F8,$F8,$F0,$F0,$E0,$E0
            .byte $07,$07,$0F,$0F,$1F,$1F,$3E,$00
            .byte $C0,$C0,$80,$83,$07,$1F,$7F,$00

;------------------------------------------------
; Ship sprites + mask 2 pixels shifted
;
; Sprite = 24x24 pixels
;------------------------------------------------

L4804:							; Mask ship 0p
            .byte $FF,$3F,$FF
            .byte $FC,$1F,$FF,$F8,$0F,$FF,$F8,$0F
            .byte $FF,$F0,$07,$FF,$F8,$0F,$FF,$F8
            .byte $0F,$FF,$FC,$1F,$FF,$78,$0F,$7F
            .byte $38,$0E,$3F,$70,$07,$7F,$20,$02
            .byte $3F,$20,$02,$3F,$30,$06,$3F,$20
            .byte $02,$3F,$00,$00,$3F,$00,$00,$3F
            .byte $00,$00,$3F,$00,$00,$3F,$00,$00
            .byte $7F,$00,$00,$7F,$00,$00,$3F,$00
            .byte $00,$3F,$42,$A1,$7F
L484C:							; Ship 0p
            .byte $00,$80,$00
            .byte $01,$C0,$00,$03,$E0,$00,$02,$A0
            .byte $00,$05,$50,$00,$01,$40,$00,$02
            .byte $20,$00,$01,$40,$00,$03,$60,$00
            .byte $83,$60,$80,$06,$30,$00,$85,$50
            .byte $80,$8B,$68,$80,$87,$70,$80,$8E
            .byte $B8,$80,$9D,$DC,$80,$9A,$AC,$80
            .byte $D4,$95,$80,$E5,$D3,$80,$58,$8D
            .byte $00,$75,$D7,$00,$C7,$F1,$80,$9D
            .byte $5C,$80,$10,$04,$00
L4894:							; Mask ship 2p
            .byte $FF,$8F,$FF
            .byte $FF,$07,$FF,$FE,$03,$FF,$FE,$03
            .byte $FF,$FC,$01,$FF,$FE,$03,$FF,$FE
            .byte $03,$FF,$FF,$07,$FF,$DE,$03,$DF
            .byte $8E,$03,$8F,$DC,$01,$DF,$88,$00
            .byte $8F,$88,$00,$8F,$8C,$01,$8F,$88
            .byte $00,$8F,$80,$00,$0F,$80,$00,$0F
            .byte $80,$00,$0F,$80,$00,$0F,$C0,$00
            .byte $1F,$C0,$00,$1F,$80,$00,$0F,$80
            .byte $00,$0F,$D0,$A8,$5F
L48DC:							; Ship 2p
            .byte $00,$20,$00
            .byte $00,$70,$00,$00,$F8,$00,$00,$A8
            .byte $00,$01,$54,$00,$00,$50,$00,$00
            .byte $88,$00,$00,$50,$00,$00,$D8,$00
            .byte $20,$D8,$20,$01,$8C,$00,$21,$54
            .byte $20,$22,$DA,$20,$21,$DC,$20,$23
            .byte $AE,$20,$27,$77,$20,$26,$AB,$20
            .byte $35,$25,$60,$39,$74,$E0,$16,$23
            .byte $40,$1D,$75,$C0,$31,$FC,$60,$27
            .byte $57,$20,$04,$01,$00
L4924:							; Mask ship 4p
            .byte $FF,$E3,$FF
            .byte $FF,$C1,$FF,$FF,$80,$FF,$FF,$80
            .byte $FF,$FF,$00,$7F,$FF,$80,$FF,$FF
            .byte $80,$FF,$FF,$C1,$FF,$F7,$80,$F7
            .byte $E3,$80,$E3,$F7,$00,$77,$E2,$00
            .byte $23,$E2,$00,$23,$E3,$00,$63,$E2
            .byte $00,$23,$E0,$00,$03,$E0,$00,$03
            .byte $E0,$00,$03,$E0,$00,$03,$F0,$00
            .byte $07,$F0,$00,$07,$E0,$00,$03,$E0
            .byte $00,$03,$F4,$2A,$17
L496C:							; Ship 4p
            .byte $00,$08,$00
            .byte $00,$1C,$00,$00,$3E,$00,$00,$2A
            .byte $00,$00,$55,$00,$00,$14,$00,$00
            .byte $22,$00,$00,$14,$00,$00,$36,$00
            .byte $08,$36,$08,$00,$63,$00,$08,$55
            .byte $08,$08,$B6,$88,$08,$77,$08,$08
            .byte $EB,$88,$09,$DD,$C8,$09,$AA,$C8
            .byte $0D,$49,$58,$0E,$5D,$38,$05,$88
            .byte $D0,$07,$5D,$70,$0C,$7F,$18,$09
            .byte $D5,$C8,$01,$00,$40
L49B4:							; Mask ship 6p
            .byte $FF,$F8,$FF
            .byte $FF,$F0,$7F,$FF,$E0,$3F,$FF,$E0
            .byte $3F,$FF,$C0,$1F,$FF,$E0,$3F,$FF
            .byte $E0,$3F,$FF,$F0,$7F,$FD,$E0,$3D
            .byte $F8,$E0,$38,$FD,$C0,$1D,$F8,$80
            .byte $08,$F8,$80,$08,$F8,$C0,$18,$F8
            .byte $80,$08,$F8,$00,$00,$F8,$00,$00
            .byte $F8,$00,$00,$F8,$00,$00,$FC,$00
            .byte $01,$FC,$00,$01,$F8,$00,$00,$F8
            .byte $00,$00,$FD,$0A,$85
L49FC:							; Ship 6p
            .byte $00,$02,$00
            .byte $00,$07,$00,$00,$0F,$80,$00,$0A
            .byte $80,$00,$15,$40,$00,$05,$00,$00
            .byte $08,$80,$00,$05,$00,$00,$0D,$80
            .byte $02,$0D,$82,$00,$18,$C0,$02,$15
            .byte $42,$02,$2D,$A2,$02,$1D,$C2,$02
            .byte $3A,$E2,$02,$77,$72,$02,$6A,$B2
            .byte $03,$52,$56,$03,$97,$4E,$01,$62
            .byte $34,$01,$D7,$5C,$03,$1F,$C6,$02
            .byte $75,$72,$00,$40,$10

;------------------------------------------------
; Explosions
;
; Sprite = 16x16 pixels
;------------------------------------------------

L4A44:
            .byte $FF,$FF,$FF				; Explosion 0
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$3F,$FE
            .byte $5F,$FC,$5F,$FE,$AF,$FC,$4F,$FD
            .byte $5F,$F8,$8F,$F9,$5F,$FD,$3F,$FF
            .byte $FF,$FF,$FF,$FF,$FF
L4A64:
            .byte $00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$C0,$01
            .byte $A0,$03,$A0,$01,$50,$03,$B0,$02
            .byte $A0,$07,$70,$06,$A0,$02,$C0,$00
            .byte $00,$00,$00,$00,$00
L4A84:
            .byte $FD,$FF,$FA				; Explosion 1
            .byte $BF,$F8,$4F,$FC,$57,$F9,$47,$F4
            .byte $8F,$F4,$AF,$F9,$37,$F8,$AF,$F8
            .byte $A7,$FC,$47,$F9,$2F,$F8,$1F,$F9
            .byte $7F,$FE,$FF,$FF,$FF
L4AA4:
            .byte $02,$00,$05
            .byte $40,$07,$B0,$03,$A8,$06,$B8,$0B
            .byte $70,$0B,$50,$06,$C8,$07,$50,$07
            .byte $58,$03,$B8,$06,$D0,$07,$E0,$06
            .byte $80,$01,$00,$00,$00
L4AC4:
            .byte $F3,$FF,$E9				; Explosion 2
            .byte $FF,$E4,$F3,$F8,$AB,$F2,$01,$F2
            .byte $53,$E5,$47,$E2,$4F,$F9,$47,$FA
            .byte $47,$F8,$B3,$F0,$93,$F4,$33,$F2
            .byte $47,$F2,$EB,$F9,$F7
L4AE4:
            .byte $0C,$00,$16
            .byte $00,$1B,$0C,$07,$54,$0D,$FE,$0D
            .byte $AC,$1A,$B8,$1D,$B0,$06,$B8,$05
            .byte $B8,$07,$4C,$0F,$6C,$0B,$CC,$0D
            .byte $B8,$0D,$14,$06,$08
L4B04:
            .byte $F5,$F3,$E2				; Explosion 3
            .byte $E9,$E4,$69,$E9,$49,$F1,$0B,$F8
            .byte $93,$F9,$47,$F2,$87,$FA,$57,$FA
            .byte $8F,$F0,$03,$F4,$13,$EA,$11,$E5
            .byte $49,$E2,$E1,$F1,$F3
L4B24:
            .byte $0A,$0C,$1D
            .byte $16,$1B,$96,$16,$B6,$0E,$F4,$07
            .byte $6C,$06,$B8,$0D,$78,$05,$A8,$05
            .byte $70,$0F,$FC,$0B,$EC,$15,$EE,$1A
            .byte $B6,$1D,$1E,$0E,$0C
L4B44:
            .byte $F7,$E7,$EB				; Explosion 4
            .byte $D3,$E5,$CB,$E2,$83,$F0,$27,$FA
            .byte $07,$F4,$0F,$D4,$8F,$F0,$9F,$F9
            .byte $0F,$F8,$9F,$F4,$27,$E2,$47,$C5
            .byte $CB,$C2,$C3,$E7,$E7
L4B64:
            .byte $08,$18,$14
            .byte $2C,$1A,$34,$1D,$7C,$0F,$D8,$05
            .byte $F8,$0B,$F0,$2B,$70,$0F,$60,$06
            .byte $F0,$07,$60,$0B,$D8,$1D,$B8,$3A
            .byte $34,$3D,$3C,$18,$18
L4B84:
            .byte $FF,$E7,$F7				; Explosion 5
            .byte $C3,$EB,$CB,$E1,$C3,$E9,$C7,$F1
            .byte $D7,$F9,$8F,$FC,$17,$FD,$1F,$F9
            .byte $3F,$F1,$1F,$F0,$8F,$E0,$77,$E8
            .byte $EB,$E9,$E3,$F2,$E7
L4BA4:
            .byte $00,$18,$08
            .byte $3C,$14,$34,$1E,$3C,$16,$38,$0E
            .byte $28,$06,$70,$03,$E8,$02,$E0,$06
            .byte $C0,$0E,$E0,$0F,$70,$1F,$88,$17
            .byte $14,$16,$1C,$0D,$18
L4BC4:
            .byte $FF,$E7,$F3				; Explosion 6
            .byte $E3,$E9,$EB,$F1,$E7,$F5,$C7,$FB
            .byte $8F,$FE,$BB,$FC,$9F,$F8,$5F,$F9
            .byte $1F,$FD,$3B,$FE,$3F,$FB,$77,$F5
            .byte $F3,$F1,$EB,$FA,$F7
L4BE4:
            .byte $00,$18,$0C
            .byte $1C,$16,$14,$0E,$18,$0A,$38,$04
            .byte $70,$01,$44,$03,$60,$07,$A0,$06
            .byte $E0,$02,$C4,$01,$C0,$04,$88,$0A
            .byte $0C,$0E,$14,$05,$08
L4C04:
            .byte $FB,$F7,$F5				; Explosion 7
            .byte $E7,$F9,$EF,$FF,$CF,$FF,$BF,$FE
            .byte $3F,$FD,$3F,$FC,$5F,$F8,$3F,$F8
            .byte $3F,$FD,$3F,$FE,$7F,$FF,$7F,$FB
            .byte $F7,$F9,$F7,$FB,$FF
L4C24:
            .byte $04,$08,$0A
            .byte $18,$06,$10,$00,$30,$00,$40,$01
            .byte $C0,$02,$C0,$03,$A0,$07,$C0,$07
            .byte $C0,$02,$C0,$01,$80,$00,$80,$04
            .byte $08,$06,$08,$04,$00
L4C44:
            .byte $FF,$F7,$FB				; Explosion 8
            .byte $F7,$F5,$E7,$FB,$EF,$FF,$EF,$FF
            .byte $FF,$FE,$7F,$FE,$3F,$FD,$3F,$FC
            .byte $3F,$FC,$3F,$FC,$7F,$FE,$7F,$FF
            .byte $FF,$FF,$FF,$FB,$FF
L4C64:
            .byte $00,$08,$04
            .byte $08,$0A,$18,$04,$10,$00,$10,$00
            .byte $00,$01,$80,$01,$C0,$02,$C0,$03
            .byte $C0,$03,$C0,$03,$80,$01,$80,$00
            .byte $00,$00,$00,$04,$00
L4C84:
            .byte $FF,$FF,$FF				; Explosion 9
            .byte $F7,$FB,$E7,$FF,$EF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FE,$7F,$FE,$3F,$FD
            .byte $3F,$FC,$3F,$FE,$7F,$FF,$7F,$FF
            .byte $FF,$FF,$FF,$FF,$FF
L4CA4:
            .byte $00,$00,$00
            .byte $08,$04,$18,$00,$10,$00,$00,$00
            .byte $00,$00,$00,$01,$80,$01,$C0,$02
            .byte $C0,$03,$C0,$01,$80,$00,$80,$00
            .byte $00,$00,$00,$00,$00

;------------------------------------------------
; Enemies
;
; Sprite = 16x16 pixels
;------------------------------------------------

L4CC4:
            .byte $E8,$17,$80				; Enemy1
            .byte $01,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$80,$01,$80,$01,$C0,$03,$E0
            .byte $07,$F0,$0F,$F0,$0F,$F8,$1F,$F8
            .byte $1F,$FC,$3F,$FC,$3F
L4CE4:
            .byte $02,$40,$17
            .byte $68,$7B,$DE,$BB,$DD,$5D,$BA,$4D
            .byte $B2,$2F,$F4,$2E,$74,$1D,$B8,$0A
            .byte $50,$04,$A0,$04,$20,$02,$40,$03
            .byte $40,$01,$80,$01,$80
L4D04:
            .byte $FF,$FF,$FE				; Enemy1 flip 1
            .byte $BF,$E0,$07,$80,$01,$00,$00,$00
            .byte $00,$00,$00,$80,$01,$80,$01,$C0
            .byte $03,$E0,$07,$F0,$0F,$F8,$1F,$F8
            .byte $1F,$FC,$3F,$FE,$7F
L4D24:
            .byte $00,$00,$00
            .byte $00,$01,$40,$1F,$78,$7B,$DE,$BB
            .byte $DD,$5D,$BA,$2E,$74,$2D,$B4,$1A
            .byte $58,$04,$20,$04,$A0,$02,$40,$03
            .byte $C0,$01,$80,$00,$00
L4D44:
            .byte $FF,$FF,$FF				; Enemy1 flip 2
            .byte $FF,$FF,$FF,$FC,$BF,$E0,$07,$80
            .byte $01,$00,$00,$00,$00,$00,$00,$80
            .byte $01,$C0,$03,$F0,$0F,$F8,$1F,$FC
            .byte $3F,$FE,$7F,$FF,$FF
L4D64:
            .byte $00,$00,$00
            .byte $00,$00,$00,$00,$00,$03,$40,$1F
            .byte $F8,$77,$EE,$BA,$5D,$5D,$BA,$3A
            .byte $5C,$04,$A0,$06,$20,$03,$40,$01
            .byte $80,$00,$00,$00,$00
L4D84:
            .byte $FF,$FF,$FF				; Enemy1 flip 3
            .byte $FF,$FF,$FF,$FF,$FF,$FC,$3F,$F0
            .byte $0F,$C0,$03,$00,$00,$00,$00,$00
            .byte $00,$C0,$03,$F8,$1F,$FE,$7F,$FF
            .byte $FF,$FF,$FF,$FF,$FF
L4DA4:
            .byte $00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$03
            .byte $C0,$0A,$50,$35,$AC,$EA,$57,$34
            .byte $2C,$07,$60,$01,$80,$00,$00,$00
            .byte $00,$00,$00,$00,$00
L4DC4:
            .byte $FF,$FF,$FF				; Enemy1 flip 4
            .byte $FF,$FE,$7F,$FC,$3F,$F8,$1F,$F0
            .byte $0F,$C0,$03,$80,$01,$00,$00,$00
            .byte $00,$00,$00,$80,$01,$E0,$07,$FC
            .byte $BF,$FF,$FF,$FF,$FF
L4DE4:
            .byte $00,$00,$00
            .byte $00,$00,$00,$01,$80,$03,$C0,$07
            .byte $E0,$05,$E0,$3A,$5C,$6D,$B6,$CE
            .byte $73,$65,$A6,$1F,$F8,$03,$40,$00
            .byte $00,$00,$00,$00,$00
L4E04:
            .byte $FF,$FF,$FE				; Enemy1 flip 5
            .byte $7F,$FC,$3F,$F8,$1F,$F8,$1F,$F0
            .byte $0F,$E0,$07,$C0,$03,$80,$01,$80
            .byte $01,$00,$00,$00,$00,$00,$00,$80
            .byte $01,$E0,$07,$FE,$BF
L4E24:
            .byte $00,$00,$00
            .byte $00,$01,$80,$03,$C0,$03,$C0,$05
            .byte $E0,$05,$E0,$1A,$58,$3D,$BC,$36
            .byte $6C,$6D,$B6,$ED,$B7,$67,$E6,$1F
            .byte $78,$01,$40,$00,$00
L4E44:
            .byte $FE,$7F,$FC				; Enemy1 flip 6
            .byte $3F,$FC,$3F,$F8,$1F,$F8,$1F,$F0
            .byte $0F,$F0,$0F,$E0,$07,$C0,$03,$80
            .byte $01,$80,$01,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$80,$01
L4E64:
            .byte $00,$00,$01
            .byte $80,$01,$80,$03,$C0,$03,$C0,$05
            .byte $E0,$05,$E0,$0A,$D0,$1D,$B8,$36
            .byte $6C,$2F,$F4,$6D,$B6,$6D,$B6,$E5
            .byte $A7,$7F,$FE,$17,$68
L4E84:
            .byte $04,$41,$00				; Enemy2
            .byte $01,$80,$03,$80,$03,$C0,$07,$C0
            .byte $07,$E0,$0F,$E0,$0F,$F0,$1F,$F8
            .byte $3F,$F0,$1F,$F0,$1F,$F8,$3F,$F8
            .byte $3F,$FC,$7F,$FE,$FF
L4EA4:
            .byte $70,$1C,$6B
            .byte $AC,$2B,$A8,$35,$58,$1C,$70,$1D
            .byte $70,$0C,$60,$0D,$60,$04,$40,$03
            .byte $80,$06,$40,$04,$40,$02,$80,$03
            .byte $80,$01,$00,$00,$00
L4EC4:
            .byte $C4,$47,$C0				; Enemy2 down 0
            .byte $07,$C0,$07,$C0,$07,$E0,$0F,$E0
            .byte $0F,$E0,$0F,$E0,$0F,$F0,$1F,$F8
            .byte $3F,$F0,$1F,$F0,$1F,$F8,$3F,$F8
            .byte $3F,$FC,$7F,$FE,$FF
L4EE4:
            .byte $10,$10,$1B
            .byte $B0,$1B,$B0,$15,$50,$0C,$60,$0D
            .byte $60,$0C,$60,$0D,$60,$04,$40,$03
            .byte $80,$06,$40,$04,$40,$02,$80,$03
            .byte $80,$01,$00,$00,$00
L4F04:
            .byte $FC,$7F,$F8				; Enemy2 down 1
            .byte $3F,$F8,$3F,$F0,$1F,$E0,$0F,$E0
            .byte $0F,$F0,$1F,$F0,$1F,$F0,$1F,$F8
            .byte $3F,$F0,$1F,$F0,$1F,$F8,$3F,$F8
            .byte $3F,$FC,$7F,$FE,$FF
L4F24:
            .byte $00,$00,$03
            .byte $80,$03,$80,$05,$40,$0C,$60,$0D
            .byte $60,$04,$40,$05,$40,$04,$40,$03
            .byte $80,$06,$40,$04,$40,$02,$80,$03
            .byte $80,$01,$00,$00,$00
L4F44:
            .byte $FC,$7F,$F8				; Enemy2 down 2
            .byte $3F,$F8,$3F,$FC,$7F,$FC,$7F,$FC
            .byte $7F,$FC,$7F,$FC,$7F,$FC,$7F,$F8
            .byte $3F,$F0,$1F,$F0,$1F,$F8,$3F,$F8
            .byte $3F,$FC,$7F,$FE,$FF
L4F64:
            .byte $00,$00,$03
            .byte $80,$03,$80,$01,$00,$00,$00,$01
            .byte $00,$00,$00,$01,$00,$00,$00,$03
            .byte $80,$06,$40,$04,$40,$02,$80,$03
            .byte $80,$01,$00,$00,$00
L4F84:
            .byte $F8,$1F,$E0				; Enemy2 down 3
            .byte $07,$C0,$03,$80,$01,$80,$01,$03
            .byte $C0,$07,$E0,$07,$E0,$07,$E0,$07
            .byte $E0,$03,$C0,$80,$01,$80,$01,$C0
            .byte $03,$E0,$07,$F8,$1F
L4FA4:
            .byte $00,$00,$07
            .byte $E0,$1F,$F8,$3F,$FC,$3C,$3C,$78
            .byte $1E,$50,$0E,$50,$0E,$50,$0E,$50
            .byte $0E,$78,$1E,$2C,$34,$37,$EC,$1C
            .byte $38,$07,$E0,$00,$00
L4FC4:
            .byte $F8,$0F,$FC				; Enemy3 disc 
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$F8,$0F,$F0,$07,$F0
            .byte $07,$F0,$07,$F8,$0F
L4FE4:
            .byte $01,$E0,$01
            .byte $C0,$00,$00,$0F,$F8,$00,$08,$0F
            .byte $F8,$00,$08,$0F,$F8,$00,$08,$0F
            .byte $F8,$00,$00,$01,$C0,$05,$D0,$06
            .byte $B0,$05,$D0,$01,$C0
L5004:
            .byte $F8,$0F,$FC				; Enemy4 rotate 0 
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$FC,$1F,$F8,$0F,$F8
            .byte $0F,$F8,$0F,$FC,$1F
L5024:
            .byte $03,$60,$01
            .byte $C0,$00,$00,$0F,$F8,$00,$38,$0F
            .byte $F8,$00,$38,$0F,$F8,$00,$38,$0F
            .byte $F8,$00,$00,$01,$C0,$02,$A0,$03
            .byte $60,$02,$A0,$01,$C0
L5044:
            .byte $F8,$0F,$FC				; Enemy4 rotate 1
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$FC,$3F,$F8,$1F,$F8
            .byte $1F,$F8,$1F,$FC,$1F
L5064:
            .byte $03,$A0,$01
            .byte $C0,$00,$00,$0F,$F8,$00,$E0,$0F
            .byte $F8,$00,$E0,$0F,$F8,$00,$E0,$0F
            .byte $F8,$00,$00,$00,$80,$03,$40,$03
            .byte $40,$03,$40,$00,$C0
L5084:
            .byte $F8,$0F,$FC				; Enemy4 rotate 2
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$FC,$3F,$FC,$3F,$FC
            .byte $3F,$FC,$3F,$FE,$1F
L50A4:
            .byte $03,$C0,$01
            .byte $C0,$00,$00,$0F,$F8,$03,$80,$0F
            .byte $F8,$03,$80,$0F,$F8,$03,$80,$0F
            .byte $F8,$00,$00,$01,$80,$01,$80,$01
            .byte $80,$01,$80,$00,$40
L50C4:
            .byte $F8,$0F,$FC				; Enemy4 rotate 3
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$FE,$1F,$FE,$1F,$FE
            .byte $1F,$FE,$1F,$FC,$3F
L50E4:
            .byte $03,$E0,$01
            .byte $C0,$00,$00,$0F,$F8,$0E,$00,$0F
            .byte $F8,$0E,$00,$0F,$F8,$0E,$00,$0F
            .byte $F8,$00,$00,$00,$C0,$00,$C0,$00
            .byte $C0,$00,$C0,$01,$00
L5104:
            .byte $F8,$0F,$FC				; Enemy4 rotate 4
            .byte $1F,$F0,$07,$E0,$03,$E0,$03,$E0
            .byte $03,$E0,$03,$E0,$03,$E0,$03,$E0
            .byte $03,$F0,$07,$FE,$1F,$FC,$0F,$FC
            .byte $0F,$FC,$0F,$FC,$1F
L5124:
            .byte $03,$E0,$01
            .byte $C0,$00,$00,$0F,$F8,$08,$00,$0F
            .byte $F8,$08,$00,$0F,$F8,$08,$00,$0F
            .byte $F8,$00,$00,$00,$80,$01,$60,$01
            .byte $60,$01,$60,$01,$80
L5144:
            .byte $00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00

;------------------------------------------------
; Shadow screen
;------------------------------------------------

	.repeat ($5200-*)
	  .byte 0
	.endrep

L5200:
L5270	= L5200+$70
L52B8	= L5200+$b8

	.repeat $100
	  .byte 0
	.endrep

L5300:
L5307	= L5300+$07
L530F	= L5300+$0f
L5317	= L5300+$17
L531F	= L5300+$1f
L5327	= L5300+$27
L532F	= L5300+$2f
L5337	= L5300+$37
L533F	= L5300+$3f
L5347	= L5300+$47
L534F	= L5300+$4f
L5357	= L5300+$57
L535F	= L5300+$5f
L5367	= L5300+$67
L536F	= L5300+$6f
L5380	= L5300+$80
L53A0	= L5300+$a0
L53C0	= L5300+$c0
L53E0	= L5300+$e0

	.repeat $100
	  .byte 0
	.endrep

L5400:
L5401	= L5400+$01
L5402	= L5400+$02
L5403	= L5400+$03
L5404	= L5400+$04
L5405	= L5400+$05
L5406	= L5400+$06
L5407	= L5400+$07
L5480	= L5400+$80
L54A0	= L5400+$a0
L54C0	= L5400+$c0
L54E0	= L5400+$e0

	.repeat $100
	  .byte 0
	.endrep

L5500:
L5501	= L5500+$01
L5502	= L5500+$02
L5503	= L5500+$03
L5504	= L5500+$04
L5505	= L5500+$05
L5506	= L5500+$06
L5507	= L5500+$07
L5580	= L5500+$80
L55A0	= L5500+$a0

	.repeat $100
	  .byte 0
	.endrep

L5600:
L5601	= L5600+$01
L5602	= L5600+$02
L5603	= L5600+$03
L5604	= L5600+$04
L5605	= L5600+$05
L5606	= L5600+$06
L5607	= L5600+$07

	.repeat $70
	  .byte 0
	.endrep
L5670:
            .byte $FF,$C7,$FF,$FF,$83,$FF,$FF
            .byte $01,$FF,$FF,$01,$FF,$FE,$00,$FF
            .byte $FF,$01,$FF,$FF,$01,$FF,$FF,$83
            .byte $FF,$F7,$01,$DF,$E3,$01,$8F,$F6
            .byte $00,$DF,$E2,$00,$8F,$E0,$00,$0F
            .byte $E0,$00,$0F,$E0,$00,$0F,$E0,$00
            .byte $0F,$E0,$00,$0F,$E0,$00,$0F,$E0
            .byte $00,$0F,$E0,$00,$0F,$F0,$00,$1F
            .byte $E0,$00,$0F,$E0,$00,$0F,$F0,$54
            .byte $1F,$00,$10,$00,$00,$38,$00,$00
            .byte $7C,$00,$00,$54,$00,$00,$AA,$00
            .byte $00,$28,$00,$00,$44,$00,$00,$28
            .byte $00,$00,$6C,$00,$08,$6C,$20,$00
            .byte $C6,$00,$08,$AA,$20,$09,$6D,$20
            .byte $08,$EE,$20,$09,$D7,$20,$0B,$BB
            .byte $A0,$0B,$55,$A0,$0A,$92,$A0,$0C
            .byte $BA,$60,$0F,$11,$E0,$06,$BA,$C0
            .byte $0C,$FE,$60,$0B,$AB,$A0,$02,$00
            .byte $80

L5700:
L5701	= L5700+$01
L5702	= L5700+$02
L5703	= L5700+$03
L5704	= L5700+$04
L5705	= L5700+$05
L5706	= L5700+$06
L5707	= L5700+$07

	.repeat $70
	  .byte 0
	.endrep
L5770:
            .byte $FF,$01,$FF,$FE,$00,$FF,$FC
            .byte $00,$7F,$FC,$00,$7F,$F8,$00,$3F
            .byte $FC,$00,$7F,$F0,$00,$1F,$E0,$00
            .byte $0F,$C0,$00,$07,$80,$00,$03,$80
            .byte $00,$03,$80,$00,$03,$80,$00,$03
            .byte $80,$00,$03,$80,$00,$03,$80,$00
            .byte $03,$80,$00,$03,$80,$00,$03,$80
            .byte $00,$03,$80,$00,$03,$80,$00,$03
            .byte $80,$00,$03,$80,$00,$03,$C0,$00
            .byte $07,$00,$44,$00,$00,$00,$00,$01
            .byte $01,$00,$01,$01,$00,$02,$00,$80
            .byte $01,$01,$00,$01,$01,$00,$08,$82
            .byte $20,$11,$01,$10,$23,$01,$88,$16
            .byte $00,$90,$22,$00,$88,$00,$00,$08
            .byte $20,$00,$00,$20,$00,$08,$00,$00
            .byte $08,$20,$00,$00,$20,$00,$08,$00
            .byte $00,$08,$20,$00,$08,$10,$00,$10
            .byte $20,$00,$08,$20,$00,$08,$19,$54
            .byte $90

L5800:
L5801	= L5800+$01
L5802	= L5800+$02
L5803	= L5800+$03
L5804	= L5800+$04
L5805	= L5800+$05
L5806	= L5800+$06
L5807	= L5800+$07

	.repeat $70
	  .byte 0
	.endrep
L5870:
            .byte $FF,$C7,$FF,$FF,$83,$FF,$FF
            .byte $01,$FF,$FF,$01,$FF,$FE,$00,$FF
            .byte $FF,$01,$FF,$FF,$01,$FF,$FF,$83
            .byte $FF,$FF,$01,$FF,$FF,$01,$FF,$F7
            .byte $01,$DF,$E2,$00,$8F,$E0,$00,$0F
            .byte $E0,$00,$0F,$E0,$00,$0F,$E0,$00
            .byte $0F,$E0,$00,$0F,$E0,$00,$0F,$E0
            .byte $00,$0F,$E0,$00,$0F,$F0,$00,$1F
            .byte $F8,$00,$3F,$FC,$00,$7F,$FF,$01
            .byte $FF,$00,$10,$00,$00,$28,$00,$00
            .byte $44,$00,$00,$00,$00,$00,$82,$00
            .byte $00,$44,$00,$00,$44,$00,$00,$28
            .byte $00,$00,$44,$00,$00,$44,$00,$00
            .byte $00,$00,$08,$82,$20,$0D,$01,$60
            .byte $0A,$00,$A0,$00,$00,$00,$08,$00
            .byte $20,$08,$00,$20,$00,$00,$00,$08
            .byte $00,$20,$08,$00,$20,$04,$01,$40
            .byte $03,$54,$80,$00,$AA,$00,$00,$00
            .byte $00

L5900:
L5901	= L5900+$01
L5902	= L5900+$02
L5903	= L5900+$03
L5904	= L5900+$04
L5905	= L5900+$05
L5906	= L5900+$06
L5907	= L5900+$07

	.repeat $70
	  .byte 0
	.endrep
L5970:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$EF,$FF,$FF,$C7,$FF
            .byte $FF,$EF,$FF,$FF,$C7,$FF,$FF,$83
            .byte $FF,$FF,$C7,$FF,$FF,$C7,$FF,$FF
            .byte $83,$FF,$FF,$83,$FF,$FE,$01,$FF
            .byte $FE,$00,$FF,$F8,$00,$7F,$F8,$00
            .byte $3F,$F8,$00,$3F,$F8,$00,$3F,$F8
            .byte $00,$3F,$F8,$00,$3F,$FC,$00,$7F
            .byte $FF,$07,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$10,$00
            .byte $00,$00,$00,$00,$10,$00,$00,$28
            .byte $00,$00,$10,$00,$00,$10,$00,$00
            .byte $28,$00,$00,$28,$00,$00,$44,$00
            .byte $00,$00,$00,$01,$01,$00,$02,$00
            .byte $80,$02,$00,$00,$00,$00,$80,$02
            .byte $01,$00,$03,$56,$80,$00,$A8,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00

L5A00:
L5A01	= L5A00+$01
L5A02	= L5A00+$02
L5A03	= L5A00+$03
L5A04	= L5A00+$04
L5A05	= L5A00+$05
L5A06	= L5A00+$06
L5A07	= L5A00+$07

	.repeat $70
	  .byte 0
	.endrep
L5A70:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$EF,$FF,$FF,$C7,$FF
            .byte $FF,$83,$FF,$FF,$01,$FF,$FE,$00
            .byte $FF,$FE,$00,$FF,$FE,$00,$FF,$FE
            .byte $01,$FF,$FF,$01,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$10,$00
            .byte $00,$28,$00,$00,$00,$00,$00,$82
            .byte $00,$00,$80,$00,$00,$56,$00,$00
            .byte $A8,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00

L5B00:
L5B01	= L5B00+$01
L5B02	= L5B00+$02
L5B03	= L5B00+$03
L5B04	= L5B00+$04
L5B05	= L5B00+$05
L5B06	= L5B00+$06
L5B07	= L5B00+$07

	.repeat $70
	  .byte 0
	.endrep
L5B70:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$EF,$FF,$FF,$C7,$FF,$FF,$83
            .byte $FF,$FF,$83,$FF,$FF,$C7,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$10,$00,$00,$00
            .byte $00,$00,$28,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00

L5C00:
L5C01	= L5C00+$01
L5C02	= L5C00+$02
L5C03	= L5C00+$03
L5C04	= L5C00+$04
L5C05	= L5C00+$05
L5C06	= L5C00+$06
L5C07	= L5C00+$07

	.repeat $70
	  .byte 0
	.endrep
L5C70:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$83,$FF,$FE,$00,$FF,$FC
            .byte $00,$7F,$FC,$00,$7F,$F8,$00,$3F
            .byte $F8,$00,$3F,$F8,$00,$3F,$F8,$00
            .byte $3F,$F8,$00,$3F,$FC,$00,$7F,$FC
            .byte $00,$7F,$FE,$00,$FF,$FF,$83,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$7C,$00,$01
            .byte $FF,$00,$01,$FF,$00,$03,$FF,$80
            .byte $03,$FF,$80,$03,$FF,$80,$03,$FF
            .byte $80,$03,$FF,$80,$01,$FF,$00,$01
            .byte $FF,$00,$00,$7C,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00

L5D00:
L5D01	= L5D00+$01
L5D02	= L5D00+$02
L5D03	= L5D00+$03
L5D04	= L5D00+$04
L5D05	= L5D00+$05
L5D06	= L5D00+$06
L5D07	= L5D00+$07

	.repeat $70
	  .byte 0
	.endrep
L5D70:
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
            .byte $FF,$01,$FF,$FC,$00,$7F,$F8,$00
            .byte $3F,$F0,$00,$1F,$E0,$00,$0F,$E0
            .byte $00,$0F,$C0,$00,$07,$C0,$00,$07
            .byte $C0,$00,$07,$C0,$00,$07,$C0,$00
            .byte $07,$C0,$00,$07,$C0,$00,$07,$E0
            .byte $00,$0F,$E0,$00,$0F,$F0,$00,$1F
            .byte $F8,$00,$3F,$FC,$00,$7F,$FF,$01
            .byte $FF,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$00,$00,$00,$00
            .byte $00,$00,$00,$00,$FE,$00,$03,$FF
            .byte $80,$07,$FF,$C0,$0F,$FF,$E0,$0F
            .byte $FF,$E0,$1F,$FF,$F0,$1F,$FF,$F0
            .byte $1F,$FF,$F0,$1F,$FF,$F0,$1F,$FF
            .byte $F0,$1F,$FF,$F0,$1F,$FF,$F0,$0F
            .byte $FF,$E0,$0F,$FF,$E0,$07,$FF,$C0
            .byte $03,$FF,$80,$00,$FE,$00,$00,$00
            .byte $00

L5E00:
L5E01	= L5E00+$01
L5E02	= L5E00+$02
L5E03	= L5E00+$03
L5E04	= L5E00+$04
L5E05	= L5E00+$05
L5E06	= L5E00+$06
L5E07	= L5E00+$07

	.repeat $100
	  .byte 0
	.endrep

L5F00:
L5F01	= L5F00+$01
L5F02	= L5F00+$02
L5F03	= L5F00+$03
L5F04	= L5F00+$04
L5F05	= L5F00+$05
L5F06	= L5F00+$06
L5F07	= L5F00+$07

	.repeat $100
	  .byte 0
	.endrep

L6000:
L6001	= L6000+$01
L6002	= L6000+$02
L6003	= L6000+$03
L6004	= L6000+$04
L6005	= L6000+$05
L6006	= L6000+$06
L6007	= L6000+$07

	.repeat $100
	  .byte 0
	.endrep

L6100:
L6101	= L6100+$01
L6102	= L6100+$02
L6103	= L6100+$03
L6104	= L6100+$04
L6105	= L6100+$05
L6106	= L6100+$06
L6107	= L6100+$07
L6118	= L6100+$18

	.repeat $100
	  .byte 0
	.endrep

L6200:
L6201	= L6200+$01
L6202	= L6200+$02
L6203	= L6200+$03
L6204	= L6200+$04
L6205	= L6200+$05
L6206	= L6200+$06
L6207	= L6200+$07

	.repeat $100
	  .byte 0
	.endrep

L6300:
L6301	= L6300+$01
L6302	= L6300+$02
L6303	= L6300+$03
L6304	= L6300+$04
L6305	= L6300+$05
L6306	= L6300+$06
L6307	= L6300+$07

	.repeat $100
	  .byte 0
	.endrep

L6400:
L6401	= L6400+$01
L6402	= L6400+$02
L6403	= L6400+$03
L6404	= L6400+$04
L6405	= L6400+$05
L6406	= L6400+$06
L6407	= L6400+$07

	.repeat $100
	  .byte 0
	.endrep

L6500:
L6501	= L6500+$01
L6502	= L6500+$02
L6503	= L6500+$03
L6504	= L6500+$04
L6505	= L6500+$05
L6506	= L6500+$06
L6507	= L6500+$07

	.repeat $100
	  .byte 0
	.endrep

L6600:
	.repeat $200
	  .byte 0
	.endrep


