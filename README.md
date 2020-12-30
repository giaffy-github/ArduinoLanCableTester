# ArduinoLanCableTester

Lan Cable tester

This arduino project implements a simple cable tester: with the followin connections
to one cable end:

```
 Arduino 2 <--> Lan cable wire 1 (white green);
 Arduino 3 <--> Lan cable wire 2 (green);
 Arduino 4 <--> Lan cable wire 3 (white orange);
 Arduino 5 <--> Lan cable wire 4 (blue);
 Arduino 6 <--> Lan cable wire 5 (white blue);
 Arduino 7 <--> Lan cable wire 6 (orange);
 Arduino 8 <--> Lan cable wire 7 (white brown);
 Arduino 9 <--> Lan cable wire 8 (brown);
```
and with the terminal part containing the 8 LEDs connected with the same sequence,
this project turn on each LED in the correct sequence 1..8;

Seeing lighting up the LED in the correct sequence, validate the LAN cable (each wire
is connected to the other ends, the sequence is in the correct order);
