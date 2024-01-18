# Bluetooth Control Car/Bot Using HC-05 Bluetooth Module, L298N Motor Driver, and Arduino Uno

This project allows you to control a car or robot wirelessly using a Bluetooth module (HC-05), an Arduino Uno, and an L298N motor driver. The provided Arduino sketch enables the robot to move forward, backward, make sharp turns, and stop based on Bluetooth commands.

## Components Used

- Arduino Uno
- HC-05 Bluetooth Module
- L298N Motor Driver
- DC Motors (for the car's movement)
- Chassis, Wheels, and other mechanical components
- Power source (batteries or external power supply)

## Wiring Instructions

1. Connect the DC motors to the L298N motor driver.
2. Connect the L298N motor driver to the Arduino Uno.
3. Connect the HC-05 Bluetooth module to the Arduino Uno.
4. Ensure proper power supply to the motors and the Arduino.

Refer to the provided Arduino sketch (`BluetoothCarControl.ino`) for specific pin connections.

## Arduino Sketch Explanation

The Arduino sketch (`BluetoothCarControl.ino`) is responsible for interpreting Bluetooth commands received via serial communication and controlling the motors accordingly. The code defines functions for moving the car forward, backward, making sharp turns, and stopping.

## Getting Started

1. Set up the hardware components as per the wiring instructions.
2. Upload the `BluetoothCarControl.ino` sketch to your Arduino Uno.
3. Power up the Arduino and ensure the Bluetooth module is paired with a mobile device.

## Bluetooth Commands

- 'f': Move forward
- 'b': Move backward
- 'l': Make a sharp left turn
- 'r': Make a sharp right turn
- Any other input: Stop the car

## Usage

1. Pair your mobile device with the HC-05 Bluetooth module.
2. Open a serial communication app on your mobile device.
3. Send the corresponding commands to control the car.

## Contributing

Feel free to contribute to improve this project. Submit issues or pull requests if you have any suggestions or enhancements.

## License

This project is licensed under the [MIT License](LICENSE).

Happy driving!
