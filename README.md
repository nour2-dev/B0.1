#  ESP32 Interactive Face & Sound Controller

An interactive embedded project using an ESP32, TFT Screen, JQ6500 MP3 Module, and Speaker. Controlled wirelessly via Bluetooth from a smartphone app, the display animates dynamic facial expressions while playing matching audio effects in real time.

---

## How It Works

1. Open a Bluetooth terminal or custom controller app on your phone.
2. Connect to the device **ESP32-Visage**.
3. Press a button on your phone to trigger visual and audio reactions:

| Phone Button | Command | Screen Animation | Speaker Sound |
| :--- | :---: | :--- | :--- |
|Greenen** | 'G' | DisplayHappy Facece** 😁 | PlayLaughterer** sound |
|Reded** | 'R' | DisplaySad Facece** 😢 | PlaySad/Cryingng** sound |
|Blueue** | 'N' | DisplayNeutral Facece** 😐 | PlayBeepep** notification |

---

##  Hardware NeededESP32 Dev (Wemos D1 Mini ESP32 or ESP32 Dev Module1.77" SPI TFT Displayay TFT Displayay** (ST7735 / 128x160 pixelsJQ6500 MP (UART controlMini SpeakererMini Speakerer** (8Ω 2W, connected to JQ6500 SPK+ / SPK-220 Ω Resistoror** (for display backlight protection)

---

## Wiring Setup

### 1. TFT Display $\rightarrow$ ESP32

| TFT Pin | ESP32 GPIO | Description |
| :--- | :--- | :--- MOSISI** | GPIO 23 | SPI Data SCLKLK** | GPIO 18 | SPI Clock CSCS** | GPIO 5 | Chip Select DCDC** | GPIO 2 | Data / Command RSTST** | GPIO 4 | Reset LEDED** | 3.3V | Backlight *(via 220 Ω Resistor)* |

### 2. JQ6500 MP3 Module $\rightarrow$ ESP32

| JQ6500 Pin | ESP | GPIO 16 TXTX:--- RXRX** | GPIO 16 TXTX** | GPIO 17 |

>Note:e:** Connect you and  directly to the **SPK+** and **SPK-** terminals on the JQ6500 MP3 module (not to the ESP32 directly).

---

## Libraries Required

Make sure to install these libraries in the Arduino IDE before uploading:

* [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) — Screen graphics driver
* [JQ6500_Serial](https://github.com/sleemanj/JQ6500_Serial) — MP3 module driver
* BluetoothSerial — Built-in with ESP32 board support

---

##  Quick Start

1. Load your sound filTrack 1:JQ6500 MP3 mTrack 1:**TrTrack 2:ghing sound Track 2Track 3:* Sad sound Track 3:**Track 3:** Neutral beep
2. Copy [User_Setup.h](./User_Setup.h) into your local TFT_eSPI library folder.
3. Upload the sketch projet_ecran.ino to yoESP32-Visager your phone to **ESP32-Visage** via Bluetooth and send commands 'G', 'R', or 'N'.
