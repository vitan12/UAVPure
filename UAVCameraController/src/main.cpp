//
//  main.cpp
//  UAVCameraController
//
//  Created by Vishal Sriram on 4/7/19.
//  Copyright © 2019 Vishal Sriram. All rights reserved.
//

#include <iostream>
#include "file_io.h"
#include <stdlib.h>     //for using the function sleep
#include <sstream>
#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    for (int j = 0; j < 1000; ++j) {
        system("bash_sript.sh");
        
        for (int i = 0; i < 10; ++i) {
            std::ostringstream sstream;
            sstream << "testImage" << i << ".jpg";
            std::string fileName = sstream.str();
            sleep(1000);
            
            if (FileIO::LoadFromFile(fileName)) {
                sleep(5000);
                continue;
            } else {
                std::cout << "Image " << i << " was not captured for round " << j << std::endl;
            }
        }
    }
}
