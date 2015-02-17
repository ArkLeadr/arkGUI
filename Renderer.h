//
//  Renderer.h
//  arkGUI
//
//  Created by anthonycouret on 17/02/2015.
//  Copyright (c) 2015 ac. All rights reserved.
//

#ifndef __arkGUI__Renderer__
#define __arkGUI__Renderer__

#include <string>

class Renderer
{
    public :
    
    Renderer( int width, int height );
    ~Renderer();
    
    void setTesselationFactor( float tesselation_factor );
    void setDispFactor( float disp_factor );
    void setNbSamples( int nb_samples );
    
    void loadModel( const std::string & model_path );
    void loadTexture( const std::string & tex_path );
    void loadEnvTexture( const std::string & env_path );
    void loadIrradianceMap( const std::string & irr_path );
    
    void setStandardRendering();
    void setWireframeRendering();
    void setDepthRendering();
    
    void setLEADRMode( bool leadr_mode );
    void setNormalMode( bool normal_mode );};

#endif /* defined(__arkGUI__Renderer__) */
