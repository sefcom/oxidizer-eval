void __fastcall __noreturn alacritty::renderer::rects::RectShaderProgram::new(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3)
{
  _QWORD v3[15]; // [rsp+10h] [rbp-78h] BYREF

  alacritty::renderer::shader::ShaderProgram::new(
    v3,
    a2,
    qword_887838[a3],
    qword_F7850[a3],
    aIfDefinedGles2,
    297LL,
    &unk_103ECB,
    4382LL);
}