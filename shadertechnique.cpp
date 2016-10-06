#include "shadertechnique.h"

void ShaderTechnique::loadFile(const char* fn, string& str)
{
    ifstream in(fn);
    if(!in.is_open())
    {
        cout << "The file " << fn << " cannot be opened\n";
        return;
    }
    else
        cout << "The file " << fn << " opened successfully" << endl;
        char tmp[300];

    while(!in.eof())
    {
        in.getline(tmp,300);
        str+=tmp;
        str+='\n';
    }
}

unsigned int ShaderTechnique::loadShader(string& source,unsigned int mode)
{
    unsigned int id;
    id=glCreateShader(mode);
    const char* csource=source.c_str();
    glShaderSource(id,1,&csource,NULL);
    glCompileShader(id);
    char error[1000];
    glGetShaderInfoLog(id,1000,NULL,error);
    cout << "Compile status: \n" << error << endl;
    return id;
}

void ShaderTechnique::CreateShaderProgram(const char* vname, const char* fname)
{
    string source;
    loadFile(vname,source);
    v=loadShader(source,GL_VERTEX_SHADER);
    source="";
    loadFile(fname,source);
    f=loadShader(source,GL_FRAGMENT_SHADER);

    p=glCreateProgram();
    glAttachShader(p,v);
    glAttachShader(p,f);

    glLinkProgram(p);

    GLint Success = 0;
    GLchar ErrorLog[1024] = { 0 };

    glGetProgramiv(p, GL_LINK_STATUS, &Success);
    if (Success == 0)
        {
    glGetProgramInfoLog(p, sizeof(ErrorLog), NULL, ErrorLog);
    fprintf(stderr, "Error linking shader program: '%s'\n", ErrorLog);
    //exit(1);
        }
    else
        cout << "Shader program linked successfully" << "\n";

    glValidateProgram(p);
    glGetProgramiv(p, GL_VALIDATE_STATUS, &Success);
    if (!Success)
        {
    glGetProgramInfoLog(p, sizeof(ErrorLog), NULL, ErrorLog);
    fprintf(stderr, "Invalid shader program: '%s'\n", ErrorLog);
    //exit(1);
        }
    else
        cout << "Shader program validated successfully" << endl;

}


ShaderTechnique::ShaderTechnique(string vname, string fname)
{
    initializeOpenGLFunctions();
    CreateShaderProgram(vname.c_str(), fname.c_str());

}

