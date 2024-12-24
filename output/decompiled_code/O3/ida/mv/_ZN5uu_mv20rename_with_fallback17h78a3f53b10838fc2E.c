__int64 __fastcall uu_mv::rename_with_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbp
  int v11; // ebp
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+10h] [rbp-278h] BYREF
  __int128 v18; // [rsp+28h] [rbp-260h] BYREF
  __int128 v19; // [rsp+38h] [rbp-250h]
  __int128 v20; // [rsp+48h] [rbp-240h]
  _QWORD v21[2]; // [rsp+58h] [rbp-230h] BYREF
  int v22; // [rsp+68h] [rbp-220h]
  _QWORD v23[2]; // [rsp+70h] [rbp-218h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp-208h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-1D8h]
  __int128 v28; // [rsp+C0h] [rbp-1C8h]
  int v29; // [rsp+D8h] [rbp-1B0h]
  __int128 v30; // [rsp+150h] [rbp-138h] BYREF
  __int128 v31; // [rsp+160h] [rbp-128h]
  __int128 v32; // [rsp+170h] [rbp-118h]
  _QWORD v33[4]; // [rsp+180h] [rbp-108h] BYREF
  _BYTE v34[24]; // [rsp+1A0h] [rbp-E8h] BYREF
  _BYTE v35[24]; // [rsp+1B8h] [rbp-D0h] BYREF
  _OWORD v36[11]; // [rsp+1D0h] [rbp-B8h] BYREF

  v23[0] = a1;
  v23[1] = a2;
  v24[0] = a3;
  v24[1] = a4;
  v8 = std::fs::rename();
  *(_QWORD *)&v26 = v8;
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v26);
  if ( !v8 )
    return 0LL;
  std::fs::symlink_metadata(&v26, a1, a2);
  if ( (_DWORD)v26 != 2 )
  {
    if ( (v29 & 0xF000) != 0x4000 )
    {
      if ( (v29 & 0xF000) == 0xA000 )
        return uu_mv::rename_symlink_fallback(a1, a2, a3, a4);
      if ( (unsigned __int8)std::path::Path::is_symlink(a3, a4) )
      {
        v12 = std::fs::remove_file(a3, a4);
        v33[0] = a3;
        v33[1] = a4;
        v33[2] = a1;
        v33[3] = a2;
        if ( v12 )
          return uu_mv::rename_with_fallback::{{closure}}(v33, v12);
      }
      if ( std::fs::copy(a1, a2, a3, a4) )
        return v14;
      v9 = uucore::features::fsxattr::copy_xattrs(v23, v24);
      if ( v9 )
        return v9;
      return std::fs::remove_file(a1, a2);
    }
    std::fs::metadata(&v26, a3, a4);
    v11 = v26;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
    if ( v11 != 2 )
    {
      v9 = std::fs::remove_dir_all(a3, a4);
      if ( v9 )
        return v9;
    }
    v22 = (int)&unk_10000;
    v21[0] = 64000LL;
    v21[1] = 0LL;
    fs_extra::dir::get_size(&v26, a1, a2);
    if ( (_QWORD)v26 == 0x8000000000000000LL )
    {
      if ( a5 )
      {
        indicatif::progress_bar::ProgressBar::new(&v18, *((_QWORD *)&v26 + 1));
        indicatif::style::ProgressStyle::with_template(&v26, aMsgElapsedPrec, 64LL);
        core::result::Result<T,E>::unwrap(v36, &v26, &off_1874C0);
        indicatif::progress_bar::ProgressBar::with_style(v34, &v18, v36);
        indicatif::multi::MultiProgress::add(v17, a5, v34);
LABEL_19:
        uucore::features::fsxattr::retrieve_xattrs(&v26, a1, a2);
        if ( (_QWORD)v26 )
        {
          v32 = v28;
          v31 = v27;
          v30 = v26;
        }
        else
        {
          uu_mv::rename_with_fallback::{{closure}}(&v30, *((_QWORD *)&v26 + 1));
        }
        if ( v17[0] )
          fs_extra::dir::move_dir_with_progress((unsigned int)&v18, a1, a2, a3, a4, (unsigned int)v21, (__int64)v17);
        else
          fs_extra::dir::move_dir(&v18, a1, a2, a3, a4, v21);
        v28 = v32;
        v27 = v31;
        v26 = v30;
        v15 = uucore::features::fsxattr::apply_xattrs(a3, a4, &v26);
        core::result::Result<T,E>::unwrap(v15);
        if ( (_QWORD)v18 != 0x8000000000000000LL )
        {
          v36[1] = v19;
          v36[2] = v20;
          v36[0] = v18;
          if ( *((_QWORD *)&v19 + 1) == 0x8000000000000001LL )
          {
            v16 = std::io::error::Error::new(1LL, aPermissionDeni, 17LL);
          }
          else
          {
            v25[0] = v36;
            v25[1] = <fs_extra::error::Error as core::fmt::Debug>::fmt;
            *(_QWORD *)&v26 = &unk_1C050;
            *((_QWORD *)&v26 + 1) = 1LL;
            *(_QWORD *)&v28 = 0LL;
            *(_QWORD *)&v27 = v25;
            *((_QWORD *)&v27 + 1) = 1LL;
            core::option::Option<T>::map_or_else(v35, &v26);
            v16 = std::io::error::Error::new(39LL, v35);
          }
          v9 = v16;
          core::ptr::drop_in_place<fs_extra::error::Error>(v36);
          core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(v17);
          return v9;
        }
        core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v18);
        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(v17);
        return 0LL;
      }
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v26);
    }
    v17[0] = 0LL;
    goto LABEL_19;
  }
  return *((_QWORD *)&v26 + 1);
}
