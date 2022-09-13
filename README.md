# Robofish.io
Utilities for the deployment of RoboFish, a robotic fish which can interact with it's conspecifics. 

## Arduino
[Arduino IDE](https://www.arduino.cc/en/software) scripts for controling the pump mechanism and making RoboFish more realistic.

Parts used:
- ESP32 WROOM-32 Microcontroller
- TB6612 Dual DC/Stepper Motor Driver
- 12V Peristaltic Pump
- 5V External Power Source
- 12V External Power Source

## Notebooks
Directory contains [Jupyter Notebooks](https://jupyter.org/) for calibration and data analysis

## Requirements for RoboTracker 
Currently only Linux is supported
- WLAN Router: Network Name: RoboFish; Password: vhr0b0134js
- RoboFish ID 135: Fixed IP: 192.168.0.4
- RoboTracker: Entire folder should be downloaded to Desktop or other reliable location
- .AppImage should be executed once, then closed. This creates config.ini file! File supplied here should be used as template. 
- Search for config.ini file (somewhere in a 'FU Berlin/RoboTracker/' directory). Change ```Plugin``` directory at the bottom of the file, to point towards the correct plugin file to be used in the ```RoboTracker``` folder.
- Install ```v4l-utils``` and ```guvcview``` (possibly following this tutorial: https://davejansen.com/logitech-streamcam-on-linux/)
- ```guvcview``` can used to set the camera parameters, which can be found in the provided template file.
- Start ```RoboTracker``` by clicking on the .AppImage or running ```START_ROBOTRACKER.sh```
- Supply robot with fully charged battery and turn on before usage 
- If Robot was turned on before ```RoboTracker``` the robot should be found automatically. Otherwise go to **Search Network for Robot** in the top right in ```RoboTracker```
   
Main Contributions done by F.Francisco and D. Bierbach


