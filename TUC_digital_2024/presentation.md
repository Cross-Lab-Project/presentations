<!--
author:   Sebastian Zug; André Dietrich

email:    sebastian.zug@informatik.tu-freiberg.de

version:  0.1.1

language: de

narrator: UK English Female

icon:     https://media.aubi-plus.com/institution/thumbnail/3f3de48-technische-universitaet-bergakademie-freiberg-logo.jpg

link:     style.css

import:   https://raw.githubusercontent.com/liaTemplates/ABCjs/main/README.md
          https://raw.githubusercontent.com/liaTemplates/AVR8js/main/README.md
          https://raw.githubusercontent.com/liaTemplates/TextAnalysis/main/README.md
          https://raw.githubusercontent.com/LiaScript/CodeRunner/master/README.md

@runManimAnimation
```text   -manim.cfg
[CLI]
background_color = BLACK
media_dir = .
video_dir = .
images_dir = .
#verbosity = ERROR
#quiet = True
#progress_bar = none 
```
@LIA.eval(`["main.py","manim.cfg"]`, `none`, `manim render --format=gif main.py MyScene -o animation`)
@end


@embed.edit
@embed_(edit,height: 80vh; min-width: 100%; border: 1px black solid,````@0
````)
@end

@embed.edit.style
@embed_(edit,@0,````@1
````)
@end

@embed.preview
@embed_(preview,height: 80vh; min-width: 100%; border: 1px black solid,````@0
````)
@end


@embed.preview.style
@embed_(preview,@0,````@1
````)
@end


@embed
@embed_(none,height: 80vh; min-width: 100%; border: 1px black solid,````@0
````)
@end


@embed.style
@embed_( ,@0,````@1
````)
@end


@embed_
<script run-once modify="false">
let code = `@'2`

code = btoa(unescape(encodeURIComponent(code)))

let embed ="@0"

if (embed=="preview" || embed=="edit") {
  embed += "/"
} else {
  embed = ""
}

'HTML: <iframe loading="lazy" style="@1" src="https://liascript.github.io/LiveEditor/?/embed/code/' + embed + code + '"></iframe>'
</script>
@end

-->

[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/Cross-Lab-Project/presentations/refs/heads/main/TUC_digital_2024/presentation.md)

# Warum braucht OER eine gemeinsame Sprache?!

<h2>Visionen für die kollaborative Gestaltung von Offenen Lehr-Lern-Materialien</h2>

---------------------

> Umfrage: In welchen Format haben Sie bereits OER öffentlich zur Verfügung gestellt?

- [(pdf)] pdf
- [(office)] Office Format (word, powerpoint, ...)
- [(opal)] Opal
- [(liascript)] LiaScript
- [(others)] andere Formate

----------------------

<h5>
<p>Prof. Dr. Sebastian Zug, Dr. Andre Dietrich</p>
<p>TU Bergalakdemie Freiberg</p>
<p>November 2024</p>
</h5>

<div>

---

</div>

## Motivation

> Wer von Ihnen kennt die Videos von `3brown1blue`? 

!?[3blue1brown](https://www.youtube.com/watch?v=r6sGWTCMz2k&t=719s "Video aus der Reihe zu Differentialgleichungen mit 17 Millionen Views")

> Was macht diese Videos so besonders?

- __gut designte Animationen__
- eigene Lerngeschwindigkeit (Stop, Pause, Rückspulen)
- weiterführende Materialien als Links

> Was sind Beschränkungen?

| Limitierung                                         | Erläuterungen                                                                                                                                               |
| --------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------- |
| _Fehlende Anpassungsfähigkeit_                      | Das finale Material - ein Video - ist statisch und kann nur mit erheblichen Aufwand auf individuelle didaktische Ziele oder Vorkenntnisse angepasst werden. |
| _Notwendige Fähigkeiten_                            | Die Umsetzung der Animationen, Gleichungen usw. erfordert spezielle Kenntnisse.                                                                             |
| _Interaktivität ist konzeptionell nicht vorgesehen_ | Ein Eingriff des Nutzenden ist nicht vorgesehen.                                                                                                            |
| _Abhängigkeit von einer Plattform_                  | Die Videos sind nur bei bestehender Internetverbindung verfügbar.                                                                                           |

## Lösungsansatz

> __Wir trennen Darstellung und Inhalt! Alle Elemente werden soweit wie möglich durch eine rein textuelle Repräsentation ausgedrückt.__

### Konzept

Was ist damit gemeint?

```markdown @embed.style(height: 550px; min-width: 100%; border: 1px black solid)
# Vom Text zur Darstellung

__Mathematik__

$f(x) = x^2$

__Tabellen__

| A | B | C |
|---|---|---|
| 1 | 2 | 3 |
| 4 | 5 | 6 |

__Sprache__

> Click to run!

              --{{1 Deutsch Female}}--
Markdown ist eine vereinfachte Auszeichnungssprache, die der Ausgangspunkt unserer Entwicklung von LiaScript war.
```

### Konsequenzen

<details>

<summary>__Fehlende Anpassungsfähigkeit__ </summary>

Die textuellen Repräsenation eröffnet die Möglichkeit, dass
+ jeder Nutzende Materialien anpassen kann und
+ eine Versionierung der Materialien mit etablierten Tools realisiert werden.

!?[Einbettung Studierender bei der Bearbeitung von Materialien](https://github.com/TUBAF-IfI-LiaScript/.github/assets/10922356/00a24602-dc63-4b9a-894b-80967b914513)

</details>

<details>

<summary>__Notwendige Fähigkeiten__ </summary>

Die textuelle Repräsentation erlaubt den extensiven Einsatz von KIs für die Textgenerierung.

```
Generiere mir eine Animation, die die Multiplikation von zwei Matrizen mit manim im Stil von 3blue1brown zeigt.
```

```python -manim.py
from manim import *

class MyScene(Scene):
    def construct(self):
        # Define the matrices
        matrix_A = MathTex(r"\begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix}", color=BLUE)
        matrix_B = MathTex(r"\begin{bmatrix} 5 & 6 \\ 7 & 8 \end{bmatrix}", color=GREEN)
        matrix_C = MathTex(r"\begin{bmatrix} 19 & 22 \\ 43 & 50 \end{bmatrix}", color=YELLOW)

        # Position the matrices on the screen
        matrix_A.move_to(LEFT * 3)
        matrix_B.move_to(ORIGIN)
        equals_sign = MathTex("=").next_to(matrix_B, RIGHT)
        matrix_C.next_to(equals_sign, RIGHT)

        # Display matrices and equals sign
        self.play(Write(matrix_A), Write(matrix_B))
        self.play(Write(equals_sign), Write(matrix_C))

        # Highlight the first row and first column
        row_rect = SurroundingRectangle(matrix_A[0][2:4], color=BLUE, buff=0.1)
        col_rect = SurroundingRectangle(matrix_B[0][0:2], color=GREEN, buff=0.1)
        self.play(Create(row_rect), Create(col_rect))

        # Compute the first element of the result (19)
        dot_prod_1 = MathTex("1 \\cdot 5 + 2 \\cdot 7 = 19")
        dot_prod_1.next_to(matrix_A, UP)
        self.play(Write(dot_prod_1))
        self.play(Transform(dot_prod_1, matrix_C[0][2:4].copy()))
        self.play(FadeOut(dot_prod_1))

        # Final pause to view the result
        self.wait(2)
```
@runManimAnimation

</details>

<details>

<summary>__Interaktivität für den Lehrenden__ </summary>

```markdown @embed.style(height: 550px; min-width: 100%; border: 1px black solid)
# Beispiele für Interaktionen

Quiz

Welche der folgenden Matrizenprodukte ist NICHT möglich?

- [( )] Eine 2×3 Matrix multipliziert mit einer 3×2 Matrix
- [(X)] Eine 2×3 Matrix multipliziert mit einer 2×3 Matrix
- [( )] Eine 3×3 Matrix multipliziert mit einer 3×1 Matrix
- [( )] Eine 1×2 Matrix multipliziert mit einer 2×2 Matrix
```

</details>

<details>

<summary>__Abhängigkeit von einer Plattform__ </summary>

Haben wir hier noch ein cooles Video vom Telefon?

</details>

## Warum funktioniert das bisher nicht?

Übersicht zu den Datenformaten in OPAL


> Hinweis auf OER-CL Projekt

Hemmungen bei Lehrenden - Paradigmenwechsel

## Zusammenfassung




> Dieser Vortrag ist eine Open Educational Resource (OER) und steht unter der Lizenz [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/deed.de). 

+ Alle enthaltenen Inhalte können frei verwendet werden und sind unter https://github.com/Cross-Lab-Project/presentations/tree/main/Berufsschulen_2024 verfügbar

+ Sie können diesen unmittelbar im Online-Editor bearbeiten und anpassen: 