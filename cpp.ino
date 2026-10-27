#include <DHT.h>

// Definir el pin digital donde está conectado el pin "out" del sensor
const int DHTPIN = 2;     

// Definir el tipo de sensor (en este caso DHT11)
#define DHTTYPE DHT11   

// Inicializar el objeto DHT
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Inicializar comunicación serie para ver los datos en la PC
  Serial.begin(9600);
  Serial.println("Iniciando prueba del sensor DHT11...");

  // Iniciar el sensor
  dht.begin();
}

void loop() {
  // Esperar 2 segundos entre mediciones (el DHT11 es lento y necesita un intervalo)
  delay(2000);

  // Leer la humedad relativa (%)
  float h = dht.readHumidity();
  // Leer la temperatura en grados Celsius (por defecto)
  float t = dht.readTemperature();

  // Comprobar si hubo un error en la lectura
  if (isnan(h) || isnan(t)) {
    Serial.println("¡Error al leer los datos del sensor DHT11!");
    return;
  }

  // Mostrar los resultados por el Monitor Serie
  Serial.print("Humedad: ");
  Serial.print(h);
  Serial.print("%  |  ");
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" °C");
}
