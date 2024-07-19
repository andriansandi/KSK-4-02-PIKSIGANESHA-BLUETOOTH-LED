# Arduino Bluetooth Buzzer Control

This project allows you to control a buzzer connected to an Arduino using Bluetooth. When a specific character is sent from a Bluetooth-enabled device, the buzzer will either turn on or off.

## Components

- Arduino board (e.g., Arduino Uno)
- HC-05 Bluetooth module
- Buzzer
- Connecting wires

## Circuit Diagram

- Connect the RX pin of the HC-05 module to pin 9 of the Arduino.
- Connect the TX pin of the HC-05 module to pin 8 of the Arduino.
- Connect the buzzer to pin 7 of the Arduino (or pin 14 if changed in the code) and GND.
- Ensure the HC-05 module's VCC and GND are connected to the Arduino's 5V and GND respectively.

## How to Use

1. **Upload the Code**: Upload the provided code to your Arduino board.
2. **Pair the Bluetooth Module**: Pair the HC-05 Bluetooth module with your Bluetooth-enabled device (e.g., smartphone, computer).
3. **Send Commands**:
    - Send the character '1' to turn on the buzzer.
    - Send the character '2' to turn off the buzzer.

You can use any Bluetooth terminal app on your smartphone or computer to send these commands.

## Troubleshooting

- Ensure the Bluetooth module is properly paired with your device.
- Verify the connections according to the circuit diagram.
- Use the serial monitor in the Arduino IDE to debug and see the received characters.

## Maintainer

[Sandi Andrian](mailto:andrian.sandi@gmail.com)

## License

This project is licensed under the MIT License.
