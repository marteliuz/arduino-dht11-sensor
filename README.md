Arduino DHT11 Sensor Test
Proyecto básico y de rápida implementación para la medición de temperatura y humedad relativa utilizando un sensor DHT11 y un controlador Arduino (compatible con placas Uno, Nano, Mega, etc.).

📋 Componentes Utilizados
￼ 1x Placa Arduino (Uno / Nano / Mega)
￼ 1x Módulo sensor de temperatura y humedad DHT11 (con PCB de 3 pines)
￼ 3x Cables Jumper Dupont (Macho-Hembra)

🔌 Esquema de Conexiones
Conecta los pines del módulo DHT11 a tu placa Arduino siguiendo esta tabla:
Pin del Módulo DHT11
Pin de Arduino
Descripción
+ (VCC)
5V
Alimentación (3.3V - 5V)
out (DATA)
Pin Digital 2
Pin de datos
- (GND)
GND
Tierra / Referencia

⚙️ Requisitos y Librerías
Para ejecutar este proyecto necesitas tener instalado el Arduino IDE y la librería oficial de Adafruit:
1. Abre el Arduino IDE.
2. Ve a Herramientas > Administrar bibliotecas... (o ⁠Ctrl + Shift + I⁠).
3. En el buscador escribe ⁠DHT sensor library⁠ (de Adafruit).
4. Haz clic en Instalar (acepta la instalación de dependencias requeridas como Adafruit Unified Sensor).
