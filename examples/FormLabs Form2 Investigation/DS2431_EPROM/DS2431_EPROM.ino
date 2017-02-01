
#include <OneWire.h>

OneWire  ds(2);    // 1-wire on pin 2
byte     addr[8];  // Contains the eeprom unique ID
void setup(void)
{
 Serial.begin(9600);
}
 
void loop(void) 
{
 byte i;
#if 0
 byte dat_row1[8];
 byte dat_row2[8];
 byte dat_row3[8];
 byte dat_row4[8];
 byte dat_row5[8];
 byte dat_row6[8];
 byte dat_row7[8];
 byte dat_row8[8];
 byte dat_row9[8];
 byte dat_row10[8];
 byte dat_row11[8];
 byte dat_row12[8];
 byte dat_row13[8];
 byte dat_row14[8];
 byte dat_row15[8];
 byte dat_row16[8];

#endif

 SearchAddress(addr);

#if 0
 dat_row1[0] = 0x43;
 dat_row1[1] = 0x00;
 dat_row1[2] = 0x95;
 dat_row1[3] = 0x88;
 dat_row1[4] = 0x0F;
 dat_row1[5] = 0x93;
 dat_row1[6] = 0x39;
 dat_row1[7] = 0x06;


dat_row2[0] = 0x53;
dat_row2[1] = 0x6B;
dat_row2[2] = 0x25; 
dat_row2[3] = 0x8E; 
dat_row2[4] = 0xC4; 
dat_row2[5] = 0xA2; 
dat_row2[6] = 0x56; 
dat_row2[7] = 0xF2; 

dat_row3[0] = 0x23; 
dat_row3[1] = 0x4D; 
dat_row3[2] = 0x9B; 
dat_row3[3] = 0xD0; 
dat_row3[4] = 0x10; 
dat_row3[5] = 0x2C; 
dat_row3[6] = 0x27; 
dat_row3[7] = 0xB8;

dat_row4[0] = 0x05; 
dat_row4[1] = 0x70; 
dat_row4[2] = 0x98; 
dat_row4[3] = 0xC0; 
dat_row4[4] = 0xD6; 
dat_row4[5] = 0xD5; 
dat_row4[6] = 0xA7;
dat_row4[7] = 0x09;

dat_row5[0] = 0x19;
dat_row5[1] = 0x8F; 
dat_row5[2] = 0x47; 
dat_row5[3] = 0xCF; 
dat_row5[4] = 0x27; 
dat_row5[5] = 0x39; 
dat_row5[6] = 0xDD;
dat_row5[7] = 0xB0;
 
dat_row6[0] = 0x77; 
dat_row6[1] = 0x38; 
dat_row6[2] = 0x8B;
dat_row6[3] = 0xFF; 
dat_row6[4] = 0xFF; 
dat_row6[5] = 0xFF; 
dat_row6[6] = 0xFF; 
dat_row6[7] = 0xFF;
 
dat_row7[0] = 0xFF; 
dat_row7[1] = 0xFF; 
dat_row7[2] = 0xFF; 
dat_row7[3] = 0xFF; 
dat_row7[4] = 0xFF; 
dat_row7[5] = 0xFF; 
dat_row7[6] = 0xFF; 
dat_row7[7] = 0xFF;

dat_row8[0] = 0xFF;
dat_row8[1] = 0xFF; 
dat_row8[2] = 0xFF; 
dat_row8[3] = 0xFF; 
dat_row8[4] = 0xFF; 
dat_row8[5] = 0xFF; 
dat_row8[6] = 0xFF;
dat_row8[7] = 0xFF;

dat_row9[0] = 0x01;
dat_row9[1] = 0xF9; 
dat_row9[2] = 0x8C; 
dat_row9[3] = 0x31; 
dat_row9[4] = 0x89; 
dat_row9[5] = 0x57; 
dat_row9[6] = 0x26; 
dat_row9[7] = 0x1E;

dat_row10[0] = 0x75; 
dat_row10[1] = 0x62; 
dat_row10[2] = 0xC6; 
dat_row10[3] = 0x70; 
dat_row10[4] = 0x04; 
dat_row10[5] = 0x02; 
dat_row10[6] = 0x36; 
dat_row10[7] = 0x0A;

dat_row11[0] = 0xFF;
dat_row11[1] = 0xFF; 
dat_row11[2] = 0xFF; 
dat_row11[3] = 0xFF; 
dat_row11[4] = 0xFF; 
dat_row11[5] = 0xFF; 
dat_row11[6] = 0xFF;
dat_row11[7] = 0xFF;
 
dat_row12[0] = 0xFF;
dat_row12[1] = 0xFF; 
dat_row12[2] = 0xFF; 
dat_row12[3] = 0xFF; 
dat_row12[4] = 0xFF; 
dat_row12[5] = 0xFF; 
dat_row12[6] = 0xFF; 
dat_row12[7] = 0xFF; 

 
dat_row13[0] = 0xFF; 
dat_row13[1] = 0xFF; 
dat_row13[2] = 0xFF; 
dat_row13[3] = 0xFF; 
dat_row13[4] = 0xFF; 
dat_row13[5] = 0xFF; 
dat_row13[6] = 0xFF; 
dat_row13[7] = 0xFF;

dat_row14[0] = 0xFF; 
dat_row14[1] = 0xFF; 
dat_row14[2] = 0xFF; 
dat_row14[3] = 0xFF; 
dat_row14[4] = 0xFF; 
dat_row14[5] = 0xFF; 
dat_row14[6] = 0xFF; 
dat_row14[7] = 0xFF;
 
dat_row15[0] = 0xFF; 
dat_row15[1] = 0xFF; 
dat_row15[2] = 0xFF;
dat_row15[3] = 0xFF; 
dat_row15[4] = 0xFF; 
dat_row15[5] = 0xFF; 
dat_row15[6] = 0xFF; 
dat_row15[7] = 0xFF;
 
dat_row16[0] = 0xFF; 
dat_row16[1] = 0xFF; 
dat_row16[2] = 0xFF; 
dat_row16[3] = 0xFF; 
dat_row16[4] = 0xFF; 
dat_row16[5] = 0xFF; 
dat_row16[6] = 0xFF;
dat_row16[7] = 0xFF;
 





 
 
 WriteRow(0,dat_row1);
 WriteRow(1,dat_row2);
 WriteRow(2,dat_row3);
 WriteRow(3,dat_row4);
 WriteRow(4,dat_row5);
 WriteRow(5,dat_row6);
 WriteRow(6,dat_row7);
 WriteRow(7,dat_row8);
 WriteRow(8,dat_row9);
 WriteRow(9,dat_row10);
 WriteRow(10,dat_row11);
 WriteRow(11,dat_row12);
 WriteRow(12,dat_row13);
 WriteRow(13,dat_row14);
 WriteRow(14,dat_row15);
 WriteRow(15,dat_row16);

#endif

 ReadAllMem();    //print all mem content
 
 while(1);
}

void SearchAddress(byte* address) //Search for address and confirm it
{
 int i;
 if ( !ds.search(address))
 {
   Serial.print("No device found.\n");
   ds.reset_search();
   delay(250);
   return;
 }
 
 Serial.print("ADDR= ");
 for( i = 0; i < 8; i++)
 {
   Serial.print(address[i], HEX);
   Serial.print(" ");
 }

 if ( OneWire::crc8( address, 7) != address[7])
 {
     Serial.print("CRC is not valid, address is corrupted\n");
     return;
 }
 
 if ( address[0] != 0x2D) 
 {
     Serial.print("Device is not a 1-wire Eeprom.\n");
     return;
 }
 Serial.println();
}

void WriteReadScratchPad(byte TA1, byte TA2, byte* data)
{
 int i;
 Serial.print("WriteReadScratchPad.\n");
 ds.reset();
 ds.select(addr);
 ds.write(0x0F,1);  // Write ScratchPad
 ds.write(TA1,1); 
 ds.write(TA2,1); 
 for ( i = 0; i < 8; i++)
   ds.write(data[i],1);  
 
 ds.reset();
 ds.select(addr);    
 ds.write(0xAA);         // Read Scratchpad
 
 for ( i = 0; i < 13; i++)     
   data[i] = ds.read();
}

void CopyScratchPad(byte* data)
{
 Serial.print("CopyScratchPad.\n");
 ds.reset();
 ds.select(addr);
 ds.write(0x55,1);  // Copy ScratchPad
 ds.write(data[0],1); 
 ds.write(data[1],1);  // Send TA1 TA2 and ES for copy authorization
 ds.write(data[2],1); 
 delay(25); // Waiting for copy completion
 Serial.print("Copy done!\n");
}

void ReadAllMem()
{
 int i;
 Serial.print("ReadAllMem.\n");
 ds.reset();
 ds.select(addr);
 ds.write(0xF0,1);  // Read Memory
 ds.write(0x00,1);  //Read Offset 0000h
 ds.write(0x00,1);
 
 for ( i = 0; i < 128; i++) //whole mem is 144 
 {
   Serial.print(ds.read(), HEX);
   Serial.println(" ");
 }
 Serial.println();
}

void WriteRow(byte row, byte* buffer)
{
 int i;
 Serial.print("WriteRow.\n");
 if (row < 0 || row > 15) //There are 16 row of 8 bytes in the main memory
   return;                //The remaining are for the 64 bits register page
   
 WriteReadScratchPad(row*8, 0x00, buffer);
 
 /*  Print result of the ReadScratchPad */
 for ( i = 0; i < 13; i++) 
 {
   Serial.print(buffer[i], HEX);
   Serial.print(" ");
 }
 CopyScratchPad(buffer);
 
}
