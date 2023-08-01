<!--
author:   Sebastian Zug; André Dietrich

email:    sebastian.zug@informatik.tu-freiberg.de

version:  0.0.1

language: en

narrator: UK English Female

icon:     https://cross-lab.org/content/images/2021/11/Logo-mit-5-mehrfarbig.png

link:     style.css
-->

[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/Cross-Lab-Project/presentations/main/GeCon_2023_Keynote/CrossLab_GeCon2023.md)

# Digital Laboratories as Open Educational Ressources

<div class="left">

## Challenges and Solutions

---

Prof. Dr. Sebastian Zug

Institute of Computer Science

TU Bergakademie Freiberg

---

### IEEE German Education Conference 2023 (GeCon 2023), Berlin, 3.08.2023

</div>

<div class="right">

![partner_map](./ChemistryLab.png "Abb.: Digital laboratory at TU Bergakademie Freiberg")

</div>


## Motivation of the presentation

                    {{0-1}}
**************************************************

> Agenda of todays presentation as a timeline ...

`````````````````````````````````````````````````````



             Remote
           Laboratory                                       Digital
                                                             Laboratory
                                                              as OER
      ----------*-----                                       ----*----->
 Traditional                                                        Visions and
 Laboratory                                                          Challenges
 Concepts


 2014       2017               2020     2021                   2023


`````````````````````````````````````````````````````

**************************************************

                     {{1-2}}
**************************************************

> Agenda of todays presentation as a timeline,  __as a research road map__

`````````````````````````````````````````````````````

                                   .------>
                            OER   /
             Remote       .------+-------->
           Laboratory    /        \                         Digital
                        /          .------>               \  Laboratory
                       /                                   \  as OER
      ----------*-----+                                     +----*----->
 Traditional           \                                   /        Visions and
 Laboratory             \                 .--->           /          Challenges
 Concepts                \               /
                          .-------------+
                            Digital      \
                            Laboratories  .------->


`````````````````````````````````````````````````````

**************************************************

                     {{2-4}}
**************************************************

> Agenda of todays presentation as a timeline, as a research road map and __as a sum of lessoned learned__.


`````````````````````````````````````````````````````

                                   .------>
                            OER   /
             Remote       .------+-------->
           Laboratory    /        \                      \  Digital
                        /          .-O---->               \  Laboratory
                       /             ^                     \  as OER
      --------O-*---O-+              |                      +----*----->
 Traditional  ^     ^  \            TP2                    /        Visions and
 Laboratory   |     |   \            |    .--->          -+          Challenges
 Concepts    TP0   TP1   \           v   /               /
                          .----------O--+
                            Digital      \
                            Laboratories  .-----o->
                                                ^
                                                | TP3
`````````````````````````````````````````````````````

**************************************************

                     {{3-4}}
**************************************************


| Turning Point | Identified requirements / drawbacks | Development goal                                      |
| :------------ | :---------------------------------- | ----------------------------------------------------- |
| TP0           |                                     | Remote Laboratory                                     |
| TP1           |                                     | Description Language for learning contexts            |
| TP2           |                                     | Seamless Integration of Laboratory Elements           |
| TP3           |                                     | Modularization / Adaptibility of digital laboratories |

*******************************************


## TP 0 - Remote Laboratories

                        {{0-1}}
************************************************************

__TP0__ Motivation:  _Increase the distance between student and laboratory equipment :-)._ 

![eLabRemoteInstallation](./elab_robot.png "Final robot configuration implemented in [Industrial eLab](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/erste-foerderlinie-zur-digitalen-hochschulbildung/industrial-elab/industrial-elab_node.html)")

> __Remote laboratories__ provide an access to real hardware over the internet without being near the actual equipment.

************************************************************

                        {{1-3}}
************************************************************

![eLabRemoteInstallation](./OldRemoteLabMagdeburg.png "First remote-lab implementation [Industrial eLab](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/erste-foerderlinie-zur-digitalen-hochschulbildung/industrial-elab/industrial-elab_node.html)")
![eLabRemoteInstallation](./elab_setup.png "Final installation of 6 remotely controlable, small size robots")
![eLabRemoteInstallation](./elab_streakmodel.png "Streak model of the remote laboratory for an individual student")

LINK auf das Paper 

Anja Hawlitschek, Sarah Berndt, Sebastian Zug, André Dietrich
Iterative Adaption eines Remote-Labors unter Berücksichtigung des Feedbacks der Studierenden

https://www.wbv.de/shop/Iterative-Adaption-eines-Remote-Labors-unter-Beruecksichtigung-des-Feedbacks-der-Studierenden-6004804w145

************************************************************

{{2-3}}
| Advantages                                                                                                                             | Disadvantages                                                                             |
| :------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------- |
| Student centric implementation of practical education in  laboratory - permanent availability                                          |                                                                                           |
| Students work with real hardware                                                                                                       |                                                                                           |
| Development environment perfectly matching the requirements                                                                            |                                                                                           |
| The remote system allows the application of learning analytics methods for improving the online appliction and corresponding lectures. | No immediate support by supervisors comparable to traditional exercises in a a laboratory |
|                                                                                                                                        | Technical efforts for installation and maintenance                                        |


## TP1 - Concepts for variability and openness

                        {{0-1}}
************************************************************

> __Success, but ...__ Besides the technical efforts, the implementation did not provide any kind of adaptability:

+ technical solutions depended on the specific hardware
+ the implementation was not reusable for other learning contexts
+ ...
+ __the learning content was "hard coded" into the implementation__

************************************************************

                        {{1-3}}
************************************************************

> __Requierments__:
>
> + Separate handling of actual learning contents
> + Adaptable materials 
> + Reusable learning content 
> + Open to different authors 
> + ...
>     $\sum = $ Open Educational Ressources (OER)

************************************************************

                        {{2-3}}
************************************************************

`````````````````````````````````````````````````````
                                      text based                                 
                                   .----->                                  
                            OER   /   meta data                                 
             Remote       .------.------->                                         
           Laboratory    /        \   obstacles               Digital                      
                        /          .-----> for OER           Laboratory                 
                       /                                      as OER                 
      -------O-*---O--                                       ----*----->             
Traditional  ^     ^                                                 Visions and 
Laboratory   |     |                                                  Challenges
Concepts    TP0   TP1                                                                
                                                                                     
                                                                                   
                                                                                           
                                                                                     
                                                                                     
`````````````````````````````````````````````````````

> Industrial eLab Projekt - Industrial eLab [BMBF](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/erste-foerderlinie-zur-digitalen-hochschulbildung/industrial-elab/industrial-elab_node.html) (2017-2020)

> Programmieren im Team - DiP-iT [BMBF](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/dritte-foerderlinie-zur-digitalen-hochschulbildung/dip-it/dip-it_node) (2020-2023) - TU Bergakademie Freiberg, Otto-von-Guericke Universität Magdeburg, Humboldt Universität zu Berlin

************************************************************

### Text based learning materials 

LiaScript explanation


### Meta data 


### Artificial Intelligence


Try a LiaScript quiz prompt:

``` markdown   Prompt excerpt for quizzes
Create quizzes using LiaScript syntax. There are four types of quizzes: Single-Choice, Multiple-Choice, Text-Quiz, and Gap-Text.

For Single-Choice Quiz:
- Each quiz consists of a question and four answer options.
- Only one answer option is correct.
- Use square brackets with round brackets inside to mark the answer options.
- Place an "X" inside the round brackets to indicate the correct answer option.
- Separate each quiz with a blank line.

...

**Single-Choice Quiz Example:**

Question: What is the capital of France?

- [( )] London
- [( )] Berlin
- [(X)] Paris
- [( )] Rome
...
```

---

__Demo:__

https://chat.openai.com/share/e3c0ad08-c561-4834-b5ca-b8402346f9e5

### Obstacles for OER  

|     | Ebene                        | Kernaussage                                                                                      |
| --- | ---------------------------- | ------------------------------------------------------------------------------------------------ |
| 1   | Emotionale Einordnung        | "_Da kann ja jeder meine Arbeit für sich nutzen!_"                                               |
|     |                              | "_Da kann mich ja jeder kontrollieren!_"                                                         |
| 2   | Qualität                     | "Wer sorgt denn dafür, dass die QUalität der Angebote hoch ist?"                                 |
| 3   | Rechtliche Herausforderungen | "_Ich verwende viele Grafiken, die bei deren Urheberrecht ich mir im besten Fall unsicher bin!_" |
| 4   | Auffindbarkeit               | "_Ich finde keine Inhalte, die ich in meiner Lehre gewinnbringend integrieren kann!_"            |
| 5   | Aufwand                      | "_Da muss man ja Informatik studiert haben!_"                                                    |
| 6   | Abdeckung                    | <!-- Style="color:red" -->"_Da fehlen mir aber die Schnittstellen für meine Tools XY!_"          |
|     |                              | <!-- Style="color:red" -->"_Das OER kann ich nicht in mein LMS XY!_"                             |

> MOER Projekt - Multi-Autoren-Tool für OER-Inhalte [BMBF](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/querschnittsprojekte/moer/moer_node.html) (2020) - TU Bergakademie Freiberg

## TP2 - Seamless Integration of Laboratory Elements 

LiaScript Beispiel Mikrocontroller als Video und als Simulation

`````````````````````````````````````````````````````
                                      text based                                   
                                   .-----> -----------.                              
                            OER   /   meta data                                      
             Remote       .------.------->                                          
           Laboratory    /        \   obstacles               Digital                       
                        /          .-O---> for OER           Laboratory                 
                       /             ^                        as OER                 
      -------O-*---O--.              |                       ----*----->             
 Traditional  ^     ^   \            TP2      multi-typed             Visions and 
 Laboratory   |     |    \            |    .--->                      Challenges
 Concepts    TP0   TP1    \           v   /                              
                          .----------O--.                                   
                            Digital      \                           
                            Laboratories  .---->  
                                                                  
                                                      
`````````````````````````````````````````````````````


### Multi-typed laboratories learning materials


```ascii

                            +----------------------------------------------------+
         +-->    elements   | composition of varying laboratory objects          |
         |                  +----------------------------------------------------+
         |
         |                  +----------------------------------------------------+
         +-->       types   | mixture of different types of laboratories         |
         |                  +----------------------------------------------------+
CROSS ---+
         |                  +----------------------------------------------------+
         +--> disciplinary  | sharing laboratories between different disciplines |
         |                  +----------------------------------------------------+
         |
         |                  +----------------------------------------------------+
         +-->   university  | formation of a laboratory cluster                  |
                            +----------------------------------------------------+

```


Types of digital Laboratories 

| Type of Laboratory | Description                                                                       |
| ------------------ | --------------------------------------------------------------------------------- |
| Remote             | Access to real hardware over the internet without being near the actual equipment |
| Virtual            | Simulation of real hardware with a software implementation                        |
| ...                |                                                                                   |



> The extended bandwidth of digital laboratories requires a new description format for learning materials.

## TP3 - Modularization / Adaptibility of digital laboratories

`````````````````````````````````````````````````````
                                      text based                                
                                   .-----> -----------.                         
                            OER   /   meta data        \                        
             Remote       .------.------->              \                       
           Laboratory    /        \   obstacles          \    Digital           
                        /          .-O---> for OER        \  Laboratory         
                       /             ^                     \  as OER            
      -------O-*---O--.              |                      .----*----->        
 Traditional ^     ^   \            TP2      multi-typed   /         Visions and
 Laboratory  |     |    \            |    .---> ----------.           Challenges
 Concepts   TP0   TP1    \           v   /               /                      
                          .----------O--.               /                       
                            Digital      \  composable /                        
                            Laboratories  .------o->--.                         
                                                 ^                              
                                                 | TP3                          
`````````````````````````````````````````````````````


json File und Edrys Beispiel


> Crosslab Projekt - Flexibel kombinierbare Cross-Reality Labore in der Hochschullehre: zukunftsfähige Kompetenzentwicklung für ein Lernen und Arbeiten 4.0 [BMBF](https://stiftung-hochschullehre.de/projekt/crosslab/) (2021 - 2024) - TU Bergakademie Freiberg, TU Illmenau, TU Dortmund, Nordakademie



## Summary and next steps 

| Turning Point | Identified requirements / drawbacks                       | Development goal                                       |
| :------------ | :-------------------------------------------------------- | ------------------------------------------------------ |
| TP0           | Disadvantages of traditional laboratories installations   | Remote Laboratories                                    |
| TP1           | Limitations of the developed solution                     | Concepts for variable description of learning contents |
| TP2           | Need for interactive laboratory elements in OER materials | Generic concepts for digital laboratories              |
| TP3           |                                                           | Description format for digital                         |

// TODO: Vorschlag, anstatt einer Tabelle eine Liste in dem folgenden Format? 

Turning Points:

{{0}}
- Identified requirements / drawbacks

  - Disadvantages of traditional laboratories installations

- Development goal:

  - Remote Laboratories


{{1}}
- Identified requirements / drawbacks

  - Limitations of the developed solution

- Development goal:

  - Concepts for variable description of learning contents


{{2}}
- Identified requirements / drawbacks

  - Need for interactive laboratory elements in OER materials

- Development goal:

  - Generic concepts for digital laboratories 


{{3}}
- Identified requirements / drawbacks

  - TODO

- Development goal:

  - Description format for digital 


### Challenge I Application of Web 3.0 technologies


### Challenge II Metadata formats for Digital Laboratories as OER  


### ????