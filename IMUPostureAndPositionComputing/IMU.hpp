////
////  main2.hpp
////  IMUPostureAndPositionComputing
////
////  Created by wzb on 2023/8/8.
////
//
//#ifndef _IMU_H_
//#define _IMU_H_
////#include  "stm32f1xx_hal.h"
//
//
//#define G            9.80665f                  // m/s^2
//#define RadtoDeg    57.324841f                //弧度到角度 (弧度 * 180/3.1415)
//#define DegtoRad    0.0174533f                //角度到弧度 (角度 * 3.1415/180)
//
////三轴浮点型
//typedef struct
//{
//    int X;
//    int Y;
//    int Z;
//}FLOAT_XYZ;
//
////姿态解算后的角度
//typedef struct
//{
//    float rol;
//    float pit;
//    float yaw;
//}FLOAT_ANGLE;
//
//extern FLOAT_XYZ     Acc,Acc_out,Gyro;                  //把陀螺仪的各通道读出的数据，转换成弧度制
//extern FLOAT_ANGLE Att_Angle;
//void Prepare_Data(FLOAT_XYZ *acc_in,FLOAT_XYZ *acc_out);
//void IMUupdate(FLOAT_XYZ *Gyr_rad,FLOAT_XYZ *Acc_filt,FLOAT_ANGLE *Att_Angle);
//
//#endif
//
// dev_test1
// dev_test2
