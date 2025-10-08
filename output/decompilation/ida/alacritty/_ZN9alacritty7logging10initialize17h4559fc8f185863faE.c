__int64 __fastcall alacritty::logging::initialize(_QWORD *a1, _BYTE *a2, __int128 *a3)
{
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rsi
  _BOOL8 v8; // rax
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+8h] [rbp-190h] BYREF
  __int64 v14; // [rsp+18h] [rbp-180h]
  _OWORD dest[11]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE src[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v5 = (unsigned __int8)a2[483];
  v6 = (unsigned __int8)a2[484];
  v7 = 3LL;
  if ( v6 )
  {
    if ( v6 == 1 )
      goto LABEL_10;
    if ( v6 == 2 )
    {
      v7 = 4LL;
      goto LABEL_10;
    }
    v8 = (_BYTE)v5 == 1;
    v9 = (_BYTE)v5 == 0;
    v7 = 5LL;
  }
  else
  {
    if ( a2[480] )
      goto LABEL_10;
    v8 = (_BYTE)v5 == 1;
    v9 = (_BYTE)v5 == 0;
    v7 = 2LL;
  }
  if ( !v9 )
    v7 = v8;
LABEL_10:
  core::sync::atomic::atomic_store(&log::MAX_LOG_LEVEL_FILTER, v7, 0LL, v5);
  v10 = *a3;
  dest[1] = a3[1];
  dest[0] = v10;
  alacritty::logging::Logger::new(src, dest);
  alacritty::logging::Logger::file_path(&v13, src);
  memcpy(dest, src, sizeof(dest));
  v11 = alloc::boxed::Box<T>::new(dest);
  if ( (unsigned __int8)log::set_boxed_logger(v11, &off_883030) )
  {
    *a1 = 0x8000000000000001LL;
    return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v13);
  }
  else
  {
    result = v14;
    a1[2] = v14;
    *(_OWORD *)a1 = v13;
  }
  return result;
}