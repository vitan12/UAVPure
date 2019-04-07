
//
//  file_reader.cpp
//  UAVCameraController
//
//  Created by Vishal Sriram on 4/1/19.
//  Copyright © 2019 Vishal Sriram. All rights reserved.
//

#include "file_io.h"
#include <fstream>
#include <string>
#include <vector>

// File format
const std::string FileIO::FileFormat = "#uav.config";


int FileIO::SaveToFile(std::vector<uav::PictureMeta> imageInfo, std::string filename) {
    // If no filename is given, save to solutions.txt
    if (filename.empty()) {
        filename = "image_info.txt";
    }
    
    // If the file already exists, replace it.
    std::ofstream file(filename, std::ios::trunc);
    file << FileFormat << std::endl;
    
    // Loops through the vector and pushes it to the file
    for (int i = 0; i < imageInfo.size(); i++) {
        file << imageInfo[i] << std::endl;
    }
    
    file.close();
    return 0;
}

bool FileIO::LoadFromFile(std::string filename) {
    // Sets up the streams and the boolean check for the fileformater.
    std::ifstream file;
    
    file.open(filename);
    
    // Checks if the file is good
    return file.good();
}


