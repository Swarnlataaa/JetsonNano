#include <Servo.h>
Servo Xservo;
Servo Yservo;

int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int XSpin = 9;
int YSpin = 10;
int buzzPin = 7;
int WVx;
int WVy;
int Xval;
int Yval;
int Sval;
int dt = 200;
void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(Xpin, INPUT);
    pinMode(Ypin, INPUT);
    pinMode(Spin, INPUT);
    pinMode(XSpin, OUTPUT);
    pinMode(YSpin, OUTPUT);
    pinMode(buzzPin, OUTPUT);

    Xservo.attach(XSpin);
    Yservo.attach(YSpin);

    digitalWrite(Spin, HIGH);
}

void loop()
{
    Xval = analogRead(Xpin);
    WVx = (180. / 1023.) * Xval;
    Yval = analogRead(Ypin);
    WVy = (180. / 1023.) * Yval;
    Sval = digitalRead(Spin);

    Xservo.write(WVx);
    Yservo.write(WVy);

    if (Sval == 0)
    {
        digitalWrite(buzzPin, HIGH);
    }
    else
    {
        digitalWrite(buzzPin, LOW);
    }

    delay(dt);
    Serial.print("X Value = ");
    Serial.print(Xval);
    Serial.print(" Y Value = ");
    Serial.print(Yval);
    Serial.print(" Switch State is ");
    Serial.println(Sval);
}
