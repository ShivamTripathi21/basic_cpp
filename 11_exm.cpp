#include<simplecpp>

main_program{
   
   turtleSim();

   repeat(60){
	repeat(180){
		forward(0.2);
		left(360.0/360);	

	}
	right(135);
	forward(50);
	repeat(360){
		forward(0.2);
		left(360.0/360);
	}
	right(45);
	forward(50);
	right(135);
	repeat(180){
		forward(0.2);
		left(360.0/360);
	}

	left(360.0/60);

   }

	wait(15);

}
