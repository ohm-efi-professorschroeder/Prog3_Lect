Lernziele/Erkenntnisse:

- Wichtige Bestandteile der Standardbibliothek:
    - Container
    - Iteratoren
    - Algorithmen
- 'auto' Keyword
- typedefs mit 'using' Keyword

Aufgabe 1
--
In dieser Übung geht es darum, die Implementierung eines einfachen Filmlabors zu vervollständigen. Beim Filmlabor kann
man seinen Film zum Entwickeln abgeben. Beim Abgeben des Films wird ein Auftrag erstellt, der das Datum, den Filmtyp
sowie den Kundennamen enthält. Das Labor führt zwei Listen, eine mit noch offenen Aufträgen (d.h. noch zu entwickelnden
Filmen) und eine mit den bereits abgearbeiteten Aufträgen.
Das Labor entwickelt immer einen Film nach dem anderen, so wie sie in der Liste der offenen Aufträge stehen.

Machen Sie sich zuerst mit dem vorgegebenen Code vertraut.

Aufgabe 2
--
Implementieren Sie die Funktionen `FilmLab::addOrder()` sowie `FilmLab::printBacklog()` und `FilmLab::printProcessed()`.
Nutzen Sie für die beiden Auftragslisten den Container-Typ `std::vector` aus der Standardbibliothek. Definieren Sie
ihren Container-Typen mit dem Keyword `using`. Wenn Sie über einzelne Einträge des Containers iterieren möchten, nutzen
sie elementweisen Zugriff (analog zu (C-)Arrays). Achten Sie darauf, dass nicht zweimal der gleiche Auftrag abgegeben
werden kann.

Aufgabe 3
--
Bauen Sie die Funktionen aus Aufgabe 2 nun so um, dass sie Iteratoren zum Zugriff auf die Elemente des Containers
verwenden.

Aufgabe 4
--
Implementieren Sie die Methode `FilmLab::processNextOrder()`, welche den ersten Auftrag aus dem Backlog bearbeitet. Nach
Bearbeitung soll der Auftrag nicht mehr im Backlog geführt werden, sondern in der Liste der abgearbeiteten
Aufträge (`FilmLab::processed_`).

Aufgabe 5
--
Implementieren Sie die Funktion `FilmLab::sortBacklog()`. Nutzen Sie dafür die Methode `std::sort()` aus der
Standardbibliothek (`algorithm.h`). Damit Sie diese nutzen können, müssen Sie eine Ordnung für die Klasse `Order`
definieren. Standardmäßig existiert diese nämlich noch nicht, d.h. der Compiler weiß nicht, in welcher Reihenfolge zwei
Instanzen der Klasse `Order` stehen. Bringen Sie es ihm bei, in dem Sie den "kleiner-als" Operator (`operator<`) für
diese Klasse definieren. Sortieren Sie die Aufträge alphabetisch nach Kundennamen.

Aufgabe 6
--
Implementieren Sie die Funktion `FilmLab::retrieveOrders()`, die alle Aufträge für einen bestimmten Kundennamen
zurückgibt. Abgeholte Aufträge sollen aus der Liste des Filmlabors entfernt werden. Dies geht mit dem
Container `std::vector` nicht ohne Weiteres. Warum? Bauen Sie Ihren Code auf den Container `std::list` um. Welche
Anpassungen sind nötig? Hat Ihnen das konsequente Nutzen von Iteratoren hier Aufwand erspart?

Aufgabe 7
--
Führen Sie nun das komplette Programm aus. Ihre Ausgabe sollte wie folgt aussehen:

```
Customers dropping off some films to be developed...
Added order: Ilford HP5 from Bob, ordered at 15.11.2023
Duplicate order: Ilford HP5 from Bob, ordered at 15.11.2023
Added order: Portra 400 from Alice, ordered at 16.11.2023
Added order: Gold 200 from Caesar, ordered at 16.11.2023
Added order: Ektachrome 100 from Alice, ordered at 18.11.2023

Backlog of the film lab:
Backlog: 
1       Ilford HP5              Bob               15.11.2023     Processed: no
2       Portra 400            Alice               16.11.2023     Processed: no
3         Gold 200           Caesar               16.11.2023     Processed: no
4   Ektachrome 100            Alice               18.11.2023     Processed: no
Backlog of the film lab, sorted by date:
Backlog: 
1       Portra 400            Alice               16.11.2023     Processed: no
2   Ektachrome 100            Alice               18.11.2023     Processed: no
3       Ilford HP5              Bob               15.11.2023     Processed: no
4         Gold 200           Caesar               16.11.2023     Processed: no

Film lab processing the first order...
Developing order: Portra 400 from Alice, ordered at 16.11.2023
Backlog: 
1   Ektachrome 100            Alice               18.11.2023     Processed: no
2       Ilford HP5              Bob               15.11.2023     Processed: no
3         Gold 200           Caesar               16.11.2023     Processed: no
Processed: 
1       Portra 400            Alice               16.11.2023     Processed: yes

Film lab processing some more orders...
Developing order: Ektachrome 100 from Alice, ordered at 18.11.2023
Developing order: Ilford HP5 from Bob, ordered at 15.11.2023
Developing order: Gold 200 from Caesar, ordered at 16.11.2023
No more open orders...

Alice fetches her processed orders:
- Portra 400 from Alice, ordered at 16.11.2023
- Ektachrome 100 from Alice, ordered at 18.11.2023
The other customers still need to retrieve their developed films...
Processed: 
1       Ilford HP5              Bob               15.11.2023     Processed: yes
2         Gold 200           Caesar               16.11.2023     Processed: yes

Process finished with exit code 0
```