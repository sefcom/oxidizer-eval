void __fastcall alacritty::renderer::rects::RectShaderProgram::update_uniforms(_DWORD *a1, __int64 a2)
{
  double v2; // xmm0_8

  *(_QWORD *)&v2 = *(unsigned int *)(a2 + 20);
  *(float *)&v2 = (float)(*(float *)&v2 - *(float *)(a2 + 36)) / *(float *)(a2 + 28);
  floorf(v2);
  if ( *a1 == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[2] == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[6] == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[4] == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[8] == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[10] == 1 )
    alacritty::gl::storage::Uniform1f();
  if ( a1[12] == 1 )
    alacritty::gl::storage::Uniform1f();
}