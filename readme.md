# Git-Beispiel für den Kurs "TF_US_P2_Programmieren mit der Programmiersprache C"

Um Git benutzen zu können, müsst ihr das Tool installieren:
[Download Git](https://git-scm.com/downloads)


Für GitHub benötigt ihr logischerweise einen Account auf [GitHub](https://github.com/).

Ich empfehle euch die Introductions von GitHub einmal durchzuarbeiten und das Tool aktiv im Rahmen der Programmierkurse zu benutzen, da ihr so einen Einblick in die Versionierung von Code für das Praktikum bekommt und die Dateien auf allen Geräten einfach herunterladen oder pullen könnt.
[Introduction zu GitHub](https://docs.github.com/en/get-started/start-your-journey/hello-world)
[Deutsche Version](https://docs.github.com/de/get-started/start-your-journey/hello-world)

### Grundbefehle git:

**Erstellung  und Initialisierung eines Git-Repositorys:**
```
git init -b main
git add *
git commit -m "Erster Commit"
git log
```

### Was passiert wann?

```git init -b main```
[Dokumentation git init](https://git-scm.com/docs/git-init) 
Erstellt ein neues Git Repository mit dem Flag *-b main* wird der Name des Master-Branches auf "main" geändert. Theoretisch könnt ihr jeden beliebigen Namen nutzen, **master** ist Git-Standard, **main** ist der Standard von GitHub.


```git add *```
[Dokumentation git add](https://git-scm.com/docs/git-add)
Indiziert alle vorhandenen Dateien in dem Repository


Beispiel1:
```git commit -m "Erster Commit"```

> Beispiel2:
> git commit -m "Erster Commit
> - Name des Master Branches zu main geändert
> - Alle vorhandenen Dateien der Ordnerstruktur indiziert"

Erstellt einen Commit mit einem Titel, den ihr innerhalb der Anführungszeichen eingeben könnt.
In Beispiel2 seht ihr, dass ihr auch mehrere Zeilen nutzen könnt, dann ist die erste Zeile der Titel und der restliche Inhalt die Nachricht unterhalb des Titels.

Solltet ihr aus Versehen keine Nachricht eingegeben, den Flag *-m "Nachricht"* vergessen haben, könnt ihr dann eine Nachricht eingeben und mit Escape und :wq (Write + Quit) den Commit abschließen.


```git log```
Zeigt euch dann anschließend die Commit-History an.