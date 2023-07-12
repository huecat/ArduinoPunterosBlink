//Código escrito por para HUECAT ESPAÑA
//Ejemplo de intercambiar dos valores con punteros.


void setup() {
  Serial.begin (115200);
  pinMode(LED_BUILTIN, OUTPUT);

  int a = 4;
  int b = 7;
  Serial.println(a);
  Serial.println(b);


  intercambia(&a, &b);
  Serial.println("------------");
  Serial.println(a);
  Serial.println(b);

}
void intercambia(int *x, int *y) {
  int z = *x;
  *x = *y;
  *y = z;
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
