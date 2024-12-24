        unsigned __int8 a11)
{
  _BYTE *v15; // rbx
  int v16; // r14d
  bool v17; // zf
  char **v18; // r14
  char **v19; // rax
  __int64 v20; // rax
  char v21; // al
  char v22; // bl
  char v23; // al
  char v24; // al
  char v25; // r15
  char **v26; // rax
  _BYTE *v27; // rbx
  char v28; // dl
  char v29; // bl
  bool v30; // cl
  __int64 v31; // rax
  char v32; // r15
  bool v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 inner; // rax
  char **v38; // rax
  unsigned int v39; // r14d
  char **v40; // rax
  __int64 v41; // rbx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char **v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  char v52; // [rsp+Eh] [rbp-3DAh]
  char v53; // [rsp+Eh] [rbp-3DAh]
  unsigned __int8 v54; // [rsp+Fh] [rbp-3D9h]
  char ***v55; // [rsp+18h] [rbp-3D0h]
  char ***v56; // [rsp+18h] [rbp-3D0h]
  unsigned __int8 is_symlink; // [rsp+20h] [rbp-3C8h]
  _BYTE v58[24]; // [rsp+28h] [rbp-3C0h] BYREF
  char v59; // [rsp+40h] [rbp-3A8h]
  char **v60; // [rsp+48h] [rbp-3A0h] BYREF
  _BYTE src[168]; // [rsp+50h] [rbp-398h] BYREF
  _QWORD *v62; // [rsp+F8h] [rbp-2F0h]
  __int128 v63; // [rsp+100h] [rbp-2E8h] BYREF
  __int64 v64; // [rsp+110h] [rbp-2D8h]
  __int64 v65; // [rsp+120h] [rbp-2C8h]
  __int64 v66; // [rsp+128h] [rbp-2C0h]
  _BYTE dest[176]; // [rsp+130h] [rbp-2B8h] BYREF
  _OWORD v68[10]; // [rsp+1E0h] [rbp-208h] BYREF
  __int128 v69; // [rsp+288h] [rbp-160h] BYREF
  __int64 v70; // [rsp+298h] [rbp-150h]
  _QWORD v71[2]; // [rsp+2A0h] [rbp-148h] BYREF
  __int128 v72; // [rsp+2B0h] [rbp-138h]
  __int128 v73; // [rsp+2C0h] [rbp-128h]
  __int128 v74; // [rsp+2D0h] [rbp-118h]
  __int128 v75; // [rsp+2E0h] [rbp-108h]
  __int128 v76; // [rsp+2F0h] [rbp-F8h]
  __int128 v77; // [rsp+300h] [rbp-E8h]
  __int128 v78; // [rsp+310h] [rbp-D8h]
  __int64 v79; // [rsp+328h] [rbp-C0h] BYREF
  _BYTE v80[136]; // [rsp+330h] [rbp-B8h] BYREF

  v62 = a2;
  is_symlink = std::path::Path::is_symlink(a3, a4);
  v15 = a7;
  v54 = std::path::Path::is_symlink(a5, a6);
  if ( v54 )
  {
    uucore::features::fs::FileInformation::from_path(&v60, a5, a6, 0LL);
    if ( v60 )
    {
      *((_QWORD *)&v68[0] + 1) = *(_QWORD *)src;
      LOBYTE(v68[0]) = 1;
      core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v68);
    }
    else
    {
      memcpy(dest, src, 0x90uLL);
      if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, dest) )
      {
LABEL_7:
        *(_QWORD *)v58 = a3;
        *(_QWORD *)&v58[8] = a4;
        *(_QWORD *)&v68[0] = a5;
        *((_QWORD *)&v68[0] + 1) = a6;
        *(_QWORD *)dest = v58;
        *(_QWORD *)&dest[8] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&dest[16] = v68;
        *(_QWORD *)&dest[24] = <std::path::Display as core::fmt::Display>::fmt;
        v60 = &off_1B5918;
        *(_QWORD *)src = 3LL;
        *(_QWORD *)&src[24] = 0LL;
        *(_QWORD *)&src[8] = dest;
        *(_QWORD *)&src[16] = 2LL;
LABEL_67:
        core::option::Option<T>::map_or_else(a1 + 8, &v60);
        *(_QWORD *)a1 = 4LL;
        return a1;
      }
    }
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, a5, a6) )
      goto LABEL_7;
    v15 = a7;
    if ( a7[65] || ((a7[64] != 0) & a11) != 0 || is_symlink != 1 )
    {
      std::fs::metadata(&v60);
      v55 = a6;
      v16 = (int)v60;
      v15 = a7;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v60);
      v17 = v16 == 2;
      a6 = v55;
      if ( v17 && (a7[60] || a7[61] != 1) && !(unsigned __int8)uucore::features::fs::is_symlink_loop(a5, v55) )
      {
        std::env::var_os(&v60, aPosixlyCorrect, 15LL);
        v18 = v60;
        v15 = a7;
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v60);
        v17 = v18 == (char **)0x8000000000000000LL;
        a6 = v55;
        if ( v17 )
        {
          *(_QWORD *)dest = a5;
          *(_QWORD *)&dest[8] = v55;
          *(_QWORD *)&v68[0] = dest;
          *((_QWORD *)&v68[0] + 1) = <std::path::Display as core::fmt::Display>::fmt;
          v19 = &off_1B5948;
LABEL_66:
          v60 = v19;
          *(_QWORD *)src = 2LL;
          *(_QWORD *)&src[24] = 0LL;
          *(_QWORD *)&src[8] = v68;
          *(_QWORD *)&src[16] = 1LL;
          goto LABEL_67;
        }
      }
    }
    if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL) )
    {
      if ( !v15[60] && v15[61] == 1 && !v15[76] )
      {
        v20 = std::fs::remove_file(a5, a6);
        if ( v20 )
          goto LABEL_70;
      }
    }
  }
  if ( (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a3, a4, a5, a6) )
  {
    std::path::Path::components(dest, a3, a4);
    std::path::Path::components(&v60, a5, a6);
    v15 = a7;
    if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v60) && !a7[60] && a7[61] == 1 )
    {
      v20 = std::fs::remove_file(a5, a6);
      if ( v20 )
      {
LABEL_70:
        *(_QWORD *)a1 = 2LL;
        *(_QWORD *)(a1 + 8) = v20;
        return a1;
      }
    }
  }
  v21 = uu_cp::file_or_link_exists((__int64)a5, (__int64)a6);
  v22 = v15[62];
  if ( !v21 )
    goto LABEL_44;
  if ( v22 )
  {
    v23 = 1;
    if ( a7[60] || a7[61] != 1 )
      goto LABEL_45;
  }
  v24 = uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL);
  v25 = a7[78];
  if ( v24 && !v25 )
  {
    if ( is_symlink )
    {
      if ( !v54 || !a7[65] )
        goto LABEL_95;
    }
    else if ( !(v54 | (a7[76] == 0)) )
    {
      std::path::Path::components(dest, a3, a4);
      std::path::Path::components(&v60, a5, a6);
      if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v60) || *((_WORD *)a7 + 30) )
        goto LABEL_95;
    }
  }
  uu_cp::handle_existing_dest((__int64)&v60, (__int64)a3, (__int64)a4, a5, a6, (__int64)a7, a11, a10);
  v26 = v60;
  if ( v60 != (char **)&byte_9[4] )
  {
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&src[48];
    v42 = *(_OWORD *)src;
    v43 = *(_OWORD *)&src[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&src[32];
    *(_OWORD *)(a1 + 24) = v43;
    *(_OWORD *)(a1 + 8) = v42;
    *(_QWORD *)a1 = v26;
    return a1;
  }
  if ( !(unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a3, a4, a5, a6) )
  {
    v23 = v22;
    goto LABEL_45;
  }
  if ( !v25 )
  {
    v23 = v22;
    if ( (is_symlink & v54) == 0 )
      goto LABEL_95;
    goto LABEL_45;
  }
  if ( v25 != 2 )
  {
LABEL_44:
    v23 = v22;
    goto LABEL_45;
  }
  v23 = v22;
  if ( a7[76] )
    goto LABEL_95;
LABEL_45:
  v27 = a7;
  if ( ((v23 != 0) & is_symlink) != 0 && (a7[60] || a7[61] != 1) )
  {
    *(_QWORD *)dest = 1LL;
    *(_QWORD *)&dest[8] = a5;
    *(_QWORD *)&dest[16] = a6;
    dest[24] = 1;
    *(_QWORD *)&v68[0] = dest;
    *((_QWORD *)&v68[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &off_1B5968;
    goto LABEL_66;
  }
  if ( a7[72] )
    uu_cp::print_verbose_output(a7[68], v62, (__int64)a3, (__int64)a4, (__int64)a5, (__int64)a6);
  if ( !a7[56] )
  {
    v32 = a7[65];
    goto LABEL_58;
  }
  v28 = a7[65];
  v29 = v28;
  v30 = a7[64] != 0;
  if ( !a11 )
    v30 = v28 != 0;
  if ( v28 )
    v30 = 1;
  uucore::features::fs::FileInformation::from_path(&v60, a3, a4, v30);
  *(_QWORD *)v58 = 1LL;
  *(_QWORD *)&v58[8] = a3;
  *(_QWORD *)&v58[16] = a4;
  v59 = 1;
  v71[0] = v58;
  v71[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v68[0] = &off_1B5838;
  *((_QWORD *)&v68[0] + 1) = 1LL;
  *(_QWORD *)&v68[2] = 0LL;
  *(_QWORD *)&v68[1] = v71;
  *((_QWORD *)&v68[1] + 1) = 1LL;
  core::option::Option<T>::map_or_else(&v69, v68);
  *(_QWORD *)&v68[1] = v70;
  v68[0] = v69;
  if ( !v60 )
  {
    v53 = v29;
    v64 = *(_QWORD *)&src[16];
    v63 = *(_OWORD *)src;
    v36 = *(_QWORD *)&src[24];
    v72 = *(_OWORD *)&src[32];
    v73 = *(_OWORD *)&src[48];
    v74 = *(_OWORD *)&src[64];
    v75 = *(_OWORD *)&src[80];
    v76 = *(_OWORD *)&src[96];
    v77 = *(_OWORD *)&src[112];
    v78 = *(_OWORD *)&src[128];
    core::ptr::drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error> as quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(v68);
    *(_OWORD *)dest = v63;
    *(_QWORD *)&dest[16] = v64;
    *(_QWORD *)&dest[24] = v36;
    *(_OWORD *)&dest[32] = v72;
    *(_OWORD *)&dest[48] = v73;
    *(_OWORD *)&dest[64] = v74;
    *(_OWORD *)&dest[80] = v75;
    *(_OWORD *)&dest[96] = v76;
    *(_OWORD *)&dest[112] = v77;
    *(_OWORD *)&dest[128] = v78;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a10, dest);
    if ( inner )
    {
      v20 = std::fs::hard_link(inner + 144, a5, a6);
      if ( v20 )
        goto LABEL_70;
LABEL_95:
      *(_QWORD *)a1 = 13LL;
      return a1;
    }
    v27 = a7;
    v32 = v53;
LABEL_58:
    v56 = a6;
    uu_cp::context_for((__int64)&v63, (__int64)a3, (__int64)a4, (__int64)a5, (__int64)a6);
    v66 = *((_QWORD *)&v63 + 1);
    v65 = v64;
    v52 = v32;
    v33 = v32 != 0;
    if ( v33 || a11 && v27[64] )
      std::fs::metadata(&v60);
    else
      std::fs::symlink_metadata(&v60, a3, a4);
    if ( v60 == (char **)((char *)&dword_0 + 2) )
    {
      uu_cp::copy_file::{{closure}}(v58, a3, a4, *(_QWORD *)src);
      v34 = *(_QWORD *)v58;
      v35 = a1;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v58[8];
      *(_QWORD *)a1 = 4LL;
LABEL_64:
      *(_QWORD *)(v35 + 8) = v34;
LABEL_106:
      core::ptr::drop_in_place<alloc::string::String>(&v63);
      return a1;
    }
    memcpy(v68, &src[8], sizeof(v68));
    memcpy(&dest[32], &v68[1], 0x90uLL);
    *(_OWORD *)&dest[16] = *(_OWORD *)&src[8];
    *(_OWORD *)dest = __PAIR128__(*(unsigned __int64 *)src, (unsigned __int64)v60);
    uu_cp::calculate_dest_permissions(
      (__int64)&v60,
      (__int64)a5,
      (__int64)a6,
      *(unsigned int *)&dest[56],
      a7[50],
      a7[51],
      v66,
      v65);
    v38 = v60;
    v39 = *(_DWORD *)src;
    if ( v60 != (char **)&byte_9[4] )
    {
      *(_DWORD *)(a1 + 60) = *(_DWORD *)&src[52];
      v44 = *(_OWORD *)&src[4];
      v45 = *(_OWORD *)&src[20];
      *(_OWORD *)(a1 + 44) = *(_OWORD *)&src[36];
      *(_OWORD *)(a1 + 28) = v45;
      *(_OWORD *)(a1 + 12) = v44;
      *(_QWORD *)a1 = v38;
      *(_DWORD *)(a1 + 8) = v39;
      goto LABEL_106;
    }
    uu_cp::handle_copy_mode(
      (__int64)&v60,
      (__int64)a3,
      (__int64)a4,
      a5,
      v56,
      (__int64)a7,
      v66,
      v65,
      (__int64)dest,
      a8,
      a11);
    v40 = v60;
    if ( v60 == (char **)&byte_9[4] )
    {
      if ( !v54 )
      {
        v60 = (char **)std::fs::set_permissions(a5, v56, v39);
        if ( v60 )
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v60);
      }
      if ( v52 || a11 && a7[64] )
      {
        uucore::features::fs::canonicalize(v58, a3, a4, 0LL, 1LL);
        if ( *(_QWORD *)v58 == 0x8000000000000000LL )
          goto LABEL_80;
        *(_QWORD *)&v68[1] = *(_QWORD *)&v58[16];
        v68[0] = *(_OWORD *)v58;
        uu_cp::copy_attributes(
          (__int64)&v60,
          *(__int128 **)&v58[8],
          *(_QWORD **)&v58[16],
          (__int64)a5,
          (__int64)v56,
          a7 + 48);
        v46 = v60;
        if ( v60 != (char **)&byte_9[4] )
        {
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&src[48];
          v47 = *(_OWORD *)src;
          v48 = *(_OWORD *)&src[16];
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&src[32];
          *(_OWORD *)(a1 + 24) = v48;
          *(_OWORD *)(a1 + 8) = v47;
          *(_QWORD *)a1 = v46;
          core::ptr::drop_in_place<std::path::PathBuf>(v68);
          if ( *(_QWORD *)v58 == 0x8000000000000000LL )
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v58);
          goto LABEL_106;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v68);
        if ( *(_QWORD *)v58 == 0x8000000000000000LL )
LABEL_80:
          core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v58);
LABEL_81:
        if ( !v52 && a11 )
          v33 = a7[64] != 0;
        uucore::features::fs::FileInformation::from_path(&v60, a3, a4, v33);
        v41 = *(_QWORD *)src;
        if ( v60 )
        {
          *(_QWORD *)a1 = 2LL;
          *(_QWORD *)(a1 + 8) = v41;
          goto LABEL_106;
        }
        memcpy(v80, &src[8], sizeof(v80));
        v79 = *(_QWORD *)src;
        std::path::Path::to_path_buf(&v60, a5);
        hashbrown::map::HashMap<K,V,S,A>::insert(v68, a10, &v79, &v60);
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v68);
        if ( *v62 )
        {
          std::fs::metadata(&v60);
          if ( (_DWORD)v60 == 2 )
          {
            v34 = *(_QWORD *)src;
            v35 = a1;
            *(_QWORD *)a1 = 2LL;
            goto LABEL_64;
          }
          indicatif::progress_bar::ProgressBar::inc(v62, *(_QWORD *)&src[72]);
        }
        *(_QWORD *)a1 = 13LL;
        goto LABEL_106;
      }
      uu_cp::copy_attributes((__int64)&v60, a3, a4, (__int64)a5, (__int64)v56, a7 + 48);
      v40 = v60;
      if ( v60 == (char **)&byte_9[4] )
        goto LABEL_81;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&src[48];
    v49 = *(_OWORD *)src;
    v50 = *(_OWORD *)&src[16];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&src[32];
    *(_OWORD *)(a1 + 24) = v50;
    *(_OWORD *)(a1 + 8) = v49;
    *(_QWORD *)a1 = v40;
    goto LABEL_106;
  }
  v31 = *(_QWORD *)src;
  *(_QWORD *)(a1 + 24) = v70;
  *(_OWORD *)(a1 + 8) = v69;
  *(_QWORD *)a1 = 3LL;
  *(_QWORD *)(a1 + 32) = v31;
  return a1;
}
