EESchema Schematic File Version 4
LIBS:Cube-Balls-cache
EELAYER 26 0
EELAYER END
$Descr User 4134 4134
encoding utf-8
Sheet 1 1
Title "LED Balls"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector_Generic:Conn_01x04 D1
U 1 1 5BD2425F
P 2850 900
F 0 "D1" H 2929 892 50  0000 L CNN
F 1 "RGB" H 2929 801 50  0000 L CNN
F 2 "Connector_Wire:SolderWirePad_1x04_P3.175mm_Drill0.8mm" H 2850 900 50  0001 C CNN
F 3 "~" H 2850 900 50  0001 C CNN
	1    2850 900 
	1    0    0    1   
$EndComp
$Comp
L Device:R_US R1
U 1 1 5BD2442B
P 1750 1300
F 0 "R1" V 1650 1300 50  0000 C CNN
F 1 "100" V 1950 1300 50  0001 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 1790 1290 50  0001 C CNN
F 3 "~" H 1750 1300 50  0001 C CNN
	1    1750 1300
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R2
U 1 1 5BD24809
P 2500 1300
F 0 "R2" V 2400 1300 50  0000 C CNN
F 1 "10" V 2400 1300 50  0001 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 2540 1290 50  0001 C CNN
F 3 "~" H 2500 1300 50  0001 C CNN
	1    2500 1300
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Female J1
U 1 1 5BD24903
P 2500 1800
F 0 "J1" H 2550 1800 50  0000 C CNN
F 1 "IN" H 2394 1666 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 2500 1800 50  0001 C CNN
F 3 "~" H 2500 1800 50  0001 C CNN
	1    2500 1800
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x01_Female J4
U 1 1 5BD24C70
P 2200 700
F 0 "J4" H 2250 700 50  0000 C CNN
F 1 "OUT" H 2094 566 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 2200 700 50  0001 C CNN
F 3 "~" H 2200 700 50  0001 C CNN
	1    2200 700 
	-1   0    0    1   
$EndComp
$Comp
L pspice:CAP C1
U 1 1 5BD24F96
P 2050 1300
F 0 "C1" H 2000 1300 50  0000 L CNN
F 1 "0.1uF" H 2228 1255 50  0001 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 2050 1300 50  0001 C CNN
F 3 "" H 2050 1300 50  0001 C CNN
	1    2050 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 900  2300 1800
Wire Wire Line
	1750 1800 2050 1800
Wire Wire Line
	2050 1050 2050 800 
Wire Wire Line
	2050 1550 2050 1800
Connection ~ 2050 1800
Wire Wire Line
	2050 1800 2300 1800
$Comp
L Connector:Conn_01x01_Female J2
U 1 1 5BD27EEC
P 1450 950
F 0 "J2" H 1500 950 50  0000 C CNN
F 1 "VCC" H 1344 816 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 1450 950 50  0001 C CNN
F 3 "~" H 1450 950 50  0001 C CNN
	1    1450 950 
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Female J3
U 1 1 5BD282FE
P 1450 800
F 0 "J3" H 1500 800 50  0000 C CNN
F 1 "GND" H 1344 666 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 1450 800 50  0001 C CNN
F 3 "~" H 1450 800 50  0001 C CNN
	1    1450 800 
	-1   0    0    1   
$EndComp
Wire Wire Line
	1650 950  1750 950 
Connection ~ 2050 800 
Wire Wire Line
	1650 800  2050 800 
Wire Wire Line
	1750 950  1750 1150
Wire Wire Line
	1750 1800 1750 1450
Wire Wire Line
	2300 900  2650 900 
Wire Wire Line
	2050 800  2650 800 
Wire Wire Line
	2400 700  2650 700 
Wire Wire Line
	2500 1150 2500 1000
Wire Wire Line
	2500 1000 2650 1000
Wire Wire Line
	2500 1600 2500 1450
$Comp
L Connector_Generic:Conn_01x04 D2
U 1 1 5BD29D08
P 2850 2250
F 0 "D2" H 2929 2242 50  0000 L CNN
F 1 "RGB" H 2929 2151 50  0000 L CNN
F 2 "Connector_Wire:SolderWirePad_1x04_P3.175mm_Drill0.8mm" H 2850 2250 50  0001 C CNN
F 3 "~" H 2850 2250 50  0001 C CNN
	1    2850 2250
	1    0    0    1   
$EndComp
$Comp
L Device:R_US R3
U 1 1 5BD29D0F
P 1750 2650
F 0 "R3" V 1650 2650 50  0000 C CNN
F 1 "100" V 1950 2650 50  0001 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 1790 2640 50  0001 C CNN
F 3 "~" H 1750 2650 50  0001 C CNN
	1    1750 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:R_US R4
U 1 1 5BD29D16
P 2500 2650
F 0 "R4" V 2400 2650 50  0000 C CNN
F 1 "10" V 2400 2650 50  0001 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" V 2540 2640 50  0001 C CNN
F 3 "~" H 2500 2650 50  0001 C CNN
	1    2500 2650
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Female J5
U 1 1 5BD29D1D
P 2500 3150
F 0 "J5" H 2550 3150 50  0000 C CNN
F 1 "IN" H 2394 3016 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 2500 3150 50  0001 C CNN
F 3 "~" H 2500 3150 50  0001 C CNN
	1    2500 3150
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x01_Female J8
U 1 1 5BD29D24
P 2200 2050
F 0 "J8" H 2250 2050 50  0000 C CNN
F 1 "OUT" H 2094 1916 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 2200 2050 50  0001 C CNN
F 3 "~" H 2200 2050 50  0001 C CNN
	1    2200 2050
	-1   0    0    1   
$EndComp
$Comp
L pspice:CAP C2
U 1 1 5BD29D2B
P 2050 2650
F 0 "C2" H 2000 2650 50  0000 L CNN
F 1 "0.1uF" H 2228 2605 50  0001 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P2.54mm_Vertical" H 2050 2650 50  0001 C CNN
F 3 "" H 2050 2650 50  0001 C CNN
	1    2050 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 2250 2300 3150
Wire Wire Line
	1750 3150 2050 3150
Wire Wire Line
	2050 2400 2050 2150
Wire Wire Line
	2050 2900 2050 3150
Connection ~ 2050 3150
Wire Wire Line
	2050 3150 2300 3150
$Comp
L Connector:Conn_01x01_Female J6
U 1 1 5BD29D38
P 1450 2300
F 0 "J6" H 1500 2300 50  0000 C CNN
F 1 "VCC" H 1344 2166 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 1450 2300 50  0001 C CNN
F 3 "~" H 1450 2300 50  0001 C CNN
	1    1450 2300
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x01_Female J7
U 1 1 5BD29D3F
P 1450 2150
F 0 "J7" H 1500 2150 50  0000 C CNN
F 1 "GND" H 1344 2016 50  0001 C CNN
F 2 "Connector_Wire:SolderWirePad_1x01_Drill1mm" H 1450 2150 50  0001 C CNN
F 3 "~" H 1450 2150 50  0001 C CNN
	1    1450 2150
	-1   0    0    1   
$EndComp
Wire Wire Line
	1650 2300 1750 2300
Connection ~ 2050 2150
Wire Wire Line
	1650 2150 2050 2150
Wire Wire Line
	1750 2300 1750 2500
Wire Wire Line
	1750 3150 1750 2800
Wire Wire Line
	2300 2250 2650 2250
Wire Wire Line
	2050 2150 2650 2150
Wire Wire Line
	2400 2050 2650 2050
Wire Wire Line
	2500 2500 2500 2350
Wire Wire Line
	2500 2350 2650 2350
Wire Wire Line
	2500 2950 2500 2800
$EndSCHEMATC
