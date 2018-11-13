void groundZero(void){
for(int i = 0; i<360; i++){
	if(distance(i)>5000){
		// increment zero counter
		zeroCounter++;
	}
	else{
	// we hit a number that's not zero	
	zeroCounter=0;
	}
	if(zeroCounter > 3 && distance(i) > 100){
	// I think this means that we've had more than 3 zeros in a row, but you guys can fiddle with this number. Maybe put it on the 
	// sevenseg display
	// Start looking for the right reflector
	lookForReflector();
	}
}
}


void lookForReflector(void){
	// our first data point should be near our 
}
