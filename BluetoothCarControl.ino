// MOTOR A (LEFT)
int ma1 = 4;
int ma2 = 5;
int mae = 6; // MOTOR A ENABLE

// MOTOR B (RIGHT)
int mb1 = 7;
int mb2 = 8;
int mbe = 9; // MOTOR B ENABLE

int myspeed = 255; // Initial speed

char serial_data = 'j'; // Variable to store incoming serial data

// Function to move the robot forward
void forward(){
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  digitalWrite(mb1, HIGH);
  digitalWrite(mb2, LOW);
  Serial.println("FORWARD");
}

// Function to move the robot backward
void backward(){
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, HIGH);
  digitalWrite(mb1, LOW);
  digitalWrite(mb2, HIGH);
  Serial.println("BACKWARD");
}

// Function to make a sharp right turn
void sharpRight(){
  digitalWrite(ma1, HIGH);
  digitalWrite(ma2, LOW);
  digitalWrite(mb1, LOW);
  digitalWrite(mb2, HIGH);
  Serial.println("LEFT");
}

// Function to make a sharp left turn
void sharpLeft(){
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, HIGH);
  digitalWrite(mb1, HIGH);
  digitalWrite(mb2, LOW);
  Serial.println("RIGHT");
}

// Function to stop both motors
void stopp(){
  digitalWrite(ma1, LOW);
  digitalWrite(ma2, LOW);
  digitalWrite(mb1, LOW);
  digitalWrite(mb2, LOW);
  Serial.println("STOP");
}

void setup() {
  // Setup serial communication
  Serial.begin(9600);

  // Set motor control pins as output
  pinMode(ma1, OUTPUT);
  pinMode(ma2, OUTPUT);
  pinMode(mae, OUTPUT);
  pinMode(mb1, OUTPUT);
  pinMode(mb2, OUTPUT);
  pinMode(mbe, OUTPUT);

  // Set initial motor speeds
  analogWrite(mae, myspeed);
  analogWrite(mbe, myspeed);
}

void loop() {
  // Check for available serial data
  if (Serial.available()){
    serial_data = Serial.read();

    // Perform corresponding action based on serial input
    if (serial_data == 'f'){
      forward();
    }
    else if (serial_data == 'b'){
      backward();
    }
    else if(serial_data == 'l'){
      sharpLeft();
    }
    else if(serial_data == 'r'){
      sharpRight();
    }
    else{
      stopp();
    }
  }
}
