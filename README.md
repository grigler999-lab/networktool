# Network Tool

Detta projekt är ett enkelt nätverksverktyg skrivet i både C och Python.
Verktyget används för att validera IP-adresser och portar samt spara resultaten i en logg.

## Funktioner
- Validera IP-adresser (t.ex. 192.168.1.1)
- Validera portar (1–65535)
- Hantera felaktig input utan att krascha
- Spara resultat i en logg
- Visa logg med alla valideringar
- Visa totalt antal valideringar
## Hur programmet fungerar
Programmet använder en meny där användaren kan välja olika alternativ.
När en IP-adress eller port valideras sparas resultatet i en lista (logg).
Loggen kan sedan visas i programmet tillsammans med totalt antal valideringar.
## Felhantering

Programmet är byggt för att hantera felaktig input utan att krascha:

- Om användaren skriver text istället för nummer i menyn → felmeddelande visas
- Ogiltiga IP-adresser (t.ex. 1..1.1 eller bokstäver) → avvisas
- Ogiltiga portar (t.ex. >65535 eller bokstäver) → avvisas
- Programmet fortsätter alltid köras efter fel

## Reflektion: C vs Python

Under denna uppgift arbetade jag med både Python och C, vilket gav mig en tydlig bild av skillnaderna mellan språken.

Python var enklare att använda och gjorde det möjligt att snabbt implementera funktioner. Jag kunde fokusera mer på logik och mindre på detaljer som inputhantering.

I C behövde jag däremot kontrollera allt manuellt. Jag behövde säkerställa att input är korrekt, hantera strängar och undvika fel som kan leda till krascher. Detta gjorde utvecklingen långsammare men också mer lärorik.

En konkret utmaning var att hantera felaktig input. I Python kunde jag lösa detta relativt enkelt, medan det i C krävde mer kod och noggrann kontroll av varje tecken.

En annan skillnad är att C kräver mer struktur och planering. Om något blir fel är det svårare att hitta problemet jämfört med Python.

Trots att C var svårare upplevde jag att jag lärde mig mer om hur program fungerar på en lägre nivå. Jag fick en bättre förståelse för hur data behandlas och varför validering är viktig.

Sammanfattningsvis ser jag Python som ett effektivt språk för snabb utveckling, medan C är bättre för att bygga en djupare förståelse för programmering.
