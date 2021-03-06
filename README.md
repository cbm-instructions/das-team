# Anleitung zur Erstellung eines Interaktiven Campus-Plans

## Challenge Based Making Sommersemester 2017

<img src="/images/iExpo.gif" alt="iExpo.gif"/>

Pascal Perle, Marcel Klug, Sebastian Grüb, Rico Zieger


## Einleitung
Immer wieder klagen Studenten darüber, dass sie sich nicht ausreichend über das Leben auf dem Campus sowie den dort angebotenen Veranstaltungen informiert fühlen. Der interaktive Campus-Plan bietet nun eine Lösung für dieses Problem, indem er den Studierenden spielerisch Informationen über die Gebäude sowie den darin stattfindende Veranstaltungen vermittelt und ihnen so indirekt dabei hilft, aktiver am Leben auf dem Hochschulcampus teilzunehmen.
Der Plan besteht aus physischen 3D-Modellen der 10 Gebäude des Haupt-Campus. Diese sind innen hohl, sodass mehrere LEDs zur farblichen Ausleuchtung der Gebäude darin platziert werden konnten. Die Gebäude selbst sind so positioniert, dass sie durch leichtes Drücken einen darunter liegenden Taster auslösen, der dann die Beleuchtung des jeweiligen Gebäudes aktiviert. Der gesamte Plan ist in einen stabilen Holzrahmen eingelassen, dessen Oberseite eine weiße Pappschicht bildet. Entsprechende Aussparungen in der Pappe sorgen dafür, dass die Gebäude durch sie hindurch ragen und von außen sichtbar sind. Über ein hölzernes Stativ ist ein Beamer knapp 80 cm oberhalb der Pappe befestigt und so ausgerichtet, dass auf die freien Flächen Informationen zu dem gerade gedrückten Gebäude projiziert werden können.

## Material und Werkzeug
Folgende Materialien werden für den Bau des Campus-Plans benötigt:
  
  * [1x Raspberry Pi Modell 3](https://www.cyberport.de/?DEEP=1123-00G&APID=117&wt_cc2=sea_pla_topseller_v1&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbiKza9JI850KB2_Y9_73PldQr2hXuxBM2C39G0gC9oxoCuPXw_wcB)
  * [1x Arduino Uno](https://store.arduino.cc/arduino-uno-rev3)
  * [1x LED Beamer Telefunken DLP 400](https://www.conrad.de/de/led-beamer-telefunken-dlp400-helligkeit-400-lm-1280-x-800-wxga-1000-1-schwarz-silber-1171421.html?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wb9i6u8JIRXmKfrVj-gZcoSBDnPLN098RzPLXcP3MjIRoC-kfw_wcB&insert_kz=VQ&ef_id=WSiDywAABMn3DC9b:20170624084019:s)
  * [1x Adafruit Digital RGB LED Weatherproof Strip 32 LED](http://www.exp-tech.de/adafruit-digital-rgb-led-weatherproof-strip-32-led-5m)
  * [1x Female DC Power adapter - 2.1mm jack to screw terminal block](http://www.exp-tech.de/female-dc-power-adapter-2-1mm-jack-to-screw-terminal-block)
  * [1x 5V 10A Netzteil](http://www.exp-tech.de/5v-10a-netzteil)
  * [1x USB-A auf USB-B Kabel](https://www.kab24.de/computer/usb-20-anschlusskabel-a-stecker-auf-b-stecker-schwarz-max-480-mbits.html?pid=11&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbamGMp6XGu6_NLg__A04c5Fg73DkAcnETOoyrGiLr9RoCh1zw_wcB)
  * [1x HDMI-Kabel](https://www.mediamarkt.de/de/product/_hama-1-5-m-high-speed-1148936.html?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wb2fY-ONBGViptF0cUG0tCi5ZZjRwPL8bAUCYHtnrzsBoCEoTw_wcB&gclsrc=aw.ds)
  * [1x 5V 3,1 A Netzteil (Raspberry Netzteil)](https://www.alternate.de/html/product/1331825?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wbo4D49r00vCQCrR8qQWWQNLUW0iF2yiz0hrqDZMjItBoCybPw_wcB)
  * [1x Scharnier passend zur Holzleiste](http://www.globus-baumarkt.de/de/article/326297_vormann-kistenband.html)
  * [1x Holzleiste 100 cm x 4 cm x 4 cm](http://www.globus-baumarkt.de/de/article/404023_amco-quadratleiste-nadelholz-massiv.html?text=holzleiste+40mm&searchform_id=)
  * [1x Holzleiste 20 cm x 4 cm x 2cm](http://www.globus-baumarkt.de/de/article/404039_amco-rechteckleiste-nadelholz-massiv.html?text=holzleiste+40mm&searchform_id=)
  * [1x Holzplatte 60 cm x 70 cm x 1 cm](http://www.globus-baumarkt.de/de/article/442020_sperrholz-buche-1200-x-600-x-10-mm.html?text=holzplatte+10mm&searchform_id=)
  * [2x Holzleiste 1 cm x 1 cm x 240 cm](https://www.obi.de/leisten/quadratleiste-kiefer-10-mm-x-10-mm-laenge-2400-mm/p/1040161?wt_mc=gs.pla.Wohnen.Bodenbelaege.Laminat_Parkett_Vinylboeden&wt_cc1=664643021&wt_cc2=&wt_cc3=&wt_cc4=c&wt_cc5=online&storeId=&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbqdH12D9pYPnyx1RgTUw4jkwGT1k3j-XKdTxkKvyaFRoCU8zw_wcB)
  * [1x Holzleiste 5 mm x 3 cm x 1 m](http://www.globus-baumarkt.de/de/article/403803_amco-deckleiste-nadelholz-massiv.html?text=holzleiste+5mm&searchform_id=)
  * [3x Winkelverbinder 5 cm x 5 cm x 3,5 cm](https://www.bauhaus.info/winkel/stabilit-winkelverbinder-/p/10676472)
  * [1x Sechskantschrauben M6 x 4 cm + Mutter](http://www.globus-baumarkt.de/de/article/309470_connex-sechskantschrauben.html?text=sechskantschrauben+m6x40&searchform_id=)
  * [1x Holzleim](http://www.globus-baumarkt.de/de/article/329822_ponal-express-holzleim.html?text=holzleim&searchform_id=)
  * [1x Doppelseitiges Klebeband 1,9 cm Breite](http://www.globus-baumarkt.de/de/article/180773_tesa-montageband-indoor.html?text=doppelseitiges+klebeband&searchform_id=)
  * [1x Spax Schrauben-Set 4 mm x 12 mm](http://www.globus-baumarkt.de/de/article/383899_spax-schraube-pozi-stahl-4-x-12-mm.html?text=schraube+4mm+12mm&searchform_id=)
  * [1x Spax Schraube 4 mm x 30 mm](http://www.globus-baumarkt.de/de/article/383768_spax-schraube-pozi-stahl-4-x-30-mm.html?text=schraube+30mm&searchform_id=)
  * [1x WattePads-Set](https://www.dm.de/ebelin-wattepads-p4010355912930.html)
  * [1x Isolierband](http://www.globus-baumarkt.de/de/article/181172_tesa-isolierband.html?text=isolierband&searchform_id=)
  * [10x Tactile Push Button](http://www.ebay.de/itm/10x-Tactile-Push-Button-Switch-Tact-Switch-6x6x5mm-4-pin-DIP-Arduino-CNC-Printer-/322503963414?_trksid=p2385738.m2548.l4275)
  * [1x Schaltlitze 10 m](http://www.ebay.de/itm/0-25-m-10-m-Kabel-Litze-Schaltlitze-Kupferlitze-0-5-mm-freie-Farbwahl-/380705789901?_trksid=p2385738.m2548.l4275)
  * [2x Metallschicht-Widerstand 47 Ohm](https://www.conrad.de/de/metallschicht-widerstand-47-axial-bedrahtet-0207-06-w-yageo-mf0207fte52-47r-1-st-1417631.html)
  * [4x Metallschicht-Widerstand 100 Ohm](https://www.conrad.de/de/metallschicht-widerstand-100-axial-bedrahtet-0207-06-w-yageo-mf0207fte52-100r-1-st-1417571.html)
  * [2x Metallschicht-Widerstand 150 Ohm](https://www.conrad.de/de/metallschicht-widerstand-150-axial-bedrahtet-0207-06-w-yageo-mf0207fte52-150r-1-st-1417583.html)
  * [2x Metallschicht-Widerstand 220 Ohm](https://www.conrad.de/de/metallschicht-widerstand-220-axial-bedrahtet-0207-06-w-yageo-mf0207fte52-220r-1-st-1417626.html)
  * [2x Metallschicht-Widerstand 1000 Ohm](https://www.conrad.de/de/metallschicht-widerstand-100-axial-bedrahtet-0207-025-w-royalohm-mf0w4ff1000a50-1-st-1089756.html)
  * [1-2x Halb-transparentes Filament weiß](https://www.3dprima.com/de/filament/flexible-3mm/ninjaflex-filament-3mm-0-75-kg-water-semi-transparent/a-20356/?ReferrerID=7&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WblPR8UkbQ9Yrw66b_p-SlMR6tj5rKAiaIprafz1FqMhoCA77w_wcB)
  * [1x Leichtschaumplatte 70 x 100 cm, Stärke 5 mm](https://www.architekturbedarf.de/pappe-+-papier/f-boards-weiss/f-board-70-x-100-cm-staerke-5-mm)
  * [1x Fotokarton 300g/m²](https://www.architekturbedarf.de/katalog/artikelinfo/23448/fotokarton-300g_m_--50-x-70-cm)


  Folgende Werkzeuge werden für den Bau des Campus-Plans benötigt:
  * [1x Heißklebepistole inkl. Heißklebepatrone](http://www.pearl.de/a-NC5391-3650.shtml;jsessionid=h708017300545DC8FE13821C5A320C900?vid=917&wa_id=40&wa_num=1102&utm_source=googleps&utm_medium=cpc&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wb2zet1ELtI7TBGM0O1_EIC145ndRR8k0FsHe8tH9f2xoCuCLw_wcB)
  * [1x Handbohrer](https://www.voelkner.de/products/314558/Donau-M22-Handbohrer.html?ref=43&products_model=C94639&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbAwnUOFrfuYAutKLa15hzb2w7VlH73jviTKwaOGIjxRoCChvw_wcB)
  * [1x Bohrkopf 4 mm](http://www.screwfix.de/bosch-multiconstruction-bohrer-4-x-75-mm.html?utm_source=Google&utm_medium=CPC&utm_campaign=Shopping&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbhwS-7f4REC0SOk9B6XU9fuKQpd7hSEVX51V_dy8P4RoCD0rw_wcB&gclsrc=aw.ds)
  * [1x Lötkolben + Lötzinn](http://www.ebay.de/itm/LOTSET-LOT-SET-Feinloetkolben-Loetkolben-Loetkolben-Loetzinn-Entloetpumpe-Loetstation-/390937733601?_trksid=p2385738.m2548.l4275)
  * [1x Kreuzschlitz-Schraubendreher](https://www.contorion.de/handwerkzeug/wera-917-sph-phillips-schraubendreher-54567907?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbKvcSMOvR5MziChwTJcpPakjanrNo7v9x_hMIIrB8CxoCg2Hw_wcB&$ps=1&drivesize=PH+2&aid=160781498525&ef_id=WSiDywAABMn3DC9b:20170624114556:s)
  * [2x Schraubenschlüssel 10 mm](https://www.zamro.de/product/9DFDA/doppelmaulschluessel-10x13?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbUL7ocvIWZ0j8FVNfzKzEIf4pCuSe79bhaMb06q12uBoC-evw_wcB)
  * [3x Schraubzwinge](http://www.screwfix.de/forge-steel-schraubzwinge-f-form-200x70.html?utm_source=Google&utm_medium=CPC&utm_campaign=Shopping&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wbo1d8Hp1FpgLIHeYsFRfML20lZJbYWSPVl8DmmI3W8xoCEuDw_wcB&gclsrc=aw.ds)
  * [1x Schere](https://www.bueromarkt-ag.de/schere_westcott_e-2059100_13_cm,p-20591,l-google-prd,pd-b2c.html?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbdPR4jh3tZU2N0aTiJAJzdK-0uTlnCZMeko7XlRGN_hoCjUDw_wcB)
  * [3D Drucker](http://www.lightinthebox.com/de/geeetech-mecreator-2-desktop-ultra-hochpraezisionsblech-3d-drucker-mit-duese-0-4-1-75-220v-netzteil_p4972165.html?currency=EUR&litb_from=paid_adwords_shopping&sku=444_7417&utm_source=google_shopping&utm_medium=cpc&adword_mt=&adword_ct=151041506566&adword_kw=&adword_pos=2o4&adword_pl=&adword_net=g&adword_tar=&adw_src_id=2141113852_681360916_35282940659_pla-256834966539&gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9Wb8O1F4gN7wXr3JIV7xjUy8BdhkrkCI12LSN1j0TxAExoCTwTw_wcB) 
  * [1x Cuttermesser](https://www.zamro.de/product/82C11/cuttermesser-interlock-165x18mm-inkl-klinge?gclid=CjwKEAjwm7jKBRDE2_H_t8DVxzISJACwS9WbY5zjJ6AkXutLITOfJqDiejdsmwS0ZvC2qfjyBNEpZhoCDY3w_wcB)
  * [Blender](https://www.blender.org/download/)
  * [1x Stichsäge](https://www.bauhaus.info/stichsaegen/bosch-easy-stichsaege-pst-700-e-/p/20444590?cid=PSMGoo225980461_18381777181&pla_campid=225980461&pla_adgrid=18381777181&pla_prpaid=302087884039&pla_prid=20444590&pla_adt=pla&pla_prch=online&pla_stco=)
  * [1x Schleifpapier](https://www.zamro.de/product/14D220/schleifgewebe-braun-230x280mm-k120?gclid=Cj0KEQjwhMjKBRDjxb31j-aesI4BEiQA7ivN-Jhw_WbLyqtekcPxskfgJAEs6rEpV_TLv91zDX9SbLwaAr188P8HAQ)
  * Arduino IDE, welche zum Betriebssystem des verwendeten Endgeräts kompatibel ist hier wählen: https://www.arduino.cc/en/main/software
  * Ein beliebiges Endgerät mit einem Betriebssystem, das zur aktuellen Arduino IDE  oder zum Web Editor kompatibel ist und einen freien USB-Port besitzt, z.B. Surface Pro 3.  
  https://www.microsoft.com/surface/de-de/devices/surface-pro-3


## Vorbereitung
### 1. Installieren von Raspbian
Sofern noch nicht geschehen, muss mit Raspbian zunächst ein Betriebssystem auf den Raspberry PI überspielt werden. Am einfachsten geht das mit Noobs, einem kompletten Installer für Raspbian. Weitere Informationen dazu gibt es [hier](https://www.raspberrypi.org/downloads/noobs/).

### 2. Installieren der Arduino IDE
Um ein Programm für den Arduino zu schreiben bzw. um es darauf zu überspielen bietet sich die von Arduino selbst bereitgestellte IDE an. Zwar bietet diese nur eine sehr limitierte Funktionalität an, für unsere Zwecke ist das aber durchaus ausreichend. Die IDE kann [hier](https://www.arduino.cc/en/main/software) heruntergeladen werden.

### 3. Importieren der LED Bibliothek
Um den von uns verwendeten LED Streifen ansteuern zu können, wird [diese](https://github.com/adafruit/LPD8806) Bibliothek benötigt. Eine Schritt für Schritt Anleitung zum Importieren der Bibliothek findet sich in der zugehörigen Readme-Datei.

**Achtung:** Ältere Versionen dieses LED Streifens nutzen mit dem HL1606 ein anderes Chipset und benötigen daher auch andere Bibliotheken. Explizit wird zumindest diese Bibliothek benötigt, um PWM nutzen zu können wird zusätzlich auch diese benötig

### 4. Installieren des Selenium-Treibers

Um mit dem Raspberry PI Informationen zu den Gebäuden anzeigen zu können, wird im späteren Verlauf eine Webseite genutzt. Da mit Python 2 eine Webseite aber immer nur als neuer Tab geöffnet werden kann, nutzen wir Selenium, um dieses Problem zu umgehen. 

  * Selenium Installieren `pip install selenium`
  * Iceweasel installieren (Browser) `sudo apt get install iceweasel`
    * [Version 0.15.0](https://github.com/mozilla/geckodriver/releases/tag/v0.15.0) herunterladen (einzige aktuell kompatible Version)
    * und nach “/usr/local/bin” entpacken 

## Step-by-Step-Guide
### 1. Holzrahmen +Pappdeckel bauen
Ein Holzrahmen von 60 cm x 70 cm wird gewählt, sodass die einzelnen Gebäude noch groß genug sind.
Die Hauptplatte mit einer Dicke von 5 mm wird auf 10 mm dicke “Füße” gestellt. Um der Basis des Stativs für den Beamer zu gestatten unter der Fläche des Holzrahmen zu sitzen, wird die Hinterseite offen gelassen.

Auf die Oberseite der Hauptplatte wird ein Rahmen von 10 x 10 mm gesetzt.
Der Pappdeckel mit einer Dicke von 5 mm sitzt im Rahmen auf 5 mm hohen Stützen und den vorhandenen Wattepads und schließt so mit dem Niveau des 10 mm hohen Rahmens ab.

<img src="/images/StepByStep/Step1-Box.png" alt="Step1-Box"/>


### 2. Taster/Widerstände planen verlöten

Da jedes der zehn Gebäude auf einen Druck reagieren können soll, wird entsprechend für jedes Gebäude ein separater Taster benötigt. Der Arduino verfügt jedoch nicht über ausreichend Pins, um jeden davon einzeln anzusprechen, weshalb je fünf Taster parallel geschaltet werden. Durch die Verwendung unterschiedlicher Widerstände für jeden Taster kann mit nur einem Pin der anliegende Spannungswert eindeutig zugeordnet werden. Explizit werden vor je einen der Taster ein 47 Ohm, 100 Ohm, 150 Ohm, 220 Ohm und 1000 Ohm Widerstand geschaltet. Als Pulldown Widerstand wird ebenfalls ein 100 Ohm Widerstand verwendet. Nach dem ersten Taster wird ein Kabel zu einem analogen Input-Pin gelegt, an dem die anliegenden Spannungswerte abgefragt werden können. Durch die unterschiedlichen Widerstände lässt sich so der gemessene Wert eindeutig einem Taster zuordnen.

<img src="/images/StepByStep/Step2-Breadboard.png" alt="Step2-Breadboard"/>

Nachdem die Taster und Widerstände entsprechend verlötet wurden, empfiehlt es sich diese, wie auf untenstehendem Bild zu erkennen ist, mit doppelseitigem Klebeband und Iso-Tape auf dem Boden zu fixieren.

<img src="/images/StepByStep/Step2-Verkabelung.jpg" alt="Step2-Verkabelung"/>


### 3. LEDs verlöten und montieren

Damit jedes Gebäude auch erleuchtet, wenn es gedrückt wird, müssen die LEDs zusammen gelötet werden. In diesem Fall werden dafür 22 einzelne LEDs bzw. 11 doppelte LED-Stücke benötigt. Bei der Verkabelung dieser LEDs empfiehlt es sich zur besseren Unterscheidung der Kontakte verschiedene Farben zu verwenden: Rot für den +5V Kontakt, Blau für den Cl Kontakt, Grau für den Din Kontakt und schließlich Schwarz für den GND Kontakt. Die Länge der Kabel wird so abgemessen, dass sie passend zu den Abständen zwischen den Gebäuden sind. 
Um die Gebäude mit den LEDs verbinden zu können, werden Grundflächen aus Pappe ausgeschnitten. Diese verbinden im späteren Verlauf LEDs mit Gebäuden. Die Grundflächen benötigen hierzu zwei Klappen, damit die LEDs hindurchgeführt werden können.

<img src="/images/StepByStep/Step3-1.jpg" alt="Step3-1"/>

Nun kann gelötet werden. Zu Beachten ist, dass Gebäude G vier LEDs bzw. zwei doppelte LED-Stücke benötigt. In welcher Reihenfolge die Kontakte verlötet werden spielt zwar keine Rolle, die Praxis zeigt aber, dass es am einfachsten ist, mit dem untersten zu beginnen. Darüber hinaus sollten die Grundflächen schon nach dem Verlöten einzelner LED-Stücke in Position geschoben werden, da diese nachträglich nur noch schwer anzubringen sind. 

<img src="/images/StepByStep/Step3-2.jpg" alt="Step3-2"/>

### 4. 3D-Modellierung der Hochschulgebäude

Die 3D-Modelle der Hochschulgebäude werden mit der 3D-Modelling Software Blender angefertigt. Hierbei wurde die Blender-Version 2.78 benutzt. Die Modelle können manuell erstellt werden. Zur Vereinfachung und Zeiteinsparung können diese auch einfach über eine externe Datei wie [OpenScreetMaps](https://www.openstreetmap.org/export#map=17/49.47058/8.48283) importiert werden. Diese Modelle müssen jedoch noch angepasst werden, um für den 3D-Druck verwendet werden zu können. Den Modellen fehlt zum einen die Dicke an den Wände, sowie die richtige Skalierung.
Die nötige Dicke kann mittels Solidify-Modifier gesetzt werden. Diesen findet man unter Properties > Modifiers > Add Modifier > Solidify.

<img src="/images/StepByStep/Step4-1.png" alt="Step4-1"/>

Besonders Gebäude mit Rundungen müssen manuell korrigiert werden. Zusätzlich sollte auch die Decke der Gebäude auf eine einheitliche Dicke angepasst werden. Dazu müssen die Deckenfläche einfach im Edit-Mode verschoben werden. Die Skalierung kann erst später angewendet werden, da die Gebäude einzeln skaliert werden müssen. Im jetzigen Zustand würde die Skalierung nach dem Parent-Objekt gerichtet werden und deshalb nicht exakt auf das gewünschte Resultat führen.

<img src="/images/StepByStep/Step4-2.png" alt="Step4-2"/>

Da die Gebäude als Gesamtes gesehen werden und nicht als einzelne Gebäude, müssen sie vom Parent-Objekt getrennt werden. Dazu sind im Edit-Mode die entsprechenden Flächen/Faces des jeweiligen Gebäudes auszuwählen, was durch die Taste L beschleunigt werden kann. Die Auswahl kann dann via Taste P und der Auswahl von Selected separiert werden.

<img src="/images/StepByStep/Step4-4.png" alt="Step4-4"/>

Abschließend muss noch die gewünschte Skalierung gesetzt werden. Hierfür muss in Blender unter Properties > Scene > Units das Unit-Preset auf Millimeters gesetzt werden. Die Größe der Gebäude kann nach persönlicher Vorliebe gewählt werden. In diesem Modell beträgt sie beispielsweise 5 cm.
Die fertigen Gebäude müssen nun noch einzeln als STL-Datei exportiert werden.

<img src="/images/StepByStep/Step4-6.png" alt="Step4-6"/>


### 5. WattePads positionieren
Um die Gebäude drücken zu können, müssen diese auf einem etwas nachgebenden Boden sitzen. Es hat sich gezeigt, dass zwei handelsübliche WattePads übereinander genau die richtige Höhe und Elastizität dafür bieten. Die WattePads sind dafür gg. zurecht zu schneiden und mittels doppelseitigem Klebeband so um die Taster zu positionieren, dass die Grundflächen der Gebäude gut aufliegen können.

<img src="/images/StepByStep/WattePads.jpg" alt="WattePads"/>


### 6. Alle Teile zusammen führen
Da bereits Taster und WattePads auf dem Holzbrett befestigt sind, werden nun die LEDs und Gebäudemodelle angebracht. Hierzu werden zunächst die LEDs mit den Grundflächen und diese Grundflächen anschließend dann mit den Gebäuden selbst verklebt.

<img src="/images/StepByStep/Step6-1.jpg" alt="Step6-1"/>

Als nächstes wird jedes Gebäude an seinem Stellplatz auf dem Holzbrettplatziert. An den Seiten des Holzbretts und an 5-6 weiteren freien Stellen werden kleine Holzklötze angebracht. Diese dienen dazu, dass die Pappe, die als Abdeckung genutzt wird, nicht eingedrückt wird und es somit auch kein “Wackeln” gibt. Ist dies erledigt kann nun die Pappe über die Häuser gelegt werden.  Hierzu werden die Häuser langsam von unten durch die ihnen zugehörigen Löchern geführt.

<img src="/images/StepByStep/Step6-2.jpg" alt="Step6-2"/>

### 7. Stativ für Beamer bauen + Beamer ausrichten
Um Informationen gut auf der Pappoberfläche darstellen zu können, wird diese mit einem Beamer von oben bestrahlt. Um den Beamer dort positionieren zu können, muss zunächst ein entsprechendes Stativ konstruiert werden. Dafür wird aus dem restlichen Holz, das beim Bau der Hauptplatte übrig geblieben ist, eine 60 x 35 Zentimeter große Platte ausgeschnitten. Diese dient dem Stativ als Standfuß. Anschließend wird die Holzleiste (100 cm x 4 cm x 4 cm), wie auf den Bildern gezeigt, mit Hilfe der Winkelverbinder am Ende der Platte befestigt.

<img src="/images/StepByStep/Step7-1.jpg" alt="Step7-1"/>

Im nächsten Schritt wird die Holzleiste (20cm x 4 cm x 2 cm) mit dem Scharnier am oberen Ende der zuvor montierten Leiste befestigt. Um den Beamer befestigen zu können, muss noch die 6mm-Gewindeschraube durch die Leiste geschraubt und mit einer Mutter festgezogen werden. Es empfiehlt sich das Loch der Einfachheit halber vor zu bohren. Die Gewindeschraube muss dabei in etwa 80 cm Höhe über der Bodenplatte durch die Leiste geschraubt werden. Zu guter Letzt wird noch eine beliebige andere Schraube als Abstandshalter so in die Stativstange geschraubt, dass die Leiste, auf der der Beamer befestigt ist, etwa 3 bis 4 Grad nach vorne geneigt wird.

<img src="/images/StepByStep/Step7-2.jpg" alt="Step7-2"/>

### 8. Coding / Arduino mit Raspberry zusammenführen
Ergänzend zur Verdrahtung und dem physikalischen Aufbau der Taster und ihrer Widerstände muss der Arduino die Spannung am analogen PIN messen, auswerten und einem Gebäude zuordnen. Anschließend muss diese Zuordnung über die USB-Schnittstelle an den Raspberry Pi übertragen werden.

Zuerst muss der Arduino an das Endgerät, mit installierter Arduino IDE oder lauffähigem Arduino Web Editor, über USB angeschlossen werden. Die Datei LEDbtn.ino wird dann in der Arduino IDE geöffnet und der Port, an welchem der Arduino gefunden wird, ausgewählt.
Nun muss der Sketch (Arduino Programm Code) kompiliert und auf den Arduino hochgeladen werden.
Abschließend muss der Arduino vom Computer getrennt und an den Raspberry angeschlossen werden. Ist der Arduino an den eingeschalteten Raspberry angeschlossen, startet das hochgeladene Programm automatisch.


#### Quellcode Raspberry Pi (python2)
``` Python
# -*- coding: utf-8 -*-
import serial
from selenium import webdriver

ser = serial.Serial('/dev/ttyACM0', 9600)


def buildUrl(name):
    return 'file:///home/pi/BtnShow/websites/building{0}.html'.format(name)


browser = webdriver.Firefox()
browser.maximize_window()
browser.get(buildUrl('A'))

lastInput = ""
while True:
    inputLine = ser.readline().rstrip()
    print(inputLine)
    if inputLine != lastInput:
        lastInput = inputLine
        try:
            browser.get(buildUrl(inputLine))
        except:
            pass

```

#### Quellcode Arduino
```CPP
#include "LPD8806.h"
#include "SPI.h" // Comment out this line if using Trinket or Gemma
#ifdef __AVR_ATtiny85__
#include <avr/power.h>
#endif

// Button values
int lastValue = 0;
int currentValue = 0;

const int deviation = 50;

const int btnPerPin = 5;

const int btnPins[]                    = {1, 2};
const char btnBuildings[][btnPerPin]   = { {'A'  , 'B'   , 'C', 'E'   , 'F'   }, {'G'             , 'H' , 'J'     , 'K'     , 'L'    } };
const int btnValues[][btnPerPin]       = {{ 318  , 408   , 695, 511   , 91    }, {319             , 409 , 696     , 512     , 91     } };
const int ledPositions[][btnPerPin][4] = {{{6, 7}, {4, 5}, {3}, {8, 9}, {0   }}, {{18, 19, 20 , 21}, {10}, {12, 13}, {16, 17}, {14, 15}}};

char selectedBuilding = ' ';
char selectedBuildingLEDs[] = {0, 0};

// Number of RGB LEDs in strand:
const int nLEDs = 22;

// Chose 2 pins for output; can be any valid output pins:
const int dataPin  = 3;
const int clockPin = 2;

LPD8806 strip = LPD8806(nLEDs, dataPin, clockPin);


void setup() {
  Serial.begin(9600);

#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000L)
  clock_prescale_set(clock_div_1); // Enable 16 MHz on Trinket
#endif

  // Start up the LED strip
  strip.begin();

  // Update the strip, to start they are all 'off'
  strip.show();

  startUpShow();
}

void loop() {
  selectedBuilding = ' ';

  for (int i = 0; i < sizeof(btnPins) / sizeof(*btnPins); i++) {
    currentValue = analogRead(btnPins[i]);

    if (!isSameValue(currentValue, 0, 25)) {
      for (int j = 0; j < sizeof(btnValues[i]) / sizeof(*btnValues[i]); j++) {
        if (isSameValue(currentValue, btnValues[i][j], deviation)) {
          selectedBuilding = btnBuildings[i][j];
          selectedBuildingLEDs[0] = i;
          selectedBuildingLEDs[1] = j;
        }
      }
    }
  }

  if (selectedBuilding != ' ') {
    Serial.println(selectedBuilding); // send to Pi

    for (int i = 0; i < strip.numPixels(); i++) strip.setPixelColor(i, 0); // turn all pixels off

    for (int i = 0; i < sizeof(ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]]) / sizeof(*ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]]); i++) {
      if (!(i > 0 && ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]][i] == 0)) {
        strip.setPixelColor(ledPositions[selectedBuildingLEDs[0]][selectedBuildingLEDs[1]][i], strip.Color(0, 0, 255));
      }
    }
    strip.show(); // Refresh LED states

    delay(100);
  }

}

boolean isSameValue(int originalValue, int compareValue, int deviation) {
  return originalValue >= compareValue - deviation && originalValue <= compareValue + deviation;
}

void startUpShow() {

  for (int i = 0; i < sizeof(ledPositions) / sizeof(*ledPositions); i++) {
    for (int j = 0; j < sizeof(ledPositions[i]) / sizeof(*ledPositions[i]); j++) {
      for (byte m = 0; m <= 127; m++) {
        for (int k = 0; k < sizeof(ledPositions[i][j]) / sizeof(*ledPositions[i][j]); k++) {
          if (!(k > 0 && ledPositions[i][j][k] == 0)) {
            strip.setPixelColor(ledPositions[i][j][k], strip.Color(0, 0, m));
            delay(1);
            strip.show(); // Refresh LED states
          }
        }
      }
    }
  }

  for (int i = 0; i < strip.numPixels(); i++) strip.setPixelColor(i, 0);
  strip.show(); // Refresh LED states

}
```