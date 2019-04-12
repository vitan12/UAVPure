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
    system("snapPic.sh");
    std::string fileName = "testimage1";
    if (FileIO::LoadFromFile(fileName)) {
        std::cout << "Image was captured" << std::endl;
    } else {
        std::cout << "Image was not captured" << std::endl;
    }
}
