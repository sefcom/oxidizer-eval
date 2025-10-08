__int64 __fastcall uu_tail::follow::watch::Observer::add_path(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v9; // r13
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r12
  _QWORD v18[3]; // [rsp+0h] [rbp-288h] BYREF
  __int64 v19; // [rsp+18h] [rbp-270h]
  __int64 v20; // [rsp+20h] [rbp-268h]
  __int64 v21; // [rsp+28h] [rbp-260h] BYREF
  _QWORD src[21]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v23; // [rsp+100h] [rbp-188h] BYREF
  _BYTE v24[168]; // [rsp+108h] [rbp-180h] BYREF
  _BYTE dest[168]; // [rsp+1B0h] [rbp-D8h] BYREF

  v20 = a4;
  v9 = a7;
  if ( *(_BYTE *)(a1 + 142) == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a6, a7);
  }
  else
  {
    v19 = a5;
    if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3) )
    {
      std::path::Path::to_path_buf(v18, a2, a3);
    }
    else
    {
      std::env::current_dir(&v21);
      v11 = v21;
      v12 = src[0];
      if ( __OFSUB__(-v21, 1LL) )
      {
        v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(src[0]);
        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a6, a7);
        return v13;
      }
      std::path::Path::join(v18, src[0], src[1], a2, a3);
      core::ptr::drop_in_place<std::path::PathBuf>(v11, v12);
      v9 = a7;
    }
    v15 = v18[1];
    v16 = v18[2];
    std::fs::metadata(&v21);
    v17 = v21;
    if ( v21 == 2 )
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v21);
    else
      memcpy(dest, src, sizeof(dest));
    v23 = v17;
    memcpy(v24, dest, sizeof(v24));
    uu_tail::follow::files::PathData::new(&v21, a6, v9, &v23, v20, v19);
    uu_tail::follow::files::FileHandling::insert((_QWORD *)(a1 + 56), v15, v16, (__int64)&v21, a8);
    core::ptr::drop_in_place<std::path::PathBuf>(v18[0], v15);
  }
  return 0LL;
}