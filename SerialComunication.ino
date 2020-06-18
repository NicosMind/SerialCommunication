/*
 Name:		SerialComunication.ino
 Created:	23/05/2020 14:53:07
 Author:	nico_
*/

//SLAVE





//receive sketch
void setup() {
    Serial2.begin(9600);
}

void loop() {
    String received = "";
    while (Serial2.available())
    {
        char received = Serial2.read();
        Serial2.println(received);
    }
}