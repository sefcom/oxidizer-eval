        unsigned __int8 *a6)
{
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r14
  char v25; // r15
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rcx
  const char *v29; // rax
  __int128 v30; // rax
  __int64 inner; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int32 v34; // ebx
  int v35; // r13d
  char v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+Dh] [rbp-31Bh]
  unsigned __int8 v42; // [rsp+Eh] [rbp-31Ah]
  char v43; // [rsp+Fh] [rbp-319h] BYREF
  _BYTE v44[24]; // [rsp+10h] [rbp-318h] BYREF
  __int64 *v45; // [rsp+30h] [rbp-2F8h]
  __int64 v46; // [rsp+38h] [rbp-2F0h]
  __int128 v47; // [rsp+40h] [rbp-2E8h] BYREF
  __m256i *v48; // [rsp+50h] [rbp-2D8h]
  __int64 (__fastcall *v49)(); // [rsp+58h] [rbp-2D0h]
  __int64 v50; // [rsp+68h] [rbp-2C0h]
  __int64 v51; // [rsp+70h] [rbp-2B8h]
  __int128 v52; // [rsp+78h] [rbp-2B0h] BYREF
  __int64 v53; // [rsp+88h] [rbp-2A0h]
  _BYTE v54[128]; // [rsp+90h] [rbp-298h] BYREF
  __int128 v55; // [rsp+140h] [rbp-1E8h] BYREF
  __int64 v56; // [rsp+150h] [rbp-1D8h]
  unsigned __int8 *v57; // [rsp+160h] [rbp-1C8h]
  __int64 v58; // [rsp+168h] [rbp-1C0h]
  __int64 v59; // [rsp+170h] [rbp-1B8h]
  _QWORD v60[2]; // [rsp+178h] [rbp-1B0h] BYREF
  __m256i v61; // [rsp+188h] [rbp-1A0h] BYREF
  __int128 v62; // [rsp+1A8h] [rbp-180h]
  __int128 v63; // [rsp+1B8h] [rbp-170h]
  _OWORD v64[3]; // [rsp+210h] [rbp-118h] BYREF
  _OWORD v65[3]; // [rsp+240h] [rbp-E8h] BYREF
  _OWORD v66[3]; // [rsp+270h] [rbp-B8h] BYREF
  _OWORD v67[3]; // [rsp+2A0h] [rbp-88h] BYREF
  __int128 v68; // [rsp+2D0h] [rbp-58h] BYREF
  __int64 v69; // [rsp+2E0h] [rbp-48h]
  __int128 v70; // [rsp+2E8h] [rbp-40h] BYREF

  v10 = (__int64 *)a1;
  LOBYTE(v46) = uu_cp::TargetType::determine(a3, a4, a5);
  v43 = v46;
  v50 = a4;
  v51 = a5;
  uu_cp::verify_target_type(v54, a4, a5, &v43);
  v11 = *(_QWORD *)v54;
  if ( *(_QWORD *)v54 == 13LL )
  {
    std::thread::local::LocalKey<T>::try_with(v54);
    v12 = core::result::Result<T,E>::expect(v54);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v54, a3, v12, v13);
    v65[2] = *(_OWORD *)&v54[32];
    v65[1] = *(_OWORD *)&v54[16];
    v65[0] = *(_OWORD *)v54;
    <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v54);
    v66[2] = *(_OWORD *)&v54[32];
    v66[1] = *(_OWORD *)&v54[16];
    v66[0] = *(_OWORD *)v54;
    std::thread::local::LocalKey<T>::try_with(v54);
    v14 = core::result::Result<T,E>::expect(v54);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v54, a3, v14, v15);
    v67[2] = *(_OWORD *)&v54[32];
    v67[1] = *(_OWORD *)&v54[16];
    v67[0] = *(_OWORD *)v54;
    std::thread::local::LocalKey<T>::try_with(v54);
    v16 = core::result::Result<T,E>::expect(v54);
    hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(v54, a3, v16, v17);
    v64[2] = *(_OWORD *)&v54[32];
    v64[1] = *(_OWORD *)&v54[16];
    v64[0] = *(_OWORD *)v54;
    if ( a6[73] )
    {
      if ( uu_cp::disk_usage(a2, a3, a6[70]) )
      {
        *(_QWORD *)a1 = 2LL;
        *(_QWORD *)(a1 + 8) = v18;
LABEL_50:
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v64);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(v67);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(v66);
LABEL_51:
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v65);
        return v10;
      }
      indicatif::progress_bar::ProgressBar::new(&v47, v18);
      indicatif::style::ProgressStyle::with_template(v54, aMsgElapsedPrec, 64LL);
      core::result::Result<T,E>::unwrap(&v61, v54);
      indicatif::progress_bar::ProgressBar::with_style(v44, &v47, &v61);
      v21 = uucore::util_name();
      indicatif::progress_bar::ProgressBar::with_message(&v52, v44, v21, v22);
      indicatif::progress_bar::ProgressBar::tick(&v52);
      v56 = v53;
      v55 = v52;
    }
    else
    {
      *(_QWORD *)&v55 = 0LL;
    }
    v60[0] = a2;
    v60[1] = a2 + 24 * a3;
    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v60);
    if ( !v23 )
    {
      v37 = 13LL;
      if ( (_QWORD)v55 )
      {
LABEL_44:
        *(_QWORD *)&v54[16] = v56;
        *(_OWORD *)v54 = v55;
        indicatif::progress_bar::ProgressBar::finish(v54);
        core::ptr::drop_in_place<indicatif::progress_bar::ProgressBar>(v54);
      }
LABEL_45:
      *v10 = v37;
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v64);
      core::ptr::drop_in_place<std::collections::hash::map::HashMap<uucore::features::fs::FileInformation,std::path::PathBuf>>(v67);
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>(v66);
      goto LABEL_51;
    }
    v24 = v23;
    v45 = (__int64 *)a1;
    v42 = a6[76];
    v41 = a6[78];
    v25 = 0;
    v46 = (unsigned __int8)v46;
    v59 = a6[68];
    v58 = a6[66];
    v57 = a6;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v24 + 8);
      v27 = *(_QWORD *)(v24 + 16);
      uucore::features::fs::normalize_path(&v52, v26, v27);
      if ( !v42 && hashbrown::map::HashMap<K,V,S,A>::get_inner(v65, &v52) )
      {
        std::fs::symlink_metadata(v54, v26, v27);
        if ( *(_DWORD *)v54 == 2 )
        {
          v40 = *(_QWORD *)&v54[8];
          v10 = v45;
          *v45 = 2LL;
          v10[1] = v40;
          goto LABEL_49;
        }
        v28 = 0LL;
        v29 = "file";
        if ( (*(_WORD *)&v54[56] & 0xF000) == 0x4000 )
          v29 = aDirectory;
        LOBYTE(v28) = (*(_WORD *)&v54[56] & 0xF000) == 0x4000;
        *(_QWORD *)v44 = v29;
        *(_QWORD *)&v44[8] = 5 * v28 + 4;
        *(_QWORD *)&v30 = uucore::util_name();
        *(_OWORD *)v61.m256i_i8 = v30;
        *(_QWORD *)&v47 = &v61;
        *((_QWORD *)&v47 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v54 = &unk_1B5D08;
        *(_QWORD *)&v54[8] = 2LL;
        *(_QWORD *)&v54[32] = 0LL;
        *(_QWORD *)&v54[16] = &v47;
        *(_QWORD *)&v54[24] = 1LL;
        std::io::stdio::_eprint(v54);
        v61.m256i_i64[0] = 1LL;
        v61.m256i_i64[1] = v26;
        v61.m256i_i64[2] = v27;
        v61.m256i_i8[24] = 1;
        *(_QWORD *)&v47 = v44;
        *((_QWORD *)&v47 + 1) = <&T as core::fmt::Display>::fmt;
        v48 = &v61;
        v49 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)v54 = &off_1B5D28;
        *(_QWORD *)&v54[8] = 3LL;
        *(_QWORD *)&v54[32] = 0LL;
        *(_QWORD *)&v54[16] = &v47;
        *(_QWORD *)&v54[24] = 2LL;
        std::io::stdio::_eprint(v54);
        goto LABEL_40;
      }
      uu_cp::construct_dest_path((unsigned int)&v61, v26, v27, v50, v51, v46, v58, v59);
      if ( v61.m256i_i32[0] == 13 )
      {
        *(_QWORD *)&v44[16] = v61.m256i_i64[3];
        *(_OWORD *)v44 = *(_OWORD *)&v61.m256i_u64[1];
      }
      else
      {
        *(_OWORD *)&v54[48] = v63;
        *(_OWORD *)&v54[32] = v62;
        *(__m256i *)v54 = v61;
        uu_cp::copy::{{closure}}(v44, v50, v51, v54);
      }
      std::fs::metadata(v54, v44);
      if ( *(_DWORD *)v54 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v54);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v54);
        std::fs::symlink_metadata(v54, v44);
        if ( *(_DWORD *)v54 == 2 )
          goto LABEL_46;
        if ( (*(_WORD *)&v54[56] & 0xF000) != 0xA000 )
          goto LABEL_28;
      }
      std::fs::metadata(v54, v24);
      if ( *(_DWORD *)v54 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v54);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v54);
        std::fs::symlink_metadata(v54, v24);
        if ( *(_DWORD *)v54 == 2 )
        {
LABEL_46:
          v38 = *(_QWORD *)&v54[8];
          v10 = v45;
          *v45 = 2LL;
          v10[1] = v38;
          goto LABEL_48;
        }
        if ( (*(_WORD *)&v54[56] & 0xF000) == 0xA000 )
        {
LABEL_28:
          inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v64, v44);
          if ( v42 != 2 && inner )
          {
            v70 = *(_OWORD *)&v44[8];
            *(_QWORD *)&v47 = v26;
            *((_QWORD *)&v47 + 1) = v27;
            v61.m256i_i64[0] = (__int64)&v70;
            v61.m256i_i64[1] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
            v61.m256i_i64[2] = (__int64)&v47;
            v61.m256i_i64[3] = (__int64)<std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)v54 = &off_1B5D58;
            *(_QWORD *)&v54[8] = 3LL;
            *(_QWORD *)&v54[32] = 0LL;
            *(_QWORD *)&v54[16] = &v61;
            *(_QWORD *)&v54[24] = 2LL;
            core::option::Option<T>::map_or_else(&v68, v54);
            v10 = v45;
            v45[3] = v69;
            *(_OWORD *)(v10 + 1) = v68;
            *v10 = 4LL;
LABEL_48:
            core::ptr::drop_in_place<std::path::PathBuf>(v44);
LABEL_49:
            core::ptr::drop_in_place<std::path::PathBuf>(&v52);
            core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(&v55);
            goto LABEL_50;
          }
          goto LABEL_30;
        }
      }
      if ( v41 == 1 )
        goto LABEL_28;
LABEL_30:
      uu_cp::copy_source(
        (unsigned int)&v61,
        (unsigned int)&v55,
        v26,
        v27,
        v50,
        v51,
        v46,
        (__int64)a6,
        (__int64)v66,
        (__int64)v64,
        (__int64)v67);
      v34 = v61.m256i_i32[0];
      if ( v61.m256i_i64[0] == 13 )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v54, v44, v32, v33);
        v48 = *(__m256i **)&v54[16];
        v47 = *(_OWORD *)v54;
        hashbrown::map::HashMap<K,V,S,A>::insert(v64, &v47);
      }
      else
      {
        *(_OWORD *)&v54[48] = v63;
        *(_OWORD *)&v54[32] = v62;
        *(__m256i *)v54 = v61;
        uu_cp::show_error_if_needed(v54);
        v35 = *(_DWORD *)v54;
        v36 = v54[8];
        core::ptr::drop_in_place<uu_cp::Error>(v54);
        if ( v36 )
          v25 = 1;
        if ( v35 != 8 )
          v25 = 1;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(v44);
      a6 = v57;
      if ( v34 == 13 && v61.m256i_i32[0] != 13 )
        core::ptr::drop_in_place<uu_cp::Error>(&v61);
LABEL_40:
      *(_QWORD *)&v54[16] = v53;
      *(_OWORD *)v54 = v52;
      hashbrown::map::HashMap<K,V,S,A>::insert(v65, v54);
      v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v60);
      if ( !v24 )
      {
        v37 = 8LL * ((v25 & 1) == 0) + 5;
        v10 = v45;
        if ( (_QWORD)v55 )
          goto LABEL_44;
        goto LABEL_45;
      }
    }
  }
  *(_QWORD *)(a1 + 56) = *(_QWORD *)&v54[56];
  v19 = *(_OWORD *)&v54[8];
  v20 = *(_OWORD *)&v54[24];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v54[40];
  *(_OWORD *)(a1 + 24) = v20;
  *(_OWORD *)(a1 + 8) = v19;
  *(_QWORD *)a1 = v11;
  return v10;
}
