#define FREQ 100      //determino la frequenza fissa
float t;      
int i;
float sine_wave;

int offset = 50;
int Vpp = 100;

void setup() {
  Serial.begin(115200);
}

void loop() {
  t = float(millis()) / 1000.0;     //scandisco il tempo suddividendolo in campioni di 1000
  sine_wave = offset + 0.5 * Vpp * sin(2 * PI * FREQ * t);      //genero un seno con la relativa funzione. Il segnale sarà caratterizzato da un offset, un'ampiezza e una freq.
                                                                //la variazione viene fornita  attraverso il loop continuo di "t"
  Serial.println(sine_wave);                                    //visualizzo il seno 
  analogWrite(11, sine_wave);                                   //porto il segnale generato sul pin 11
}
