
configuration NodeC{
	provides interface Node;
}

implementation{

	components NodeP;
	components SSLC;
	Node=NodeP;
	NodeP.ServiceLocation->SSLC;

	components new TimerMilliC() as Timer;
	NodeP.Timer -> Timer;

}
