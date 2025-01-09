__int64 __fastcall uu_mv::rename_with_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+10h] [rbp-278h] BYREF
  __int128 v19; // [rsp+28h] [rbp-260h] BYREF
  __int128 v20; // [rsp+38h] [rbp-250h]
  __int128 v21; // [rsp+48h] [rbp-240h]
  _QWORD v22[2]; // [rsp+58h] [rbp-230h] BYREF
  int v23; // [rsp+68h] [rbp-220h]
  _QWORD v24[2]; // [rsp+70h] [rbp-218h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-208h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-1D8h]
  __int128 v29; // [rsp+C0h] [rbp-1C8h]
  int v30; // [rsp+D8h] [rbp-1B0h]
  __int128 v31; // [rsp+150h] [rbp-138h] BYREF
  __int128 v32; // [rsp+160h] [rbp-128h]
  __int128 v33; // [rsp+170h] [rbp-118h]
  _QWORD v34[4]; // [rsp+180h] [rbp-108h] BYREF
  _BYTE v35[24]; // [rsp+1A0h] [rbp-E8h] BYREF
  _BYTE v36[24]; // [rsp+1B8h] [rbp-D0h] BYREF
  _OWORD v37[11]; // [rsp+1D0h] [rbp-B8h] BYREF

  v24[0] = a1;
  v24[1] = a2;
  v25[0] = a3;
  v25[1] = a4;
  v8 = std::fs::rename();
  *(_QWORD *)&v27 = v8;
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v27);
  if ( !v8 )
    return 0LL;
  std::fs::symlink_metadata(&v27, a1, a2);
  if ( (_DWORD)v27 == 2 )
    return *((_QWORD *)&v27 + 1);
  v10 = v30 & 0xF000;
  if ( v10 != 0x4000 )
  {
    if ( v10 == 40960 )
    {
      v11 = uu_mv::rename_symlink_fallback(a1, a2, a3, a4);
    }
    else
    {
      if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
      {
        v13 = std::fs::remove_file(a3, a4);
        v34[0] = a3;
        v34[1] = a4;
        v34[2] = a1;
        v34[3] = a2;
        if ( v13 )
          return uu_mv::rename_with_fallback::{{closure}}(v34, v13);
      }
      if ( std::fs::copy(a1, a2, a3, a4) )
      {
        v9 = v14;
        if ( v14 )
          return v9;
      }
      else
      {
        v9 = uucore::features::fsxattr::copy_xattrs(v24, v25);
        if ( v9 )
          return v9;
      }
      v11 = std::fs::remove_file(a1, a2);
    }
    v9 = v11;
    if ( v11 )
      return v9;
    return 0LL;
  }
  std::fs::metadata(&v27, a3, a4);
  v12 = v27;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v27);
  if ( v12 == 2 || (v9 = std::fs::remove_dir_all(a3, a4)) == 0 )
  {
    v23 = (int)&GCC_except_table493;
    v22[0] = 64000LL;
    v22[1] = 0LL;
    fs_extra::dir::get_size(&v27, a1, a2);
    if ( (_QWORD)v27 == 0x8000000000000000LL )
    {
      if ( a5 )
      {
        indicatif::progress_bar::ProgressBar::new(&v19, *((_QWORD *)&v27 + 1));
        indicatif::style::ProgressStyle::with_template(&v27, aMsgElapsedPrec, 64LL);
        core::result::Result<T,E>::unwrap(v37, &v27, &off_188250);
        indicatif::progress_bar::ProgressBar::with_style(v35, &v19, v37);
        indicatif::multi::MultiProgress::add(v18, a5, v35);
LABEL_20:
        uucore::features::fsxattr::retrieve_xattrs(&v27, a1, a2);
        if ( (_QWORD)v27 )
        {
          v33 = v29;
          v32 = v28;
          v31 = v27;
        }
        else
        {
          uu_mv::rename_with_fallback::{{closure}}(&v31, *((_QWORD *)&v27 + 1));
        }
        if ( v18[0] )
          fs_extra::dir::move_dir_with_progress((unsigned int)&v19, a1, a2, a3, a4, (unsigned int)v22, (__int64)v18);
        else
          fs_extra::dir::move_dir(&v19, a1, a2, a3, a4, v22);
        v29 = v33;
        v28 = v32;
        v27 = v31;
        v15 = uucore::features::fsxattr::apply_xattrs(a3, a4, &v27);
        core::result::Result<T,E>::unwrap(v15);
        if ( (_QWORD)v19 == 0x8000000000000000LL )
        {
          core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v19);
          core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(v18);
          return 0LL;
        }
        v37[1] = v20;
        v37[2] = v21;
        v37[0] = v19;
        if ( *((_QWORD *)&v20 + 1) == 0x8000000000000001LL )
        {
          v17 = std::io::error::Error::new(1LL, aPermissionDeni, 17LL);
        }
        else
        {
          v26[0] = v37;
          v26[1] = <fs_extra::error::Error as core::fmt::Debug>::fmt;
          *(_QWORD *)&v27 = &unk_1C350;
          *((_QWORD *)&v27 + 1) = 1LL;
          *(_QWORD *)&v29 = 0LL;
          *(_QWORD *)&v28 = v26;
          *((_QWORD *)&v28 + 1) = 1LL;
          core::option::Option<T>::map_or_else(v36, &v27);
          v17 = std::io::error::Error::new(39LL, v36);
        }
        v9 = v17;
        core::ptr::drop_in_place<fs_extra::error::Error>(v37);
        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(v18);
        return v9;
      }
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v27);
    }
    v18[0] = 0LL;
    goto LABEL_20;
  }
  return v9;
}
