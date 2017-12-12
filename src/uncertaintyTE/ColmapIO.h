/* 
 * File:   ColmapIO.h
 * Author: Michal Polic
 *
 * Created on October 24, 2017, 2:33 PM
 */

#ifndef COLMAPIO_H
#define COLMAPIO_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "IO.h"
#include "Scene.h"


class ColmapIO : public IO {
public:
    // Construct & destruct
    ColmapIO();
    ~ColmapIO();
    
    // Functions and methods
    bool read(const std::string& input_dir, Scene& scene);
    bool readCameras(const std::string& file_path, Scene& scene);
    bool readImages(const std::string& file_path, Scene& scene);
    bool readPoints3D(const std::string& file_path, Scene& scene);
    
    bool write(const std::string& output_dir, Scene& scene);
    
    int data_type();
    
private:
    string _scene_path;
    int _data_type = SCENE_DATA;
};

#endif /* COLMAPIO_H */
