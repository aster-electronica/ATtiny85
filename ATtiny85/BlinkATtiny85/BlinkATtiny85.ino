/******************************************************************************* 
  *  Áster Electrónica
  *  Programación de ATtiny85
  *  Ejemplo 'Hola Mundo Random' para microcontroladores ATtiny85 
  *  Abstract: En este ejemplo se conectarán 5 leds rojos a las salidas del microcontrolador
  *  y encenderán de manera consecutiva.
  *  Hecho por Miguel AngelLo.
  *  Conexiones físicas:
  *           ATtiny85 | Circuito
  *                 1  -> No conectar
  *                 2  -> LED 3
  *                 3  -> LED 4
  *                 4  -> GND
  *                 5  -> LED 0 
  *                 6  -> LED 1
  *                 7  -> LED 2
  *                 8  -> 3V a 5V
  *          
  * IMPORTANTE:
  * Deberás contar con las placas instaladas llamadas 'ATTinyCore' encuentralas en el siguiente enlace
  * https://github.com/SpenceKonde/ATTinyCore  
********************************************************************************/
void setup() {
  // Declaramos los pines 0,1,2,3,4 como salidas.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  
  digitalWrite(0, HIGH);   // Encendemos el led del pin 0
  delay(100);              // Esperamos 100 mS 
  digitalWrite(1, HIGH);   // Encendemos el led del pin 1
  delay(100);              // Esperamos 100 mS 
  digitalWrite(2, HIGH);   // Encendemos el led del pin 2
  delay(100);              // Esperamos 100 mS 
  digitalWrite(3, HIGH);   // Encendemos el led del pin 3
  delay(100);              // Esperamos 100 mS 
  digitalWrite(4, HIGH);   // Encendemos el led del pin 4
  delay(100);              // Esperamos 100 mS 

  //Apagamos todos los leds casi de manera simultanea
  digitalWrite(0, LOW);    
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);  
  delay(100);              //Esperamos 100mS para reiniciar el ciclo
}
