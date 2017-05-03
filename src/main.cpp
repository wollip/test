#include <iostream>
#include <unistd.h>

int main( void ){
	double progress = 0.0;
	while (progress < 1.0) {
	    int barWidth = 100;

	    std::cout << "[";
	    int pos = barWidth * progress;
	    for (int i = 0; i < barWidth; ++i) {
	        if (i < pos) std::cout << "-";
	        else if (i == pos) std::cout << ">";
	        else std::cout << " ";
	    }
	    std::cout << "] " << int(progress * 100.0) << " %\r";
	    std::cout.flush();
	
	    progress += 0.1; 
	
		usleep( 1000000 );
	}
	std::cout << std::endl;
}

