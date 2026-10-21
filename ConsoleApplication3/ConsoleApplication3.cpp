// ConsoleApplication3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int main(void)
{
    int entry_hour, entry_min;
    int exit_hour, exit_min;
    int entry_total_min, exit_totalmin;
    int duration, fee, startethours;

    printf("Entry time:");
    scanf_s("%d:%d", &entry_hour, &entry_min);
    if (entry_hour < 0 || entry_hour >23 || entry_min < 0 || entry_min > 59){
        printf(" invalid time\n ");
        return 0; 
    }
    printf("exit time:");
    scanf_s("%d:%d", &exit_hour, &exit_min);
    if ( exit_hour < 0 || exit_hour > 23 || exit_min < 0 || exit_min >59) {
        printf("invalid time\n");
           return 0;
     }

    int entry_total = entry_hour * 60 + entry_min;
    int exit_total = exit_hour * 60 + exit_min;
    if (entry_total > exit_total) {
        printf("invalid time\n");
        return 0;
    }
    duration = exit_total - entry_total;
    printf("time total : %d", duration);
    

    fee =( (duration / 15 )- 1) * 4;
    
    printf("fee to pai: %d",fee);
}



// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
