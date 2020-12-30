//
// LAN cable tester 
//
// update from original variecose
// by roby
// 20201223

//
// enable debug printout
#define DEBUG 1

#ifdef DEBUG
//
// enable debug print
// note: a delay of 1 msec. is used to allow the console
//       to finish the output of message
#define print_debug( X ) do {   \
    Serial.println( X );        \
    delay(1);                   \
} while(0)

#define print_debugnln( X ) do {   \
    Serial.print( X );             \
    delay(1);                      \
} while(0)
  
#else
//
// disable debug print
#define print_debug( X )

#define print_debugnln( X )

#endif

//
// lan cable pinout
const int pinStraightCable[8] = {2, 3, 4, 5, 6, 7, 8, 9};
const int pinCrossCable[8] = {4, 7, 2, 5, 6, 3, 8, 9};

void PulseOut(char pinNo, int delayInterval) {

    digitalWrite(pinNo, HIGH);
    delay(delayInterval);
    digitalWrite(pinNo, LOW);
    return;
}

void setup() {
    //
    // put your setup code here, to run once:
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    //  pinMode(12, INPUT); // Straight (normal) cable or cross cable

    pinMode(13, OUTPUT); // Control LED

    Serial.begin(9600);
    print_debug("LAN cable tester: starting ...");
}

void loop() {
    //
    // Straight (normal) cable
    print_debug("testing straight LAN cable pins ...");

    for (int i = 0; i < 8; i++) {

        print_debugnln(i+1);
        print_debugnln(": line ");
        print_debugnln(pinStraightCable[i]-1);
        print_debugnln(" (pin ");
        print_debugnln(pinStraightCable[i]);
        print_debug(")");

        PulseOut(pinStraightCable[i], 1000);

        PulseOut(13, 50);
    }

    print_debug("waiting 5 secs. ...");
    delay(5000);
}