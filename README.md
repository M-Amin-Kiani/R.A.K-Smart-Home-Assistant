
<p align="center">
  <img src="https://img.shields.io/badge/Smart_Home-Voice_Assistant-7F5AF0?style=for-the-badge&logo=homeassistant&logoColor=white" alt="Smart Home Logo" />
</p>

<h1 align="center">🏠 Smart Home Voice Assistant</h1>

<p align="center">
  🔊 Control your home devices (TV, AC, Lights) using voice and natural language in English and Persian.
</p>

<p align="center">
  <img src="https://img.shields.io/github/stars/dicardo-ng/smart-home-voice-assistant?style=social" />
  <img src="https://img.shields.io/github/forks/dicardo-ng/smart-home-voice-assistant?style=social" />
</p>

---

# 🏠 Smart Home Voice Assistant

A full-stack **voice-controlled smart home assistant** built using `Flask`, `Whisper`, `LLaMA 3`, `pyngrok`, and a dynamic `HTML/CSS/JS` interface. Supports real-time voice and text control for devices like **TVs, air conditioners, and lamps**, along with weather updates, news feed, multilingual interaction, and dynamic UI updates.

## 🔥 Demo

[Watch the assistant in action here (video link if available)](https://example.com)  
Or try live (via ngrok if running): `https://xxxxx.ngrok-free.app`

---

## 🧠 Key Features

- 🎙️ **Voice Recognition** using OpenAI’s Whisper
- 🧾 **Text-Based Control Panel** for commands
- 🧠 **Natural Language Understanding** using LLaMA 3 via TogetherAI
- 🔄 **Multi-device Management** (TV, AC, Lamps)
- 🌐 **Multilingual Support** (English 🇬🇧 + Persian 🇮🇷)
- 📊 **Smart Dashboard** (device summary, Isfahan temperature, live news)
- 🎨 **Modern UI** with fully dynamic feedback and toggles
- 🔊 **Text-to-Speech Responses** with on-screen + audio feedback
- 📦 Deployable from Google Colab using `pyngrok`

---

## ⚙️ Devices Supported

| Device        | Locations Supported         |
|---------------|-----------------------------|
| 📺 TV         | Living Room                 |
| ❄️ AC         | Room 1, Kitchen             |
| 💡 Lamps      | Kitchen, Bathroom, Room 1 & 2 |

Each device is individually controllable via natural language, either typed or spoken.

---

## 🏗️ Architecture Overview

- **Frontend**:
  - Responsive HTML/CSS/JS dashboard
  - Voice and text input handlers
  - Dynamic UI creation and removal of control buttons
  - Persian/English language switching
- **Backend (Flask)**:
  - Command handling via LLM
  - Real-time device state tracking
  - Whisper-based voice transcription
  - TTS audio generation with playback
- **Integrations**:
  - `pyngrok` for live Colab hosting
  - OpenWeather API for Isfahan weather
  - NewsAPI.org for technology news panel
  - TogetherAI for LLaMA 3 command reasoning

---

## 🛠️ Installation & Usage

### 🔗 Requirements
- Python 3.8+
- Colab (or local Flask with ngrok)
- `pyngrok`, `flask`, `whisper`, `requests`, `tts`, `together`, `torch`, etc.

### 🚀 Quick Start (in Colab)
1. Clone or copy code into your Colab notebook.
2. Run all setup and install cells.
3. Set your `TogetherAI API Key`, `NewsAPI Key`, `Ngrok Token`
4. Launch Flask + ngrok:
    ```python
    public_url = ngrok.connect(5000)
    print(f"Public URL: {public_url}")
    ```
5. Use the generated URL to access your assistant's UI.
6. Interact via voice or text!

---

## 💡 Example Commands

- `"Turn on the TV"` → shows TV status page
- `"روشن کن کولر آشپزخانه"` → turns on AC in kitchen (Persian)
- `"Turn off the bathroom lamp"` → turns off that specific lamp
- `"What's the news today?"` → shows tech news in sidebar
- `"What is the temperature in Isfahan?"` → updates dashboard

---

## 📁 Project Structure

```
.
├── app.py                # Main Flask app
├── templates/
│   ├── tv.html
│   ├── ac.html
│   ├── lamp.html
├── static/
│   ├── audio_outputs/    # TTS-generated audio files
├── agent/                # LLM logic (CustomSmartHomeAgent class)
├── README.md
└── requirements.txt
```

---

## 📌 Notes

- Uses local state for device toggles (no real hardware)
- Voice is recorded in-browser and sent as `webm`
- LLM used is LLaMA 3 via TogetherAI (JSON structured response)
- Brightness & temperature are tracked per-device
- Responsive layout with support for RTL (فارسی)

---

## 📸 Screenshots

| Dashboard 1 | Dashboard 2 | 
|----------|-----------|
| ![image](https://github.com/user-attachments/assets/9d835277-b543-4c07-a172-1a384b1cbff6) | ![image](https://github.com/user-attachments/assets/68fd2bd7-03e5-494a-9d63-9c954e2c4a4a) |

---

## 👨‍💻 Author

**Dicardo Ng**  
IoT Developer | AI Engineer | Web Full-Stack Developer  
📧 Email: [aminkianiworkeng@gmail.com] + [radaghakhani@gmail.com]
🌐 LinkedIn: [linkedin.com/in/yourprofile](https://linkedin.com/in/yourprofile)

---

## 📄 License

MIT License. Feel free to fork and build on it!
