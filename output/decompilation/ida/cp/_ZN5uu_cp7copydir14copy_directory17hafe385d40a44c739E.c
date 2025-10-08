__int64 __fastcall uu_cp::copydir::copy_directory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rcx
  char v14; // r13
  __int64 v15; // r14
  char is_symlink; // al
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *i; // rax
  unsigned __int8 v25; // bl
  __int128 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rbp
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // rbp
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rbp
  __int64 v60; // rax
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // rdx
  char v66; // cl
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  char v71; // [rsp+Fh] [rbp-3B9h]
  char v72; // [rsp+1Ch] [rbp-3ACh]
  __int128 v73; // [rsp+20h] [rbp-3A8h]
  __int64 v74; // [rsp+30h] [rbp-398h]
  unsigned int v75; // [rsp+3Ch] [rbp-38Ch]
  _BYTE v76[40]; // [rsp+40h] [rbp-388h] BYREF
  __int128 v77; // [rsp+68h] [rbp-360h]
  __int128 v78; // [rsp+78h] [rbp-350h]
  __int64 v79; // [rsp+88h] [rbp-340h]
  unsigned __int64 v80; // [rsp+90h] [rbp-338h]
  __int64 v81; // [rsp+98h] [rbp-330h]
  __int64 *v82; // [rsp+A0h] [rbp-328h] BYREF
  __m256i v83; // [rsp+A8h] [rbp-320h]
  __int128 v84; // [rsp+C8h] [rbp-300h]
  __int128 v85; // [rsp+D8h] [rbp-2F0h]
  __int64 v86; // [rsp+E8h] [rbp-2E0h]
  __int128 v87; // [rsp+F0h] [rbp-2D8h] BYREF
  __int128 v88; // [rsp+100h] [rbp-2C8h]
  __int128 v89; // [rsp+110h] [rbp-2B8h]
  __int64 v90; // [rsp+128h] [rbp-2A0h]
  __int64 v91; // [rsp+130h] [rbp-298h]
  int v92; // [rsp+13Ch] [rbp-28Ch]
  __int128 v93; // [rsp+140h] [rbp-288h] BYREF
  __int64 v94; // [rsp+150h] [rbp-278h]
  __int128 *v95; // [rsp+158h] [rbp-270h] BYREF
  __int64 (__fastcall *v96)(); // [rsp+160h] [rbp-268h]
  __int128 v97; // [rsp+170h] [rbp-258h] BYREF
  __int128 v98; // [rsp+180h] [rbp-248h]
  __int128 v99; // [rsp+190h] [rbp-238h]
  __int64 v100; // [rsp+1A8h] [rbp-220h] BYREF
  __int128 v101; // [rsp+1B0h] [rbp-218h] BYREF
  __int128 v102; // [rsp+1C0h] [rbp-208h]
  __int128 v103; // [rsp+1D0h] [rbp-1F8h]
  _BYTE v104[80]; // [rsp+1E0h] [rbp-1E8h] BYREF
  __int64 v105; // [rsp+230h] [rbp-198h]
  __int128 v106; // [rsp+238h] [rbp-190h]
  __int64 v107; // [rsp+248h] [rbp-180h]
  __int128 v108; // [rsp+250h] [rbp-178h]
  __int128 v109; // [rsp+260h] [rbp-168h]
  __int64 v110; // [rsp+270h] [rbp-158h]
  char v111; // [rsp+278h] [rbp-150h]
  _BYTE v112[7]; // [rsp+279h] [rbp-14Fh]
  __int128 v113; // [rsp+280h] [rbp-148h]
  __int128 v114; // [rsp+290h] [rbp-138h] BYREF
  __int128 v115; // [rsp+2A0h] [rbp-128h]
  __int128 v116; // [rsp+2B0h] [rbp-118h]
  __int128 v117; // [rsp+2C0h] [rbp-108h]
  __int128 v118; // [rsp+2D0h] [rbp-F8h]
  __int64 v119; // [rsp+2E8h] [rbp-E0h]
  __int64 v120; // [rsp+2F0h] [rbp-D8h]
  _QWORD v121[4]; // [rsp+2F8h] [rbp-D0h] BYREF
  __int128 v122; // [rsp+318h] [rbp-B0h] BYREF
  __int64 v123; // [rsp+328h] [rbp-A0h]
  __int128 v124; // [rsp+330h] [rbp-98h] BYREF
  __int64 v125; // [rsp+340h] [rbp-88h]
  __int64 v126; // [rsp+348h] [rbp-80h] BYREF
  __int128 v127; // [rsp+350h] [rbp-78h]
  __int128 v128; // [rsp+360h] [rbp-68h]
  __int128 v129; // [rsp+370h] [rbp-58h]
  __int128 v130; // [rsp+380h] [rbp-48h]
  __int64 v131; // [rsp+390h] [rbp-38h]

  v13 = a3;
  v81 = a2;
  v14 = *(_BYTE *)(a7 + 89);
  if ( !*(_WORD *)(a7 + 88) )
  {
    v15 = a4;
    is_symlink = std::path::Path::is_symlink(a3, a4);
    v13 = a3;
    a4 = v15;
    if ( is_symlink )
      return uu_cp::copy_file(a1, v81, a3, v15, a5, a6, a7, a8, a9, a10, 1);
  }
  if ( !*(_BYTE *)(a7 + 94) )
  {
    *(_QWORD *)v76 = 1LL;
    *(_QWORD *)&v76[8] = v13;
    *(_QWORD *)&v76[16] = a4;
    v76[24] = 1;
    v82 = (__int64 *)v76;
    v83.m256i_i64[0] = (__int64)<os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v104 = &off_15E690;
    *(_QWORD *)&v104[8] = 1LL;
    *(_QWORD *)&v104[32] = 0LL;
    *(_QWORD *)&v104[16] = &v82;
    *(_QWORD *)&v104[24] = 1LL;
    core::option::Option<T>::map_or_else(a1 + 8, v104);
    result = 0x8000000000000003LL;
    *(_QWORD *)a1 = 0x8000000000000003LL;
    return result;
  }
  *(_QWORD *)&v73 = v13;
  *((_QWORD *)&v73 + 1) = a4;
  uu_cp::copydir::path_has_prefix(v104, a5, a6);
  if ( v104[0] == 1 )
  {
    result = *(_QWORD *)&v104[8];
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  if ( (v104[1] & 1) != 0 )
  {
    v82 = (_QWORD *)(&dword_0 + 1);
    *(_OWORD *)v83.m256i_i8 = v73;
    v83.m256i_i8[16] = 1;
    v19 = std::path::Path::file_name(v73, *((_QWORD *)&v73 + 1));
    if ( !v19 )
      core::option::unwrap_failed(&off_15E768);
    std::path::Path::join(&v100, a5, a6, v19, v20);
    *(_QWORD *)v76 = 1LL;
    *(_OWORD *)&v76[8] = v101;
    v76[24] = 1;
    *(_QWORD *)&v114 = &v82;
    *((_QWORD *)&v114 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v115 = v76;
    *((_QWORD *)&v115 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v104 = &off_15E6A0;
    *(_QWORD *)&v104[8] = 2LL;
    *(_QWORD *)&v104[32] = 0LL;
    *(_QWORD *)&v104[16] = &v114;
    *(_QWORD *)&v104[24] = 2LL;
    core::option::Option<T>::map_or_else(&v122, v104);
    core::ptr::drop_in_place<std::path::PathBuf>(&v100);
    *(_QWORD *)(a1 + 24) = v123;
    *(_OWORD *)(a1 + 8) = v122;
    result = 0x8000000000000003LL;
    *(_QWORD *)a1 = 0x8000000000000003LL;
    return result;
  }
  v71 = *(_BYTE *)(a7 + 92);
  if ( v71 && (v21 = std::path::Path::parent(v73, *((_QWORD *)&v73 + 1))) != 0 )
  {
    std::path::Path::join(&v87, a5, a6, v21, v22);
    uu_cp::copydir::build_dir(
      (unsigned int)v104,
      (unsigned int)&v87,
      1,
      *(_DWORD *)(a7 + 72),
      *(unsigned __int8 *)(a7 + 74),
      0);
    v23 = *(_QWORD *)v104;
    if ( *(_QWORD *)v104 != 0x800000000000000CLL )
    {
      v43 = *(_OWORD *)&v104[8];
      v44 = *(_OWORD *)&v104[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v104[40];
      *(_OWORD *)(a1 + 24) = v44;
      *(_OWORD *)(a1 + 8) = v43;
      *(_QWORD *)a1 = v23;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v87);
    }
    if ( *(_BYTE *)(a7 + 96) )
    {
      std::path::Path::join(&v100, a5, a6, v73, *((_QWORD *)&v73 + 1));
      uu_cp::aligned_ancestors(v104, v73, *((_QWORD *)&v73 + 1), v101, *((_QWORD *)&v101 + 1));
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v114, v104);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v82, &v114);
      for ( i = v82; v82; i = v82 )
      {
        v95 = (__int128 *)i;
        v96 = (__int64 (__fastcall *)())v83.m256i_i64[0];
        v97 = *(_OWORD *)&v83.m256i_u64[1];
        *(_QWORD *)v76 = &v95;
        *(_QWORD *)&v76[8] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)&v76[16] = &v97;
        *(_QWORD *)&v76[24] = <std::path::Display as core::fmt::Display>::fmt;
        *(_QWORD *)v104 = &unk_15E6C0;
        *(_QWORD *)&v104[8] = 3LL;
        *(_QWORD *)&v104[32] = 0LL;
        *(_QWORD *)&v104[16] = v76;
        *(_QWORD *)&v104[24] = 2LL;
        std::io::stdio::_print(v104);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v82, &v114);
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v114);
      core::ptr::drop_in_place<std::path::PathBuf>(&v100);
    }
    v94 = v88;
    v93 = v87;
  }
  else
  {
    std::path::Path::to_path_buf(&v93, a5);
  }
  v25 = *(_BYTE *)(a7 + 80);
  v120 = *((_QWORD *)&v93 + 1);
  v119 = v94;
  uu_cp::copydir::Context::new((__int64)v104, v73, *((__int64 *)&v73 + 1), *((__int64 *)&v93 + 1), v94);
  if ( *(_QWORD *)v104 == 0x8000000000000000LL )
  {
    v100 = *(_QWORD *)&v104[8];
    v82 = &v100;
    v83.m256i_i64[0] = (__int64)<std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)v76 = &off_15E6F0;
    *(_QWORD *)&v76[8] = 1LL;
    *(_QWORD *)&v76[16] = &v82;
    *(_OWORD *)&v76[24] = 1uLL;
    core::option::Option<T>::map_or_else(&v124, v76);
    *(_QWORD *)(a1 + 24) = v125;
    *(_OWORD *)(a1 + 8) = v124;
    *(_QWORD *)a1 = 0x8000000000000003LL;
    core::ptr::drop_in_place<std::io::error::Error>(&v100);
    return core::ptr::drop_in_place<std::path::PathBuf>(&v93);
  }
  v118 = *(_OWORD *)&v104[64];
  v117 = *(_OWORD *)&v104[48];
  v116 = *(_OWORD *)&v104[32];
  v115 = *(_OWORD *)&v104[16];
  v114 = *(_OWORD *)v104;
  *(_QWORD *)&v97 = 0x8000000000000000LL;
  walkdir::WalkDir::new(v76, v73, *((_QWORD *)&v73 + 1));
  v90 = a7 + 72;
  BYTE11(v78) = *(_BYTE *)(a7 + 91);
  v110 = v78;
  v109 = v77;
  v108 = *(_OWORD *)&v76[24];
  *(_DWORD *)v112 = *(_DWORD *)((char *)&v78 + 9);
  *(_DWORD *)&v112[3] = HIDWORD(v78);
  v106 = *(_OWORD *)v76;
  v107 = *(_QWORD *)&v76[16];
  *(_QWORD *)v104 = 0LL;
  *(_QWORD *)&v104[16] = 0LL;
  *(_QWORD *)&v104[24] = 8LL;
  *(_OWORD *)&v104[32] = 0LL;
  *(_QWORD *)&v104[48] = 8LL;
  *(_OWORD *)&v104[56] = 0LL;
  *(_QWORD *)&v104[72] = 8LL;
  v105 = 0LL;
  v111 = v14;
  v113 = 0LL;
  v75 = *(unsigned __int8 *)(a7 + 90);
  v92 = v25;
  v80 = 0x800000000000000CLL;
  while ( 1 )
  {
    while ( 1 )
    {
      <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(&v100, v104);
      if ( v100 != 0x8000000000000001LL )
        break;
      v89 = v103;
      v88 = v102;
      v87 = v101;
      v74 = *((_QWORD *)&v101 + 1);
      v91 = v102;
      uu_cp::copydir::Entry::new(v76, &v114, *((_QWORD *)&v101 + 1), v102, v75);
      if ( *(_QWORD *)v76 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 0x8000000000000006LL;
        goto LABEL_61;
      }
      v131 = v79;
      v130 = v78;
      v129 = v77;
      v128 = *(_OWORD *)&v76[24];
      v127 = *(_OWORD *)&v76[8];
      v126 = *(_QWORD *)v76;
      uu_cp::copydir::copy_direntry((__int64)v76, v81, (__int64)&v126, a7, a8, v92, a9, a10);
      v27 = *(_QWORD *)v76;
      if ( *(_QWORD *)v76 != v80 )
      {
        v61 = *(_OWORD *)&v76[8];
        v62 = *(_OWORD *)&v76[24];
        *(_OWORD *)(a1 + 40) = v77;
        *(_OWORD *)(a1 + 24) = v62;
        *(_OWORD *)(a1 + 8) = v61;
        *(_QWORD *)a1 = v27;
        goto LABEL_61;
      }
      if ( (WORD4(v89) & 0xF000) == 0x4000 )
      {
        if ( (_QWORD)v97 != 0x8000000000000000LL )
        {
          v28 = *((_QWORD *)&v97 + 1);
          v29 = v98;
          if ( std::path::Path::strip_prefix(*((_QWORD *)&v97 + 1), v98, v74, v91) )
          {
            v30 = std::path::Path::strip_prefix(v28, v29, v74, v91);
            v32 = core::result::Result<T,E>::unwrap(v30, v31, &off_15E750);
            uu_cp::copydir::skip_last((__int64)v121, v32, v33);
            v34 = v121[0];
            if ( v121[0] )
            {
              v35 = v121[3];
              v36 = v121[1];
              v37 = v121[2];
              while ( 1 )
              {
                v38 = v36;
                v39 = v34;
                v40 = std::path::Path::parent(v34, v36);
                if ( !v37 )
                  goto LABEL_38;
                v34 = v40;
                v36 = v41;
                std::path::Path::join(&v95, v74, v91, v37, v35);
                uu_cp::copydir::Entry::new((__int64)v76, &v114, (__int64)&v95, v75);
                if ( *(_QWORD *)v76 == 0x8000000000000000LL )
                {
                  *(_QWORD *)a1 = 0x8000000000000006LL;
                  goto LABEL_60;
                }
                v86 = v79;
                v85 = v78;
                v84 = v77;
                v83 = *(__m256i *)&v76[8];
                v82 = *(__int64 **)v76;
                uu_cp::copy_attributes(v76, *(_QWORD *)&v76[8], *(_QWORD *)&v76[16], v78, *((_QWORD *)&v78 + 1), v90);
                v42 = *(_QWORD *)v76;
                if ( *(_QWORD *)v76 != v80 )
                  break;
                core::ptr::drop_in_place<uu_cp::copydir::Entry>(&v82);
                core::ptr::drop_in_place<std::path::PathBuf>(&v95);
                v37 = v39;
                v35 = v38;
                if ( !v34 )
                  goto LABEL_38;
              }
              v63 = *(_OWORD *)&v76[8];
              v64 = *(_OWORD *)&v76[24];
              *(_OWORD *)(a1 + 40) = v77;
              *(_OWORD *)(a1 + 24) = v64;
              *(_OWORD *)(a1 + 8) = v63;
              *(_QWORD *)a1 = v42;
              core::ptr::drop_in_place<uu_cp::copydir::Entry>(&v82);
LABEL_60:
              core::ptr::drop_in_place<std::path::PathBuf>(&v95);
LABEL_61:
              core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v87);
              core::ptr::drop_in_place<walkdir::IntoIter>(v104);
              v65 = v97;
              v66 = 0;
              goto LABEL_62;
            }
          }
        }
LABEL_38:
        core::ptr::drop_in_place<core::option::Option<walkdir::dent::DirEntry>>(&v97);
        v99 = v103;
        v98 = v102;
        v97 = v101;
      }
      else
      {
        core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v101);
      }
    }
    if ( v100 == 0x8000000000000002LL )
      break;
    *(_QWORD *)v76 = v100;
    v77 = v103;
    *(_OWORD *)&v76[24] = v102;
    *(_OWORD *)&v76[8] = v101;
    *(_QWORD *)&v26 = uucore::util_name();
    v87 = v26;
    v95 = &v87;
    v96 = <&T as core::fmt::Display>::fmt;
    v82 = (__int64 *)&unk_15E700;
    v83.m256i_i64[0] = 2LL;
    v83.m256i_i64[1] = (__int64)&v95;
    *(_OWORD *)&v83.m256i_u64[2] = 1uLL;
    std::io::stdio::_eprint(&v82);
    *(_QWORD *)&v87 = v76;
    *((_QWORD *)&v87 + 1) = <walkdir::error::Error as core::fmt::Display>::fmt;
    v82 = (__int64 *)&unk_15E620;
    v83.m256i_i64[0] = 2LL;
    v83.m256i_i64[1] = (__int64)&v87;
    *(_OWORD *)&v83.m256i_u64[2] = 1uLL;
    std::io::stdio::_eprint(&v82);
    core::ptr::drop_in_place<walkdir::error::Error>(v76);
  }
  core::ptr::drop_in_place<walkdir::IntoIter>(v104);
  v45 = 1;
  v81 = v97;
  if ( (_QWORD)v97 != 0x8000000000000000LL )
  {
    v46 = std::path::Path::strip_prefix(*((_QWORD *)&v97 + 1), v98, v73, *((_QWORD *)&v73 + 1));
    v49 = core::result::Result<T,E>::unwrap(v46, v47, &off_15E720);
    if ( v49 )
    {
      v50 = v48;
      while ( 1 )
      {
        v51 = std::path::Path::parent(v49, v50);
        v53 = v52;
        std::path::Path::join(&v82, v73, *((_QWORD *)&v73 + 1), v49, v50);
        uu_cp::copydir::Entry::new((__int64)v104, &v114, (__int64)&v82, v75);
        if ( *(_QWORD *)v104 == 0x8000000000000000LL )
          break;
        v79 = *(_QWORD *)&v104[72];
        v78 = *(_OWORD *)&v104[56];
        v77 = *(_OWORD *)&v104[40];
        *(_OWORD *)&v76[24] = *(_OWORD *)&v104[24];
        *(_OWORD *)&v76[8] = *(_OWORD *)&v104[8];
        *(_QWORD *)v76 = *(_QWORD *)v104;
        uu_cp::copy_attributes(
          v104,
          *(_QWORD *)&v104[8],
          *(_QWORD *)&v104[16],
          *(_QWORD *)&v104[56],
          *(_QWORD *)&v104[64],
          v90);
        v54 = *(_QWORD *)v104;
        if ( *(_QWORD *)v104 != v80 )
        {
          v67 = *(_OWORD *)&v104[8];
          v68 = *(_OWORD *)&v104[24];
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v104[40];
          *(_OWORD *)(a1 + 24) = v68;
          *(_OWORD *)(a1 + 8) = v67;
          *(_QWORD *)a1 = v54;
          core::ptr::drop_in_place<uu_cp::copydir::Entry>(v76);
          goto LABEL_73;
        }
        core::ptr::drop_in_place<uu_cp::copydir::Entry>(v76);
        core::ptr::drop_in_place<std::path::PathBuf>(&v82);
        v49 = v51;
        v50 = v53;
        if ( !v51 )
          goto LABEL_46;
      }
      *(_QWORD *)a1 = 0x8000000000000006LL;
LABEL_73:
      core::ptr::drop_in_place<std::path::PathBuf>(&v82);
      goto LABEL_63;
    }
LABEL_46:
    core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v97);
    v45 = 0;
  }
  if ( !v71 )
  {
LABEL_67:
    *(_QWORD *)a1 = v80;
    if ( v81 != 0x8000000000000000LL && v45 )
      core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v97);
    goto LABEL_64;
  }
  v72 = v45;
  v55 = std::path::Path::file_name(v73, *((_QWORD *)&v73 + 1));
  if ( !v55 )
    core::option::unwrap_failed(&off_15E738);
  std::path::Path::join(&v87, v120, v119, v55, v56);
  uu_cp::aligned_ancestors(v104, v73, *((_QWORD *)&v73 + 1), *((_QWORD *)&v87 + 1), v88);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v82, v104);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v76, &v82);
  v57 = *(_QWORD *)v76;
  if ( !*(_QWORD *)v76 )
  {
LABEL_66:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v82);
    core::ptr::drop_in_place<std::path::PathBuf>(&v87);
    v45 = v72;
    goto LABEL_67;
  }
  while ( 1 )
  {
    v58 = *(_QWORD *)&v76[16];
    v59 = *(_QWORD *)&v76[24];
    uucore::features::fs::canonicalize(&v100, v57, *(_QWORD *)&v76[8], 0LL, 1LL);
    if ( v100 != 0x8000000000000000LL )
      break;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v100);
LABEL_52:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v76, &v82);
    v57 = *(_QWORD *)v76;
    if ( !*(_QWORD *)v76 )
      goto LABEL_66;
  }
  uu_cp::copy_attributes(v104, v101, *((_QWORD *)&v101 + 1), v58, v59, v90);
  v60 = *(_QWORD *)v104;
  if ( *(_QWORD *)v104 == v80 )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(&v100);
    goto LABEL_52;
  }
  v69 = *(_OWORD *)&v104[8];
  v70 = *(_OWORD *)&v104[24];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v104[40];
  *(_OWORD *)(a1 + 24) = v70;
  *(_OWORD *)(a1 + 8) = v69;
  *(_QWORD *)a1 = v60;
  core::ptr::drop_in_place<std::path::PathBuf>(&v100);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>(&v82);
  core::ptr::drop_in_place<std::path::PathBuf>(&v87);
  v66 = v72 ^ 1;
  v65 = v81;
LABEL_62:
  if ( !(v66 & 1 | (v65 == 0x8000000000000000LL)) )
LABEL_63:
    core::ptr::drop_in_place<walkdir::dent::DirEntry>(&v97);
LABEL_64:
  core::ptr::drop_in_place<uu_cp::copydir::Context>(&v114);
  return core::ptr::drop_in_place<std::path::PathBuf>(&v93);
}