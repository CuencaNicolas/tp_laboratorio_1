
/** \brief Se creara una calculadora,y para ello iniciar� y contara con un menu de opciones:

 *1-Ingresar 1er operando (A=x)
 *2-Ingresar 2do operando (B=y)
 *3-Calcular la suma (A+B)
 *4-Calcular la resta (A-B)
 *5-Calcular la divisi�n (A/B)
 *6-Calcular la multiplicaci�n (A*B)
 *7-Calcular la factorial (A!)
 *8-Calcular todas las operaciones
 *9-Salir

 * \return Se retorna en un n�mero float(entero,decimal,negativo)
 */

float operandoA();
/** \brief Pide primer n�mero flotante y lo valida
* \param float Valor del n�mero
*/

float operandoB();
/** \brief Pide segundo n�mero flotante y lo valida
* \param float Valor del numero
*/
void suma(float,float);
/** \brief Pide dos n�meros,los resuelve sumando
 * \param float Primer n�mero
 * \param float Segundo n�mero
 * \return float Retorna en un numero tipo flotante
 */
void resta(float,float);
/** \brief Pide dos n�meros,los resuelve restando
 * \param float Primer n�mero
 * \param float Segundo n�mero
 * \return float Retorna en un numero tipo flotante
 */
void multiplicacion(float,float);
 /** \brief Pide dos n�meros,los resuelve multiplicando
 * \param float Primer n�mero
 * \param float Segundo n�mero
 * \return float Retorna en un numero tipo flotante
 */
void division(float,float);
 /** \brief Pide dos n�meros,los resuelve dividiendo numeroA por numeroB
 * \param float Primer n�mero
 * \param float Segundo n�mero
 * \return float Retorna en un numero tipo flotante
 */
void factorial(int);
 /** \brief Pide un n�mero y lo factorea
 * \param float Primer n�mero
 * \return float Retorna en un numero tipo entero
 */
void todasOperaciones(float, float);


