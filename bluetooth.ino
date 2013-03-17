//referred to http://blog.miguelgrinberg.com/post/building-an-arduino-robot-part-ii-programming-the-arduino

//communicate between Android device
//and Bluetooth module on Arduino
//used Arduino Uno
//Virtuabotix Bluetooth to Serial Slave(BT2S-Slave)
   // VCC to 5V
   //Ground to GND
   //RX to TX
   //TX to RX
//install BlueTerm on Android device
//pair device with Bluetooth

void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
    if (Serial.available() > 0) {
        char ch = Serial.read();
        Serial.print("Received: ");
        Serial.println(ch);
        //flashes once when c is pressed on Phone
        if (ch == 'c') {
            digitalWrite(13, HIGH);
            delay(1000);
            digitalWrite(13, LOW);
            delay(1000);
        }
        else {
            digitalWrite(13, LOW);
        }
    }
}+

    
    
