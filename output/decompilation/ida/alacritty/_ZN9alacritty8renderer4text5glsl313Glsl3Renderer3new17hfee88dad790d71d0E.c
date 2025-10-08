void __noreturn alacritty::renderer::text::glsl3::Glsl3Renderer::new()
{
  _QWORD v0[3]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v1; // [rsp+38h] [rbp-70h]
  _QWORD v2[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v0[0] = &off_883F50;
    v0[1] = 1LL;
    v0[2] = 8LL;
    v1 = 0LL;
    v2[0] = aAlacrittyRende_0;
    v2[1] = 32LL;
    v2[2] = aAlacrittyRende_0;
    v2[3] = 32LL;
    v2[4] = log::__private_api::loc(&off_883F60);
    log::__private_api::log(v0, 3LL, v2);
  }
  alacritty::renderer::text::glsl3::TextShaderProgram::new(v0);
}