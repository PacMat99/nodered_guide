---
title: Led Test
layout: default
nav_order: 1
parent: ESPx tests
---

# Test del led integrato dell'ESPx

Collegare l'ESPx al pc, copiare il codice seguente in un file nell'Arduino IDE e caricarlo sul microcontrollore.

```
void setup() {
    pinMode(LED_BUILTIN, OUTPUT);  // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on (Note that LOW is the voltage level
    // but actually the LED is on; this is because
    // it is active low on the ESP-01)
    delay(1000);                      // Wait for a second
    digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
    delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
}
```

Vedi [tutti i test](./esp_tests.html)! :)