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

const uint16_t fastBlink[] PROGMEM = {
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

const uint16_t leftturn[] PROGMEM = {
  B00000000, B11111100,  B00000000,
  B00000001, B11111000,  B00000000,
  B00000011, B11110000,  B00111111,
  B00000111, B11100000,  B01111110,
  B00001111, B11000000,  B11111100,
  B00011111, B10000001,  B11111000,
  B00111111, B00000011,  B11110000,
  B01111110, B00000111,  B11100000,
  B01111110, B00000111,  B11100000,
  B00111111,  B00000011,  B11110000,
  B00011111,  B10000001,  B11111000,
  B00001111,  B11000000,  B11111100,
  B00000111,  B11100000,  B01111110,
  B00000011,  B11110000,  B00111111,
  B00000001,  B11111000,  B00000000,
  B00000000,  B11111100,  B00000000,
};

const uint16_t rightturn[] PROGMEM = {
  B00000000,  B00111111,  B00000000,
  B00000000,  B00011111,  B10000000,
  B11111100,  B00001111,  B11000000,
  B01111110,  B00000111,  B11100000,
  B00111111,  B00000011,  B11110000,
  B00011111,  B10000001,  B11111000,
  B00001111,  B11000000,  B11111100,
  B00000111,  B11100000,  B01111110,
  B00000111,  B11100000,  B01111110,
  B00001111,  B11000000,  B11111100,
  B00011111,  B10000001,  B11111000,
  B00111111,  B00000011,  B11110000,
  B01111110,  B00000111,  B11100000,
  B11111100,  B00001111,  B11000000,
  B00000000,  B00011111,  B10000000,
  B00000000,  B00111111,  B00000000,
};

const uint16_t broken[] PROGMEM = {
  B00000000,  B00000000,  B00000000,
  B00000000,  B00010000,  B00000000,
  B00000000,  B00101000,  B00000000,
  B00000000,  B01000100,  B00000000,
  B00000000,  B10010010,  B00000000,
  B00000000,  B10011001,  B00000000,
  B00000001,  B00100100,  B10000000,
  B00000010,  B01000010,  B01000000,
  B00000100,  B10000001,  B00100000,
  B00001001,  B10000001,  B10010000,
  B00001001,  B00000000,  B10010000,
  B00010011,  B00000000,  B11001000,
  B00100111,  B11111111,  B11100100,
  B00100000,  B00000000,  B00000100,
  B01111111,  B11111111,  B11111110,
  B00000000,  B00000000,  B00000000,
};
const uint16_t no[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t SPslow[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10000000, B00000000, B00000001,
  B00111100, B00000000, B00111100,
  B00111100, B00000000, B00111100,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B11111111, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B10000001, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B11111111, B00000000,
  B00000000, B00000000, B00000000,
};

const uint16_t SPnormal[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10001100, B00000000, B00110001,
  B00010010, B00000000, B01001000,
  B00010010, B00000000, B01001000,
  B00001100, B00000000, B00110000,
  B00000000, B00000000, B00000000,
  B00000000, B11111111, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B10000001, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B11111111, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t SPfast[] PROGMEM = {
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
  B00000000, B11111111, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B10000001, B00000000,
  B01111000, B10000001, B00011110,
  B00000000, B11111111, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t AD[] PROGMEM = {
  B11101110, B00000000, B00100000,
  B10101010, B00010000, B00010000,
  B11101110, B11111110, B11111111,
  B00000000, B00010000, B00000010,
  B11111110, B11111110, B00000100,
  B10010010, B10010010, B00001000,
  B11111110, B11111110, B11110000,
  B10010010, B10010010, B00011111,
  B11111110, B11111110, B00000000,
  B00010000, B00010000, B00000000,
  B01111100, B11111110, B10010110,
  B00010000, B00010000, B10101001,
  B00000000, B00000000, B11101001,
  B01010001, B11011100, B01001111,
  B01110001, B01010100, B01001001,
  B00010101, B11000100, B01001001,
};
const uint16_t angry[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B01000000, B00010000,
  B00000000, B00100000, B00100000,
  B00000000, B00010000, B01000000,
  B00000000, B00001000, B10000000,
  B00000000, B00000000, B00000000,
  B01010001, B11100000, B00111100,
  B11111001, B11100000, B00111100,
  B01010000, B00000000, B00000000,
  B01010000, B00000111, B10000000,
  B11111100, B00000100, B10000000,
  B00101000, B00000100, B10000000,
  B00000000, B00001000, B10000000,
  B00000000, B00111111, B11000000,
  B00000000, B00010000, B10000000,
  B00000000, B00000000, B00000000,
};
const uint16_t veryangry[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B01000000, B00010000,
  B00000000, B00100000, B00100000,
  B00000000, B00010000, B01000000,
  B00000000, B00001000, B10000000,
  B00000000, B11000000, B00011000,
  B01010001, B00100000, B00100100,
  B11111001, B00100000, B00100100,
  B01010000, B11000000, B00011000,
  B01010000, B00000111, B10000000,
  B11111100, B00000100, B10000000,
  B00101000, B00000100, B10000000,
  B00000000, B00001000, B10000000,
  B00000000, B00111111, B11000000,
  B00000000, B00010000, B10000000,
  B00000000, B00000000, B00000000,
};
const uint16_t QQ[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B10000000, B00001000,
  B10000001, B00000000, B00000100,
  B10000010, B00000000, B00000010,
  B10100100, B01100000, B00110001,
  B10100000, B10010000, B01001000,
  B10101000, B10010000, B01001000,
  B10101000, B01100000, B00110000,
  B10101000, B00000111, B10000000,
  B10101000, B00000100, B10000000,
  B10101000, B00000100, B10000000,
  B10101000, B00001000, B10000000,
  B10000000, B00011111, B11000000,
  B00000000, B00010000, B10000000,
  B00000000, B00000000, B00000000,
};
const uint16_t Nonono[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01001100, B00000000, B00110010,
  B00000011, B00000000, B11000000,
  B00000000, B10000001, B10000000,
  B00000011, B00000000, B11000000,
  B00011100, B00000000, B00111000,
  B00000000, B00111100, B00000000,
  B00000000, B00100100, B00000000,
  B01111000, B00100100, B00011110,
  B00000000, B01000100, B00000000,
  B01111000, B11111110, B00011110,
  B00000000, B10000100, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t boring[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10001100, B00000000, B00110001,
  B00010010, B00000000, B01001000,
  B00010010, B00000000, B01001000,
  B00001100, B00000000, B00110000,
  B00000000, B00111100, B00000000,
  B00000000, B00100100, B00000000,
  B01111000, B00100100, B00011110,
  B00000000, B01000100, B00000000,
  B01111000, B11111110, B00011110,
  B00000000, B10000100, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t SPslowBlink[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10000000, B00000000, B00000001,
  B00111100, B00000000, B00111100,
  B00111100, B00000000, B00111100,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B11111111, B00000000,
  B01111000, B01111110, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t SPnormalBlink[] PROGMEM = {
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B00010000, B00000000, B00001000,
  B00100000, B00000000, B00000100,
  B01000000, B00000000, B00000010,
  B10001100, B00000000, B00110001,
  B00010010, B00000000, B01001000,
  B00010010, B00000000, B01001000,
  B00001100, B00000000, B00110000,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B11111111, B00000000,
  B01111000, B01111110, B00011110,
  B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000,
};
const uint16_t SPfastBlink[] PROGMEM = {
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
  B00000000, B00000000, B00000000,
  B01111000, B00000000, B00011110,
  B00000000, B11111111, B00000000,
  B01111000, B01111110, B00011110,
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
void fastBlinkface() {
  FaceType = 3;
  readbitmap(fastBlink);
  matrix.writeScreen();
}

void brokenface() {
  FaceType = 11;
  readbitmap(broken);
  matrix.writeScreen();
}
void leftturnface() {
  FaceType = 18;
  readbitmap(leftturn);
  matrix.writeScreen();
}
void rightturnface() {
  FaceType = 81;
  readbitmap(rightturn);
  matrix.writeScreen();
}

void noface() {
  FaceType = 99;
  readbitmap(no);
  matrix.writeScreen();
}

void SPslowface() { //normal face blink for speed
  FaceType = 20;
  readbitmap(SPslow);
  matrix.writeScreen();
}
void SPnormalface() {
  FaceType = 21;
  readbitmap(SPnormal);
  matrix.writeScreen();
}
void SPfastface() {
  FaceType = 22;
  readbitmap(SPfast);
  matrix.writeScreen();
}

void ADface() {
  FaceType = 87;
  readbitmap(AD);
  matrix.writeScreen();
}
void angryface() {
  FaceType = 77;
  readbitmap(angry);
  matrix.writeScreen();
};
void veryangryface() {
  FaceType = 78;
  readbitmap(veryangry);
  matrix.writeScreen();
};
void QQface() {
  FaceType = 71;
  readbitmap(QQ);
  matrix.writeScreen();
};
void Nononoface() {
  FaceType = 72;
  readbitmap(Nonono);
  matrix.writeScreen();
};
void boringface() {
  FaceType = 73;
  readbitmap(boring);
  matrix.writeScreen();
};
void SPslowBlinkface() {
  FaceType = 30;
  readbitmap(SPslowBlink);
  matrix.writeScreen();
}
void SPnormalBlinkface() {
  FaceType = 31;
  readbitmap(SPnormalBlink);
  matrix.writeScreen();
}
void SPfastBlinkface() {
  FaceType = 32;
  readbitmap(SPfastBlink);
  matrix.writeScreen();
}