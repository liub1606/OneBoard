# SingleBoard

SingleBoard is a 19 key macropad with a rotary encoder. It uses QMK firmware running on a RP2040.


## Features:
- 3D printed outer case
- EC11 Rotary encoder for volume and general media control.
- 19 Keys

## CAD Model:
We use 4 M3 Bolts and heatset inserts to put everything together. In total it has 2 separate peices.

<img src=Assets/Full.png alt="Schematic" width="500"/>

Made using Onshape.

## PCB
My PCB made in Kicad. I used KLE to design the keyboard layout and used a plugin to get everything laid out.

Schematic
<img src=Assets/schematic.png alt="Schematic" width="300"/>

PCB
<img src=Assets/PCB.png alt="Schematic" width="300"/>


## Firmware Overview
This hackpad uses [QMK](https://qmk.fm/) firmware for everything. 

- The rotary encoder changes volume, press the encoder to pause media.
- Basically acts like the left side of a normal keyboard.


## BOM:
All the materials needed for this hackpad:
- 19x Cherry MX Switches
- 19x DSA Keycaps
- 4x M3x5x4 Heatset inserts
- 4x M3x16mm SHCS Bolts
- 20x 1N4148 DO-35 Diodes.
- 1x EC11 Rotary Encoder
- 1x XIAO RP2040
- 1x Case (2 printed parts)

