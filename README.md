1. Ze tří LED navrhněte semafor (červená, červená oranžová, zelená, oranžová, -> opakovat)

2. Ze všech LED, které jste koupili, vytvořte Knight ridera (pomocí FOR)

3. Jedno tlačítko rožne LED. Druhé tlačítko ji zhasne.

4. Pomocí hodnoty přepočítané z potenciometru postupně zvyšujte a snižujte intenzitu svícení LED

5. Na LED naprogramujte pomocí PWM postupné zhasínání a rožínání v časovém intervalu. Rychlost “dýchání“ ovládejte potenciometrem.

6. Na sériovou linku vypište hodnotu z potenciometru přepočítanou na napětí 0.0-5.0V

7. Na sériovou linku pošlete z PC číslici. Zobrazte ji na 7-Segment display

8. Vytvořte program, kde LED po stisku tlačítka začne blikat. Po dalším stisku přestane

9. Zapojte dvě tlačítka a 6 LED. Funkce tlačítek na přerušení budou následující:
• Zmáčknutí tlačítka 1 rožne další LED v řadě ☺☻☻☻☻☻->☺☺☻☻☻☻
• Zmáčknutí tlačítka 2 zhasne aktuální LED ☺☺☺☺☻☻->☺☺☺☻☻☻

10. Propojte dvě Arduina SUART nebo I2C.
• Na prvním se na maticové klávesnici zmáčne znak a odešle se
• Na druhém se přijme znak a zobrazí se na 7- segment

