#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "info.hpp"

ESP8266WebServer server(80);

void Hroot()
{
    server.send(200, "text/html", HTML());
}

void setup()
{
    Serial.begin(115200);
    Serial.println("\n\n\nIniciando...\n");

    WiFi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(2000);
    }

    Serial.print("\n\nRed:\t\t");
    Serial.println(ssid());
    Serial.print("IP:\t\t");
    Serial.println(WiFi.localIP());

    server.on("/", Hroot);
    server.begin();

    Serial.println("\nServidor iniciado");
}

void loop()
{
    server.handleClient();
}