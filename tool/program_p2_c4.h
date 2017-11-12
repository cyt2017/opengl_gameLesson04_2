#ifndef PROGRAM_P2_C4_H
#define PROGRAM_P2_C4_H

#include "programid.h"

class PROGRAM_P2_C4 : public ProgramId
{
public:
    typedef int attribute;
    typedef int uniform;
public:
    attribute   _position;
    attribute   _color;//当颜色随着定点坐标改变时，需要把颜色变量设置为(attribute)局部变量
    attribute   _uv;
    uniform     _MVP;
    uniform     _texture;
    uniform     _texture1;//增加纹理,纹理不变，uv坐标变化
    uniform     _uvAnim;
public:
    PROGRAM_P2_C4();
    /// 初始化函数
    virtual bool    initialize();

    /**
    *   使用程序
    */
    virtual void    begin();
    /**
    *   使用完成
    */
    virtual void    end();
};

#endif // PROGRAM_P2_C4_H
