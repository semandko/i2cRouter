
#include <PWFusion_TCA9548A.h>


TCA9548A i2cMux;


void setup() {

  Wire.begin();
  Serial.begin(9600);

  i2cMux.begin(); //
  // i2cMux.begin(0); // Initialize the TCA9548A driver, where addr is an address between 0 and 7.

}

void loop() {

  // test start
  i2cMux.setChannel(CHAN0); // Wire.begin() + Wire.Write() + Wire.End()
  Serial.println("Channel 0 selected"); 
  delay(500);

  i2cMux.setChannel(CHAN0 | CHAN4); 
  Serial.println("Channels 0 and 4 selected"); 
  delay(500);

  i2cMux.setChannel(CHAN_NONE); 
  Serial.println("No channels selected");
  // test stop 
  
  delay(500);
}
