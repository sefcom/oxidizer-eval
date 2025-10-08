__int64 __fastcall uu_cp::copy_file(
        _QWORD *a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11)
{
  _QWORD *v14; // r14
  unsigned __int8 *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  char v18; // al
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // al
  unsigned __int8 v21; // r13
  __int64 v22; // rcx
  __int64 *v23; // r15
  __int64 v24; // r14
  bool v25; // zf
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  unsigned __int8 v29; // al
  unsigned __int8 v30; // r15
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 inner; // rax
  char **v34; // rax
  unsigned __int64 v35; // rcx
  __int16 v36; // bx
  char **v37; // rax
  int v38; // edx
  int v39; // ebx
  char **v40; // rcx
  char v41; // al
  unsigned __int8 *v42; // r9
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // ebx
  char **v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rsi
  __int128 v52; // kr00_16
  int v53; // ebx
  char **v54; // rax
  __int64 v55; // rbx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 *v59; // [rsp+10h] [rbp-388h]
  unsigned __int8 is_symlink; // [rsp+18h] [rbp-380h]
  char ***v61; // [rsp+18h] [rbp-380h]
  unsigned __int8 v62; // [rsp+20h] [rbp-378h]
  __int64 v63; // [rsp+20h] [rbp-378h]
  unsigned __int8 v64; // [rsp+28h] [rbp-370h]
  char v65; // [rsp+34h] [rbp-364h]
  unsigned __int8 v66; // [rsp+38h] [rbp-360h]
  __int64 v67; // [rsp+38h] [rbp-360h]
  char **v68; // [rsp+40h] [rbp-358h] BYREF
  __int128 v69; // [rsp+48h] [rbp-350h]
  __int64 v70; // [rsp+58h] [rbp-340h]
  __int64 v71; // [rsp+60h] [rbp-338h]
  _QWORD *v72; // [rsp+70h] [rbp-328h]
  char **v73; // [rsp+78h] [rbp-320h] BYREF
  _BYTE src[148]; // [rsp+80h] [rbp-318h] BYREF
  __int128 v75; // [rsp+114h] [rbp-284h]
  int v76; // [rsp+124h] [rbp-274h]
  __int64 v77; // [rsp+128h] [rbp-270h] BYREF
  __int128 *v78; // [rsp+130h] [rbp-268h]
  __int128 *v79; // [rsp+138h] [rbp-260h]
  char v80; // [rsp+140h] [rbp-258h]
  unsigned int v81; // [rsp+14Ch] [rbp-24Ch]
  _BYTE dest[156]; // [rsp+150h] [rbp-248h] BYREF
  __int128 v83; // [rsp+1ECh] [rbp-1ACh]
  int v84; // [rsp+1FCh] [rbp-19Ch]
  _QWORD v85[2]; // [rsp+200h] [rbp-198h] BYREF
  __int128 v86; // [rsp+210h] [rbp-188h]
  __int64 v87; // [rsp+220h] [rbp-178h]
  __int128 v88; // [rsp+228h] [rbp-170h] BYREF
  __int64 v89; // [rsp+238h] [rbp-160h]
  __int128 v90; // [rsp+240h] [rbp-158h]
  __int64 v91; // [rsp+250h] [rbp-148h]
  __int128 v92; // [rsp+260h] [rbp-138h]
  __int128 v93; // [rsp+270h] [rbp-128h]
  __int128 v94; // [rsp+280h] [rbp-118h]
  __int128 v95; // [rsp+290h] [rbp-108h]
  __int128 v96; // [rsp+2A0h] [rbp-F8h]
  __int128 v97; // [rsp+2B0h] [rbp-E8h]
  __int128 v98; // [rsp+2C0h] [rbp-D8h]
  __int64 v99; // [rsp+2D8h] [rbp-C0h] BYREF
  _BYTE v100[136]; // [rsp+2E0h] [rbp-B8h] BYREF

  v72 = a2;
  v14 = a1;
  v15 = a7;
  is_symlink = std::path::Path::is_symlink(a3, a4);
  v64 = std::path::Path::is_symlink(a5, a6);
  if ( !v64 )
    goto LABEL_27;
  uucore::features::fs::FileInformation::from_path(&v73, a5, a6, 0LL);
  if ( ((unsigned __int8)v73 & 1) != 0 )
  {
    *(_QWORD *)&v69 = *(_QWORD *)src;
    LOBYTE(v68) = 1;
    core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(&v68);
  }
  else
  {
    memcpy(dest, src, 0x90uLL);
    if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, dest) )
    {
LABEL_6:
      v77 = (__int64)a3;
      v78 = a4;
      v68 = (char **)a5;
      *(_QWORD *)&v69 = a6;
      *(_QWORD *)dest = &v77;
      *(_QWORD *)&dest[8] = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[16] = &v68;
      *(_QWORD *)&dest[24] = <std::path::Display as core::fmt::Display>::fmt;
      v73 = &off_15ED00;
      *(_QWORD *)src = 3LL;
      *(_QWORD *)&src[8] = dest;
      *(_OWORD *)&src[16] = 2uLL;
LABEL_7:
      core::option::Option<T>::map_or_else(a1 + 1, &v73);
      result = 0x8000000000000003LL;
      *a1 = 0x8000000000000003LL;
      return result;
    }
  }
  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a9, a5, a6) )
    goto LABEL_6;
  if ( !a7[89] )
  {
    if ( a11 )
    {
      if ( is_symlink && !a7[88] )
        goto LABEL_22;
    }
    else if ( is_symlink )
    {
      goto LABEL_22;
    }
  }
  std::fs::metadata(&v73);
  v17 = (int)v73;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v73, a5);
  if ( v17 == 2 && (a7[84] || a7[85] != 1) && !(unsigned __int8)uucore::features::fs::is_symlink_loop(a5, a6) )
  {
    std::env::var_os(&v73);
    if ( v73 == (char **)0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000LL, *(_QWORD *)src);
      *(_QWORD *)dest = a5;
      *(_QWORD *)&dest[8] = a6;
      v68 = (char **)dest;
      *(_QWORD *)&v69 = <std::path::Display as core::fmt::Display>::fmt;
      v73 = &off_15ED30;
      *(_QWORD *)src = 2LL;
      *(_QWORD *)&src[8] = &v68;
      *(_OWORD *)&src[16] = 1uLL;
      goto LABEL_7;
    }
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v73, *(_QWORD *)src);
  }
LABEL_22:
  v14 = a1;
  v15 = a7;
  if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL) )
  {
    if ( !a7[84] && a7[85] == 1 && !a7[101] )
    {
      result = std::fs::remove_file(a5, a6);
      if ( result )
        goto LABEL_66;
    }
  }
LABEL_27:
  v59 = a3;
  if ( (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a3, a4, a5, a6) )
  {
    std::path::Path::components(dest, a3, a4);
    std::path::Path::components(&v73, a5, a6);
    if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v73) && !v15[84] && v15[85] == 1 )
    {
      result = std::fs::remove_file(a5, a6);
      if ( result )
        goto LABEL_66;
    }
  }
  v18 = uu_cp::file_or_link_exists(a5);
  v19 = v15[86];
  if ( v18 && ((v19 & 1) == 0 || !v15[84] && v15[85] == 1) )
  {
    v20 = uucore::features::fs::paths_refer_to_same_file(a3, a4, a5, a6, 1LL);
    v21 = v15[103];
    if ( ((v21 == 0) & v20) != 0 )
    {
      if ( is_symlink )
      {
        if ( !v64 || !v15[89] )
          goto LABEL_93;
      }
      else if ( !(v64 | (v15[101] == 0)) )
      {
        v66 = v15[103];
        std::path::Path::components(dest, v59, a4);
        std::path::Path::components(&v73, a5, a6);
        if ( !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(dest, &v73) )
        {
          result = (__int64)v14;
          *v14 = 0x800000000000000CLL;
          return result;
        }
        v21 = v66;
        if ( *((_WORD *)v15 + 42) )
          goto LABEL_93;
      }
    }
    v22 = a6;
    v23 = v14;
    v24 = v22;
    uu_cp::handle_existing_dest(&v73, (__int64)v59, (__int64)a4, a5, v22, (__int64)v15, a11, a10);
    result = (__int64)v73;
    if ( v73 != (char **)0x800000000000000CLL )
    {
      v27 = *(_OWORD *)src;
      v28 = *(_OWORD *)&src[16];
      *(_OWORD *)(v23 + 5) = *(_OWORD *)&src[32];
      *(_OWORD *)(v23 + 3) = v28;
      *(_OWORD *)(v23 + 1) = v27;
      *v23 = result;
      return result;
    }
    v25 = (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(v59, a4, a5, v24) == 0;
    v26 = v24;
    v14 = v23;
    a6 = v26;
    v15 = a7;
    if ( !v25 )
    {
      if ( v21 )
      {
        if ( v21 == 2 )
          goto LABEL_93;
      }
      else if ( (is_symlink & v64) == 0 )
      {
        goto LABEL_93;
      }
    }
  }
  if ( (v19 & is_symlink) != 0 && (v15[84] || v15[85] != 1) )
  {
    *(_QWORD *)dest = 1LL;
    *(_QWORD *)&dest[8] = a5;
    *(_QWORD *)&dest[16] = a6;
    dest[24] = 1;
    v68 = (char **)dest;
    *(_QWORD *)&v69 = <os_display::Quoted as core::fmt::Display>::fmt;
    v73 = &off_15ED50;
    *(_QWORD *)src = 2LL;
    *(_QWORD *)&src[8] = &v68;
    *(_OWORD *)&src[16] = 1uLL;
    core::option::Option<T>::map_or_else(v14 + 1, &v73);
    result = 0x8000000000000003LL;
    *v14 = 0x8000000000000003LL;
    return result;
  }
  v61 = (char ***)a6;
  if ( v15[80] )
  {
    v62 = v15[89];
    v29 = v62;
    if ( !(v62 | a11 ^ 1) )
      v29 = v15[88];
    uucore::features::fs::FileInformation::from_path(&v73, v59, a4, v29);
    v77 = 1LL;
    v78 = v59;
    v79 = a4;
    v80 = 1;
    v85[0] = &v77;
    v85[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v68 = &off_15EC38;
    *(_QWORD *)&v69 = 1LL;
    v71 = 0LL;
    *((_QWORD *)&v69 + 1) = v85;
    v70 = 1LL;
    core::option::Option<T>::map_or_else(&v88, &v68);
    if ( ((unsigned __int8)v73 & 1) != 0 )
    {
      result = *(_QWORD *)src;
      v14[3] = v89;
      *(_OWORD *)(v14 + 1) = v88;
      *v14 = 0x8000000000000002LL;
      v14[4] = result;
      return result;
    }
    v31 = a10;
    v32 = *(_QWORD *)&src[24];
    v87 = *(_QWORD *)&src[16];
    v86 = *(_OWORD *)src;
    v92 = *(_OWORD *)&src[32];
    v93 = *(_OWORD *)&src[48];
    v94 = *(_OWORD *)&src[64];
    v95 = *(_OWORD *)&src[80];
    v96 = *(_OWORD *)&src[96];
    v97 = *(_OWORD *)&src[112];
    v98 = *(_OWORD *)&src[128];
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v88);
    v91 = v87;
    v90 = v86;
    *(_OWORD *)dest = v86;
    *(_QWORD *)&dest[16] = v87;
    *(_QWORD *)&dest[24] = v32;
    *(_OWORD *)&dest[32] = v92;
    *(_OWORD *)&dest[48] = v93;
    *(_OWORD *)&dest[64] = v94;
    *(_OWORD *)&dest[80] = v95;
    *(_OWORD *)&dest[96] = v96;
    *(_OWORD *)&dest[112] = v97;
    *(_OWORD *)&dest[128] = v98;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a10, dest);
    if ( inner )
    {
      result = std::fs::hard_link(inner + 144, a5, a6);
      if ( result )
      {
LABEL_66:
        *v14 = 0x8000000000000001LL;
        v14[1] = result;
        return result;
      }
      if ( v15[96] )
        uu_cp::print_verbose_output(v15[92], v72, (__int64)v59, (__int64)a4, a5, a6);
LABEL_93:
      result = 0x800000000000000CLL;
      *v14 = 0x800000000000000CLL;
      return result;
    }
    v30 = v62;
  }
  else
  {
    v30 = v15[89];
    v31 = a10;
  }
  uu_cp::context_for((__int64)&v77, (__int64)v59, (__int64)a4, a5, (__int64)v61);
  v63 = (__int64)v78;
  v67 = (__int64)v79;
  if ( (v30 & 1) != 0 || a11 && v15[88] )
    std::fs::metadata(&v73);
  else
    std::fs::symlink_metadata(&v73);
  if ( v73 != (char **)((char *)&dword_0 + 2) )
  {
    v36 = *(_WORD *)&src[48];
    v84 = v76;
    v83 = v75;
    *(_OWORD *)&dest[140] = *(_OWORD *)&src[132];
    *(_OWORD *)&dest[124] = *(_OWORD *)&src[116];
    *(_OWORD *)&dest[108] = *(_OWORD *)&src[100];
    *(_OWORD *)&dest[92] = *(_OWORD *)&src[84];
    *(_OWORD *)&dest[76] = *(_OWORD *)&src[68];
    *(_OWORD *)&dest[60] = *(_OWORD *)&src[52];
    *(_OWORD *)&dest[32] = *(_OWORD *)&src[24];
    *(_QWORD *)&dest[48] = *(_QWORD *)&src[40];
    *(_OWORD *)&dest[16] = *(_OWORD *)&src[8];
    *(_OWORD *)dest = __PAIR128__(*(unsigned __int64 *)src, (unsigned __int64)v73);
    *(_DWORD *)&dest[56] = *(_DWORD *)&src[48];
    uu_cp::calculate_dest_permissions(
      (__int64)&v73,
      a5,
      (__int64)v61,
      *(unsigned int *)&src[48],
      v15[74],
      v15[75],
      v63,
      v67);
    v37 = v73;
    v38 = *(_DWORD *)src;
    if ( v73 != (char **)0x800000000000000CLL )
    {
      v43 = *(_OWORD *)&src[4];
      v44 = *(_OWORD *)&src[20];
      *(_OWORD *)(v14 + 5) = *(_OWORD *)&src[32];
      *(_OWORD *)((char *)v14 + 28) = v44;
      *(_OWORD *)((char *)v14 + 12) = v43;
      *v14 = v37;
      *((_DWORD *)v14 + 2) = v38;
      return core::ptr::drop_in_place<alloc::string::String>(&v77);
    }
    v39 = v36 & 0xF000;
    v65 = 1;
    v81 = *(_DWORD *)src;
    if ( v39 != 4096 && v39 != 0x2000 )
      v65 = v39 == 24576;
    uu_cp::handle_copy_mode(
      (__int64)&v73,
      (__int64)v59,
      (__int64)a4,
      a5,
      v61,
      (__int64)v15,
      v63,
      v67,
      (__int64)dest,
      a8,
      a11,
      v39 == 4096,
      v65);
    v40 = v73;
    v41 = src[0];
    if ( v73 != (char **)0x800000000000000CLL )
    {
      v45 = *(_OWORD *)&src[1];
      v46 = *(_OWORD *)&src[17];
      *(_OWORD *)(v14 + 5) = *(_OWORD *)&src[32];
      *(_OWORD *)((char *)v14 + 25) = v46;
      *(_OWORD *)((char *)v14 + 9) = v45;
      *v14 = v40;
      *((_BYTE *)v14 + 8) = v41;
      return core::ptr::drop_in_place<alloc::string::String>(&v77);
    }
    if ( v15[96] && (src[0] & 1) == 0 )
      uu_cp::print_verbose_output(v15[92], v72, (__int64)v59, (__int64)a4, a5, (__int64)v61);
    if ( !v64 )
    {
      v73 = (char **)std::fs::set_permissions(a5, v61, v81);
      if ( v73 )
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v73);
    }
    v42 = v15 + 72;
    if ( (v30 & 1) != 0 || a11 && v15[88] )
    {
      uucore::features::fs::canonicalize(&v68, v59, a4, 0LL, 1LL);
      if ( v68 == (char **)0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v68);
      }
      else
      {
        v51 = v69;
        v52 = v69;
        std::fs::metadata(&v73);
        v53 = (int)v73;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v73, v51);
        if ( v53 != 2 )
        {
          uu_cp::copy_attributes((__int64)&v73, (__int128 *)v52, *((__int128 **)&v52 + 1), a5, (__int64)v61, v15 + 72);
          v54 = v73;
          if ( v73 != (char **)0x800000000000000CLL )
          {
            v56 = *(_OWORD *)src;
            v57 = *(_OWORD *)&src[16];
            *(_OWORD *)(v14 + 5) = *(_OWORD *)&src[32];
            *(_OWORD *)(v14 + 3) = v57;
            *(_OWORD *)(v14 + 1) = v56;
            *v14 = v54;
            core::ptr::drop_in_place<std::path::PathBuf>(&v68);
            return core::ptr::drop_in_place<alloc::string::String>(&v77);
          }
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&v68);
      }
    }
    else if ( !v65
           || (std::fs::metadata(&v73),
               v47 = (int)v73,
               core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v73, v59),
               v42 = v15 + 72,
               v47 == 2) )
    {
      uu_cp::copy_attributes((__int64)&v73, v59, a4, a5, (__int64)v61, v42);
      v48 = v73;
      if ( v73 != (char **)0x800000000000000CLL )
      {
        v49 = *(_OWORD *)src;
        v50 = *(_OWORD *)&src[16];
        *(_OWORD *)(v14 + 5) = *(_OWORD *)&src[32];
        *(_OWORD *)(v14 + 3) = v50;
        *(_OWORD *)(v14 + 1) = v49;
        *v14 = v48;
        return core::ptr::drop_in_place<alloc::string::String>(&v77);
      }
    }
    if ( !(v30 & 1 | ((a11 & 1) == 0)) )
      v30 = v15[88];
    uucore::features::fs::FileInformation::from_path(&v73, v59, a4, v30 & 1);
    v55 = *(_QWORD *)src;
    if ( (_DWORD)v73 == 1 )
    {
      *v14 = 0x8000000000000001LL;
      v14[1] = v55;
      return core::ptr::drop_in_place<alloc::string::String>(&v77);
    }
    memcpy(v100, &src[8], sizeof(v100));
    v99 = *(_QWORD *)src;
    std::path::Path::to_path_buf(&v73, a5);
    hashbrown::map::HashMap<K,V,S,A>::insert(&v68, v31, &v99, &v73);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v68);
    if ( v72 )
    {
      std::fs::metadata(&v73);
      if ( (_DWORD)v73 == 2 )
      {
        v34 = *(char ***)src;
        v35 = 0x8000000000000001LL;
        goto LABEL_75;
      }
      indicatif::progress_bar::ProgressBar::inc(v72, *(_QWORD *)&src[72]);
    }
    *v14 = 0x800000000000000CLL;
    return core::ptr::drop_in_place<alloc::string::String>(&v77);
  }
  uu_cp::copy_file::{{closure}}(&v68, v59, a4, *(_QWORD *)src);
  v34 = v68;
  v90 = v69;
  *((_OWORD *)v14 + 1) = v69;
  v35 = 0x8000000000000003LL;
LABEL_75:
  *v14 = v35;
  v14[1] = v34;
  return core::ptr::drop_in_place<alloc::string::String>(&v77);
}