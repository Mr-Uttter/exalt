### Ignore this part, this is right now just a fun little project to learn the C++ laungage, modifying files, using external librarys and using some kind of GUI.

# Exalt – Scriptstyrt GUI i C++

**Exalt** är ett experimentellt GUI-baserat program skrivet i C++ med målet att kombinera hög prestanda, enkel interaktivitet och scriptstöd. Programmet använder **Dear ImGui**, **GLFW** och **OpenGL** som kärntekniker. Det är tänkt som en flexibel grund för verktyg, spelprototyper eller interaktiva verktygsfönster.

---

## 🚧 Projektstatus

Projektet är i ett tidigt skede, med fokus på att bygga en solid och utbyggbar arkitektur. Det är uppdelat i tydliga utvecklingsetapper som dokumenteras stegvis. Just nu fungerar:

- En grundläggande fönsterloop med ImGui, GLFW och OpenGL
- Dynamiska UI-komponenter via ImGui
- Tydlig kodstruktur med modulindelning

---

## 🛠️ Teknisk översikt

| Komponent | Beskrivning |
|----------|-------------|
| **Språk** | C++17 |
| **GUI** | [Dear ImGui](https://github.com/ocornut/imgui) |
| **Fönsterhantering** | [GLFW](https://www.glfw.org/) |
| **Rendering** | OpenGL 3.0 |
| **Byggsystem** | [CMake](https://cmake.org/) |
| **IDE** | Visual Studio Code |

---

## 📁 Projektstruktur

exalt/
├── CMakeLists.txt
├── main.cpp
├── ui_window.cpp
├── ui_window.h
└── ext/
    ├── imgui/
    └── glfw/

---

## ▶️ Bygga och köra

### Förutsättningar

- CMake 3.10 eller senare
- C++-kompilator (GCC, Clang eller MSVC – projektet utvecklas primärt på Windows med MinGW)
- Visual Studio Code rekommenderas, men valfri editor fungerar

### Bygginstruktioner

mkdir build
cd build
cmake ..
cmake --build .

Kör sedan `exalt.exe` eller motsvarande binär från `build/`-katalogen.

---

## ✨ Funktioner (under utveckling)

- [x] Starta ett fönster med ImGui och OpenGL
- [x] Rita dynamiskt UI med knappar och text
- [ ] Flera samtidiga fönster
- [ ] Layoutsystem
- [ ] -
- [ ] Filsystemsnavigering
- [ ] -

---

## 🧱 Nästa steg

Projektet följer en stegvis utvecklingsplan med fokus på inlärning, struktur och utbyggbarhet. Kommande uppgifter:

1. Skapa ett sidopanelsystem med dynamiska kontroller
2. Strukturera UI-logik i moduler
3. Införa ett layoutsystem för tydlig indelning
4. Integrera scriptstöd för dynamisk funktionalitet

---

## 📝 Licens

Du får använda, modifiera och sprida fritt, men utan garanti.

---

## 🤝 Bidrag

Projektet är i första hand personligt, men pull requests är välkomna så länge de följer kodstilen och projektets syfte. Om du är nyfiken på implementationen eller vill bidra, tveka inte att öppna en issue.

---
