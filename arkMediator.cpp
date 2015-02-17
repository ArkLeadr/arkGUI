//
//  arkMediator.cpp
//  arkGUI
//
//  Created by anthonycouret on 17/02/2015.
//  Copyright (c) 2015 ac. All rights reserved.
//

#include "arkMediator.h"

arkMediatorShPtr arkMediator::create( Renderer * renderer )
{
    arkMediatorShPtr arkMediator_sh_ptr( new arkMediator( renderer ) );
    arkMediator_sh_ptr->m_weak_ptr = arkMediator_sh_ptr;
    return arkMediator_sh_ptr;
}

arkMediator::arkMediator( Renderer * renderer )
{
    m_renderer = renderer;
}

arkMediator::~arkMediator()
{
}

void arkMediator::setTesselationFactor( float tesselation_factor )
{
    m_tesselation_factor = tesselation_factor;
    m_renderer->setTesselationFactor( m_tesselation_factor );
}

void arkMediator::setDispFactor( float disp_factor )
{
    m_disp_factor = disp_factor;
    m_renderer->setDispFactor( m_disp_factor );
}

void arkMediator::setNbSamples( int nb_samples )
{
    m_nb_samples = nb_samples;
    m_renderer->setNbSamples( m_nb_samples );
}

void arkMediator::loadModel( const std::string & model_path )
{
    m_renderer->loadModel( model_path );
}

void arkMediator::loadTexture( const std::string & tex_path )
{
    m_renderer->loadTexture( tex_path );
}

void arkMediator::loadEnvTexture( const std::string & env_path )
{
    m_renderer->loadEnvTexture( env_path );
}

void arkMediator::loadIrradianceMap( const std::string & irr_path )
{
    m_renderer->loadIrradianceMap( irr_path );
}

void arkMediator::setStandardRendering()
{
    m_renderer->setStandardRendering();
}

void arkMediator::setWireframeRendering()
{
    m_renderer->setWireframeRendering();
}

void arkMediator::setDepthRendering()
{
    m_renderer->setDepthRendering();
}

void arkMediator::setLEADRMode( bool leadr_mode )
{
    m_renderer->setLEADRMode( leadr_mode );
}

void arkMediator::setNormalMode( bool normal_mode )
{
    m_renderer->setNormalMode( normal_mode );
}