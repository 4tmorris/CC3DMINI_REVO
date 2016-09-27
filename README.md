# CC3DMINI_REVO
This is a MicroPython board definition file for the 'CC3D Mini Revolution' flight controller available from Banggood and HobbyKing.

The 'Mini' is a smaller simplified version of the CC3D Revolution from OpenPilot. This firmware should run on the full-sized board, but it haven't tested that.

Build the firmware using:
```
cd micropython/stmhal/boards
git clone https://github.com/4tmorris/CC3DMINI_REVO.git
cd ..
make BOARD=CC3DMINI_REVO
```
