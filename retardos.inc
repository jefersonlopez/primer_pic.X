retardo_50ms:
    movlw .50
    movwf cont1
ciclo2:
    movlw .10
    movwf cont2
ciclo1:
    movlw .65
    movwf cont3
    decfsz cont3
    goto $-1
    decfsz cont2
    goto ciclo1
    decfsz cont1
    goto ciclo2
    return