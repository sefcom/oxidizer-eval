void __fastcall __noreturn alacritty::renderer::text::gles2::TextShaderProgram::new(__int64 a1, int a2)
{
  void *v2; // rcx
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF

  v2 = &unk_10516A;
  if ( a2 )
    v2 = &unk_105662;
  alacritty::renderer::shader::ShaderProgram::new((__int64)&v3, 1, 0, (int)v2, (int)aCellCoordsAttr, 1175LL);
}