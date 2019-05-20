#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int bott1 = 6;
int bott2 = 7;
int bott3 = 8;
int bott4 = 10;
int bott5 = 9;
int stato;
int n;
int vite = 3;
bool parti = false;
int tempo = 10000;
int t2;
byte Pigreco[8] = {
  B00000,
  B11111,
  B01010,
  B01010,
  B01010,
  B01010,
  B10011,
  B00000
};

byte Cuore[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};
void setup()
{
  lcd.createChar(0, Cuore);
  lcd.createChar(1, Pigreco);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Click a botton");
  lcd.setCursor(0, 1);
  lcd.print("to search ");
  lcd.setCursor(11, 1);
  lcd.write(byte(1));
}

void loop()
{
  if (digitalRead(bott1) == HIGH or digitalRead(bott2) == HIGH or digitalRead(bott3) == HIGH or digitalRead(bott4 ) == HIGH or digitalRead(bott5) == HIGH or parti == true) {
    lcd.clear();
    delay(10);
    lcd.setCursor(0, 0);
    lcd.write (byte(0));
    lcd.setCursor(1, 0);
    lcd.print (vite);
    sceglipossibility();
  }
}
void sceglipossibility()
{
  if (vite > 0  )
  {
    if (tempo - 200 <= 250)
    {
      tempo = 250;
    }
    else
    {
      tempo = tempo - 200;
    }
    n = random(1, 15);
    delay(100);

    if (n == 1) {
      possibility1();
    }
    if (n == 2) {
      possibility2();
    }
    if (n == 3) {
      possibility3();
    }
    if (n == 4) {
      possibility4();
    }
    if (n == 5) {
      possibility5();
    }
    if (n == 6) {
      possibility6();
    }
    if (n == 7) {
      possibility7();
    }
    if (n == 8) {
      possibility8();
    }
    if (n == 9) {
      possibility9();
    }
    if (n == 10) {
      possibility10();
    }
    if (n == 11) {
      possibility11();
    }
    if (n == 12) {
      possibility12();
    }
    if (n == 13) {
      possibility13();
    }
    if (n == 14) {
      possibility14();
    }
    if (n == 15) {
      possibility15();
    }
    parti = true;
    delay(1000);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("click to play");
    lcd.setCursor(0, 1);
    lcd.print("again");
    delay(100);
    while (digitalRead(bott1) == HIGH or digitalRead(bott2) == HIGH or digitalRead(bott3) == HIGH or digitalRead(bott4) == HIGH or digitalRead(bott5) == HIGH ) {
      if (digitalRead(bott1) == HIGH or digitalRead(bott2) == HIGH or digitalRead(bott3) == HIGH or digitalRead(bott4) == HIGH or digitalRead(bott5) == HIGH) {
        vite = 3;
        delay (100);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.write (byte(0));
        lcd.setCursor(1, 0);
        lcd.print (vite);
        delay(1000);
        tempo = 10000;
        sceglipossibility();
      }
    }
  }
}
void possibility1()
{
  t2 = tempo;
  delay(1000);
  stato = LOW;
  lcd.setCursor(0, 1);
  lcd.write(byte(1));
  stato = digitalRead(bott1);
  while (stato == LOW)
  {
    stato = digitalRead(bott1);
    delay(1);
    if (stato == HIGH)
    {
      lcd.clear();
      return;
    }
    if (t2 < 0)
    {
      vite--;
      delay(1);
      lcd.clear();
      return;
    }
    t2--;
  }
}
void possibility2() {
  stato = LOW;
  lcd.setCursor(3, 1);
  lcd.write(byte(1));
  stato = digitalRead(bott2);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott2);
    delay(1);
    if (stato == HIGH)
    { lcd.clear();

      return;
    }
    if (t2 <= 0)
    { vite--;
      delay(1);

      lcd.clear();
      return;
    }


    t2 = t2 - 1;
  }

}
void possibility3() {

  stato = LOW;
  lcd.setCursor(8, 1);
  lcd.write(byte(1));
  stato = digitalRead(bott3);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott3);
    delay(1);
    if (stato == HIGH)
    { lcd.clear();

      return;
    }
    if (t2 <= 0)
    { vite--;
      delay(1);
      lcd.clear();
      return;
    }


    t2 = t2 - 1;
  }
}
void possibility4() {

  stato = LOW;
  lcd.setCursor(11, 1);
  lcd.write(byte(1));
  stato = digitalRead(bott4);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott4);
    delay(1);


    if (stato == HIGH)
    { lcd.clear();

      return;
    }
    if (t2 <= 0)
    { vite--;
      delay(1);
      lcd.clear();
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility5() {

  stato = LOW;
  lcd.setCursor(15, 1);
  lcd.write(byte(1));
  stato = digitalRead(bott5);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott5);
    delay(1);
    if (stato == HIGH)
    { lcd.clear();

      return;
    }
    if (t2 <= 0)
    { vite--;
      delay(1);
      lcd.clear();
      return;
    }


    t2 = t2 - 1;
  }
}




void possibility6() {

  stato = LOW;
  lcd.setCursor(0, 1);
  lcd.write(byte(8));
  stato = digitalRead(bott1);
  t2 = tempo;
  while (stato == LOW)
  {

    stato = digitalRead(bott1);
    delay(1);
    if (stato == HIGH)
    { lcd.clear();
      vite++;
      delay(1);
      return;
    }
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }


    t2 = t2 - 1;
  }
}
void possibility7() {

  stato = LOW;
  lcd.setCursor(3, 1);
  lcd.write(byte(8));
  stato = digitalRead(bott2);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott2);
    delay(1);
    if (stato == HIGH)
    { lcd.clear();
      vite++;
      delay(1);
      return;
    }
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }


    t2 = t2 - 1;
  }
}
void possibility8() {

  stato = LOW;
  lcd.setCursor(8, 1);
  lcd.write(byte(8));
  stato = digitalRead(bott3);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott3);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite++;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility9() {

  stato = LOW;
  lcd.setCursor(11, 1);
  lcd.write(byte(8));
  stato = digitalRead(bott4);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott4);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite++;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility10() {

  stato = LOW;
  lcd.setCursor(15, 1);
  lcd.write(byte(0));
  stato = digitalRead(bott5);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott5);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite++;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}



void possibility11() {

  stato = LOW;
  lcd.setCursor(0, 1);
  lcd.print("*");
  stato = digitalRead(bott1);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott1);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite--;;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility12() {
  stato = LOW;
  lcd.setCursor(3, 1);
  lcd.print(" *");
  stato = digitalRead(bott2);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott2);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite--;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility13() {

  stato = LOW;
  lcd.setCursor(8, 1);
  lcd.print("*");
  stato = digitalRead(bott3);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott3);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite--;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility14() {

  stato = LOW;
  lcd.setCursor(11, 1);
  lcd.print("*");
  stato = digitalRead(bott4);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott4);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }

    if (stato == HIGH)
    { lcd.clear();
      vite--;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
void possibility15() {

  stato = LOW;
  lcd.setCursor(15, 1);
  lcd.print("*");
  stato = digitalRead(bott5);
  t2 = tempo;
  while (stato == LOW)
  {
    stato = digitalRead(bott5);
    delay(1);
    if (t2 <= 0)
    {
      lcd.clear();
      return;
    }
    if (stato == HIGH)
    { lcd.clear();
      vite--;
      delay(1);
      return;
    }
    t2 = t2 - 1;
  }
}
