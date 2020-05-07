/**
 * @file time.h
 * @brief Biblioteka za vremensko izvrsavanje
 * @date 07-05-2020
 */

#ifndef TIME_H_
#define TIME_H_
/**
 * Funkcija koa inicijalizuje prekid
 */
void initTime();
/**
 * Funkicja vraca vrednost u ms
 * @return vrednost u ms
 */
unsigned long millis();
/**
 * Funkicja koja vrsi kasnjenje koje je se zadaje
 * @param d trajanje pauze u ms
 */
void delay(unsigned long d);


#endif /* TIME_H_ */
