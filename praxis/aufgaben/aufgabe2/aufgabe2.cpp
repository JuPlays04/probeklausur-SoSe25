/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    size_t c = 0; // c = Variable für Counter
    Element* el = this; //element* bedeutet "Ich erstelle mir einen Zeiger" 

    while(!el-> is_empty())       // While schleife bedeutet, so lange das Element noch einen NAchfolger hat rechne ich element +1 und im gleichen schritt ist das element, was jetzt angeguckt wird ist das nächste, das was davor steht
{
        c++;                     // c wird um 1 erhöht
        el = el->next;          // man ändert sein zu betrachtenes Element -> auf das nächste Element in der Liste
    }
    return c; // gibt die Länge der Liste zurück
}