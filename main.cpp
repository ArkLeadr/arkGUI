//
//  main.cpp
//  arkGUI
//
//  Created by anthonycouret on 17/02/2015.
//  Copyright (c) 2015 ac. All rights reserved.
//

#include <iostream>
#include "Renderer.h"

#include <QApplication>

#include "arkMediator.h"
#include "arkMainWindow.h"

int main(int argc, char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int width = 640; int height = 480;
    
    Renderer renderer( width, height );
    
    QApplication application( argc, argv );
    
    arkMediatorShPtr mediator_shptr = arkMediator::create( &renderer );

    arkMainWindowShPtr main_window_shptr = arkMainWindow::create( width, height, mediator_shptr );
    
    main_window_shptr->show();
    
    return application.exec();
}
