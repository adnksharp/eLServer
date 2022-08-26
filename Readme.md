# Local server with nodeMCU ESP8266

```
Iniciando...

.........

Red:            aKAP
IP:             192.168.0.98

Servidor iniciado
```

Conexión a un punto de acceso para crear un servidor local usando un nodeMCU ESP8266.

## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).
- Librerías `ESP8266WiFi` y `ESP8266WebServer` para el nodeMCU ESP8266.

## Funcionamiento
### Variables
- `server`: Apunta a un objeto de la clase `ESP8266WebServer`.

### Funciones
- `passwd()`: Contraseña del punto de acceso.
- `ssid()`: Nombre del punto de acceso.
- `HTML()`: Devuelve el código HTML para la página de inicio.

### Funcionamiento
Usando la rutina `WiFi.begin()`, se conecta al punto de acceso. una vez conectado, se inicia el servidor local con la dirección `/` y el código HTML de la página de inicio `HTML()`.

Mediante el puerto serie, se escribe el nombre del punto de acceso, la dirección IP y si el servidor se inició correctamente.
