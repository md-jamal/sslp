

configuration TestAppC {


}


implementation {

	components TestC as TC;
    	components MainC;
   	TC.Boot->MainC;
	components LedsC;
	TC.Leds->LedsC;

	#ifdef PRINTFUART_ENABLED	
	components PrintfC,SerialStartC;
	#endif
	components IPAddressC;
	TC.IPAddress->IPAddressC;
	
	components new TimerMilliC() as Timer;
	TC.Timer->Timer;	

	components IPStackC;
	TC.SplitControl->IPStackC;


	components SSLC_DA;
	TC.SSLPControl->SSLC_DA;


}
