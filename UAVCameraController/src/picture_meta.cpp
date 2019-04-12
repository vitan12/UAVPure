//
//  picture_meta.cpp
//  UAVCameraController
//
//  Created by Vishal Sriram on 4/7/19.
//  Copyright © 2019 Vishal Sriram. All rights reserved.
//

#include "picture_meta.hpp"
#include <iostream>

namespace uav {
    std::ostream &operator << (std::ostream &os, const PictureMeta &info) {
        //os << Date << Time << positionTaken << Velocity << std::endl;
        return os;
    }
}
