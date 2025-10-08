__int64 __fastcall uu_chmod::Chmoder::walk_dir(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  char v20; // [rsp+Ch] [rbp-BCh]
  __int64 v21; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B0h]
  __int64 v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+28h] [rbp-A0h]
  __int64 v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+38h] [rbp-90h]
  _QWORD v27[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+68h] [rbp-60h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  __int128 v33; // [rsp+80h] [rbp-48h]
  __int64 v34; // [rsp+90h] [rbp-38h]

  v4 = uu_chmod::Chmoder::chmod_file(a1, a2, a3);
  v6 = v5;
  v24 = a1;
  if ( *(_BYTE *)(a1 + 38) )
  {
    if ( *(_BYTE *)(a1 + 38) == 1 )
    {
      std::fs::canonicalize(v27, a2, a3);
      std::path::Path::to_path_buf(&v30, a2, a3);
      core::result::Result<T,E>::unwrap_or(&v21, v27, &v30);
      v7 = v22;
      v20 = <&std::path::Path as core::cmp::PartialEq<std::path::PathBuf>>::eq(a2, a3, v22, v23);
      core::ptr::drop_in_place<std::path::PathBuf>(v21, v7);
      if ( !((unsigned __int8)v20 | (unsigned __int8)std::path::Path::is_symlink(a2, a3) ^ 1) )
        return v4;
    }
    else
    {
      v20 = 1;
      std::path::Path::is_symlink(a2, a3);
    }
  }
  else
  {
    if ( (unsigned __int8)std::path::Path::is_symlink(a2, a3) )
      return v4;
    v20 = 0;
  }
  if ( (unsigned __int8)std::path::Path::is_dir(a2, a3) )
  {
    std::fs::read_dir(&v30, a2, a3);
    if ( (_BYTE)v31 == 2 )
    {
      v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
    }
    else
    {
      v9 = v4;
      v10 = v6;
      v25 = v30;
      v26 = v31;
      while ( 1 )
      {
        <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v30, &v25);
        if ( (_DWORD)v30 != 1 )
        {
          v4 = v9;
          core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
          return v4;
        }
        if ( !v31 )
          break;
        v29 = v34;
        v28 = v33;
        v27[0] = v31;
        v27[1] = v32;
        std::fs::DirEntry::path(&v21, v27);
        core::ptr::drop_in_place<std::fs::DirEntry>(v27);
        v13 = v22;
        v14 = v23;
        if ( (unsigned __int8)std::path::Path::is_symlink(v22, v23) )
        {
          if ( v20 )
          {
            v15 = uu_chmod::Chmoder::chmod_file(v24, v13, v14);
            v11 = core::result::Result<T,E>::and(v15, v16, v9, v10);
            v12 = v17;
          }
          else
          {
            v11 = v9;
            v12 = v10;
          }
        }
        else
        {
          v11 = uu_chmod::Chmoder::walk_dir(v24, v13, v14);
          v12 = v18;
          core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v9, v10);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v21, v22);
        v9 = v11;
        v10 = v12;
      }
      v6 = v10;
      v4 = v9;
      v8 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
      core::ptr::drop_in_place<std::fs::ReadDir>(&v25);
    }
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v4, v6);
    return v8;
  }
  return v4;
}