#include "K8055Adapter.h"

int main(int argc, char ** argv)
{
	K8055Adapter * carteES = K8055Adapter::getInstance();

	carteES->OpenDevice(0);
	
	// Op�rations sur la carte (lectures / �critures)

	carteES->CloseDevice();
	K8055Adapter::freeInstance();

	return 0;
}