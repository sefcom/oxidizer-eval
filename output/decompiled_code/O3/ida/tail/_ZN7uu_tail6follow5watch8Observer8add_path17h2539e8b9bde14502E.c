        unsigned __int8 a8)
{
  __int64 v10; // r15
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r12
  _BYTE v15[8]; // [rsp+8h] [rbp-280h] BYREF
  __int64 v16; // [rsp+10h] [rbp-278h]
  __int64 v17; // [rsp+18h] [rbp-270h]
  __int64 v18; // [rsp+20h] [rbp-268h]
  __int64 v19; // [rsp+28h] [rbp-260h] BYREF
  _QWORD src[21]; // [rsp+30h] [rbp-258h] BYREF
  __int64 v21; // [rsp+100h] [rbp-188h] BYREF
  _QWORD v22[21]; // [rsp+108h] [rbp-180h] BYREF
  _BYTE dest[168]; // [rsp+1B0h] [rbp-D8h] BYREF

  v18 = a5;
  if ( *(_BYTE *)(a1 + 142) == 2 )
  {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(a6, a7);
  }
  else
  {
    if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3) )
    {
      std::path::Path::to_path_buf(v15, a2, a3);
    }
    else
    {
      std::env::current_dir(&v19);
      if ( v19 == 0x8000000000000000LL )
      {
        v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(src[0]);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(a6, a7);
        return v10;
      }
      v21 = v19;
      v22[0] = src[0];
      v22[1] = src[1];
      std::path::Path::join(v15, src[0], src[1], a2, a3);
      core::ptr::drop_in_place<std::path::PathBuf>(&v21);
    }
    v12 = v16;
    v13 = v17;
    std::fs::metadata(&v19, v16, v17);
    v14 = v19;
    if ( v19 == 2 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v19);
      v12 = v16;
      v13 = v17;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
    }
    v21 = v14;
    memcpy(v22, dest, sizeof(v22));
    uu_tail::follow::files::PathData::new(&v19);
    uu_tail::follow::files::FileHandling::insert(a1 + 56, v12, v13, &v19, a8);
    core::ptr::drop_in_place<std::path::PathBuf>(v15);
  }
  return 0LL;
}
