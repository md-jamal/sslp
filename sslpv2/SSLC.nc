

configuration SSLC
{

	provides interface SplitControl;
	provides interface ServiceLocation;

}


implementation
{
	components SSLP;
	SplitControl=SSLP;
	ServiceLocation=SSLP;
	
	components new UdpSocketC() as Send,
	new UdpSocketC() as Receive;

	SSLP.UDPSend -> Send;
	SSLP.UDPReceive  -> Receive;


	components new TimerMilliC() as Timer;
	SSLP.Timer->Timer;

	components new TimerMilliC() as SignalTimer;
	SSLP.SignalTimer->SignalTimer;

	components IPStackC;
	SSLP.RadioControl->IPStackC;

	components LedsC;
	SSLP.Leds->LedsC;

	components IPAddressC;
	SSLP.IPAddress->IPAddressC;

	components NodeC;
	SSLP.Node->NodeC;

	components Ieee154AddressC;
	SSLP.Ieee154Address->Ieee154AddressC;

}
