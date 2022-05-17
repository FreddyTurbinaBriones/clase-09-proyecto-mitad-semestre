// Este codigo es para crear un tecaldo con 8 notas y un delay que se encarga de la duracion de la nota.
// Alumnos : Freddy Briones / Tania Fuentes
// Docente : Aaron Montoya
// codigo base ocupado fue entregado por Docente



// pin de conexion del parlante
const int pinParlante = 10;

// pin de conexion del pulsador
const int pinPulsador9 = 9;
const int pinPulsador8 = 8;
const int pinPulsador7 = 7;
const int pinPulsador6 = 6;
const int pinPulsador5 = 5;
const int pinPulsador4 = 4;
const int pinPulsador3 = 3;
const int pinPulsador2 = 2;

//Potenciometro
const int pinPotenciometro = A0;
//Ponteciometro valor
int valorPotenciometro = 0;
//Potenciometro tiempo
int Duracion = 100; 

// variable para almacenar estado pulsador
int estadoPulsador9 = 0;
int estadoPulsador8 = 0;
int estadoPulsador7 = 0;
int estadoPulsador6 = 0;
int estadoPulsador5 = 0;
int estadoPulsador4 = 0;
int estadoPulsador3 = 0;
int estadoPulsador2 = 0;


// frecuencia del sonido segun nota
const int DO  = 523;
const int RE  = 587;
const int MI  = 659;
const int FA  = 698;
const int SOL = 784;
const int LA  = 880;
const int SI  = 988;
const int DO2  = 1047;

// Frecuencia usada como prueba para pines en proceso de prototipado
const int frecuencia  = 1000;



// setup() ocurre una vez, al principio
void setup() {

   Serial.begin(9600); 
  
  // configurar pin pulsador como entrada digital
  pinMode(pinPulsador9, INPUT);
  pinMode(pinPulsador8, INPUT);
  pinMode(pinPulsador7, INPUT);
  pinMode(pinPulsador6, INPUT);
  pinMode(pinPulsador5, INPUT);
  pinMode(pinPulsador4, INPUT);
  pinMode(pinPulsador3, INPUT);
  pinMode(pinPulsador2, INPUT);
  
}




// loop() ocurre después de setup(), en bucle
void loop() {





  // leer pulsador y actualizar variable
  estadoPulsador9 = digitalRead(pinPulsador9);
  estadoPulsador8 = digitalRead(pinPulsador8);
  estadoPulsador7 = digitalRead(pinPulsador7);
  estadoPulsador6 = digitalRead(pinPulsador6);
  estadoPulsador5 = digitalRead(pinPulsador5);
  estadoPulsador4 = digitalRead(pinPulsador4);
  estadoPulsador3 = digitalRead(pinPulsador3);
  estadoPulsador2 = digitalRead(pinPulsador2);


//Este codigo es para que cada nota tenga una duracion segun la posicion del potenciometro, ya que sin esta regulacion
//el arduino refrescaba cada milisegundo y reventaba el parlante

    valorPotenciometro = analogRead(pinPotenciometro);
    Duracion = map(valorPotenciometro, 1023, 0, 100, 750);
    Serial.println(valorPotenciometro);

    
  //esta parte del codigo se copia por cada nota que en total son 8 notas.
  
  // si el pulsador está presionado
if (estadoPulsador2 == HIGH) {

    // emitir sonido
    tone(pinParlante, DO);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);
    
  }
if (estadoPulsador3 == HIGH) {

    // emitir sonido
    tone(pinParlante, RE);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador4 == HIGH) {

    // emitir sonido
    tone(pinParlante, MI);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador5 == HIGH) {

    // emitir sonido
    tone(pinParlante, FA);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador6 == HIGH) {

    // emitir sonido
    tone(pinParlante, SOL);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador7 == HIGH) {

    // emitir sonido
    tone(pinParlante, LA);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador8 == HIGH) {

    // emitir sonido
    tone(pinParlante, SI);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
if (estadoPulsador9 == HIGH) {

    // emitir sonido
    tone(pinParlante, DO2);
    delay(Duracion); //Cuanto dura el sonido
  }

  // si el pulsador no está presionado
  else {

    // silenciar sonido
    noTone(pinParlante);

  }
}
