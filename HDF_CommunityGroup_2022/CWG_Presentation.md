<!--
author:   Sebastian Zug, André Dietrich
email:    sebastian.zug@informatik.tu-freiberg.de & andre.dietrich@informatik.tu-freiberg.de

version:  0.0.1
language: en
narrator: UK English Female

icon:     https://cross-lab.org/content/images/2021/11/Logo-mit-5-mehrfarbig.png

<span style="color:red">@0</span>

-->

[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/Cross-Lab-Project/presentations/main/HDF_CommunityGroup_2022/CWG_Presentation.md#1)

# Adaption von Digitalen Laboren
<h2>Motivation und Stand des Vorhabens CrossLab </h2>

<div style="width: 46%; float: left">

| Partner                  |
| ------------------------ |
| TU Bergakademie Freiberg |
| TU Ilmenau               |
| TU Dortmund              |
| Nordakademie             |

</div>

![partner_map](./Partners.png "")<!-- style="width: 50%; float: right" -->

<h5><p>Community Working Group „Digitale Labore“</p>9. Dezember 2022</h5>

## CrossLab-Motivation

![eLabRemoteInstallation](./OldRemoteLabMagdeburg.png "First remote-lab implementation [Industrial eLab](https://www.wihoforschung.de/wihoforschung/de/bmbf-projektfoerderung/foerderlinien/forschung-zur-digitalen-hochschulbildung/erste-foerderlinie-zur-digitalen-hochschulbildung/industrial-elab/industrial-elab_node.html)")<!-- style="width: 90%; display: block; margin-left: auto; margin-right: auto;"-->

> __Mal schnell die Aufgaben anpassen oder neue Beispiele einfügen - Nur für Experten.__

## Cross-X

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

## CrossLab Solutions

Startpunkt
==================


```ascii
          +-----------------+                 +-----------------+
          |Instrumentierung |                 |Learning Manag.  |    
          +---------+       |                 +---------+       |   
 +----------------+ |       |        +----------------+ |       |      +----------------+         
 |eigentlicher    | |       |========|Gateway         | |       |======|Webbrowser      |              
 |Laborgegenstand | |       |        |                | |       |      |                |     
 +----------------+ |       |        +----------------+ |       |      +----------------+   
          +---------+       |                 +---------+       |      Studentischer Rechner
          |                 |                 |                 |
          +-----------------+                 +-----------------+


```

### Edrys Konzepte


```ascii
          +-----------------+                 +-----------------+
          |Instrumentierung |                 |Learning Manag.  |    
          +---------+       |                 +---------+       |   
 +----------------+ |       |        +----------------+ |       |      +----------------+         
 |eigentlicher    | |       |========|Gateway         | |       |======|Webbrowser      |              
 |Laborgegenstand | |       |        |                | |       |      |                |     
 +----------------+ |       |        +----------------+ |       |      +----------------+   
          +---------+       |                 +---------+       |      Studentischer Rechner
          |                 |                 |                 |
          +-----------------+                 +-----------------+


                       |                    | |                   |
                       .--------------------. .-------------------.
                            Edrys Station        Edrys Classroom

                             +---------+            +---------+   
                             |         |\           | * ...   |\  
              Stations-      |         +-+          |         +-+    Klassenraum-
              beschreibung   |           |          | * Modul 1 |       konfiguration
                             |           |          | * Modul 2 |    Modul-
                             |           |          | * ...     |       auswahl
                             +-----------+          +-----------+




--- "@red(test)" ----

```

@red(hervorheben ...)




```json MicrocontrollerLab.config
{
  "id": "h8VGEabkElzbQY79PCsOQ",
  "createdBy": "Andre.Dietrich@informatik.tu-freiberg.de",
  "dateCreated": 1660161004140,
  "name": "Microcontroller Lab",
  "modules": [
    {
      "url": "https://cross-lab-project.github.io/edrys_module-editor/index.html",
      "config": "{ \"editorText\": \"Starting text in editor...\",  ....
    },
    {
      "url": "https://cross-lab-project.github.io/edrys_module-pyxtermjs/index.html",
      ...
      "stationConfig": "{ \"server\": \"http://localhost:5000/pty\" , \"execute\": \"pty-execute\" }",
      ...
    }
  ]
}
```

![edrys_example](./CrossLabEdrysSolution.jpeg "Resulting Edrys Laboratory Configuration")


## Thanks for your interest

| Reference          | Link |
|--------------------|------|
| Project website    | [https://cross-lab.org/](https://cross-lab.org/) |
| Project repository |[https://github.com/Cross-Lab-Project](https://github.com/Cross-Lab-Project) |
| Edrys repository   | [https://edrys.org/](https://edrys.org/)|

> ___CrossLab_ is founded by Stiftung Innovation in der Hochschullehre [Link](https://stiftung-hochschullehre.de/projekt/crosslab/).__
