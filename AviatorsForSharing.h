//
//  AviatorsForSharing.h
//  Final Project Object Orineted
//
//  Created by Karan Veer Singh on 11/20/21.
//

#ifndef AviatorsForSharing_h
#define AviatorsForSharing_h

class AviatorsGame
{
public:
    YsSoundPlayer player;
    YsSoundPlayer::SoundData wav;
    YsRawPngDecoder background;
    YsRawPngDecoder aviator1;
    YsRawPngDecoder aviator2;
    YsRawPngDecoder aviator3;
    YsRawPngDecoder aviator4;
    YsRawPngDecoder enemy;
    YsRawPngDecoder boss;
    YsRawPngDecoder boss2;
    YsRawPngDecoder boost;
    //const values
    const double Pi = 3.14159265;
    const double scale = 10.0;
    const double dt = 0.025;
    const double g = 30;
    int number_enemies = 5;
    
    //intital positions
    int velocity = 10;
    double aviator_cannon_x = 5;
    double aviator_cannon_y = 7;
    double angle = 30.0;
    int aviator_state = 0;
    double aviator_x, aviator_y, vx =0, vy=0;
    int enemy_state[5];
    double enemy_x[5];
    double enemy_y[5];
    double enemy_w[5];
    double enemy_h[5];
    double enemy_velocity[5];
    double enemy_velocity_x[5];
    double enemy_velocity_y[5];
    double boss_x = 75.0;
    double boss_y = 60.0;
    double boss_vy;
    int lb,mb,rb,mx,my;
    double cos_theta, sin_theta;
    int flag = 0;
    int flag2 = 0;
    int level_indicator;
    

    void DrawAviatorCannon(double x,double y, YsRawPngDecoder &aviator1);
    void DrawBackground(double x,double y,YsRawPngDecoder &background);
    void DrawAviator(double x,double y,int state, YsRawPngDecoder &aviator1,YsRawPngDecoder &aviator2,YsRawPngDecoder &aviator3,YsRawPngDecoder &aviator4);
    void DrawBooster(double x, double y,int state, double vx, YsRawPngDecoder &boost);
    void DrawPowerBar(double x, double y, int v);
    void DrawEnemy(double x,double y,double w,double h, int state, YsRawPngDecoder &enemy);
    void DrawBoss(double x, double y, YsRawPngDecoder &boss, YsRawPngDecoder &boss2);
    int CheckCollision(double aviator_x, double aviator_y, double enemy_x[],
        double enemy_y[], double enemy_h[], double enemy_w[], int enemy_state[],
                       double boss_x, double boss_y);
    void Run(void);
    void Initialize(double x);
};

#endif /* AviatorsForSharing_h */
