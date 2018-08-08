#include<simplecpp>

main_program{
	turtleSim();

	repeat(4){
		repeat(10){
			forward(10);
			penUp();
			forward(5);
			penDown();
		}
		left(90);
	}
	wait(10);


}
