#ifndef SKYBOX_H
#define SKYBOX_H

#include "QOpenGLShaderProgram"
#include "QOpenGLFunctions"
#include "pipeline.h"
#include "camera.h"
#include "shadertechnique.h"
#include "texture3D.h"


class Skybox : protected QOpenGLFunctions
{
public:

    Skybox();
    void render(Pipeline *p, Camera *c, int WINDOW_WIDTH, int WINDOW_HEIGHT);

    void setLeft(std::string FileName);
    void setRight(std::string FileName);
    void setTop(std::string FileName);
    void setBottom(std::string FileName);
    void setFront(std::string FileName);
    void setBack(std::string FileName);


private:
    Texture3D* texture;
    GLuint VBO;
    GLuint IBO;
    ShaderTechnique* skyboxTechnique;
    GLuint WVPLocation;
    GLuint textureLocation;
};

#endif // SKYBOX_H
