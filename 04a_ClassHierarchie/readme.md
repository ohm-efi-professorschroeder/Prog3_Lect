Lernziele/Erkenntnisse:

- Ableiten u. Klassenhierarchie
- Basic UML
- Virtuelle Funktionen
- Interfaces

Aufgabe 1
--
Modellieren Sie eine Klassenhierarchie für Events und deren Fotografen:

- Es gibt verschiedene Arten von Kameras, mit denen Fotos gemacht werden können: analoge Kameras und digitale Kameras.
  Ein Foto soll durch Aufrufen einer Funktion ausgelöst werden.
- Kameras haben außerdem Modell, Hersteller und Baujahr.
- Ein Fotograf hat einen Namen und verfügt über eine oder mehrere Kameras.
- Ein Event hat einen Namen und Datum und kann beliebig viele Fotografen haben.
- Wenn ein Event beginnt, schießen alle Fotografen mit allen ihren Kameras ein Foto.

Teilen Sie die Hierarchie in sinnvolle Basisklassen und abgeleitete Klassen auf.

Aufgabe 2
--
Implementieren Sie diese Klassenhierarchie in C++. Implementieren Sie die Klassen wie in Aufgabe 1 modelliert.
Nutzen Sie den Code in main.cpp, um Ihre Implementierung zu testen (passen Sie ggf. noch Details wie z.B.
Parameterreihenfolge an, damit Ihre Implementierung zur main-Methode passt).

Aufgabe 3
--
Lagern Sie die Fotofunktionalität in ein Interface ICapturingDevice aus. Implementieren Sie außerdem ein Smartphone, mit
dem auch Fotos gemacht werden können.