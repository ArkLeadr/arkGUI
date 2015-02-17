//
//  arkAbstractMediator.h
//  arkGUI
//
//  Created by anthonycouret on 17/02/2015.
//  Copyright (c) 2015 ac. All rights reserved.
//

#ifndef __arkGUI__arkAbstractMediator__
#define __arkGUI__arkAbstractMediator__

#include <memory>

class arkAbstractMediator;
typedef std::shared_ptr<arkAbstractMediator> arkAbstractMediatorShPtr;
typedef std::weak_ptr<arkAbstractMediator> arkAbstractMediatorWkPtr;

class arkAbstractMediator
{
    public :
    
    virtual void setTesselationFactor( float tesselation_factor ) = 0;
    virtual void setDispFactor( float disp_factor ) = 0;
    virtual void setNbSamples( int nb_samples ) = 0;
    
    virtual void loadModel( const std::string & model_path ) = 0;
    virtual void loadTexture( const std::string & tex_path ) = 0;
    virtual void loadEnvTexture( const std::string & env_path ) = 0;
    virtual void loadIrradianceMap( const std::string & irr_path ) = 0;
    
    virtual void setStandardRendering() = 0;
    virtual void setWireframeRendering() = 0;
    virtual void setDepthRendering() = 0;
    
    virtual void setLEADRMode( bool leadr_mode ) = 0;
    virtual void setNormalMode( bool normal_mode ) = 0;
};

#endif /* defined(__arkGUI__arkAbstractMediator__) */
