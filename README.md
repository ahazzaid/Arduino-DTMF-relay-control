# Arduino-DTMF-relay-control
📱 DTMF Relay Control Using Phone and Arduino
This project allows you to remotely control a relay using DTMF tones from any mobile phone. When you call the phone connected to the system and press specific keys (e.g., 2 to turn ON, 3 to turn OFF), the Arduino reads the DTMF signals via an MT8870 decoder and controls a relay accordingly. It’s useful for automating electrical devices like lights, pumps, or other appliances over a simple phone call — no internet required.

🔧 Features:
Control a relay remotely using a mobile phone

Press 2 to turn ON the relay

Press 3 to turn OFF the relay

Uses MT8870 DTMF decoder with Arduino

No internet or smartphone needed — works with any basic GSM phone

🧰 Components:
Arduino UNO

MT8870 DTMF decoder module

Relay module

GSM phone or module with auto-answer

Jumper wires and power supply

🔗 How It Works:
Call the system-connected phone.

Press 2 to activate the relay.

Press 3 to deactivate the relay.

Arduino decodes the tone using MT8870 and triggers relay based on input.

Pin connection

MT8870 Pin	Arduino Pin
  D0	            2
  D1	            3
  D2	            4
  D3	            5
  VCC	            5V
  GND	            GND

 Relay Module to Arduino

Relay Pin	Arduino Pin
  IN	        7
  VCC	        5V
  GND	        GND
