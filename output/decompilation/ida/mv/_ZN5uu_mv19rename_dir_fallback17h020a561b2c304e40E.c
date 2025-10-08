__int64 __fastcall uu_mv::rename_dir_fallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD v16[3]; // [rsp+10h] [rbp-248h] BYREF
  __int128 v17; // [rsp+28h] [rbp-230h] BYREF
  __int128 v18; // [rsp+38h] [rbp-220h]
  __int128 v19; // [rsp+48h] [rbp-210h]
  _QWORD v20[2]; // [rsp+58h] [rbp-200h] BYREF
  int v21; // [rsp+68h] [rbp-1F0h]
  _QWORD v22[2]; // [rsp+70h] [rbp-1E8h] BYREF
  _OWORD v23[3]; // [rsp+80h] [rbp-1D8h] BYREF
  _OWORD dest[11]; // [rsp+B8h] [rbp-1A0h] BYREF
  _BYTE v25[24]; // [rsp+168h] [rbp-F0h] BYREF
  _OWORD src[9]; // [rsp+180h] [rbp-D8h] BYREF
  _BYTE v27[72]; // [rsp+210h] [rbp-48h] BYREF

  std::fs::metadata(dest);
  v9 = dest[0];
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a3);
  if ( v9 != 2 )
  {
    v10 = std::fs::remove_dir_all(a3, a4);
    if ( v10 )
      return v10;
  }
  v20[0] = 64000LL;
  v21 = (int)&stru_10000;
  v20[1] = 0LL;
  v11 = a2;
  fs_extra::dir::get_size(dest, a1, a2);
  if ( !__OFSUB__(0LL, *(_QWORD *)&dest[0]) )
  {
    core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(dest);
    goto LABEL_7;
  }
  if ( !a5 )
  {
LABEL_7:
    v16[0] = 0LL;
    goto LABEL_8;
  }
  v12 = *((_QWORD *)&dest[0] + 1);
  indicatif::style::ProgressStyle::with_template(dest, aMsgElapsedPrec, 64LL);
  core::result::Result<T,E>::unwrap(src, dest, &off_141A70);
  indicatif::progress_bar::ProgressBar::new(&v17, v12);
  memcpy(dest, src, 0x88uLL);
  indicatif::progress_bar::ProgressBar::with_style(v27, &v17, dest);
  indicatif::multi::MultiProgress::add(v16, a5, v27);
  v11 = a2;
LABEL_8:
  uucore::features::fsxattr::retrieve_xattrs(dest, a1, v11);
  if ( *(_QWORD *)&dest[0] )
  {
    v23[2] = dest[2];
    v23[1] = dest[1];
    v23[0] = dest[0];
  }
  else
  {
    uu_mv::rename_dir_fallback::{{closure}}(v23, *((_QWORD *)&dest[0] + 1));
  }
  if ( v16[0] )
    fs_extra::dir::move_dir_with_progress((unsigned int)&v17, a1, v11, a3, a4, (unsigned int)v20, (__int64)v16);
  else
    fs_extra::dir::move_dir(&v17, a1, v11, a3, a4, v20);
  v10 = uucore::features::fsxattr::apply_xattrs(a3, a4, v23);
  if ( v10 )
  {
    core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&v17);
  }
  else if ( (_QWORD)v17 == 0x8000000000000000LL )
  {
    v10 = 0LL;
  }
  else
  {
    src[1] = v18;
    src[2] = v19;
    src[0] = v17;
    if ( *((_QWORD *)&v18 + 1) == 0x8000000000000001LL )
    {
      v13 = std::io::error::Error::new(1LL, aPermissionDeni, 17LL);
    }
    else
    {
      v22[0] = src;
      v22[1] = <fs_extra::error::Error as core::fmt::Debug>::fmt;
      *(_QWORD *)&dest[0] = &unk_1FC00;
      *((_QWORD *)&dest[0] + 1) = 1LL;
      *(_QWORD *)&dest[2] = 0LL;
      *(_QWORD *)&dest[1] = v22;
      *((_QWORD *)&dest[1] + 1) = 1LL;
      core::option::Option<T>::map_or_else(v25, dest);
      v13 = std::io::error::Error::new(40LL, v25);
    }
    v10 = v13;
    core::ptr::drop_in_place<fs_extra::error::Error>(src);
  }
  core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(v16);
  return v10;
}