int x = 0;
int y = 0;
int z = 0;
void setup()
{
    // put your setup code here, to run once:
    Serial.begin(115200);
}

void loop()
{
    // put your main code here, to run repeatedly:
    x = x + 1;
    y = y + 2;
    z = z + 4;

    Serial.print(x);
    Serial.print(",");
    Serial.print(y);
    Serial.print(",");
    Serial.println(z);
    delay(100);
}

/*import time import serial arduinoData = serial.Serial('com5', 115200)
                                                                  time.sleep(1) while (True) : while (arduinoData.inWaiting() == 0) :pass dataPacket = arduinoData.readline() #reply dataPacket = str(dataPacket, 'utf-8')
                                                                                                                                                                                                          print(dataPacket)
                                                                                                                                                                                                                    splitPacket = dataPacket.split(",")
                                                                                                                                                                                                                        print(splitPacket)
                                                                                                                                                                                                                            X = float(splitPacket[0])
                                                                                                                                                                                                                                Y = float(splitPacket[1])
                                                                                                                                                                                                                                    Z = float(splitPacket[2])
                                                                                                                                                                                                                                        print("X=", X, " Y=", Y, " Z=", Z) python script*/