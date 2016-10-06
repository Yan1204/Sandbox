#ifndef TEXTURE3D_H
#define TEXTURE3D_H

#include "texture.h"

class Texture3D : public Texture
{
public:
    Texture3D(std::string right, std::string left, std::string front, std::string back, std::string bottom, std::string top, int _index);
    bool load();
    void setLeft(char* FileName);
    void setRight(char* FileName);
    void setTop(char* FileName);
    void setBottom(char* FileName);
    void setFront(char* FileName);
    void setBack(char* FileName);

private:
    char* m_left;
    char* m_right;
    char* m_top;
    char* m_bottom;
    char* m_front;
    char* m_back;
};

#endif // TEXTURE3D_H
