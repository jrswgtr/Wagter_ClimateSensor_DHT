#ifndef _WAGTER_CLIMATE_SENSOR_DHT_h
#define _WAGTER_CLIMATE_SENSOR_DHT_h

#include <Arduino.h>
#include <ClimateSensor.h>

class DHTClimateSensor: public ClimateSensor
{
    public:
        DHTClimateSensor(uint8_t pin);
        void update() override;
};

class DHTTemperatureSensor: public DHTClimateSensor
{
    public:
        DHTTemperatureSensor(uint8_t pin);
        float getValue() override;
};

class DHTHumiditySensor: public DHTClimateSensor
{
    public:
        DHTHumiditySensor(uint8_t pin);
        float getValue() override;
};

#endif