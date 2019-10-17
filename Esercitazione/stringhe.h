#ifndef STRINGHE_H
#define STRINGHE_H
/**
*Funzione che stampa la clona_stringa
*
*@param La stringa
**/
void stampa_stringa(const char *str);

/**
* Funzione che clona una stringa
* La nuova stringa è allocata dinamicamente
*
*@param str puntatore alla stringa
**/
char *clona_stringa(const char *str);

/**
*Funzione che inverte una stringa di input
*@param str puntatore alla stringa di input
*@return puntatore alla stringa nuova
**/
void inverti_stringa(char *str);

/**
*Funzione che ritorna la lunghezza di una stringa
*
*@param str puntatore alla stringa di input
*@return
**/
unsigned int lunghezza_stringa(const char * str);
/**
*Funzione che unisce due stringhe
*@param str1 puntatore alla prima stringa
*@param str2 puntatore alla seconda stringa
*@return puntatore alla stringa combinata
**/
char *unisci_stringhe(const char *str1, const char *str2);
/**
*Doxxygen pls
**/

const char *cerca_stringa(const char *s1, const char *st);
/**
*Doxxygen pls
**/
void sostituisci_stringa(char *s1, const char *st);

#endif
