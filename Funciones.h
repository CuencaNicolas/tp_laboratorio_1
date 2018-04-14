
/** \brief Se creara una calculadora,y para ello iniciará y contara con un menu de opciones:

 *1-Ingresar 1er operando (A=x)
 *2-Ingresar 2do operando (B=y)
 *3-Calcular la suma (A+B)
 *4-Calcular la resta (A-B)
 *5-Calcular la división (A/B)
 *6-Calcular la multiplicación (A*B)
 *7-Calcular la factorial (A!)
 *8-Calcular todas las operaciones
 *9-Salir

 * \return Se retorna en un número float(entero,decimal,negativo)
 */

float operandoA();
/** \brief Pide primer número flotante y lo valida
* \param float Valor del número
*/

float operandoB();
/** \brief Pide segundo número flotante y lo valida
* \param float Valor del numero
*/
void suma(float,float);
/** \brief Pide dos números,los resuelve sumando
 * \param float Primer número
 * \param float Segundo número
 * \return float Retorna en un numero tipo flotante
 */
void resta(float,float);
/** \brief Pide dos números,los resuelve restando
 * \param float Primer número
 * \param float Segundo número
 * \return float Retorna en un numero tipo flotante
 */
void multiplicacion(float,float);
 /** \brief Pide dos números,los resuelve multiplicando
 * \param float Primer número
 * \param float Segundo número
 * \return float Retorna en un numero tipo flotante
 */
void division(float,float);
 /** \brief Pide dos números,los resuelve dividiendo numeroA por numeroB
 * \param float Primer número
 * \param float Segundo número
 * \return float Retorna en un numero tipo flotante
 */
void factorial(int);
 /** \brief Pide un número y lo factorea
 * \param float Primer número
 * \return float Retorna en un numero tipo entero
 */
void todasOperaciones(float, float);


