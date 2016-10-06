#ifndef SHADERTECHNIQUE_H
#define SHADERTECHNIQUE_H

#include "QOpenGLShaderProgram"
#include "QOpenGLFunctions"
#include "string"
#include "fstream"
#include "iostream"

using namespace std;

class ShaderTechnique : protected QOpenGLFunctions
{
public:
    ShaderTechnique(string vname, string fname);
    unsigned int p;
private:
    void loadFile(const char* fn, string& str);
    void CreateShaderProgram(const char* vname, const char* fname);
    unsigned int loadShader(string& source,unsigned int mode);
    unsigned int f;
    unsigned int v;

};

#endif // SHADERTECHNIQUE_H
