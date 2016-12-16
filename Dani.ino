float suhuC;
int suhuPin = A0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
suhuC = analogRead(suhuPin);
suhuC = (suhuC / 1024.0)* 5000;
suhuC = suhuC/10;
Serial.print((byte)suhuC);
delay(1000);
}
