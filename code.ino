int r1 = 13;
int y1 = 12;
int g1 = 11;
int r2 = 10;
int y2 = 9;
int g2 = 8;
int r3 = 7;
int y3 = 6;
int g3 = 5;
int r4 = 4;
int y4 = 3;
int g4 = 2;

void setup()
{
  for(int i = 2; i<=13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop()
{ 
  direction(r1, y1, g1, r2, y2, g2, r3, y3, g3, r4, y4, g4);
  direction(r2, y2, g2, r3, y3, g3, r4, y4, g4, r1, y1, g1);
  direction(r3, y3, g3, r4, y4, g4, r1, y1, g1, r2, y2, g2);
  direction(r4, y4, g4, r1, y1, g1, r2, y2, g2, r3, y3, g3);
}

void direction(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(h, LOW);
  digitalWrite(i, LOW);
  digitalWrite(j, HIGH);
  digitalWrite(k, LOW);
  digitalWrite(l, LOW);
  delay(5000);
  digitalWrite(c, LOW);
  digitalWrite(d,LOW);
  digitalWrite(b, HIGH);
  digitalWrite(e,HIGH);
  delay(3000);
}
