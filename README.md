# Arduino-HM10-Test

Pls check your HM-10 module is genuine
http://fab.cba.mit.edu/classes/863.15/doc/tutorials/programming/bluetooth/bluetooth40_en.pdf


## The circuit:
 * RX is digital pin 12 (connect to TX of other device)
 * TX is digital pin 13 (connect to RX of other device)
 * Console Display Set:No End Line

<br/>
# HM10 MODE SETTING<br/>
## Slave Mode<br/>
Step1:AT+RENEW<br/>
Step2:AT+RESET<br/>
Step3:AT+IBEA0<br/>
Step4:AT+ROLE0<br/>
Step5:AT+IMME1<br/>
Step6:AT+MODE2<br/>
Step7:AT+RESET<br/>


## HM10 Master connect HM10 Slave<br/>
Step1:DISC?<br/>
Step2:CONN?<br/>
Step3:AT+RSSI?<br/>


You can use my Android-HM10-DIST TEST APP to test (https://github.com/spyua/Android-HM10-DIST-TEST) 

If you use my app to connect HM10 module(Slave mode), and use HM10 sent "GET" to cell phone.
The cell phone will feedback the RSSI and DIST to HM10. The photo as below

![001](https://cloud.githubusercontent.com/assets/20264622/20243231/14a319ae-a98a-11e6-9d5a-f7cb98c7265a.png)
