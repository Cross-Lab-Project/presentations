<!--
author:   André Dietrich

email:    andre.dietrich@informatik.tu-freiberg.de

version:  0.0.1

language: en

narrator: US English Female

comment:  Try to write a short comment about
          your course, multiline is also okay.

import:   https://raw.githubusercontent.com/liaTemplates/AVR8js/main/README.md

icon:     pic/logo.png

-->

# CrossLAB

> __WebSite:__ https://cross-lab.org
>
> __Twitter:__ [\@Cross_Labs](https://twitter.com/Cross_Labs)


## Goals I

    {{1}}
Please wait a minute ...

## PreHistory (eLab)

!?[eLab on YouTube](https://www.youtube.com/watch?v=bICfKRyKTwE)


    {{1}}
**Lessons learned**


    {{2}}
* __Separate the presentation/education and functionality__

  [https://LiaScript.github.io](https://LiaScript.github.io):
  an interactive Markdown for creating interactive online courses

    {{3}}
* __Use reusable components__

  __[https://github.com/LiaTemplates](https://github.com/LiaTemplates):__

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
  }

  int i = 0;
  void loop() {
    Serial.print("LED: ");
    Serial.println(i);
    digitalWrite(leds[i], HIGH);
    delay(250);
    digitalWrite(leds[i], LOW);
    i = (i + 1) % sizeof(leds);
  }
  ```
  @AVR8js.sketch(example)

    {{4}}
* __Maximize throughput with simulations__

  ??[Simulation: Noninverting Amplifier](https://www.falstad.com/circuit/circuitjs.html?startCircuit=amp-noninvert.txt)

## CrossLAB

Funded by: Stiftung Innovation in der Hochschullehre

![CrossLAB](pic/funding.png "_Source: [https://stiftung-hochschullehre.de/projekt/crosslab/](https://stiftung-hochschullehre.de/projekt/crosslab/)_")

### Partners

* TU Dortmund
* Nordakademie University of Applied Sciences
* TU Bergakademie Freiberg
* TU Ilmenau

### Goals II


    {{1}}
* Break up the monolithic structure of hard-wired platforms/labs

    {{2}}
* Modularization:

  - User & permission management
  - Resource & access management
  - Logging & Learning Analytics

    {{3}}
* Disribted Lab-Services aka Web 3.0

    {{4}}
* Combine different and distributed Labs/Simulations "dynamically"
  to create larger experiments

## THX

<div style="width:100%;height:0;padding-bottom:100%;position:relative;"><iframe src="https://giphy.com/embed/8ujkvy3gJ0fGHHb5gx" width="100%" height="100%" style="position:absolute" frameBorder="0" class="giphy-embed" allowFullScreen></iframe></div><p><a href="https://giphy.com/gifs/O2UK-robot-o2-bubl-8ujkvy3gJ0fGHHb5gx">via GIPHY</a></p>
