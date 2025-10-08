unsigned __int64 *__fastcall uu_cp::copy(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r13
  unsigned __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int8 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 *v25; // rax
  __int64 v26; // r15
  _BYTE *v27; // r14
  __int64 v28; // rbp
  _BYTE *v29; // rsi
  __int64 v30; // rcx
  const char *v31; // rax
  __int128 v32; // rax
  __int64 inner; // rax
  __int128 *v34; // rsi
  __int64 v35; // r14
  char v36; // bp
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // [rsp+1h] [rbp-357h]
  unsigned __int8 v42; // [rsp+2h] [rbp-356h]
  char v43; // [rsp+3h] [rbp-355h] BYREF
  int v44; // [rsp+4h] [rbp-354h]
  unsigned __int64 *v45; // [rsp+8h] [rbp-350h]
  _BYTE v46[24]; // [rsp+10h] [rbp-348h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+28h] [rbp-330h]
  __int64 v48; // [rsp+38h] [rbp-320h]
  __int128 v49; // [rsp+40h] [rbp-318h] BYREF
  __int64 v50; // [rsp+50h] [rbp-308h]
  __int64 v51; // [rsp+60h] [rbp-2F8h]
  __int128 v52; // [rsp+68h] [rbp-2F0h] BYREF
  __int64 v53; // [rsp+78h] [rbp-2E0h]
  _BYTE dest[56]; // [rsp+80h] [rbp-2D8h] BYREF
  int v55; // [rsp+B8h] [rbp-2A0h]
  unsigned __int64 v56; // [rsp+138h] [rbp-220h]
  unsigned __int8 *v57; // [rsp+140h] [rbp-218h]
  __int128 v58; // [rsp+148h] [rbp-210h] BYREF
  __int64 v59; // [rsp+158h] [rbp-200h]
  __int64 v60; // [rsp+160h] [rbp-1F8h]
  __int64 v61; // [rsp+168h] [rbp-1F0h]
  _OWORD v62[3]; // [rsp+170h] [rbp-1E8h] BYREF
  _OWORD v63[3]; // [rsp+1A0h] [rbp-1B8h] BYREF
  __int128 v64; // [rsp+1D0h] [rbp-188h] BYREF
  __int128 v65; // [rsp+1E0h] [rbp-178h]
  __int128 v66; // [rsp+1F0h] [rbp-168h]
  __int64 v67; // [rsp+200h] [rbp-158h]
  _OWORD v68[3]; // [rsp+260h] [rbp-F8h] BYREF
  _OWORD v69[3]; // [rsp+290h] [rbp-C8h] BYREF
  __int128 v70; // [rsp+2C8h] [rbp-90h] BYREF
  unsigned __int64 v71; // [rsp+2D8h] [rbp-80h]
  __int128 v72; // [rsp+2E0h] [rbp-78h] BYREF
  __int64 v73; // [rsp+2F0h] [rbp-68h] BYREF
  __int128 v74; // [rsp+2F8h] [rbp-60h]
  __int64 v75; // [rsp+308h] [rbp-50h]

  v57 = (unsigned __int8 *)a6;
  v9 = a2;
  v10 = (unsigned __int64 *)a1;
  LOBYTE(v48) = uu_cp::TargetType::determine(a3, a4, a5);
  v43 = v48;
  v51 = a5;
  uu_cp::verify_target_type(dest, a4, a5, &v43);
  v11 = *(_QWORD *)dest;
  v56 = 0x800000000000000CLL;
  if ( *(_QWORD *)dest != 0x800000000000000CLL )
  {
    v20 = *(_OWORD *)&dest[8];
    v21 = *(_OWORD *)&dest[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&dest[40];
    *(_OWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)a1 = v11;
    return v10;
  }
  v12 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(dest, a3, v12, v13);
  v68[2] = *(_OWORD *)&dest[32];
  v68[1] = *(_OWORD *)&dest[16];
  v68[0] = *(_OWORD *)dest;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(dest);
  v62[2] = *(_OWORD *)&dest[32];
  v62[1] = *(_OWORD *)&dest[16];
  v62[0] = *(_OWORD *)dest;
  v14 = std::thread::local::LocalKey<T>::with();
  v15 = v57;
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(dest, a3, v14, v16);
  v69[2] = *(_OWORD *)&dest[32];
  v69[1] = *(_OWORD *)&dest[16];
  v69[0] = *(_OWORD *)dest;
  v17 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(dest, a3, v17, v18);
  v63[2] = *(_OWORD *)&dest[32];
  v63[1] = *(_OWORD *)&dest[16];
  v63[0] = *(_OWORD *)dest;
  if ( v15[97] )
  {
    if ( (uu_cp::disk_usage(a2, a3, v15[94]) & 1) != 0 )
    {
      *(_QWORD *)a1 = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 8) = v19;
      goto LABEL_50;
    }
    indicatif::progress_bar::ProgressBar::new(v46, v19);
    indicatif::style::ProgressStyle::with_template(dest, aMsgElapsedPrec, 64LL);
    core::result::Result<T,E>::unwrap(&v64, dest);
    indicatif::progress_bar::ProgressBar::with_style(&v58, v46, &v64);
    v23 = ((__int64 (*)(void))uucore::util_name)();
    indicatif::progress_bar::ProgressBar::with_message(&v52, &v58, v23, v24);
    indicatif::progress_bar::ProgressBar::tick(&v52);
    v50 = v53;
    v49 = v52;
    if ( a3 )
      goto LABEL_10;
LABEL_7:
    v22 = v49;
    if ( (_QWORD)v49 )
      goto LABEL_41;
    goto LABEL_42;
  }
  *(_QWORD *)&v49 = 0LL;
  if ( !a3 )
    goto LABEL_7;
LABEL_10:
  v45 = (unsigned __int64 *)a1;
  v42 = v15[101];
  v41 = v15[103];
  v25 = v15;
  v26 = 24 * a3;
  v44 = 0;
  v48 = (unsigned __int8)v48;
  v61 = v25[92];
  v60 = v25[90];
  do
  {
    v27 = *(_BYTE **)(v9 + 8);
    v28 = *(_QWORD *)(v9 + 16);
    uucore::features::fs::normalize_path(&v58, v27, v28);
    if ( v42 || !hashbrown::map::HashMap<K,V,S,A>::get_inner(v68, &v58) )
    {
      uu_cp::construct_dest_path((unsigned int)&v73, (_DWORD)v27, v28, a4, v51, v48, v60, v61);
      if ( v73 == 0x800000000000000CLL )
      {
        *(_QWORD *)&v46[16] = v75;
        *(_OWORD *)v46 = v74;
      }
      else
      {
        uu_cp::copy::{{closure}}(v46, a4, v51, &v73);
      }
      std::fs::metadata(dest);
      if ( *(_DWORD *)dest == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v46);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v46);
        v29 = v46;
        std::fs::symlink_metadata(dest);
        if ( *(_DWORD *)dest == 2 )
          goto LABEL_46;
        if ( (v55 & 0xF000) != 0xA000 )
          goto LABEL_29;
      }
      std::fs::metadata(dest);
      if ( *(_DWORD *)dest == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v9);
        if ( v41 != 1 )
        {
LABEL_31:
          LODWORD(v34) = v49;
          if ( (_QWORD)v49 )
            v34 = &v49;
          uu_cp::copy_source(
            (unsigned int)&v64,
            (_DWORD)v34,
            (_DWORD)v27,
            v28,
            a4,
            v51,
            v48,
            (__int64)v57,
            (__int64)v62,
            (__int64)v63,
            (__int64)v69);
          if ( (_QWORD)v64 == 0x800000000000000CLL )
          {
            core::ptr::drop_in_place<core::result::Result<(),uu_cp::Error>>(&v64);
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, *(_QWORD *)&v46[8], *(_QWORD *)&v46[16]);
            *(_QWORD *)&v65 = *(_QWORD *)&dest[16];
            v64 = *(_OWORD *)dest;
            hashbrown::map::HashMap<K,V,S,A>::insert(v63, &v64);
          }
          else
          {
            *(_QWORD *)&dest[48] = v67;
            *(_OWORD *)&dest[32] = v66;
            *(_OWORD *)&dest[16] = v65;
            *(_OWORD *)dest = v64;
            uu_cp::show_error_if_needed((__int64 *)dest);
            v35 = *(_QWORD *)dest;
            v36 = dest[8];
            core::ptr::drop_in_place<uu_cp::Error>(dest);
            v44 = (unsigned __int8)((v35 != 0x8000000000000007LL) | v44 | v36);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v46);
          goto LABEL_37;
        }
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v9);
        v29 = (_BYTE *)v9;
        std::fs::symlink_metadata(dest);
        if ( *(_DWORD *)dest == 2 )
        {
LABEL_46:
          v38 = *(_QWORD *)&dest[8];
          v10 = v45;
          *v45 = 0x8000000000000001LL;
          v10[1] = v38;
          goto LABEL_48;
        }
        if ( v41 != 1 && (v55 & 0xF000) != 40960 )
          goto LABEL_31;
      }
LABEL_29:
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v63, v46);
      if ( v42 != 2 && inner )
      {
        v72 = *(_OWORD *)&v46[8];
        *(_QWORD *)&v52 = v27;
        *((_QWORD *)&v52 + 1) = v28;
        *(_QWORD *)&v64 = &v72;
        *((_QWORD *)&v64 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v65 = &v52;
        *((_QWORD *)&v65 + 1) = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_15EAA0;
        *(_QWORD *)&dest[8] = 3LL;
        *(_QWORD *)&dest[32] = 0LL;
        *(_QWORD *)&dest[16] = &v64;
        *(_QWORD *)&dest[24] = 2LL;
        v29 = dest;
        core::option::Option<T>::map_or_else(&v70, dest);
        v10 = v45;
        v45[3] = v71;
        *(_OWORD *)(v10 + 1) = v70;
        *v10 = 0x8000000000000003LL;
LABEL_48:
        core::ptr::drop_in_place<std::path::PathBuf>(v46);
LABEL_49:
        core::ptr::drop_in_place<std::path::PathBuf>(&v58);
        core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v49, v29);
        goto LABEL_50;
      }
      goto LABEL_31;
    }
    v29 = v27;
    std::fs::symlink_metadata(dest);
    if ( *(_DWORD *)dest == 2 )
    {
      v40 = *(_QWORD *)&dest[8];
      v10 = v45;
      *v45 = 0x8000000000000001LL;
      v10[1] = v40;
      goto LABEL_49;
    }
    v30 = 0LL;
    v31 = (const char *)&unk_20E8C;
    if ( (v55 & 0xF000) == 0x4000 )
      v31 = aDirectory;
    LOBYTE(v30) = (v55 & 0xF000) == 0x4000;
    *(_QWORD *)&v52 = v31;
    *((_QWORD *)&v52 + 1) = 5 * v30 + 4;
    *(_QWORD *)&v32 = uucore::util_name(dest, v27);
    v64 = v32;
    *(_QWORD *)v46 = &v64;
    *(_QWORD *)&v46[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &unk_15EA50;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v46;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_eprint(dest);
    *(_QWORD *)&v64 = 1LL;
    *((_QWORD *)&v64 + 1) = v27;
    *(_QWORD *)&v65 = v28;
    BYTE8(v65) = 1;
    *(_QWORD *)v46 = &v52;
    *(_QWORD *)&v46[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v46[16] = &v64;
    v47 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_15EA70;
    *(_QWORD *)&dest[8] = 3LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v46;
    *(_QWORD *)&dest[24] = 2LL;
    std::io::stdio::_eprint(dest);
LABEL_37:
    *(_QWORD *)&dest[16] = v59;
    *(_OWORD *)dest = v58;
    hashbrown::map::HashMap<K,V,S,A>::insert(v68, dest);
    v9 += 24LL;
    v26 -= 24LL;
  }
  while ( v26 );
  v37 = 0x800000000000000CLL;
  if ( (v44 & 1) != 0 )
    v37 = 0x8000000000000004LL;
  v56 = v37;
  v10 = v45;
  v22 = v49;
  if ( (_QWORD)v49 )
  {
LABEL_41:
    *(_QWORD *)&dest[16] = v50;
    *(_OWORD *)dest = v49;
    indicatif::progress_bar::ProgressBar::finish(dest);
    core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(dest);
  }
LABEL_42:
  *v10 = v56;
  if ( !v22 && (_QWORD)v49 )
    core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(&v49);
LABEL_50:
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v63);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(v69);
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(
    *(_QWORD *)&v62[0],
    *((_QWORD *)&v62[0] + 1));
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v68);
  return v10;
}