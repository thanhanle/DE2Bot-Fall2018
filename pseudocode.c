void groundZero(void){
for(int i = 0; i<360; i++){
	if(distance(i)>7000){
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
	foundReflector(i);
	}
}
}


void foundReflector(int currentAngle){
	// our first data point should be near the others
	while(currentAngle<7000){
		// we're still in the reflector
		// see if the values are similar
		// look for a small dip
		// see if the values are similar
		// keep on moving
		// look for > 7000 i.e. the end of the reflector
		// rotate to that coordinate - 10 degrees or so
		// head towards it and stop when you get close
		// rotate left
		// follow the wall
		// rotate left
		// follow the desk
		// rotate right
		// get lit
	}
}
