

configuration TestAppC {


}


implementation {

	components TestC as TC;
    	components MainC;
   	TC.Boot->MainC;
	components LedsC;
	TC.Leds->LedsC;

	components NodeC;
	TC.Node->NodeC;

	#ifdef PRINTFUART_ENABLED	
	components PrintfC,SerialStartC;
	#endif
	components IPAddressC;
	TC.IPAddress->IPAddressC;
	
	components new TimerMilliC() as Timer;
	TC.Timer->Timer;	

	components IPStackC;
	TC.SplitControl->IPStackC;



	components SSLC;
	TC.SSLPControl->SSLC;
	TC.ServiceLocation -> SSLC;


}
