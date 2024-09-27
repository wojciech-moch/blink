/*
  Blink
  Włącza diodę LED na sekundę, potem wyłącza ją na sekundę i powtarza całość.
 
  Ten przyklad należy do domeny publicznej.
 */
 
// W większości płytek Ardiono do pinu 13 podłączona jest dioda LED.
// nadajmy jej nazwę:
int led = 13;

// Procedura setup uruchamiana jest raz, po naciśnięciu przycisku reset:
void setup() {                
  // inicjowanie cyfrowego pinu jako wyjścia.
  pinMode(led, OUTPUT);     
}

// procedura loop jesty wykonywana w nieskonczoność:
void loop() {
  digitalWrite(led, HIGH);   // włączenie diody LED (wysoki poziom napięcia)
  delay(3000);               // odczekanie sekundy
  digitalWrite(led, LOW);    // wyłączenie diody LED (niski poziom napięcia)
  delay(4000);               // odczekanie sekundy
}
