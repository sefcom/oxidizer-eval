__int64 __fastcall alacritty::daemon::spawn_daemon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rbx
  __m256i v13; // [rsp+8h] [rbp-160h] BYREF
  __int64 v14; // [rsp+28h] [rbp-140h] BYREF
  __int128 v15; // [rsp+30h] [rbp-138h]
  __int128 v16; // [rsp+40h] [rbp-128h]
  _BYTE v17[280]; // [rsp+50h] [rbp-118h] BYREF

  std::process::Command::new(v17, a1, a2);
  std::process::Command::args(v17, a3, a4);
  std::process::Command::stdin(v17);
  std::process::Command::stdout(v17);
  std::process::Command::stderr(v17);
  alacritty::daemon::foreground_process_path(&v13, a5, a6);
  v10 = v13.m256i_i64[0];
  if ( __OFSUB__(-v13.m256i_i64[0], 1LL) )
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,alloc::boxed::Box<dyn core::error::Error>>>(&v13);
  else
    v16 = *(_OWORD *)&v13.m256i_u64[1];
  v14 = v10;
  v15 = v16;
  <std::process::Command as std::os::unix::process::CommandExt>::pre_exec(v17, &v14);
  std::process::Command::spawn(&v13, v17);
  if ( v13.m256i_i32[0] == 1 )
  {
    v11 = v13.m256i_i64[1];
  }
  else
  {
    v13.m256i_i32[0] = v13.m256i_i32[1];
    *(__int64 *)((char *)v13.m256i_i64 + 4) = v13.m256i_i64[1];
    *(_OWORD *)((char *)&v13.m256i_u64[1] + 4) = *(_OWORD *)&v13.m256i_u64[2];
    std::process::Child::wait(&v14, &v13);
    if ( (_BYTE)v14 )
      v11 = v15;
    else
      v11 = 0LL;
    core::ptr::drop_in_place<std::process::Child>(&v13);
  }
  core::ptr::drop_in_place<std::process::Command>(v17);
  return v11;
}