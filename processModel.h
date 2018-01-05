#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class proces{
	
	 private:
		//have to set random number see here
		srand (time(NULL));
		//
                int getPid(int max){
                         int pid = 0 
                         for (i = 1; i >= max; i++){
                                 pid = i;
                         }
                         return pid;
                 }
 
                int getBurstSize(){
                        int x = (rand() % 2000 + 10) / 10;
                 }	
	public:
		process(int pid, int burstSize);
	    ~process();
		
		int pid = getPID();
		int burst = getBurstSize();		
};
