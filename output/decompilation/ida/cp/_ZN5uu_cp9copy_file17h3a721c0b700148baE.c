char ***__fastcall uu_cp::copy_file(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        _QWORD *a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        unsigned __int8 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11)
{
  unsigned __int8 *v14; // rbx
  char ***v15; // r12
  int v16; // r15d
  bool v17; // zf
  char **v18; // r15
  char **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  char v23; // bl
  char v24; // al
  char v25; // al
  unsigned __int8 v26; // r15
  unsigned __int8 v27; // bl
  unsigned __int8 v28; // r15
  bool v29; // cl
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // r12
  __int64 inner; // rax
  char **v34; // rax
  char **v35; // rax
  unsigned int v36; // r15d
  char **v37; // rax
  char *v38; // rbx
  char **v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char **v46; // rax
  char **v47; // rbx
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  unsigned __int8 v51; // [rsp+Fh] [rbp-3D9h]
  __int64 v52; // [rsp+10h] [rbp-3D8h]
  char ***v53; // [rsp+10h] [rbp-3D8h]
  char ***v54; // [rsp+10h] [rbp-3D8h]
  __int64 v55; // [rsp+18h] [rbp-3D0h]
  char ***v56; // [rsp+18h] [rbp-3D0h]
  unsigned __int8 v57; // [rsp+18h] [rbp-3D0h]
  unsigned __int8 is_symlink; // [rsp+20h] [rbp-3C8h]
  _BYTE v60[24]; // [rsp+30h] [rbp-3B8h] BYREF
  char v61; // [rsp+48h] [rbp-3A0h]
  int v62; // [rsp+54h] [rbp-394h]
  char **v63; // [rsp+58h] [rbp-390h] BYREF
  _BYTE src[168]; // [rsp+60h] [rbp-388h] BYREF
  _QWORD *v65; // [rsp+108h] [rbp-2E0h]
  __int128 v66; // [rsp+110h] [rbp-2D8h] BYREF
  __int64 v67; // [rsp+120h] [rbp-2C8h]
  __int64 v68; // [rsp+128h] [rbp-2C0h]
  _OWORD v69[10]; // [rsp+130h] [rbp-2B8h] BYREF
  _OWORD dest[11]; // [rsp+1D0h] [rbp-218h] BYREF
  __int128 v71; // [rsp+288h] [rbp-160h] BYREF
  __int64 v72; // [rsp+298h] [rbp-150h]
  _QWORD v73[2]; // [rsp+2A0h] [rbp-148h] BYREF
  __int128 v74; // [rsp+2B0h] [rbp-138h]
  __int128 v75; // [rsp+2C0h] [rbp-128h]
  __int128 v76; // [rsp+2D0h] [rbp-118h]
  __int128 v77; // [rsp+2E0h] [rbp-108h]
  __int128 v78; // [rsp+2F0h] [rbp-F8h]
  __int128 v79; // [rsp+300h] [rbp-E8h]
  __int128 v80; // [rsp+310h] [rbp-D8h]
  __int64 v81; // [rsp+328h] [rbp-C0h] BYREF
  _BYTE v82[136]; // [rsp+330h] [rbp-B8h] BYREF

  v65 = a2;
  is_symlink = std::path::Path::is_symlink(a3, a4);
  v14 = a7;
  v51 = std::path::Path::is_symlink(a5, a6);
  if ( !v51 )
    goto LABEL_23;
  uucore::features::fs::FileInformation::from_path(&v63, a5, a6, 0LL);
  if ( v63 )
  {
    *((_QWORD *)&v69[0] + 1) = *(_QWORD *)src;
    LOBYTE(v69[0]) = 1;
    core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v69);
    v15 = (char ***)a1;
  }
  else
  {
    memcpy(dest, src, 0x90uLL);
    v15 = (char ***)a1;
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, dest) )
    {
LABEL_7:
      *(_QWORD *)v60 = a3;
      *(_QWORD *)&v60[8] = a4;
      *(_QWORD *)&v69[0] = a5;
      *((_QWORD *)&v69[0] + 1) = a6;
      *(_QWORD *)&dest[0] = v60;
      *((_QWORD *)&dest[0] + 1) = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[1] = v69;
      *((_QWORD *)&dest[1] + 1) = <std::path::Display as core::fmt::Display>::fmt;
      v63 = &off_1B5FE8;
      *(_QWORD *)src = 3LL;
      *(_QWORD *)&src[24] = 0LL;
      *(_QWORD *)&src[8] = dest;
      *(_QWORD *)&src[16] = 2LL;
LABEL_60:
      core::option::Option<T>::map_or_else(v15 + 1, &v63);
      *v15 = (char **)&byte_4;
      return v15;
    }
  }
  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, a5, a6) )
    goto LABEL_7;
  v14 = a7;
  if ( a7[65] || ((a7[64] != 0) & a11) != 0 || is_symlink != 1 )
  {
    std::fs::metadata(&v63);
    v52 = a6;
    v16 = (int)v63;
    v14 = a7;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v63);
    v17 = v16 == 2;
    a6 = v52;
    if ( v17 && (a7[60] || a7[61] != 1) && !(unsigned __int8)uucore::features::fs::is_symlink_loop(a5, v52) )
    {
      std::env::var_os(&v63, aPosixlyCorrect, 15LL);
      v18 = v63;
      v14 = a7;
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v63);
      v17 = v18 == (char **)0x8000000000000000LL;
      a6 = v52;
      if ( v17 )
      {
        *(_QWORD *)&dest[0] = a5;
        *((_QWORD *)&dest[0] + 1) = v52;
        *(_QWORD *)&v69[0] = dest;
        *((_QWORD *)&v69[0] + 1) = <std::path::Display as core::fmt::Display>::fmt;
        v19 = &off_1B6018;
LABEL_59:
        v63 = v19;
        *(_QWORD *)src = 2LL;
        *(_QWORD *)&src[24] = 0LL;
        *(_QWORD *)&src[8] = v69;
        *(_QWORD *)&src[16] = 1LL;
        goto LABEL_60;
      }
    }
  }
  if ( !(unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL)
    || v14[60]
    || v14[61] != 1
    || v14[76]
    || (v20 = std::fs::remove_file(a5, a6)) == 0 )
  {
LABEL_23:
    v15 = (char ***)a1;
    if ( (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a3, a4, a5, a6) )
    {
      std::path::Path::components(dest, a3, a4);
      std::path::Path::components(&v63, a5, a6);
      v14 = a7;
      if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v63) && !a7[60] && a7[61] == 1 )
      {
        v21 = std::fs::remove_file(a5, a6);
        if ( v21 )
          goto LABEL_64;
      }
    }
    v22 = uu_cp::file_or_link_exists((__int64)a5, a6);
    v23 = v14[62];
    if ( v22 )
    {
      if ( !v23 || (v24 = 1, !a7[60]) && a7[61] == 1 )
      {
        v53 = (char ***)a6;
        v25 = uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL);
        v26 = a7[78];
        if ( v25 && !v26 )
        {
          if ( is_symlink )
          {
            if ( !v51 || !a7[65] )
              goto LABEL_91;
          }
          else if ( !(v51 | (a7[76] == 0)) )
          {
            v56 = (char ***)a1;
            std::path::Path::components(dest, a3, a4);
            std::path::Path::components(&v63, a5, v53);
            if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v63) )
              goto LABEL_92;
            if ( *((_WORD *)a7 + 30) )
              goto LABEL_91;
          }
        }
        v57 = v26;
        uu_cp::handle_existing_dest((__int64)&v63, (__int64)a3, (__int64)a4, a5, v53, (__int64)a7, a11, a10);
        v39 = v63;
        if ( v63 != (char **)&byte_9[4] )
        {
          *(_QWORD *)(a1 + 56) = *(_QWORD *)&src[48];
          v40 = *(_OWORD *)src;
          v41 = *(_OWORD *)&src[16];
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&src[32];
          *(_OWORD *)(a1 + 24) = v41;
          *(_OWORD *)(a1 + 8) = v40;
          *(_QWORD *)a1 = v39;
          return v15;
        }
        if ( (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a3, a4, a5, v53) )
        {
          if ( v26 == 2 && a7[76] )
            goto LABEL_91;
          if ( (is_symlink & v51) == 0 )
          {
            v24 = v23;
            a6 = (__int64)v53;
            if ( v57 )
              goto LABEL_39;
LABEL_91:
            *(_QWORD *)a1 = 13LL;
            return v15;
          }
        }
        v24 = v23;
        a6 = (__int64)v53;
      }
    }
    else
    {
      v24 = v23;
    }
LABEL_39:
    if ( ((v24 != 0) & is_symlink) != 0 && (a7[60] || a7[61] != 1) )
    {
      *(_QWORD *)&dest[0] = 1LL;
      *((_QWORD *)&dest[0] + 1) = a5;
      *(_QWORD *)&dest[1] = a6;
      BYTE8(dest[1]) = 1;
      *(_QWORD *)&v69[0] = dest;
      *((_QWORD *)&v69[0] + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v19 = &off_1B6038;
      goto LABEL_59;
    }
    if ( a7[72] )
      uu_cp::print_verbose_output(a7[68], v65, (__int64)a3, (__int64)a4, (__int64)a5, a6);
    v54 = (char ***)a6;
    if ( a7[56] )
    {
      v27 = a7[64];
      v28 = a7[65];
      v29 = v27 != 0;
      if ( !a11 )
        v29 = v28 != 0;
      if ( v28 )
        v29 = 1;
      uucore::features::fs::FileInformation::from_path(&v63, a3, a4, v29);
      *(_QWORD *)v60 = 1LL;
      *(_QWORD *)&v60[8] = a3;
      *(_QWORD *)&v60[16] = a4;
      v61 = 1;
      v73[0] = v60;
      v73[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v69[0] = &off_1B5F08;
      *((_QWORD *)&v69[0] + 1) = 1LL;
      *(_QWORD *)&v69[2] = 0LL;
      *(_QWORD *)&v69[1] = v73;
      *((_QWORD *)&v69[1] + 1) = 1LL;
      core::option::Option<T>::map_or_else(&v71, v69);
      *(_QWORD *)&v69[1] = v72;
      v69[0] = v71;
      if ( v63 )
      {
        v30 = *(_QWORD *)src;
        *(_QWORD *)(a1 + 24) = v72;
        *(_OWORD *)(a1 + 8) = v71;
        *(_QWORD *)a1 = 3LL;
        *(_QWORD *)(a1 + 32) = v30;
        return v15;
      }
      v56 = (char ***)a1;
      v67 = *(_QWORD *)&src[16];
      v66 = *(_OWORD *)src;
      v32 = *(_QWORD *)&src[24];
      v74 = *(_OWORD *)&src[32];
      v75 = *(_OWORD *)&src[48];
      v76 = *(_OWORD *)&src[64];
      v77 = *(_OWORD *)&src[80];
      v78 = *(_OWORD *)&src[96];
      v79 = *(_OWORD *)&src[112];
      v80 = *(_OWORD *)&src[128];
      core::ptr::drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error> as quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(v69);
      dest[0] = v66;
      *(_QWORD *)&dest[1] = v67;
      *((_QWORD *)&dest[1] + 1) = v32;
      dest[2] = v74;
      dest[3] = v75;
      dest[4] = v76;
      dest[5] = v77;
      dest[6] = v78;
      dest[7] = v79;
      dest[8] = v80;
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a10, dest);
      if ( inner )
      {
        v21 = std::fs::hard_link(inner + 144, a5, v54);
        if ( v21 )
        {
          v15 = (char ***)a1;
LABEL_64:
          *v15 = (char **)(&dword_0 + 2);
          v15[1] = (char **)v21;
          return v15;
        }
LABEL_92:
        v15 = v56;
        *v56 = (char **)(byte_9 + 4);
        return v15;
      }
      v15 = (char ***)a1;
    }
    else
    {
      v27 = a7[64];
      v28 = a7[65];
    }
    uu_cp::context_for((__int64)&v66, (__int64)a3, (__int64)a4, (__int64)a5, (__int64)v54);
    v55 = *((_QWORD *)&v66 + 1);
    v68 = v67;
    v31 = v27;
    if ( !a11 )
      v31 = v28;
    if ( v28 )
      v31 = v28;
    v62 = v31;
    if ( (_BYTE)v31 )
      std::fs::metadata(&v63);
    else
      std::fs::symlink_metadata(&v63, a3, a4);
    if ( v63 == (char **)((char *)&dword_0 + 2) )
    {
      uu_cp::copy_file::{{closure}}(v60, a3, a4, *(_QWORD *)src);
      v34 = *(char ***)v60;
      *((_OWORD *)v15 + 1) = *(_OWORD *)&v60[8];
      *v15 = (char **)&byte_4;
LABEL_68:
      v15[1] = v34;
LABEL_99:
      core::ptr::drop_in_place<alloc::string::String>(&v66);
      return v15;
    }
    memcpy(v69, &src[8], sizeof(v69));
    memcpy(&dest[2], &v69[1], 0x90uLL);
    dest[1] = *(_OWORD *)&src[8];
    dest[0] = __PAIR128__(*(unsigned __int64 *)src, (unsigned __int64)v63);
    uu_cp::calculate_dest_permissions(
      (__int64)&v63,
      (__int64)a5,
      (__int64)v54,
      DWORD2(dest[3]),
      a7[50],
      a7[51],
      v55,
      v68);
    v35 = v63;
    v36 = *(_DWORD *)src;
    if ( v63 != (char **)&byte_9[4] )
    {
      *((_DWORD *)v15 + 15) = *(_DWORD *)&src[52];
      v42 = *(_OWORD *)&src[4];
      v43 = *(_OWORD *)&src[20];
      *(_OWORD *)((char *)v15 + 44) = *(_OWORD *)&src[36];
      *(_OWORD *)((char *)v15 + 28) = v43;
      *(_OWORD *)((char *)v15 + 12) = v42;
      *v15 = v35;
      *((_DWORD *)v15 + 2) = v36;
      goto LABEL_99;
    }
    uu_cp::handle_copy_mode(
      (__int64)&v63,
      (__int64)a3,
      (__int64)a4,
      a5,
      v54,
      (__int64)a7,
      v55,
      v68,
      (__int64)dest,
      a8,
      a11);
    v37 = v63;
    if ( v63 == (char **)&byte_9[4] )
    {
      if ( !v51 )
      {
        v63 = (char **)std::fs::set_permissions(a5, v54, v36);
        if ( v63 )
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v63);
      }
      v38 = (char *)(a7 + 48);
      if ( (_BYTE)v62 )
      {
        uucore::features::fs::canonicalize(v60, a3, a4, 0LL, 1LL);
        if ( *(_QWORD *)v60 == 0x8000000000000000LL )
          goto LABEL_76;
        *(_QWORD *)&v69[1] = *(_QWORD *)&v60[16];
        v69[0] = *(_OWORD *)v60;
        uu_cp::copy_attributes(
          (__int64)&v63,
          *(__int128 **)&v60[8],
          *(_QWORD **)&v60[16],
          (__int64)a5,
          (__int64)v54,
          v38);
        v46 = v63;
        if ( v63 != (char **)&byte_9[4] )
        {
          v15[7] = *(char ***)&src[48];
          v49 = *(_OWORD *)src;
          v50 = *(_OWORD *)&src[16];
          *(_OWORD *)(v15 + 5) = *(_OWORD *)&src[32];
          *(_OWORD *)(v15 + 3) = v50;
          *(_OWORD *)(v15 + 1) = v49;
          *v15 = v46;
          core::ptr::drop_in_place<std::path::PathBuf>(v69);
          if ( *(_QWORD *)v60 == 0x8000000000000000LL )
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v60);
          goto LABEL_99;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v69);
        if ( *(_QWORD *)v60 == 0x8000000000000000LL )
LABEL_76:
          core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v60);
LABEL_97:
        uucore::features::fs::FileInformation::from_path(&v63, a3, a4, (_BYTE)v62 != 0);
        v47 = *(char ***)src;
        if ( v63 )
        {
          *v15 = (char **)(&dword_0 + 2);
          v15[1] = v47;
          goto LABEL_99;
        }
        memcpy(v82, &src[8], sizeof(v82));
        v81 = *(_QWORD *)src;
        std::path::Path::to_path_buf(&v63, a5);
        hashbrown::map::HashMap<K,V,S,A>::insert(v69, a10, &v81, &v63);
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v69);
        if ( *v65 )
        {
          std::fs::metadata(&v63);
          if ( (_DWORD)v63 == 2 )
          {
            v34 = *(char ***)src;
            *v15 = (char **)(&dword_0 + 2);
            goto LABEL_68;
          }
          indicatif::progress_bar::ProgressBar::inc(v65, *(_QWORD *)&src[72]);
        }
        *v15 = (char **)(byte_9 + 4);
        goto LABEL_99;
      }
      uu_cp::copy_attributes((__int64)&v63, a3, a4, (__int64)a5, (__int64)v54, v38);
      v37 = v63;
      if ( v63 == (char **)&byte_9[4] )
        goto LABEL_97;
    }
    v15[7] = *(char ***)&src[48];
    v44 = *(_OWORD *)src;
    v45 = *(_OWORD *)&src[16];
    *(_OWORD *)(v15 + 5) = *(_OWORD *)&src[32];
    *(_OWORD *)(v15 + 3) = v45;
    *(_OWORD *)(v15 + 1) = v44;
    *v15 = v37;
    goto LABEL_99;
  }
  v15 = (char ***)a1;
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v20;
  return v15;
}
