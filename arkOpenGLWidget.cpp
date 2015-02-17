//
//  arkOpenGLWidget.cpp
//  arkGUI
//
//  Created by anthonycouret on 17/02/2015.
//  Copyright (c) 2015 ac. All rights reserved.
//

#include "arkOpenGLWidget.h"

arkOpenGLWidgetShPtr arkOpenGLWidget::create( QGLFormat format, arkAbstractMediatorShPtr mediator_shptr )
{
    arkOpenGLWidgetShPtr arkOpenGLWidget_sh_ptr( new arkOpenGLWidget( format, mediator_shptr ) );
    arkOpenGLWidget_sh_ptr->m_weak_ptr = arkOpenGLWidget_sh_ptr;
    return arkOpenGLWidget_sh_ptr;
}

arkOpenGLWidget::arkOpenGLWidget( QGLFormat format, arkAbstractMediatorShPtr mediator_shptr ) :
QGLWidget( format ),
arkMediatorWidget( mediator_shptr )
{
    
}

arkOpenGLWidget::~arkOpenGLWidget()
{
    
}