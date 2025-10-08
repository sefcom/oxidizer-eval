void __fastcall __noreturn alacritty::renderer::Renderer::new(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  _QWORD v4[99]; // [rsp+2C0h] [rbp-318h] BYREF

  v2 = alacritty::renderer::GL_FUNS_LOADED;
  alacritty::renderer::GL_FUNS_LOADED = 1;
  if ( !v2 )
  {
    v4[0] = <glutin::context::PossiblyCurrentContext as glutin::display::GetGlDisplay>::display(a2);
    v4[1] = v3;
    alacritty::gl::load_with(v4);
    core::ptr::drop_in_place<glutin::display::Display>(v4);
  }
  alacritty::renderer::gl_get_string(v4, 35724LL, aShaderVersion_0, 14LL);
}