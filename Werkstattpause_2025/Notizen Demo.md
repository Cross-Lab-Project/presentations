Öffnen des Labs aus Edrys Light  

Starten des Arduino Blink Beipiels

Erklärung zur Stuktur der Module und zur Darstellung in der Textdatei

Einführung eines neuen Raumes mit LiaScript Modul und Etherpad

Nun wird es ernst, wir aktivieren die Station - Erklärung zum Aufbau 

Austausch der Entwicklungsumgebung zur Text Implemententierung

Dann zurück zu Liascript und Erklärung Kommunikation

Einladung an alle, die mitmachen wollen



content: |-
  <!--
  import: https://raw.githubusercontent.com/liaTemplates/AVR8js/main/README.md
  -->
  
  # Simulation von Hardware
  
  <div id="example">
  <wokwi-led color="red"   pin="13" label="13"></wokwi-led>
  <wokwi-led color="green" pin="12" label="12"></wokwi-led>
  <wokwi-led color="blue"  pin="11" label="11"></wokwi-led>
  <wokwi-led color="blue"  pin="10" label="10"></wokwi-led>
  <span id="simulation-time"></span>
  </div>
  
  ``` cpp
  byte leds[] = {13, 12, 11, 10};
  void setup() {
    Serial.begin(115200);
    for (byte i = 0; i < sizeof(leds); i++) {
      pinMode(leds[i], OUTPUT);
    }
    Serial.print("Running Led started ... ");
  }
  
  int i = 0;
  void loop() {
    digitalWrite(leds[i], HIGH);
    delay(250);
    digitalWrite(leds[i], LOW);
    i = (i + 1) % sizeof(leds);
  }
  ```
  @AVR8js.sketch(example)



    editorText: |
      /*
        Blink
        Turns an LED on for one second, then off for one second, repeatedly.
        Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
        it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
        the correct LED pin independent of which board is used.
        If you want to know what pin the on-board LED is connected to on your Arduino
        model, check the Technical Specs of your board at:
        https://www.arduino.cc/en/Main/Products
        This example code is in the public domain.
        https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
      */
      // the setup function runs once when you press reset or power the board
      void setup() {
        // initialize digital pin LED_BUILTIN as an output.
        pinMode(LED_BUILTIN, OUTPUT);
        // initialize serial output
        Serial.begin(9600);
      }
      // the loop function runs over and over again forever
      void loop() {
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
        Serial.println("LED HIGH");
        delay(1000);                       // wait for a second
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
        Serial.println("LED LOW");
        delay(1000);                       // wait for a second
      }
    runCommand: execute
    language: cpp
    theme: light