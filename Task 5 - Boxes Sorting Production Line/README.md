# Task 5
Designing a control system for a production line for sorting three sizes of boxes

# System Components
- Arduino Uno R3
- Servo motor
- 3 x IR sensor
- Wires
# Used Softwares
Tinkercad
# System Description
The system is designed for a production line of three sizes of boxes (10cm x 10cm, 20cm x 20cm, 30cm x 30cm). The system consists of three sensors and one servo motor. The first sensor is installed at a height of 7cm from the production line, and the second sensor is installed at a height of 15cm and the last one is installed at a height of 25cm.
When the first sensor detects a box and the other two sensors don't that means the box size is 10cm x 10cm so the motor will rotate 45 degrees from the original position. If the first and second sensors detected a box while the last one doesn't then the box is 20cm x 20cm so the motor will rotate 90 degrees from the original position. Finally, if the last sensor has detected a box then it's a 30cm x 30cm so the motor will stay at the original position.
