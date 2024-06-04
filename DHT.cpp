#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE 11
DHT dht(DHTPIN , DHTTYPE);
void setup()
{
    Serial.begin(9600);
    DHT.begin();
}
void loop()
{
    int t = dht.readTemperature;
    int h = dht.readHumidity;
    delay(1000);
    Serial.print("Temperature");
    Serial.println(t);
    Serial.print("Humidity");
    Serial.println(h);
}