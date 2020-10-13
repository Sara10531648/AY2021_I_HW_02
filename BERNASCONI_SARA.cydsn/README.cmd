TOP DESIGN
Debouncer: ho optato per un Ck a 50 Hz poichè nel Datasheet prevedeva range di frequenza da 10Hz a 200Hz,
ma per frequenze inferiori a 50 Hz mi dava problemi con la tolleranza. Al pin neg ho una isr_component: in questo modo quando premo il pulsante
chiamo la isr e cambia pattern del led.
Pwm: ho optato per due pwm separate perchè nella configurazione 7 il canale Rosso e il Canale Verde avevano due periodi differenti. 
Il periodo massimo era 2s, con 8-bit ho scelto quindi un fCk=128Hz. Nel setting ho impostato Firmware Control in Cmp Type in modo da poter
impostare diversi settings per le diverse configurazioni.
CODICE
Nel setting delle due pwm per ogni configurazione ho usato la proporzione 255:2s per calcolare i valori esatti di periodo e compare value .

