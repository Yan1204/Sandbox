#version 130                                                                     

in vec3 Position;   
in vec3 Normal;   
in vec2 Tex;

uniform mat4 gWVP;    
uniform mat4 gWorld;
uniform int sandboxMode;

out vec3 Position_FS_in;
out vec3 Normal_FS_in;
out vec3 WorldPos_FS_in;
out vec2 TexCoord_FS_in;

out vec2 flowCoords, rippleCoords;
out vec4 projCoords;

uniform int timer;

mat4 OrthoMatrix(float left,float right, float bottom, float top, float zNear, float zFar)
{
        float tx = - ( (right + left) / (right - left) );
        float ty = - ( (top + bottom) / (top - bottom) );
        float tz = - ( (zFar + zNear) / (zFar - zNear) );


        return mat4(2.0 / (right - left), 0.0, 0.0, tx,
                                0.0, 2.0 / (top - bottom), 0.0, ty,
                                0.0, 0.0, -2.0 / (zFar - zNear), tz,
                                0.0, 0.0, 0.0, 1.0);
}

	                                                                    
void main()                                                                         
{    
  Position_FS_in = 255.0 * Position;

  if (sandboxMode == 1)
  {
        gl_Position = OrthoMatrix(-1.0, 1.0, -1.0, 1.0, -2.0, 2.0) * vec4(Position.x, Position.y, Position.z, 1.0);
  }
  else
  {
        gl_Position = gWVP * vec4(Position.x, Position.y, Position.z, 1.0);
  }

  projCoords = OrthoMatrix(-1.0, 1.0, -1.0, 1.0, -2.0, 2.0) * vec4(Position.x, Position.y, Position.z, 1.0);

  vec2 t1 = vec2(timer * 0.0002, timer * 0.0002) ;
  vec2 t2 = vec2(timer * 0.00002, timer * 0.00002);

  flowCoords =   Tex.xy  * 0.8  + t1;
  rippleCoords = Tex.xy  * 0.02 + t2;
  
  Normal_FS_in   = normalize(vec3(gWorld * vec4(Normal, 0.0)).xyz); 
  WorldPos_FS_in = vec3(gWorld * vec4(Position, 1.0)).xyz;
  TexCoord_FS_in = Tex;
}
