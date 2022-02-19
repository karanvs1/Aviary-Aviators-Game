//
//  AviatorsTester.cpp
//  Final Project Object Orineted
//
//  Created by Karan Veer Singh on 11/20/21.
//

#include <time.h>
#include <math.h>
#include "fssimplewindow.h"
#include "yssimplesound.h"
#include "yspng.h"
#include "ysglfontdata.h"
#include "AviatorsForSharing.h"

int main (void)
{
    AviatorsGame game;
    
    FsOpenWindow(0, 0, 800, 600, 1);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    srand(time(nullptr));
    
    for (int i =5; i <35 ;i+=5)
    {
        if(game.flag == 1)
        {
            break; 
        }
        
        game.Initialize(i);
        game.Run();
    }

}
