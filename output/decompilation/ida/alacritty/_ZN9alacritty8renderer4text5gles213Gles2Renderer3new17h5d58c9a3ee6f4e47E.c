void __fastcall __noreturn alacritty::renderer::text::gles2::Gles2Renderer::new(__int64 a1, char a2, char a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rax
  char **v7; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-D0h]
  __int64 v9; // [rsp+20h] [rbp-C8h]
  __int128 v10; // [rsp+28h] [rbp-C0h]
  const char *v11; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-98h]
  const char *v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+60h] [rbp-88h]
  __int64 v15; // [rsp+68h] [rbp-80h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v7 = &off_883DB8;
    v8 = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    v11 = aAlacrittyRende;
    v12 = 32LL;
    v13 = aAlacrittyRende;
    v14 = 32LL;
    v15 = log::__private_api::loc(&off_883DE8);
    log::__private_api::log(&v7, 3LL, &v11);
  }
  if ( a2 )
  {
    v4 = 1;
    if ( !(unsigned __int8)alacritty::renderer::GlExtensions::contains(aGlExtBlendFunc, 26LL) )
      v4 = alacritty::renderer::GlExtensions::contains(aGlArbBlendFunc, 26LL);
  }
  else
  {
    v4 = 0;
  }
  if ( a3 && (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    v7 = &off_883DC8;
    v8 = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    v5 = log::__private_api::loc(&off_883E00);
    v11 = aAlacrittyRende;
    v12 = 32LL;
    v13 = aAlacrittyRende;
    v14 = 32LL;
    v15 = v5;
    log::__private_api::log(&v7, 3LL, &v11);
  }
  if ( v4 )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
    {
      v7 = &off_883DD8;
      v8 = 1LL;
      v9 = 8LL;
      v10 = 0LL;
      v6 = log::__private_api::loc(&off_883E18);
      v11 = aAlacrittyRende;
      v12 = 32LL;
      v13 = aAlacrittyRende;
      v14 = 32LL;
      v15 = v6;
      log::__private_api::log(&v7, 3LL, &v11);
    }
  }
  alacritty::renderer::text::gles2::TextShaderProgram::new(&v7, v4);
}