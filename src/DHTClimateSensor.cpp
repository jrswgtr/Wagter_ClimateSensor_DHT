#include <DHTClimateSensor.h>
#include <dht.h>

dht DHT;

DHTClimateSensor::DHTClimateSensor(uint8_t pin) : ClimateSensor(pin){}

void DHTClimateSensor::update()
{
    DHT.read22(pin);
}

DHTTemperatureSensor::DHTTemperatureSensor(uint8_t pin): DHTClimateSensor(pin){}

float DHTTemperatureSensor::getValue()
{
    return DHT.temperature;
}

DHTHumiditySensor::DHTHumiditySensor(uint8_t pin): DHTClimateSensor(pin){}

float DHTHumiditySensor::getValue()
{
    return DHT.humidity;
}