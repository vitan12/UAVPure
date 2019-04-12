//
//  picture_meta.hpp
//  UAVCameraController
//
//  Created by Vishal Sriram on 4/7/19.
//  Copyright © 2019 Vishal Sriram. All rights reserved.
//

#ifndef picture_meta_hpp
#define picture_meta_hpp

#include <stdio.h>
#include <vector>

namespace uav {
    class PictureMeta {
        int Date;
        int Time;
        std::vector<int> positionTaken;
        int Velocity;
        
        friend std::ostream &operator << (std::ostream &os, const PictureMeta &info);
    };
}

#endif /* picture_meta_hpp */
