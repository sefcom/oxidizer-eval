__int64 __fastcall uu_install::standard(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int128 v12; // kr00_16
  __int64 v13; // rax
  char v14; // bp
  __int64 v15; // rdx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int32 v20; // r15d
  __int64 v21; // rax
  __int64 dir_all; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  __int32 v26; // ebp
  __int32 v27; // r15d
  char **v29; // rdi
  __int128 v30; // [rsp+10h] [rbp-248h] BYREF
  __int64 v31; // [rsp+20h] [rbp-238h]
  __int64 v32; // [rsp+28h] [rbp-230h]
  __int64 v33; // [rsp+30h] [rbp-228h]
  _BYTE v34[24]; // [rsp+38h] [rbp-220h] BYREF
  __int64 v35; // [rsp+50h] [rbp-208h]
  __int64 v36; // [rsp+58h] [rbp-200h]
  _BYTE *v37; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v38; // [rsp+70h] [rbp-1E8h]
  _BYTE v39[24]; // [rsp+80h] [rbp-1D8h] BYREF
  char v40; // [rsp+98h] [rbp-1C0h]
  __int64 v41; // [rsp+A8h] [rbp-1B0h]
  __int64 v42; // [rsp+B0h] [rbp-1A8h]
  char v43[8]; // [rsp+B8h] [rbp-1A0h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-198h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-190h]
  __m256i dest; // [rsp+D0h] [rbp-188h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-168h]
  __int128 v48; // [rsp+100h] [rbp-158h]
  __int64 v49; // [rsp+180h] [rbp-D8h]
  _QWORD v50[2]; // [rsp+188h] [rbp-D0h] BYREF
  __int128 v51; // [rsp+198h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+1A8h] [rbp-B0h]
  __m256i v53; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+1D0h] [rbp-88h]
  __int128 v55; // [rsp+1E0h] [rbp-78h]
  _BYTE v56[104]; // [rsp+1F0h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v34, aMissingFileOpe, 20LL);
    dest.m256i_i64[2] = *(_QWORD *)&v34[16];
    *(_OWORD *)dest.m256i_i8 = *(_OWORD *)v34;
    dest.m256i_i32[6] = 1;
    v5 = alloc::boxed::Box<T>::new(&dest);
    goto LABEL_51;
  }
  v4 = *(_BYTE *)(a2 + 102);
  if ( ((v2 >= 3) & v4) != 0 )
  {
    <alloc::string::String as core::clone::Clone>::clone(v39, *(_QWORD *)(a1 + 8) + 48LL);
    uucore::format_usage(v34, aOptionFile, 24LL);
    dest.m256i_i64[3] = *(_QWORD *)&v39[16];
    *(_OWORD *)&dest.m256i_u64[1] = *(_OWORD *)v39;
    v47 = *(_OWORD *)v34;
    *(_QWORD *)&v48 = *(_QWORD *)&v34[16];
    dest.m256i_i64[0] = 17LL;
    v5 = alloc::boxed::Box<T>::new(&dest);
    goto LABEL_51;
  }
  v6 = *(_QWORD *)(a2 + 48);
  if ( !__OFSUB__(-v6, 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
    v31 = dest.m256i_i64[2];
    v30 = *(_OWORD *)dest.m256i_i8;
    v7 = *(_QWORD *)(a1 + 8);
LABEL_10:
    core::iter::traits::iterator::Iterator::collect(v43, v7, v7 + 24 * v2);
    if ( *(_BYTE *)(a2 + 101) )
    {
      if ( v6 == 0x8000000000000000LL )
      {
        if ( v45 > 1 )
          goto LABEL_33;
        if ( uu_install::is_potential_directory_path(*((__int64 *)&v30 + 1), v31) )
          goto LABEL_33;
        v9 = std::path::Path::parent(*((_QWORD *)&v30 + 1), v31);
        if ( !v9 )
          goto LABEL_33;
        v11 = v9;
      }
      else
      {
        v11 = *((_QWORD *)&v30 + 1);
        v10 = v31;
      }
      v33 = v11;
      v32 = v10;
      alloc::string::String::from_utf8_lossy(&dest);
      v49 = v6;
      v12 = *(_OWORD *)&dest.m256i_u64[1];
      *(_DWORD *)v34 = 0;
      v13 = core::char::methods::encode_utf8_raw(47LL, v34);
      v14 = core::slice::<impl [T]>::ends_with(v12, *((_QWORD *)&v12 + 1), v13);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&dest);
      v15 = v32;
      v16 = v11;
      v17 = v14 == 0;
      v18 = v49;
      if ( !v17 )
      {
        core::str::converts::from_utf8(&dest, v33, v32);
        if ( (dest.m256i_i8[0] & 1) != 0 )
        {
          v29 = &off_102420;
          goto LABEL_57;
        }
        v16 = core::str::<impl str>::trim_end_matches(dest.m256i_i64[1], dest.m256i_i64[2]);
      }
      v41 = v16;
      v19 = v16;
      v42 = v15;
      std::fs::metadata(&dest);
      v20 = dest.m256i_i32[0];
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v19);
      if ( v20 == 2 )
      {
        if ( *(_BYTE *)(a2 + 97) )
        {
          v37 = 0LL;
          v38 = 1uLL;
          std::path::Path::components(&v53, v41, v42);
          v48 = v55;
          v47 = v54;
          dest = v53;
          while ( 1 )
          {
            <std::path::Components as core::iter::traits::iterator::Iterator>::next(v56, &dest);
            if ( v56[0] == 10 )
              break;
            v21 = std::path::Component::as_os_str(v56);
            std::path::PathBuf::push(&v37, v21);
            if ( !(unsigned __int8)std::path::Path::is_dir(v38, *((_QWORD *)&v38 + 1)) )
            {
              *(_QWORD *)v39 = 1LL;
              *(_OWORD *)&v39[8] = v38;
              v40 = 1;
              v50[0] = v39;
              v50[1] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = &off_102348;
              *(_QWORD *)&v34[8] = 2LL;
              v36 = 0LL;
              *(_QWORD *)&v34[16] = v50;
              v35 = 1LL;
              std::io::stdio::_print(v34);
            }
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v37);
          v18 = v49;
        }
        dir_all = std::fs::create_dir_all(v41, v42);
        v23 = dir_all;
        v37 = (_BYTE *)dir_all;
        if ( dir_all )
        {
          *(_QWORD *)v39 = dir_all;
          std::path::Path::to_path_buf(v34, v41, v42);
          *(_QWORD *)&v47 = *(_QWORD *)&v34[16];
          *(_OWORD *)&dest.m256i_u64[2] = *(_OWORD *)v34;
          dest.m256i_i64[1] = v23;
          dest.m256i_i64[0] = 2LL;
          v24 = alloc::boxed::Box<T>::new(&dest);
LABEL_50:
          v5 = v24;
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v43);
          core::ptr::drop_in_place<std::path::PathBuf>(&v30);
          goto LABEL_51;
        }
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v37);
      }
      if ( v18 != 0x8000000000000000LL )
      {
        std::fs::metadata(&dest);
        v27 = dest.m256i_i32[0];
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v33);
        if ( v27 == 2 || !(unsigned __int8)std::path::Path::is_dir(v33, v32) )
        {
          std::path::Path::to_path_buf(v34, v33, v32);
          dest.m256i_i64[3] = *(_QWORD *)&v34[16];
          *(_OWORD *)&dest.m256i_u64[1] = *(_OWORD *)v34;
          dest.m256i_i64[0] = 14LL;
          v24 = alloc::boxed::Box<T>::new(&dest);
          goto LABEL_50;
        }
      }
    }
LABEL_33:
    if ( v45 > 1 )
    {
      v5 = uu_install::copy_files_into_dir(v44, v45, *((_QWORD *)&v30 + 1), v31, a2);
      goto LABEL_35;
    }
    if ( v45 == 1 )
    {
      v25 = v44;
      if ( (unsigned __int8)std::path::Path::is_dir(*(_QWORD *)(v44 + 8), *(_QWORD *)(v44 + 16)) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v34, *(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16));
        dest.m256i_i64[3] = *(_QWORD *)&v34[16];
        *(_OWORD *)&dest.m256i_u64[1] = *(_OWORD *)v34;
        dest.m256i_i64[0] = 13LL;
        v24 = alloc::boxed::Box<T>::new(&dest);
        goto LABEL_50;
      }
      if ( v4 )
      {
        std::fs::metadata(&dest);
        v26 = dest.m256i_i32[0];
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
          &dest,
          *((_QWORD *)&v30 + 1));
        if ( v26 != 2 )
        {
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *((_QWORD *)&v30 + 1), v31);
          *(_QWORD *)&v39[16] = dest.m256i_i64[2];
          *(_OWORD *)v39 = *(_OWORD *)dest.m256i_i8;
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v34, *(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16));
          *(_QWORD *)&v48 = *(_QWORD *)&v34[16];
          v47 = *(_OWORD *)v34;
          *(_OWORD *)&dest.m256i_u64[1] = *(_OWORD *)v39;
          dest.m256i_i64[3] = *(_QWORD *)&v39[16];
          dest.m256i_i64[0] = 15LL;
          v24 = alloc::boxed::Box<T>::new(&dest);
          goto LABEL_50;
        }
      }
      if ( uu_install::is_potential_directory_path(*((__int64 *)&v30 + 1), v31) )
      {
        v24 = uu_install::copy_files_into_dir(v25, 1LL, *((_QWORD *)&v30 + 1), v31, a2);
        goto LABEL_50;
      }
      if ( !(unsigned __int8)std::path::Path::is_file(*((_QWORD *)&v30 + 1), v31)
        && !(unsigned __int8)uu_install::is_new_file_path(*((__int64 *)&v30 + 1), v31) )
      {
        dest.m256i_i64[3] = v31;
        *(_OWORD *)&dest.m256i_u64[1] = v30;
        dest.m256i_i64[0] = 5LL;
        v5 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v43);
        goto LABEL_51;
      }
      v5 = uu_install::copy(*(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16), *((_QWORD *)&v30 + 1), v31, a2);
LABEL_35:
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v43);
      core::ptr::drop_in_place<std::path::PathBuf>(&v30);
      goto LABEL_51;
    }
    v29 = &off_102438;
LABEL_57:
    core::option::unwrap_failed(v29);
  }
  *(_QWORD *)(a1 + 16) = --v2;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(v7 + 24 * v2);
  if ( v8 == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_1023F0);
  *(_OWORD *)&v34[8] = *(_OWORD *)(v7 + 24 * v2 + 8);
  *(_QWORD *)v34 = v8;
  if ( v2 )
  {
    v31 = *(_QWORD *)&v34[16];
    v30 = *(_OWORD *)v34;
    goto LABEL_10;
  }
  core::str::converts::from_utf8(&dest, *(_QWORD *)&v34[8], *(_QWORD *)&v34[16]);
  if ( (dest.m256i_i8[0] & 1) != 0 )
    core::option::unwrap_failed(&off_102408);
  *(_OWORD *)v39 = *(_OWORD *)&dest.m256i_u64[1];
  v37 = v39;
  *(_QWORD *)&v38 = <&T as core::fmt::Display>::fmt;
  dest.m256i_i64[0] = (__int64)&off_102328;
  dest.m256i_i64[1] = 2LL;
  *(_QWORD *)&v47 = 0LL;
  dest.m256i_i64[2] = (__int64)&v37;
  dest.m256i_i64[3] = 1LL;
  core::option::Option<T>::map_or_else(&v51, &dest);
  dest.m256i_i32[6] = 1;
  *(_OWORD *)dest.m256i_i8 = v51;
  dest.m256i_i64[2] = v52;
  v5 = alloc::boxed::Box<T>::new(&dest);
  core::ptr::drop_in_place<std::path::PathBuf>(v34);
LABEL_51:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(a1);
  return v5;
}