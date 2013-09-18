

configuration TestAppC {


}


implementation {

	components TestC as TC;
	components SSLC;
  	TC.SSLPControl->SSLC;
    	components MainC;
   	TC.Boot->MainC;
	components LedsC;
	TC.Leds->LedsC;
	components NodeC;
	TC.Node->NodeC;
	#ifdef PRINTFUART_ENABLED	
	components PrintfC,SerialStartC;
	#endif
	TC.ServiceLocation->SSLC;

	components new UdpSocketC() as UDP;
	TC.UDP->UDP;

	components IPAddressC;
	TC.IPAddress->IPAddressC;
}
