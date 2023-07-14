/*
 * Do not edit: automatically generated by mkavrintel.pl
 *
 * urboot_sram.h
 *
 * Ensure both RAMSTART and RAMSIZE are available as far as possible
 *
 * Published under GNU General Public License, version 3 (GPL-3.0)
 * Meta-author Stefan Rueger <stefan.rueger@urclocks.com>
 *
 * v 1.1
 * 15.07.2023
 *
 */

#ifndef URBOOT_SRAM_H
#define URBOOT_SRAM_H

#undef RAMSTART
#undef RAMSIZE

#if 0
#elif defined(__AVR_ATtiny4__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny5__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny9__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny10__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny20__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny40__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny102__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny104__)
#define RAMSTART 0x0040
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny11__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny12__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny13__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0040

#elif defined(__AVR_ATtiny13A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0040

#elif defined(__AVR_ATtiny15__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny22__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny24__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny24A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny25__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny26__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny28__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0020

#elif defined(__AVR_ATtiny43U__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny44__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny44A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny45__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny48__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny84__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny84A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny85__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny87__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny88__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny167__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny261__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny261A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny441__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny461__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny461A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny828__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny828R__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATtiny841__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny861__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny861A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny1634__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny1634R__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATtiny2313__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny2313A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny4313__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_ATmega8__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega8A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega8HVA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega8U2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega16__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16HVA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega16HVB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16HVBrevB__) || defined(__AVR_ATmega16HVBREVB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16M1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16HVA2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega16U2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega16U4__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0500

#elif defined(__AVR_ATmega32__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32A__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32HVB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32HVBrevB__) || defined(__AVR_ATmega32HVBREVB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32C1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32M1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega32HVE2__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATmega32U2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega32U4__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0a00

#elif defined(__AVR_ATmega32U6__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0a00

#elif defined(__AVR_ATmega48__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega48A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega48P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega48PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega48PB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega64__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64HVE__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64C1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64M1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64HVE2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega64RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega88__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega88A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega88P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega88PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega88PB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega103__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0fa0

#elif defined(__AVR_ATmega103comp__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATmega128__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega128A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega128RFA1__)
#define RAMSTART 0x0200
#define RAMSIZE  0x4000

#elif defined(__AVR_ATmega128RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x4000

#elif defined(__AVR_ATmega161__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega161comp__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATmega162__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega163__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega164A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega164P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega164PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega165__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega165A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega165P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega165PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega168__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega168A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega168P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega168PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega168PB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega169__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega169A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega169P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega169PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega256RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x8000

#elif defined(__AVR_ATmega323__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega324A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega324P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega324PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega324PB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega325__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega325A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega325P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega325PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega328__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega328P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega328PB__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega329__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega329A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega329P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega329PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega406__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega640__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega644__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega644A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega644P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega644PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega644RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega645__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega645A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega645P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega649__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega649A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega649P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega1280__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega1281__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega1284__)
#define RAMSTART 0x0100
#define RAMSIZE  0x4000

#elif defined(__AVR_ATmega1284P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x4000

#elif defined(__AVR_ATmega1284RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x4000

#elif defined(__AVR_ATmega2560__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega2561__)
#define RAMSTART 0x0200
#define RAMSIZE  0x2000

#elif defined(__AVR_ATmega2564RFR2__)
#define RAMSTART 0x0200
#define RAMSIZE  0x8000

#elif defined(__AVR_ATmega3250__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3250A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3250P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3250PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3290__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3290A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3290P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3290PA__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega6450__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega6450A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega6450P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega6490__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega6490A__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega6490P__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega8515__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_ATmega8535__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_AT43USB320__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_AT43USB355__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0400

#elif defined(__AVR_AT76C711__)
#define RAMSTART 0x0060
#define RAMSIZE  0x07a0

#elif defined(__AVR_AT86RF401__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT89S51__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AT89S52__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AT90PWM1__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90PWM2__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90PWM2B__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90PWM3__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90PWM3B__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90CAN32__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_AT90CAN64__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_AT90PWM81__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0100

#elif defined(__AVR_AT90USB82__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90SCR100__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_AT90SCR100H__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AT90CAN128__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_AT90PWM161__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_AT90USB162__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90PWM216__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_AT90PWM316__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_AT90USB646__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_AT90USB647__)
#define RAMSTART 0x0100
#define RAMSIZE  0x1000

#elif defined(__AVR_AT90S1200__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0020

#elif defined(__AVR_AT90USB1286__)
#define RAMSTART 0x0100
#define RAMSIZE  0x2000

#elif defined(__AVR_AT90USB1287__)
#define RAMSTART 0x0100
#define RAMSIZE  0x2000

#elif defined(__AVR_AT90S2313__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT90S2323__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT90S2333__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT90S2343__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT90S4414__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_AT90S4433__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0080

#elif defined(__AVR_AT90S4434__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_AT90S8515__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90S8515comp__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AT90C8534__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0100

#elif defined(__AVR_AT90S8535__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0200

#elif defined(__AVR_AT90S8535comp__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AT94K__)
#define RAMSTART 0x0060
#define RAMSIZE  0x0fa0

#elif defined(__AVR_ATA5272__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5505__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5700M322__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5702M322__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5781__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5782__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5783__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5787__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0800

#elif defined(__AVR_ATA5790__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5790N__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5791__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5795__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA5831__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5832__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5833__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA5835__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0800

#elif defined(__AVR_ATA6285__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA6286__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA6289__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA6612C__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA6613C__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA6614Q__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0800

#elif defined(__AVR_ATA6616C__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA6617C__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_ATA8210__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA8215__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA8510__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA8515__)
#define RAMSTART 0x0200
#define RAMSIZE  0x0400

#elif defined(__AVR_ATA664251__)
#define RAMSTART 0x0100
#define RAMSIZE  0x0200

#elif defined(__AVR_M3000__)
#define RAMSTART 0x1000
#define RAMSIZE  0x1000

#elif defined(__AVR_LGT8F88P__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_LGT8F168P__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_LGT8F328P__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega8E5__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0400

#elif defined(__AVR_ATxmega16A4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0800

#elif defined(__AVR_ATxmega16A4U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0800

#elif defined(__AVR_ATxmega16C4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0800

#elif defined(__AVR_ATxmega16D4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0800

#elif defined(__AVR_ATxmega16E5__)
#define RAMSTART 0x2000
#define RAMSIZE  0x0800

#elif defined(__AVR_ATxmega32C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32A4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32A4U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32C4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32D4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega32E5__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64A1__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64A1U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64B1__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64A3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64A3U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64B3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64A4__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega64A4U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega64D4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATxmega128A1__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128A1revD__) || defined(__AVR_ATxmega128A1REVD__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega128A1U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128B1__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128A3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128A3U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128B3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128A4__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega128A4U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega128D4__)
#define RAMSTART 0x2000
#define RAMSIZE  0x2000

#elif defined(__AVR_ATxmega192A1__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega192A3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega192A3U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega192C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega192D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256A1__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_ATxmega256A3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256A3B__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256A3BU__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256A3U__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega256D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x4000

#elif defined(__AVR_ATxmega384C3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x8000

#elif defined(__AVR_ATxmega384D3__)
#define RAMSTART 0x2000
#define RAMSIZE  0x8000

#elif defined(__AVR_ATtiny202__)
#define RAMSTART 0x3f80
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny204__)
#define RAMSTART 0x3f80
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny212__)
#define RAMSTART 0x3f80
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny214__)
#define RAMSTART 0x3f80
#define RAMSIZE  0x0080

#elif defined(__AVR_ATtiny402__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny404__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny406__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny412__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny414__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny416__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny416auto__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny417__)
#define RAMSTART 0x3f00
#define RAMSIZE  0x0100

#elif defined(__AVR_ATtiny424__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny426__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny427__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny804__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny806__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny807__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny814__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny816__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny817__)
#define RAMSTART 0x3e00
#define RAMSIZE  0x0200

#elif defined(__AVR_ATtiny824__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny826__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny827__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny1604__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny1606__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny1607__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATtiny1614__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny1616__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny1617__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny1624__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny1626__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny1627__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny3214__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny3216__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny3217__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATtiny3224__)
#define RAMSTART 0x3400
#define RAMSIZE  0x0c00

#elif defined(__AVR_ATtiny3226__)
#define RAMSTART 0x3400
#define RAMSIZE  0x0c00

#elif defined(__AVR_ATtiny3227__)
#define RAMSTART 0x3400
#define RAMSIZE  0x0c00

#elif defined(__AVR_ATmega808__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega809__)
#define RAMSTART 0x3c00
#define RAMSIZE  0x0400

#elif defined(__AVR_ATmega1608__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega1609__)
#define RAMSTART 0x3800
#define RAMSIZE  0x0800

#elif defined(__AVR_ATmega3208__)
#define RAMSTART 0x3000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega3209__)
#define RAMSTART 0x3000
#define RAMSIZE  0x1000

#elif defined(__AVR_ATmega4808__)
#define RAMSTART 0x2800
#define RAMSIZE  0x1800

#elif defined(__AVR_ATmega4809__)
#define RAMSTART 0x2800
#define RAMSIZE  0x1800

#elif defined(__AVR_AVR8EA28__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AVR8EA32__)
#define RAMSTART     -1
#define RAMSIZE      -1

#elif defined(__AVR_AVR16DD14__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16DD20__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16DD28__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16EA28__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16DD32__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16EA32__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR16EA48__)
#define RAMSTART 0x7800
#define RAMSIZE  0x0800

#elif defined(__AVR_AVR32DD14__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DD20__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DA28__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DB28__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DD28__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32EA28__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DA32__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DB32__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DD32__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32EA32__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DA48__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32DB48__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR32EA48__)
#define RAMSTART 0x7000
#define RAMSIZE  0x1000

#elif defined(__AVR_AVR64DD14__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DD20__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DA28__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DB28__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DD28__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64EA28__)
#define RAMSTART 0x6800
#define RAMSIZE  0x1800

#elif defined(__AVR_AVR64DA32__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DB32__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DD32__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64EA32__)
#define RAMSTART 0x6800
#define RAMSIZE  0x1800

#elif defined(__AVR_AVR64DA48__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DB48__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64EA48__)
#define RAMSTART 0x6800
#define RAMSIZE  0x1800

#elif defined(__AVR_AVR64DA64__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR64DB64__)
#define RAMSTART 0x6000
#define RAMSIZE  0x2000

#elif defined(__AVR_AVR128DA28__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DB28__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DA32__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DB32__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DA48__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DB48__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DA64__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#elif defined(__AVR_AVR128DB64__)
#define RAMSTART 0x4000
#define RAMSIZE  0x4000

#endif
#endif
