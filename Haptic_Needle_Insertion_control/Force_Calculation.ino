//
//
//
void forceCalc() {
  eqnTest = pow(force, 2) - (2 * k * b);
  if (eqnTest < 0) {
    flag = false; //Mask pulse generation.
  }
  else {
    flag = true ; //Permit pulse output.
    x = force + sqrt(eqnTest / k); //  Caculate the displacement.
    xDot = (force - k*x)/b;
    delayTime = (pi*pulleyDiameter)/(2*DS*xDot);
   }
}
