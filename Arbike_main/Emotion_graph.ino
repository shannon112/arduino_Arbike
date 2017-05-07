const uint16_t slow[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10000000, B00000000, B00000001,
  B00111100, B00000000, B00111100,
  B00111100, B00000000, B00111100,
  B00000000, B00000000, B00000000,
  B00000000, B01000100, B00000000,
  B00000000, B10010010, B00000000,
  B01111000, B10010010, B00011110,
  B00000000, B01101100, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};

const uint16_t normal[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10001100, B00000000, B00110001,
  B00010010, B00000000, B01001000,
  B00010010, B00000000, B01001000,
  B00001100, B00000000, B00110000,
  B00000000, B01000100, B00000000,
  B00000000, B10010010, B00000000,
  B01111000, B10010010, B00011110,
  B00000000, B01101100, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};

const uint16_t fast[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00001000, B00000000, B00010000,
  B00000100, B00000000, B00100000,
  B00000010, B00000000, B01000000,
  B00000001, B00000000, B10000000,
  B00001100, B00000000, B00110000,
  B00010010, B00000000, B01001000,
  B00010010, B00000000, B01001000,
  B00001100, B00000000, B00110000,
  B00000000, B00000000, B00000000,
  B00000000, B10010010, B00000000,
  B01111000, B10010010, B00011110,
  B00000000, B01101100, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};

const uint16_t sfast[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00001000, B00000000, B00010000,
  B00000100, B00000000, B00100000,
  B00000010, B00000000, B01000000,
  B00000001, B00000000, B10000000,
  B00000000, B00000000, B00000000,
  B00111100, B00000000, B00111100,
  B00111100, B00000000, B00111100,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B10010010, B00000000,
  B01111000, B10010010, B00011110,
  B00000000, B01101100, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};

void slowface() { //normal face blink
  FaceType = 0;
  readbitmap(slow);
  matrix.writeScreen();
}
void normalface() {
  FaceType = 1;
  readbitmap(normal);
  matrix.writeScreen();
}
void fastface() {
  FaceType = 2;
  readbitmap(fast);
  matrix.writeScreen();
}
void sfastface() { //fast face blink
  FaceType = 3;
  readbitmap(sfast);
  matrix.writeScreen();
}

void brokenface() {
  FaceType = 11;
}
void leftturnface() {
  FaceType = 18;
}
void rightturnface() {
  FaceType = 81;
}

void noface() {
  FaceType = 99;
}

void SPslowface() { //normal face blink for speed
  FaceType = 20;
}
void SPnormalface() {
  FaceType = 21;
}
void SPfastface() {
  FaceType = 22;
}
void SPsfastface() { //fast face blink for speed
  FaceType = 23;
}
void ADface() {
  FaceType = 87;
}
void g8face() {
  FaceType = 78;
}
void boringface() {
  FaceType = 88;
}
