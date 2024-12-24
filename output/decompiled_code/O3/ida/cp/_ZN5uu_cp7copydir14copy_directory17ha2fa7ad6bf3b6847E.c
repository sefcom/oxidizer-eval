        unsigned __int8 a11)
{
  _QWORD *v13; // r8
  __int128 *v14; // r15
  _BYTE *v16; // r12
  char v17; // r14
  char is_symlink; // al
  _QWORD *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 i; // rax
  __int64 v34; // rbp
  _QWORD *v35; // r13
  __int128 v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 *v40; // rdi
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rbp
  __int64 v49; // r13
  __int64 v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int64 v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  char v61; // [rsp+6h] [rbp-2E2h]
  char v62; // [rsp+6h] [rbp-2E2h]
  char v63; // [rsp+7h] [rbp-2E1h]
  _QWORD *v64; // [rsp+8h] [rbp-2E0h]
  __int128 v65; // [rsp+10h] [rbp-2D8h] BYREF
  _QWORD *v66; // [rsp+20h] [rbp-2C8h]
  int v67; // [rsp+2Ch] [rbp-2BCh]
  __m256i v68; // [rsp+30h] [rbp-2B8h] BYREF
  __int128 v69; // [rsp+50h] [rbp-298h]
  _BYTE v70[40]; // [rsp+60h] [rbp-288h] BYREF
  __int128 v71; // [rsp+88h] [rbp-260h]
  __int128 v72; // [rsp+98h] [rbp-250h]
  __int64 v73; // [rsp+A8h] [rbp-240h]
  __int128 v74; // [rsp+B0h] [rbp-238h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-228h]
  char *v76; // [rsp+C8h] [rbp-220h]
  _BYTE v77[80]; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v78; // [rsp+120h] [rbp-1C8h]
  __int128 v79; // [rsp+128h] [rbp-1C0h]
  __int64 v80; // [rsp+138h] [rbp-1B0h]
  __int128 v81; // [rsp+140h] [rbp-1A8h]
  __int128 v82; // [rsp+150h] [rbp-198h]
  __int64 v83; // [rsp+160h] [rbp-188h]
  char v84; // [rsp+168h] [rbp-180h]
  _BYTE v85[7]; // [rsp+169h] [rbp-17Fh]
  __int128 v86; // [rsp+170h] [rbp-178h]
  __int128 v87; // [rsp+180h] [rbp-168h] BYREF
  _QWORD *v88; // [rsp+190h] [rbp-158h]
  _QWORD *v89; // [rsp+198h] [rbp-150h]
  __m256i *v90; // [rsp+1A0h] [rbp-148h] BYREF
  __m256i v91; // [rsp+1A8h] [rbp-140h]
  __int128 v92; // [rsp+1C8h] [rbp-120h]
  __int64 v93; // [rsp+1D8h] [rbp-110h]
  __int128 v94; // [rsp+1E0h] [rbp-108h] BYREF
  __int128 v95; // [rsp+1F0h] [rbp-F8h]
  __int128 v96; // [rsp+200h] [rbp-E8h]
  __int128 v97; // [rsp+210h] [rbp-D8h]
  __int128 v98; // [rsp+220h] [rbp-C8h]
  __int64 v99; // [rsp+230h] [rbp-B8h]
  _QWORD *v100; // [rsp+238h] [rbp-B0h]
  _QWORD v101[2]; // [rsp+240h] [rbp-A8h] BYREF
  __int128 v102; // [rsp+250h] [rbp-98h] BYREF
  __int64 v103; // [rsp+260h] [rbp-88h]
  __int64 v104; // [rsp+268h] [rbp-80h] BYREF
  __int128 v105; // [rsp+270h] [rbp-78h]
  __int128 v106; // [rsp+280h] [rbp-68h]
  __int128 v107; // [rsp+290h] [rbp-58h]
  __int128 v108; // [rsp+2A0h] [rbp-48h]
  __int64 v109; // [rsp+2B0h] [rbp-38h]

  v13 = a4;
  v14 = a3;
  v89 = a2;
  v16 = a7;
  v17 = a7[65];
  if ( !v17 && (!a11 || !a7[64]) )
  {
    is_symlink = std::path::Path::is_symlink(a3, a4);
    v13 = a4;
    v14 = a3;
    v16 = a7;
    if ( is_symlink )
    {
      uu_cp::copy_file(a1, v89, v14, v13, a5, a6, a7, a8, a9, a10, a11);
      return a1;
    }
  }
  if ( !v16[70] )
  {
    *(_QWORD *)v70 = 1LL;
    *(_QWORD *)&v70[8] = v14;
    *(_QWORD *)&v70[16] = v13;
    v70[24] = 1;
    *(_QWORD *)&v94 = v70;
    *((_QWORD *)&v94 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v77 = &off_1B5C60;
    *(_QWORD *)&v77[8] = 1LL;
    *(_QWORD *)&v77[32] = 0LL;
    *(_QWORD *)&v77[16] = &v94;
    *(_QWORD *)&v77[24] = 1LL;
    core::option::Option<T>::map_or_else(a1 + 8, v77);
    *(_QWORD *)a1 = 4LL;
    return a1;
  }
  v61 = v17;
  v21 = v13;
  uu_cp::copydir::path_has_prefix((__int64)v77, (__int64)a5, (__int64)a6, (__int64)v14, (__int64)v13);
  if ( v77[0] )
  {
    v22 = *(_QWORD *)&v77[8];
    *(_QWORD *)a1 = 2LL;
    *(_QWORD *)(a1 + 8) = v22;
    return a1;
  }
  v64 = v21;
  if ( v77[1] )
  {
    *(_QWORD *)&v94 = 1LL;
    *((_QWORD *)&v94 + 1) = v14;
    *(_QWORD *)&v95 = v21;
    BYTE8(v95) = 1;
    v23 = std::path::Path::file_name(v14, v21);
    if ( !v23 )
      core::option::unwrap_failed(&off_1B5CE8, v21, v24, v25);
    std::path::Path::join(&v68, a5, a6, v23, v24);
    *(_QWORD *)v70 = 1LL;
    *(_OWORD *)&v70[8] = *(_OWORD *)&v68.m256i_u64[1];
    v70[24] = 1;
    v90 = (__m256i *)&v94;
    v91.m256i_i64[0] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    v91.m256i_i64[1] = (__int64)v70;
    v91.m256i_i64[2] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v77 = &off_1B5D00;
    *(_QWORD *)&v77[8] = 2LL;
    *(_QWORD *)&v77[32] = 0LL;
    *(_QWORD *)&v77[16] = &v90;
    *(_QWORD *)&v77[24] = 2LL;
    core::option::Option<T>::map_or_else(&v65, v77);
    core::ptr::drop_in_place<std::path::PathBuf>(&v68);
    *(_QWORD *)(a1 + 24) = v66;
    *(_OWORD *)(a1 + 8) = v65;
    *(_QWORD *)a1 = 4LL;
    return a1;
  }
  v26 = v16[68];
  if ( v26 && (v27 = std::path::Path::parent(v14, v64)) != 0 )
  {
    std::path::Path::join(&v65, a5, a6, v27, v28);
    uu_cp::copydir::build_dir((__int64 *)v77, *((unsigned int *)v16 + 12), (unsigned __int8)v16[50], (__int64)&v65, 1);
    v29 = *(_QWORD *)v77;
    if ( *(_QWORD *)v77 != 13LL )
    {
      *(_QWORD *)(a1 + 56) = *(_QWORD *)&v77[56];
      v38 = *(_OWORD *)&v77[8];
      v39 = *(_OWORD *)&v77[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v77[40];
      *(_OWORD *)(a1 + 24) = v39;
      *(_OWORD *)(a1 + 8) = v38;
      *(_QWORD *)a1 = v29;
      v40 = &v65;
      goto LABEL_48;
    }
    if ( v16[72] )
    {
      std::path::Path::join(&v68, a5, a6, v14, v64);
      uu_cp::aligned_ancestors((__int64)v77);
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v90, v77);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v94, &v90);
      for ( i = v94; (_QWORD)v94; i = v94 )
      {
        v101[0] = i;
        v101[1] = *((_QWORD *)&v94 + 1);
        v74 = v95;
        *(_QWORD *)v70 = v101;
        *(_QWORD *)&v70[8] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v70[16] = &v74;
        *(_QWORD *)&v70[24] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)v77 = &unk_1B5C70;
        *(_QWORD *)&v77[8] = 3LL;
        *(_QWORD *)&v77[32] = 0LL;
        *(_QWORD *)&v77[16] = v70;
        *(_QWORD *)&v77[24] = 2LL;
        std::io::stdio::_print(v77, &v90, v30, *((_QWORD *)&v94 + 1), v31, v32);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v94, &v90);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v90);
      core::ptr::drop_in_place<std::path::PathBuf>(&v68);
    }
    v88 = v66;
    v87 = v65;
  }
  else
  {
    std::path::Path::to_path_buf(&v87, a5);
  }
  v34 = *((_QWORD *)&v87 + 1);
  v35 = v88;
  LOBYTE(v67) = v16[56];
  uu_cp::copydir::Context::new((__int64)v77, (__int64)v14, (__int64)v64, *((__int64 *)&v87 + 1), (__int64)v88);
  if ( *(_QWORD *)v77 == 0x8000000000000000LL )
  {
    v68.m256i_i64[0] = *(_QWORD *)&v77[8];
    v90 = &v68;
    v91.m256i_i64[0] = (__int64)<std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)v70 = &off_1B5CD8;
    *(_QWORD *)&v70[8] = 1LL;
    *(_QWORD *)&v70[16] = &v90;
    *(_OWORD *)&v70[24] = 1uLL;
    core::option::Option<T>::map_or_else(&v102, v70);
    *(_QWORD *)(a1 + 24) = v103;
    *(_OWORD *)(a1 + 8) = v102;
    *(_QWORD *)a1 = 4LL;
    core::ptr::drop_in_place<std::io::error::Error>(v68.m256i_i64[0]);
    goto LABEL_47;
  }
  v63 = v26;
  v98 = *(_OWORD *)&v77[64];
  v97 = *(_OWORD *)&v77[48];
  v96 = *(_OWORD *)&v77[32];
  v95 = *(_OWORD *)&v77[16];
  v94 = *(_OWORD *)v77;
  walkdir::WalkDir::new(v70, v14, v64);
  v99 = v34;
  v100 = v35;
  v76 = v16 + 48;
  BYTE11(v72) = v16[67];
  v83 = v72;
  v82 = v71;
  v81 = *(_OWORD *)&v70[24];
  *(_DWORD *)v85 = *(_DWORD *)((char *)&v72 + 9);
  *(_DWORD *)&v85[3] = HIDWORD(v72);
  v79 = *(_OWORD *)v70;
  v80 = *(_QWORD *)&v70[16];
  *(_QWORD *)v77 = 0LL;
  *(_QWORD *)&v77[16] = 0LL;
  *(_QWORD *)&v77[24] = 8LL;
  *(_OWORD *)&v77[32] = 0LL;
  *(_QWORD *)&v77[48] = 8LL;
  *(_OWORD *)&v77[56] = 0LL;
  *(_QWORD *)&v77[72] = 8LL;
  v78 = 0LL;
  v84 = v61;
  v86 = 0LL;
  v62 = v16[66];
  v67 = (unsigned __int8)v67;
  while ( 1 )
  {
    while ( 1 )
    {
      <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v90, v77);
      if ( v90 != (__m256i *)((char *)&dword_0 + 2) )
        break;
      v69 = v92;
      v68 = v91;
      uu_cp::copydir::Entry::new((__int64)v70, &v94, v91.m256i_i64[1], v91.m256i_i64[2], v62 != 0);
      if ( *(_QWORD *)v70 == 0x8000000000000000LL )
      {
        v37 = 7LL;
LABEL_45:
        *(_QWORD *)a1 = v37;
        core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v68);
        core::ptr::drop_in_place<walkdir::IntoIter>(v77);
        goto LABEL_46;
      }
      v109 = v73;
      v108 = v72;
      v107 = v71;
      v106 = *(_OWORD *)&v70[24];
      v105 = *(_OWORD *)&v70[8];
      v104 = *(_QWORD *)v70;
      uu_cp::copydir::copy_direntry((__int64)v70, v89, (__int128 *)&v104, (__int64)a7, a8, v67, a9, a10);
      v37 = *(_QWORD *)v70;
      if ( *(_QWORD *)v70 != 13LL )
      {
        *(_QWORD *)(a1 + 56) = v72;
        v51 = *(_OWORD *)&v70[8];
        v52 = *(_OWORD *)&v70[24];
        *(_OWORD *)(a1 + 40) = v71;
        *(_OWORD *)(a1 + 24) = v52;
        *(_OWORD *)(a1 + 8) = v51;
        goto LABEL_45;
      }
      core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v68);
    }
    if ( (_DWORD)v90 == 3 )
      break;
    *(_QWORD *)v70 = v90;
    v71 = v92;
    *(__m256i *)&v70[8] = v91;
    *(_QWORD *)&v72 = v93;
    *(_QWORD *)&v36 = uucore::util_name(&v90, v77);
    v65 = v36;
    *(_QWORD *)&v74 = &v65;
    *((_QWORD *)&v74 + 1) = <&T as core::fmt::Display>::fmt;
    v68.m256i_i64[0] = (__int64)&unk_1B5CB8;
    v68.m256i_i64[1] = 2LL;
    *(_QWORD *)&v69 = 0LL;
    v68.m256i_i64[2] = (__int64)&v74;
    v68.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v68);
    *(_QWORD *)&v65 = v70;
    *((_QWORD *)&v65 + 1) = <walkdir::error::Error as core::fmt::Display>::fmt;
    v68.m256i_i64[0] = (__int64)&unk_1B5BF0;
    v68.m256i_i64[1] = 2LL;
    *(_QWORD *)&v69 = 0LL;
    v68.m256i_i64[2] = (__int64)&v65;
    v68.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&v68);
    core::ptr::drop_in_place<walkdir::error::Error>(v70);
  }
  core::ptr::drop_in_place<walkdir::IntoIter>(v77);
  v41 = (__int64)v100;
  v42 = v99;
  if ( !v63 )
  {
    uu_cp::copy_attributes((__int64)v77, v14, v64, v99, (__int64)v100, v76);
    v54 = *(_QWORD *)v77;
    if ( *(_QWORD *)v77 != 13LL )
    {
      *(_QWORD *)(a1 + 56) = *(_QWORD *)&v77[56];
      v55 = *(_OWORD *)&v77[8];
      v56 = *(_OWORD *)&v77[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v77[40];
      *(_OWORD *)(a1 + 24) = v56;
      *(_OWORD *)(a1 + 8) = v55;
      *(_QWORD *)a1 = v54;
      goto LABEL_46;
    }
    goto LABEL_55;
  }
  v43 = std::path::Path::file_name(v14, v64);
  if ( !v43 )
    core::option::unwrap_failed(&off_1B5CA0, v64, v44, v45);
  std::path::Path::join(&v74, v42, v41, v43, v44);
  uu_cp::copy_attributes((__int64)v77, v14, v64, *((__int64 *)&v74 + 1), v75, v76);
  v46 = *(_QWORD *)v77;
  if ( *(_QWORD *)v77 != 13LL )
  {
    *(_QWORD *)(a1 + 56) = *(_QWORD *)&v77[56];
    v57 = *(_OWORD *)&v77[8];
    v58 = *(_OWORD *)&v77[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v77[40];
    *(_OWORD *)(a1 + 24) = v58;
    *(_OWORD *)(a1 + 8) = v57;
    *(_QWORD *)a1 = v46;
    goto LABEL_53;
  }
  uu_cp::aligned_ancestors((__int64)v77);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v90, v77);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v70, &v90);
  v47 = *(_QWORD *)v70;
  if ( !*(_QWORD *)v70 )
  {
LABEL_54:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v90);
    core::ptr::drop_in_place<std::path::PathBuf>(&v74);
LABEL_55:
    *(_QWORD *)a1 = 13LL;
    core::ptr::drop_in_place<uu_cp::copydir::Context>(&v94);
    goto LABEL_47;
  }
  while ( 1 )
  {
    v48 = *(_QWORD *)&v70[16];
    v49 = *(_QWORD *)&v70[24];
    uucore::features::fs::canonicalize(&v65, v47, *(_QWORD *)&v70[8], 0LL, 1LL);
    if ( (_QWORD)v65 != 0x8000000000000000LL )
      break;
LABEL_37:
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v65);
LABEL_38:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v70, &v90);
    v47 = *(_QWORD *)v70;
    if ( !*(_QWORD *)v70 )
      goto LABEL_54;
  }
  v68.m256i_i64[2] = (__int64)v66;
  *(_OWORD *)v68.m256i_i8 = v65;
  uu_cp::copy_attributes((__int64)v77, *((__int128 **)&v65 + 1), v66, v48, v49, v76);
  v50 = *(_QWORD *)v77;
  if ( *(_QWORD *)v77 == 13LL )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(&v68);
    if ( (_QWORD)v65 != 0x8000000000000000LL )
      goto LABEL_38;
    goto LABEL_37;
  }
  *(_QWORD *)(a1 + 56) = *(_QWORD *)&v77[56];
  v59 = *(_OWORD *)&v77[8];
  v60 = *(_OWORD *)&v77[24];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v77[40];
  *(_OWORD *)(a1 + 24) = v60;
  *(_OWORD *)(a1 + 8) = v59;
  *(_QWORD *)a1 = v50;
  core::ptr::drop_in_place<std::path::PathBuf>(&v68);
  if ( (_QWORD)v65 == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v65);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v90);
LABEL_53:
  core::ptr::drop_in_place<std::path::PathBuf>(&v74);
LABEL_46:
  core::ptr::drop_in_place<uu_cp::copydir::Context>(&v94);
LABEL_47:
  v40 = &v87;
LABEL_48:
  core::ptr::drop_in_place<std::path::PathBuf>(v40);
  return a1;
}
