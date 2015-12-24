int bargraph = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(bargraph, OUTPUT);
  Serial.setTimeout(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  String s = Serial.readString();
  if (s.length() > 0) {
    long v = s.toInt();
    analogWrite(bargraph, v);
  }
}
