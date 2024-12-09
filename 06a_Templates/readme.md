Lernziele/Erkenntnisse:

- Templates verstehen
- Dynamische Speicherverwaltung
- Smart-Pointer
- Exceptions

Aufgabe 1
--
Wir haben uns in der vergangenen Übung mit der Standardbibliothek beschäftigt. Diese enthält eine Reihe von
Containerklassen, die Sie kennengelernt haben (z.B. std::list oder std::vector). In dieser Übung werden wir unsere
eigene simple Containerklasse schreiben.

In der Datei main.cpp finden Sie eine einfache Klasse `MyContainer`, die einen Container für `int`-Werte darstellt. Es
können neue Werte hinzugefügt werden sowie Elemente an einer bestimmten Position abgefragt werden. Im Hintergrund
verwaltet die Klasse ein C-Array zur Speicherung der Werte.

In der main-Funktion finden Sie einen Test, der die Klasse verwendet.

Machen Sie sich zuerst mit dem vorgegebenen Code vertraut.

Aufgabe 2
--
Schauen Sie sich die Funktion `resize` an und versuchen Sie zu verstehen, wie die dynamische Speicherverwaltung für das
Array funktioniert. Nutzen Sie nun einen s.g. Smart-Pointer (std::unique_ptr oder std::shared_ptr) zur Speicherung des
Arrays. Welchen Vorteil hat dieser?

Aufgabe 3
--
Schreiben Sie `MyContainer` nun so um, dass sie beliebige Datentypen speichern kann. Nutzen Sie dafür Templates. Passen
Sie die main-Funktion entsprechend an und testen Sie Ihre Klasse mit verschiedenen Datentypen.

Aufgabe 4
--
Schreiben Sie nun eine template-Funktion `printContainer`, die alle Elemente eines Containers auf der Konsole ausgibt.

Aufgabe 5
--
Schauen Sie sich nun die Funktion `getElement` an. Was passiert, wenn Sie eine Position abfragen, die nicht existiert
und warum ist das problematisch? Wie können Sie dieses Problem lösen?

Schreiben Sie die Funktion nun so um, dass mittels Exception ein Fehlerfall signalisiert wird und fangen Sie diesen in
der main-Funktion ab.

