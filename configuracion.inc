; CONFIG1
    ; __config 0xE3F4
     __CONFIG _CONFIG1, _FOSC_INTRC_NOCLKOUT & _WDTE_OFF & _PWRTE_OFF & _MCLRE_ON & _CP_OFF & _CPD_OFF & _BOREN_ON & _IESO_OFF & _FCMEN_OFF & _LVP_OFF
    ; CONFIG2
    ; __config 0xFEFF
     __CONFIG _CONFIG2, _BOR4V_BOR21V & _WRT_OFF

osc_conf:
    bsf STATUS,RP0
    bcf STATUS,RP1
    movlw   0xf1
    movlw   OSCCON
    banksel PORTA
    return

port_conf:
    banksel TRISA
     movlw 0xff
;   movlw b'010101001'
    movwf TRISA
    clrf  TRISB
    bsf   STATUS,RP1
    clrf  ANSEL
    clrf  ANSELH
;   leer y escribir de los puertos
    bcf STATUS,RP0
    bcf STATUS,RP1

    return