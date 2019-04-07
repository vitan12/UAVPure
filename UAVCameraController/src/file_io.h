//
//  file_reader.hpp
//  UAVCameraController
//
//  Created by Vishal Sriram on 4/1/19.
//  Copyright © 2019 Vishal Sriram. All rights reserved.
//

#ifndef file_io_h
#define file_io_h

#include <stdio.h>
#include <string>
#include <vector>
#include "picture_meta.hpp"

class FileIO {
public:
    
    /**
     * The current file format being checked before parsing.
     */
    const static std::string FileFormat;
    
    /**
     * Saves a board as a string to file with the file format tag on top of the file.
     * @param puzzles A vector of puzzles to be saved
     * @param filename The filename where the solutions should be stored.
     * @return 0 if successful.
     */
    static int SaveToFile(std::vector<uav::PictureMeta> imageInfo, std::string filename);
    
    /**
     * Grabs all the boards in a file, given it has the right filetype as determined by FileFormat.
     * @param filename The filename where the puzzles should be read from.
     * @return a vector with all the puzzles, empty if the file was invalid.
     */
    static bool LoadFromFile(std::string filename);
};
#endif /* file_reader_hpp */
