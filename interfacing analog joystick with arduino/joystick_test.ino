int VRx = A0;
int VRy = A1;
int SW = 9;

int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;

void setup() {
  Serial.begin(9600); 
  
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); 
  
}

void loop() {
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, 13,193 );
  mapY = map(yPosition, 0, 1023, 13, 193);
  
  Serial.print("X: ");
  Serial.print(mapX-105);
  Serial.print(" | Y: ");
  Serial.println(mapY-104);
  
 

  delay(1000);
  
}
