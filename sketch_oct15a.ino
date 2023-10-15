#include <Deneyap_Servo.h>

Servo servo_D12;

void setup() {
  servo_D12.attach(D12,0);
}

void loop() {
  servo_D12.write(map(A0,0,4095,0,255));
  delay(50);

}