

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
	

	components IPStackC;
	SSLP.RadioControl->IPStackC;


	components new UdpSocketC() as Send,
	new UdpSocketC() as Receive;

	SSLP.UDPSend -> Send;
	SSLP.UDPReceive  -> Receive;


	components new TimerMilliC() as PrintTimer;
	SSLP.PrintTimer->PrintTimer;


	components new TimerMilliC() as RetransmitTimer;
	SSLP.RetransmitTimer->RetransmitTimer;
	components NodeC;
	SSLP.Node->NodeC;

	
	components IPAddressC;
	SSLP.IPAddress->IPAddressC;
}
