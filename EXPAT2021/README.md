<!--
author:   André Dietrich

email:    andre.dietrich@informatik.tu-freiberg.de

version:  0.0.3

language: en

narrator: US English Female

import:   https://raw.githubusercontent.com/liaTemplates/AVR8js/main/README.md

icon:     pic/logo.png

-->

# EXPAT2021 Workshop - CrossLAB

    --{{0}}--
This presentation about the CrossLAB project is given by André Dietrich, and is
part of the CrossLAB workshop at the
[EXPAT2021](https://expat.org.pt/other-events/expatws21/). For more information
about the project checkout also the following links.


> __Website:__ https://cross-lab.org
>
> __Twitter:__ [\@Cross_Labs](https://twitter.com/Cross_Labs)
>
> __Presentation at:__ https://github.com/Cross-Lab-Project/EXPAT2021


[qr-code](https://liascript.github.io/course/?https://raw.githubusercontent.com/Cross-Lab-Project/EXPAT2021/main/README.md#1)


## Goals I

    --{{0}}--
So the goals of the project are.

    --{{1}}--
But, wait a minute, before we get to the project itself, which is pretty young,
let us better start with a view on the eLab project, and the lessons we had
learned there.

    {{1}}
<div style="width:100%;height:0;padding-bottom:100%;position:relative;"><iframe src="https://giphy.com/embed/y1ZBcOGOOtlpC" width="100%" height="100%" style="position:absolute" frameBorder="0" class="giphy-embed" allowFullScreen></iframe></div><p><a href="https://giphy.com/gifs/foosball-y1ZBcOGOOtlpC">via GIPHY</a></p>

## PreHistory (eLab)

    --{{0}}--
The eLab project was located in Magdeburg and tried to explore "new" ways of
making university laboratories accessible via the internet. One application was
teaching embedded systems programming via a platform, which contained a fully
fledged IDE, a stock of remotely flashable robots and an infrastructure for
handling the communication, observation and interaction via various modules
(user management and logging included).


!?[eLab on YouTube](https://www.youtube.com/watch?v=bICfKRyKTwE)


    --{{1}}--
Well, it worked and also quite good, but we could identify a few conceptual
problems, that we tried to tackle:

    --{{2}}--
First, we separated the presentation, from the actual lab-functionality,
nowadays, this would be called a headless lab. An entire IDE might be
overwhelming for students that start to learn programming and also to learn
about algorithms. That is why, we started to develop LiaScript, a language based
on Markdown, that can be used to separate content into smaller and digestible
learning chunks.

    --{{3}}--
Additionally, we created some kind of macro-notation, which allowed us to define
custom functionalities, such as attaching a script to a Markdown code-block,
which turns the piece of code into an executable and editable example.


    --{{4}}--
And instead of relying on real hardware, educational content can also be
transported via simple simulations. There are JavaScript libraries for nearly
every thinkable purpose and by adding such elements into the courses, we could
minify the usage of real and fragile hardware by diving a bit deeper into some
aspects of the curriculum.


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

    --{{0}}--
The CrossLAB project is a cooperation between four partner universities, which
is funded by the German foundation "Stiftung Innovation in der Hochschullehre".
The foundation was established in 2019 by the German federal and state
governments. The goals are the increase of quality in German higher education by
promoting innovation, exchange, networking and transfer in study and teaching.

> **Funded by: Stiftung Innovation in der Hochschullehre**
>
> ![CrossLAB](pic/funding.png "_Source: [https://stiftung-hochschullehre.de/projekt/crosslab/](https://stiftung-hochschullehre.de/projekt/crosslab/)_")

### Partners

    --{{0}}--
The partners of this project in short are
(not necessarily in the following order):

    --{{1}}--
The Technical University Dortmund has a long-lasting background on developing and
applying remote labs with a strong focus on **didactic concepts**.

    --{{2}}--
The Nordakademie University of Applied Sciences in Elmshorn is part of this
project due to their high expertise in **usability** analysis for remotely
operated labs.

    --{{3}}--
The Technical University of Ilmenau has, probably the largest experience with
remote labs, their design, and diversity of applications.

    --{{4}}--
And the TU Bergakademie of Freiberg has ...

* {{1}} TU **Dortmund** (_didactic_)
* {{2}} Nordakademie University of Applied Sciences **Elmshorn** (_usability_)
* {{3}} TU **Ilmenau** (_infrastructure_)
* {{4}} TU Bergakademie **Freiberg** (_a bit of everything_)

### Goals II

    --{{0}}--
So what are the goals of the CrossLAB project in short?


![CrossLAB schematic overview](pic/crosslab.png)


    --{{1}}--
One goal is to break down the mostly monolithic development of remotely operated
laboratories …

    --{{2}}--
… something modular, which goes beyond general components such as user- or
access management. These are always the same repetitive and error-prone tasks,
which have "actually" nothing to do with the lab itself …

    --{{3}}--
… thus, the Web 3.0 is not only going to introduce semantics in contrast to
meaningless data, but also distributed. That means, there is a slight turn away
from centralized platforms to decentralized solutions in various areas. Is it
possible to apply these concepts also to remote labs?

    --{{4}}--
… And even more, is it possible to combine different solutions such as labs with
each other and also with freely with simulations in order to create more
sophisticated learning experiences.

    --{{5}}--
Last but not least, can this also be combined with didactic concepts,
representing the semantics in the Web 3.0 approach.



      {{1}}
* Break up the monolithic structure of hard-wired platforms/labs

      {{2}}
* Modularization:

  - User & permission management
  - Resource & access management
  - Logging & Learning Analytics

      {{3}}
* Distributed Lab-Services, aka Web 3.0

      {{4}}
* Combine different and distributed Labs/Simulations "dynamically"
  to create larger experiments

      {{5}}
* Inclusion of didactic concepts as a major building block

## THX

    --{{0}}--
Thank you very much.

<div style="width:100%;height:0;padding-bottom:100%;position:relative;"><iframe src="https://giphy.com/embed/8ujkvy3gJ0fGHHb5gx" width="100%" height="100%" style="position:absolute" frameBorder="0" class="giphy-embed" allowFullScreen></iframe></div><p><a href="https://giphy.com/gifs/O2UK-robot-o2-bubl-8ujkvy3gJ0fGHHb5gx">via GIPHY</a></p>
