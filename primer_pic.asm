;primer programa
;encender un led
;autor: jeferson lopez
;fecha: 7/09/2016

    LIST p = 16f887

    #include "p16f887.inc"

    cblock  0x20
        cont1
        cont2
        cont3
    endc

;    org 0x00
    org .0

    call osc_conf
    call port_conf
    ciclo:
    movf  PORTA,W
    movwf PORTB
    goto  ciclo
#include "configuracion.inc"
    end 



