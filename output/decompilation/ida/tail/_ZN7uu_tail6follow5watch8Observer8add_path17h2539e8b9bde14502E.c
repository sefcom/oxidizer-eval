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
  __int64 v11; // r15
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r12
  _BYTE v16[8]; // [rsp+8h] [rbp-280h] BYREF
  __int64 v17; // [rsp+10h] [rbp-278h]
  __int64 v18; // [rsp+18h] [rbp-270h]
  __int64 v19; // [rsp+20h] [rbp-268h]
  __int64 v20; // [rsp+28h] [rbp-260h] BYREF
  _QWORD src[21]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v22; // [rsp+100h] [rbp-188h] BYREF
  _QWORD v23[21]; // [rsp+108h] [rbp-180h] BYREF
  _BYTE dest[168]; // [rsp+1B0h] [rbp-D8h] BYREF

  v19 = a5;
  if ( *(_BYTE *)(a1 + 142) == 2 )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(a6, a7);
  }
  else
  {
    if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3) )
    {
      std::path::Path::to_path_buf(v16, a2, a3);
    }
    else
    {
      std::env::current_dir(&v20);
      if ( v20 == 0x8000000000000000LL )
      {
        v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(src[0]);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(a6, a7);
        return v11;
      }
      v22 = v20;
      v23[0] = src[0];
      v23[1] = src[1];
      std::path::Path::join(v16, src[0], src[1], a2, a3);
      core::ptr::drop_in_place<std::path::PathBuf>(&v22);
    }
    v13 = v17;
    v14 = v18;
    std::fs::metadata(&v20, v17, v18);
    v15 = v20;
    if ( v20 == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v20);
      v13 = v17;
      v14 = v18;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
    }
    v22 = v15;
    memcpy(v23, dest, sizeof(v23));
    uu_tail::follow::files::PathData::new(&v20, a6, a7, &v22, a4, v19);
    uu_tail::follow::files::FileHandling::insert(a1 + 56, v13, v14, &v20, a8);
    core::ptr::drop_in_place<std::path::PathBuf>(v16);
  }
  return 0LL;
}
