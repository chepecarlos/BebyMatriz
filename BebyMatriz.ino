#include <EEPROM.h>

#define LEDMAT_SERIAL_DATA 8
#define LEDMAT_SHIFT_CLOCK 2
#define LEDMAT_LATCH_CLOCK 9

#define LEDMAT_FILA_0 3
#define LEDMAT_FILA_1 4
#define LEDMAT_FILA_2 5
#define LEDMAT_FILA_3 6
#define LEDMAT_FILA_4 7

const boolean alfabeto[40*5][5] = {
  { 0, 1, 1, 0 },  //A
  { 1, 0, 0, 1 },
  { 1, 1, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 1, 1, 1, 0 },  //B
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },

  { 0, 1, 1, 0 },  //C
  { 1, 0, 0, 1 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 1, 1, 0 },  //D
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },

  { 1, 1, 1, 1 },  //E
  { 1, 0, 0, 0 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },

  { 1, 1, 1, 1 },  //F
  { 1, 0, 0, 0 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },

  { 0, 1, 1, 1 },  //G
  { 1, 0, 0, 0 },
  { 1, 0, 1, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 0, 0, 1 },  //H
  { 1, 0, 0, 1 },
  { 1, 1, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 1, 1, 1 },  //I
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 1, 1, 1 },
  
  { 0, 1, 1, 1 },  //j
  { 0, 0, 0, 1 },
  { 0, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },
  
  { 1, 0, 0, 1 },  //k
  { 1, 0, 1, 0 },
  { 1, 1, 0, 0 },
  { 1, 0, 1, 0 },
  { 1, 0, 0, 1 },
  
  { 1, 0, 0, 0 },  //L
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },

  { 1, 0, 0, 0, 1 },  //M
  { 1, 1, 0, 1, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  
  { 1, 0, 0, 1 },  //N
  { 1, 1, 0, 1 },
  { 1, 0, 1, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 0, 1, 1, 0 },  //O
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },  

  { 1, 1, 1, 0 },  //P
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 0, 0, 0 },
  
  { 0, 1, 1, 0 },  //Q
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 1, 0 },
  { 0, 1, 0, 1 },  

  { 1, 1, 1, 0 },  //R
  { 1, 0, 0, 1 },
  { 1, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },

  { 0, 1, 1, 1 },  //S
  { 1, 0, 0, 0 },
  { 0, 1, 1, 0 },
  { 0, 0, 0, 1 },
  { 1, 1, 1, 0 },
  
  { 1, 1, 1 },  //T
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  
  { 1, 0, 0, 1 },  //U
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },

  { 1, 0, 0, 1 },  //V
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  { 1, 0, 1, 0 },
  { 0, 1, 0, 0 },
  
  
  { 1, 0, 0, 0, 1 },  //W
  { 1, 0, 0, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 0, 0, 0, 1 },
  
  { 1, 0, 0, 1 },  //x
  { 1, 0, 0, 1 },
  { 0, 1, 1, 0 },
  { 1, 0, 0, 1 },
  { 1, 0, 0, 1 },
  
  { 1, 0, 1 },  //Y
  { 1, 0, 1 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  { 0, 1, 0 },
  
  { 1, 1, 1, 1 },  //Z
  { 0, 0, 0, 1 },
  { 0, 1, 1, 0 },
  { 1, 0, 0, 0 },
  { 1, 1, 1, 1 },
  
  { 1, 1, 1 },  //0
  { 1, 0, 1 },
  { 1, 0, 1 },
  { 1, 0, 1 },
  { 1, 1, 1 },
  
  { 1 },  //1
  { 1 },
  { 1 },
  { 1 },
  { 1 },
  
  { 1, 1, 1 },  //2
  { 0, 0, 1 },
  { 1, 1, 1 },
  { 1, 0, 0 },
  { 1, 1, 1 },

  { 1, 1, 1 },  //3
  { 0, 0, 1 },
  { 1, 1, 1 },
  { 0, 0, 1 },
  { 1, 1, 1 },
  
  { 1, 0, 1 },  //4
  { 1, 0, 1 },
  { 1, 1, 1 },
  { 0, 0, 1 },
  { 0, 0, 1 },
  
  { 1, 1, 1 },  //5
  { 1, 0, 0 },
  { 1, 1, 1 },
  { 0, 0, 1 },
  { 1, 1, 1 },  
  
  { 1, 0, 0 },  //6
  { 1, 0, 0 },
  { 1, 1, 1 },
  { 1, 0, 1 },
  { 1, 1, 1 },
  
  { 1, 1, 1 },  //7
  { 0, 0, 1 },
  { 0, 0, 1 },
  { 0, 0, 1 },
  { 0, 0, 1 },

  { 1, 1, 1 },  //8
  { 1, 0, 1 },
  { 1, 1, 1 },
  { 1, 0, 1 },
  { 1, 1, 1 },  
  
  { 1, 1, 1 },  //9
  { 1, 0, 1 },
  { 1, 1, 1 },
  { 0, 0, 1 },
  { 0, 0, 1 },
  
  { 0 },  //" "
  { 0 },
  { 0 },
  { 0 },
  { 0 },
};


const int anchoCaracter[40] = {
  4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 3, 4, 4, 5, 4, 3, 4, 3, 1, 3, 3, 3, 3, 3, 3, 3, 3, 1
//A, B, C, D, E, F, G, H, I, J, K, L, M, N, 0, P, Q, R, S, T, U, V, W, X, Y, Z, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, ""
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36
};
//ABCDEFGHIJKLMNOPQRSTUVWXYZ
char texto[256] = "Error\n";
int LongitudTexto = 1;
boolean pantalla[5][20];
static byte Lila = 4;
static int pos = -20;
static byte PLila = 1;
static byte Estados = 4;
float Frecuencia = 1;
static int  Retraso = 2;


void setup () {
  pinMode(LEDMAT_SERIAL_DATA, OUTPUT);
  pinMode(LEDMAT_SHIFT_CLOCK, OUTPUT);
  pinMode(LEDMAT_LATCH_CLOCK, OUTPUT);

  pinMode(LEDMAT_FILA_0, OUTPUT);
  pinMode(LEDMAT_FILA_1, OUTPUT);
  pinMode(LEDMAT_FILA_2, OUTPUT);
  pinMode(LEDMAT_FILA_3, OUTPUT);
  pinMode(LEDMAT_FILA_4, OUTPUT);

  Serial.begin(9600);
  
  /*
char letra;
  for( letra = 'A'; letra <= 'a'; letra++){
  Serial.print(letra);
  Serial.println(letra, DEC);
  }
  */ 
  //EEPROM.write(LongitudTexto, 1);
  int Longitud = EEPROM.read(LongitudTexto);
  Serial.print("Longitud: ");
  Serial.println(Longitud);
  if(Longitud <= 0 || Longitud >= 256){
       texto[0] = 'A';
       texto[1] = '\n';
       EEPROM.write(LongitudTexto, 1);
       EEPROM.write(LongitudTexto+1 ,'A'); 
       
  }
  else{
    int i;
    for(i = 0; i< Longitud ;i++){
     texto[i] = EEPROM.read(LongitudTexto + i + 1);
     Serial.print(texto[i]);
    }
    texto[i+1] = '\n';
    Serial.println();
  }  
}

void loop () {
  
  switch(Lila){
   case 1:
     SuperTexto();
   break;
   case 2:
    DiscoDisco();
   break;
   case 3:
    SuperModulo();
   break;
   case 4:
    Barrido();
   break;
   default:  
     Lila = 1;
   break;
  }
  
   if(Serial.available() >0 ){
     nuevoTexto();
     pos = -20;
     Frecuencia = 1;
   }
  
}

void SuperTexto(){
  byte i;
   static int pos = -20;
  
   for (i=0; i<20; i++) {
     dibujarTexto(pos);
     actualizarMatriz();
   }
  
  pos++;
  if (pos >= longitudTexto()) {
    pos = -20;
    do{
     Lila = random(2, Estados+1);
    }
    while( PLila == Lila);
      PLila = Lila;  
  }
}

void DiscoDisco(){
   byte i, j, k;
   double time = millis();
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
      if( (i+j) % 2 == 0)
       pantalla[i][j] = 0;
      else
       pantalla[i][j] = 1;
    }
  }
  i = 0;
  do{
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
    if(pantalla[i][j] > 0)
      pantalla[i][j] = 0;
     else
      pantalla[i][j] = 1; 
    }
  }
   for(byte p = 0;p<10;p++)
      actualizarMatriz();
  k++;
  }while( millis() - time < 1500);
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
       pantalla[i][j] = 0;
    }
  }
  Lila = 1;
}

void SuperModulo(){
  float time = millis();
  
   byte i, j, k;
   k = 0;
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
      if( (i+j) % 2 > 0)
       pantalla[i][j] = 0;
      else
       pantalla[i][j] = 1;
    }
  }
  i = 0;
  do{
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
    if(pantalla[i][j] > 0)
      pantalla[i][j] = 0;
     else
      pantalla[i][j] = 1; 
    }
  }
  for(i = 0;i<25;i++)
  actualizarMatriz();
  i++;
  k++;
  
  }while( millis() -  time < 1000);
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
       pantalla[i][j] = 0;
    }
  }
  Lila = 1;
}

void Barrido(){
  Frecuencia = 0;
//  float t0 = millis();
//  float t1 = t0;
  int k,i,j;
  i = 0;
  j = 0;
  k = 0;
  int v = 1;
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
       pantalla[i][j] = 0;
    }
  }
  v = 1;
  pantalla[0][0] = 1;
  do{
  i = k;
  j = 0;
  do{
    if( i < 20 and i >= 0){
    if( v > 0)
      pantalla[j][i] = 1;
     else
      pantalla[j][i] = 0;
    }
    i--;
    j++;
  }while(j<5 );
  k = k + v;
  for(byte p = 0;p<15;p++)
      actualizarMatriz();
  
  if( k > 23)
  v = -v;
  }while(k != -1);
  
  for(i = 0;i<5;i++){
    for(j = 0;j<20;j++){
       pantalla[i][j] = 0;
    }
  }
    Frecuencia = 1;
    Lila = 1;
}


void nuevoTexto(){
 int posicion = 0;
 Serial.println("Nuevo");
 Serial.print("   Texto: ");
 while( Serial.available() > 0 ){
   texto[posicion] = Serial.read();
   EEPROM.write(LongitudTexto+posicion+1, texto[posicion]);
   Serial.print(texto[posicion]);
   posicion++;
   if(Serial.available() == 0){ 
     texto[posicion] = '\n';
     Serial.println();
     Serial.print("   Longitud: ");
     Serial.println(posicion);
     }
   }
   EEPROM.write(LongitudTexto,posicion); 
   for(int i = 0;i<5;i++)
      for(int j = 0;j<20;j++)
       pantalla[i][j] = 0;
}

int posicionTexto(char caracter){
 int l = 0;
 if(caracter >= 'A' && caracter <= 'Z')
 l = caracter - 'A';
 else if(caracter >= 'a' && caracter <= 'z')
 l = caracter - 'a';
 else if(caracter >= '0' && caracter <= '9')
 l = caracter - '0' + 26;
 else if( caracter == ' ')
 l = 26;
 return l;
}

int longitudTexto() {
  int l = 0;
  int n = 0;

  while (texto[n] != '\n') {
    l += anchoCaracter[posicionTexto(texto[n])] + 1;
    n++;
  }

  return l;
}

void dibujarTexto(int offset) {
  int posTexto = 0;
  int posPantalla = 0;
  int nPixel = 0;
  char caracter;

  //En caso que el offset sea negativo, comienza a dibujar texto adelante (a la derecha),
  //mientras que si es positivo entonces el dibujado comenzaria desde atras
  //(a la izquierda)
  posPantalla = -offset;

  //Dibujara hasta alcanzar el final del espacio visible de la pantalla
  while (posPantalla < 20) {
    //Verifica si se dara inicio a un nuevo caracter
    if (nPixel == 0) {
      //Para cada nuevo caracter se obtiene el codigo ascii
      caracter = texto[posTexto];
      //Se determina si es valido
      if (caracter == '\n' || ( caracter < '0' | caracter > '9' && caracter < 'A' | caracter > 'Z' && caracter < 'a' | caracter > 'z') && caracter != ' ') break;
      //Si es valido, entonces ubica el offset absoluto en la tabla del alfabeto
      //caracter -= 'A';
      caracter = posicionTexto(caracter);
    }

    //En caso que se determine un offset positivo (posicion de pantalla negativa) se
    //omite el dibujado, de manera que solo se dibuja en posiciones visibles
    if (posPantalla >= 0) {
      pantalla[0][posPantalla] = alfabeto[caracter*5 + 0][nPixel];
      pantalla[1][posPantalla] = alfabeto[caracter*5 + 1][nPixel];
      pantalla[2][posPantalla] = alfabeto[caracter*5 + 2][nPixel];
      pantalla[3][posPantalla] = alfabeto[caracter*5 + 3][nPixel];
      pantalla[4][posPantalla] = alfabeto[caracter*5 + 4][nPixel];
    }
    posPantalla++;  //Avanza a la siguiente columna

    nPixel++;  //Incrementa la posicion dentro del caracter actual

    //Verifica si se terminaron los pixeles del caracter
    if (nPixel >= anchoCaracter[caracter]) {
      //En caso de terminarse, apunta al siguiente caracter de la cadena
      posTexto++;
      nPixel = 0;     //Inicia con el primer pixel del nuevo caracter

      //En caso que se este en el espacio visile, se dibuja un espacio despues del caracter
      if (posPantalla >= 0) {
        pantalla[0][posPantalla] = 0;
        pantalla[1][posPantalla] = 0;
        pantalla[2][posPantalla] = 0;
        pantalla[3][posPantalla] = 0;
        pantalla[4][posPantalla] = 0;
      }
      posPantalla++;  //Avanza a la siguiente columna
    }
  }
}

void actualizarMatriz() {
  
  for (byte i=0; i<5; i++) {
    enviarFila(i);
    delay(Frecuencia);
  }
  
}

void enviarFila(byte nFila) {
  byte i;

  digitalWrite(LEDMAT_SHIFT_CLOCK, HIGH);
  digitalWrite(LEDMAT_LATCH_CLOCK, HIGH);

  for (i=0; i<20; i++) {
    digitalWrite(LEDMAT_SERIAL_DATA, pantalla[nFila][i]);
    digitalWrite(LEDMAT_SHIFT_CLOCK, LOW);
    digitalWrite(LEDMAT_SHIFT_CLOCK, HIGH);
  }


  digitalWrite(LEDMAT_FILA_0, LOW);
  digitalWrite(LEDMAT_FILA_1, LOW);
  digitalWrite(LEDMAT_FILA_2, LOW);
  digitalWrite(LEDMAT_FILA_3, LOW);
  digitalWrite(LEDMAT_FILA_4, LOW);

  digitalWrite(LEDMAT_LATCH_CLOCK, LOW);
  digitalWrite(LEDMAT_LATCH_CLOCK, HIGH);  
  
  switch (nFila) {
  case 0:
    digitalWrite(LEDMAT_FILA_0, HIGH);
   // digitalWrite(LEDMAT_FILA_0, LOW);
    break;
  case 1:
    digitalWrite(LEDMAT_FILA_1, HIGH);
   // digitalWrite(LEDMAT_FILA_1, LOW);
    break;
  case 2:
    digitalWrite(LEDMAT_FILA_2, HIGH);
   // digitalWrite(LEDMAT_FILA_2, LOW);
    break;
  case 3:
    digitalWrite(LEDMAT_FILA_3, HIGH);
   // digitalWrite(LEDMAT_FILA_3, LOW);
    break;
  case 4:
    digitalWrite(LEDMAT_FILA_4, HIGH);
   // digitalWrite(LEDMAT_FILA_4, LOW);
    break;
  }
}

