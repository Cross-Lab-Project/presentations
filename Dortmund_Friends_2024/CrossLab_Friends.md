<!--
author:   Sebastian Zug; André Dietrich

email:    sebastian.zug@informatik.tu-freiberg.de

version:  0.0.1

language: en

narrator: UK English Female

icon:     https://media.aubi-plus.com/institution/thumbnail/3f3de48-technische-universitaet-bergakademie-freiberg-logo.jpg

link:     style.css

import:   https://raw.githubusercontent.com/liaTemplates/ABCjs/main/README.md
          https://raw.githubusercontent.com/liaTemplates/AVR8js/main/README.md
          https://raw.githubusercontent.com/liaTemplates/TextAnalysis/main/README.md
          https://raw.githubusercontent.com/LiaScript/CodeRunner/master/README.md
-->
# Adaptable Digital Labs
<h2>Motivation and Results of the CrossLab Project </h2>

<div style="width: 46%; float: left">

<!-- class="highlight" -->
> __Project:__
> [Crosslab](https://stiftung-hochschullehre.de/projekt/crosslab/) - Flexibel kombinierbare Cross-Reality Labore in der Hochschullehre: zukunftsfähige Kompetenzentwicklung für ein Lernen und Arbeiten 4.0, Stiftung Innovation in der Hochschullehre (2021 - 2024) - TU Bergakademie Freiberg, TU Illmenau, TU Dortmund, Nordakademie

</div>

![partner_map](./Partners.png "Consortium of CrossLab Project")<!-- style="width: 50%; float: right" -->

<h5>CrossLab meets Friends, Dortmund, 27.11.2024</h5>

## CrossLab-Motivation

![eLabRemoteInstallation](./OldRemoteLabMagdeburg.png "First remote-lab implementation [Industrial eLab](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/erste-foerderlinie-zur-digitalen-hochschulbildung/industrial-elab/industrial-elab_node.html)")<!-- style="width: 90%; display: block; margin-left: auto; margin-right: auto;"-->

> __How to characterize the implementation? It was hard coded related to components and content.__

### Cross-X Vision

```ascii




                            +--------------------------------------------------------+
         +-->    elements   | composition of varying laboratory objects              |
         |                  +--------------------------------------------------------+
         |
         |                  +--------------------------------------------------------+
         +-->       types   | mixture of different types of laboratories             |
         |                  +--------------------------------------------------------+
CROSS ---+
         |                  +--------------------------------------------------------+
         +--> disciplinary  | sharing laboratories between different disciplines     |
         |                  +--------------------------------------------------------+
         |
         |                  +--------------------------------------------------------+
         +-->   university  | formation of a laboratory cluster                      |
                            +--------------------------------------------------------+

```

### Challenges

```ascii

                             .--------------.   .--------------.   .--------------.
                             | technical    |   | didactical   |   |organisational|
                             |              |   |              |   |              |
                            +--------------------------------------------------------+
         +-->    elements   | composition of varying laboratory objects              |
         |                  +--------------------------------------------------------+
         |                   |              |   |              |   |              |
         |                  +--------------------------------------------------------+
         +-->        types  | mixture of different types of laboratories             |
         |                  +--------------------------------------------------------+
CROSS ---+                   |              |   |              |   |              |
         |                  +--------------------------------------------------------+
         +->  disciplinary  | sharing laboratories between different disciplines     |
         |                  +--------------------------------------------------------+
         |                   |              |   |              |   |              |
         |                  +--------------------------------------------------------+
         +-->   university  | formation of a laboratory cluster                      |
                            +--------------------------------------------------------+
                             |              |   |              |   |              |
                             .--------------.   .--------------.   .--------------.
```

### Requierments

```ascii


                              |  technical     |  didactical     |  organisational
                 -------------+----------------+-----------------+------------------
                              | data exchange, | adjustment of   |
         +-->       elements  | real-time      | system recon-   |
         |                    | behaviour      | figuration      | digital skills
         |       -------------+----------------+ and intended    | of lecturers
         |                    | individual     | didactical      |
         +-->           type  | interfaces     | learning        |
         |                    | composability  | outcomes        |
CROSS ---+       -------------+----------------+-----------------+------------------
         |                    | remote re-     | specific        | access planning,
         +-->    disciplinary | configura-     | learning per-   | physical re-
         |                    | bility         | spectives       | configuration
         |       -------------+----------------+-----------------+ privacy,
         |                    | student access | differnt didac- | maintance and
         +-->      university |                | tical profiles  | monitoring
                              |                | and formalisms  |
                 -------------+----------------+-----------------+------------------
```

## Solutions

### TU Freiberg

+ Edrys + div. Labs (TUBAF)

<!-- class="reference" -->
> __Reference:__ 
> Anja Hawlitschek, Sarah Berndt, Sebastian Zug, André Dietrich
> _Iterative Adaption eines Remote-Labors unter Berücksichtigung des Feedbacks der Studierenden._
> [Link](https://www.wbv.de/shop/Iterative-Adaption-eines-Remote-Labors-unter-Beruecksichtigung-des-Feedbacks-der-Studierenden-6004804w145)


### TU Illmenau

+ Architektur + div. Labs (Ilmenau)

### TU Dortmund

+ Evaluationsstrategie + div. Labs (Dortmund)

### Nordakademie

+ Usability + div. Labs (Nordakademie)

## References

| Reference                | Link                                                                         |
| ------------------------ | ---------------------------------------------------------------------------- |
| Crosslab Projekt Website | [https://cross-lab.org/](https://cross-lab.org/)                             |
| Project Repository       | [https://github.com/Cross-Lab-Project](https://github.com/Cross-Lab-Project) |