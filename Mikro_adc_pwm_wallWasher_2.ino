#define kirmizi_pot_girisi A0
#define yesil_pot_girisi   A2
#define mavi_pot_girisi    A5

#define kirmizi_PWM_pini 3
#define yesil_PWM_pini   5
#define mavi_PWM_pini    6

int kirmizi_renk_degeri= 0;
int yesil_renk_degeri= 0;
int mavi_renk_degeri= 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  kirmizi_renk_degeri = ( analogRead(kirmizi_pot_girisi) / 4 ) ;
  analogWrite(kirmizi_PWM_pini, kirmizi_renk_degeri); 
  delay(5);
  
  yesil_renk_degeri = ( analogRead(yesil_pot_girisi) / 4 ) ;
  analogWrite(yesil_PWM_pini, yesil_renk_degeri); 
  delay(5);

  mavi_renk_degeri = ( analogRead(mavi_pot_girisi) / 4 ) ;
  analogWrite(mavi_PWM_pini, mavi_renk_degeri);   
  delay(5);

  Serial.print(kirmizi_renk_degeri);
  Serial.print("         ");
  Serial.print(yesil_renk_degeri);
  Serial.print("         ");
  Serial.println(mavi_renk_degeri);
  delay(10);

  
}
