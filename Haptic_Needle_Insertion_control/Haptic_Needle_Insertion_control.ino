//-------------------------------------------------------------------------------------------------------------------
//***********************************************  Pin assignment ***********************************************
//-------------------------------------------------------------------------------------------------------------------
# define Limit_Pin_Up
# define Limit_Pin_Down
# define Pulse
# define Direction
# define Force_Sensor
# define Reset_Time                         // Define delay time in pulse generation for reset mode. 
# define pulleyDiameter                     // Pulley Diameter 
# define DS                     //Define driver setting (pulses/rev).
# define pi 3.14
//-------------------------------------------------------------------------------------------------------------------
//****************************************** Variable decleration **************************************************
//-------------------------------------------------------------------------------------------------------------------
double k = 0; // Skin stifness
double b = 0; // Skin damping
long delayTime = 0;  // Define delay time in pulse generation for normal operation mode.
double force = 0.0; // User force input.
double x = 0;       // Displacement variable.
double xDot = 0;    // linear velocity variable.
double eqnTest = 0;// Complex root test.
boolean flag = false ; // Pulse output flag required to permit pulse output.
boolean motionStart = true ;

void setup() {
  // put your setup code here, to run once:
  pinMode(Limit_Pin_Up, INPUT);
  pinMode(Limit_Pin_Down, INPUT);
  pinMode(Force_Sensor, INPUT);
  pinMode(Pulse, OUTPUT);
  pinMode(Direction, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(motionStart) {
    Reset();
    motionStart = false;
  }
  sensorReading();
  forceCalc();
  runStepper();
}
