# Security System with Arduino
Arduino is a microcontroller which can control electrical devices. We make a security system (gate open/close) with this arduino.
# Component list
- Arduino R3
- LiquidCrystal 16X2
- Servo Motor
- Switch
- LED
- Resistor X2 (1k, 220 ohm)
- Battery 5V
# Library 
- LiquidCrystal.h
- Servo.h
# PinOut 
<pre>
    -----------------------------             ---------------------             -------------------
    | LiquidCrystal  |  Arduino |             | Servo  | Arduino  |             | LED   |  Button |        
    -----------------------------             ---------------------             -------------------
    | LED -          |  GND(220)|             | Power  | 5V       |             | Anode |  T2     |
    | LED +          |  5V      |             | GND    | GND      |             -------------------
    | DB7            |  2       |             | Signal | 10       |
    | DB6            |  3       |             ---------------------
    | DB5            |  4       |             | Button | Arduino  | 
    | DB4            |  5       |             ---------------------
    | E(Enable)      |  11      |             | T1     | 9        |
    | RW(Read/Write) |  GND     |             ---------------------
    | RS             |  12      |             | LED     | Arduino |
    | VD             |  GND(1k) |             ---------------------
    | VCC            |  5V      |             | Cathode | GND     |
    | GND            |  GND     |             ---------------------
    -----------------------------
</pre>
