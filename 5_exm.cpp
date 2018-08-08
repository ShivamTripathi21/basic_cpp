#include<simplecpp>

main_program{

	int nsides;
	cout<<"Enter the number of sides: ";
	cin>>nsides;

	turtleSim();
		
	repeat(nsides){
		forward(50);
		left(360.0/nsides);
	}

	wait(5);
	

}
