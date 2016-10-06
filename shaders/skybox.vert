#version 130

in vec3 Position;   

out vec3 TexCoord;
uniform mat4 gWVP;    
   
                                                                                                                                  
void main()                                                                         
{    
                                                   
  vec4 WVP_pos = gWVP * vec4(Position, 1.0);                                    
  gl_Position = WVP_pos.xyww;    
  TexCoord = Position;        

}
