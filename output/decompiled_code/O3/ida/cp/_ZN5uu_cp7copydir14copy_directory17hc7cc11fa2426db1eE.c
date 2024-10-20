        unsigned __int8 a11)
{
  _OWORD *v11; // r12
  void *v12; // r13
  void *v16; // r14
  char is_symlink; // al
  __int64 result; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  _OWORD *v21; // r13
  __int64 v22; // r12
  __int128 v23; // kr10_16
  size_t v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  bool v31; // zf
  int v32; // ebp
  __mode_t v33; // eax
  __int16 v34; // bx
  int v35; // ebx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int128 v40; // kr20_16
  size_t v41; // r15
  void *v42; // rsi
  unsigned __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rax
  _BYTE *v46; // rdx
  __int128 v47; // xmm0
  _BYTE *v48; // rcx
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rbp
  __int64 v55; // r14
  __int64 v56; // rbx
  unsigned __int8 is_dir; // al
  char *v58; // r15
  size_t v59; // r12
  char *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  char is_file; // r15
  __int64 v65; // rbp
  __int64 v66; // r12
  __int64 v67; // rbx
  _OWORD *v68; // r14
  __int64 v69; // rax
  bool v70; // bl
  __int64 v71; // rbx
  __mode_t v72; // eax
  __int16 v73; // bx
  __int64 v74; // rax
  __int64 v75; // r14
  unsigned __int8 v76; // bl
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 (__fastcall *v79)(); // rdx
  __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int128 v88; // kr60_16
  __int64 v89; // r14
  __int64 v90; // rbp
  __int128 v91; // xmm0
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r14
  __int64 v96; // rax
  __int128 v97; // kr70_16
  __int64 *v98; // rbx
  __int64 v99; // r13
  __int64 v100; // rsi
  void *v101; // r14
  size_t v102; // r12
  __int128 *v103; // rbp
  __int64 v104; // r15
  __int64 v105; // rax
  __int128 v106; // xmm1
  __int64 v107; // rax
  __int128 v108; // xmm0
  __int128 v109; // xmm1
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  void *v114; // [rsp+0h] [rbp-3E8h]
  void *v115; // [rsp+0h] [rbp-3E8h]
  __int64 v116; // [rsp+0h] [rbp-3E8h]
  __int64 v117; // [rsp+8h] [rbp-3E0h]
  char v118; // [rsp+10h] [rbp-3D8h]
  void *v119; // [rsp+10h] [rbp-3D8h]
  char v120; // [rsp+1Ch] [rbp-3CCh]
  char v121; // [rsp+1Dh] [rbp-3CBh]
  char v122; // [rsp+1Eh] [rbp-3CAh]
  char v123; // [rsp+1Fh] [rbp-3C9h]
  __int64 v125; // [rsp+28h] [rbp-3C0h]
  __int64 v126; // [rsp+28h] [rbp-3C0h]
  __int64 v127; // [rsp+28h] [rbp-3C0h]
  __int64 v128; // [rsp+30h] [rbp-3B8h]
  __int64 v129; // [rsp+38h] [rbp-3B0h]
  __int64 v130; // [rsp+40h] [rbp-3A8h]
  __int64 v131; // [rsp+40h] [rbp-3A8h]
  char v132; // [rsp+48h] [rbp-3A0h]
  _BYTE dest[64]; // [rsp+50h] [rbp-398h] BYREF
  __int64 v134; // [rsp+90h] [rbp-358h]
  __int128 v135; // [rsp+100h] [rbp-2E8h] BYREF
  __int128 v136; // [rsp+110h] [rbp-2D8h]
  __int128 v137; // [rsp+120h] [rbp-2C8h]
  __int64 v138; // [rsp+130h] [rbp-2B8h]
  _BYTE v139[64]; // [rsp+140h] [rbp-2A8h] BYREF
  char *v140; // [rsp+188h] [rbp-260h]
  size_t v141; // [rsp+190h] [rbp-258h]
  size_t v142; // [rsp+198h] [rbp-250h]
  __int128 v143; // [rsp+1A0h] [rbp-248h] BYREF
  __int128 v144; // [rsp+1B0h] [rbp-238h]
  __int128 v145; // [rsp+1C0h] [rbp-228h]
  __int64 v146; // [rsp+1D0h] [rbp-218h]
  __int128 v147; // [rsp+1E0h] [rbp-208h] BYREF
  size_t v148; // [rsp+1F0h] [rbp-1F8h]
  _BYTE *v149; // [rsp+200h] [rbp-1E8h]
  int v150; // [rsp+20Ch] [rbp-1DCh]
  __int128 v151; // [rsp+210h] [rbp-1D8h] BYREF
  size_t v152; // [rsp+220h] [rbp-1C8h]
  unsigned __int64 v153; // [rsp+228h] [rbp-1C0h]
  __int128 v154; // [rsp+230h] [rbp-1B8h]
  char *v155; // [rsp+240h] [rbp-1A8h]
  size_t v156; // [rsp+248h] [rbp-1A0h]
  __int64 v157; // [rsp+250h] [rbp-198h]
  size_t v158; // [rsp+258h] [rbp-190h]
  __int64 v159; // [rsp+260h] [rbp-188h] BYREF
  __int64 v160; // [rsp+268h] [rbp-180h]
  __int128 *v161; // [rsp+270h] [rbp-178h] BYREF
  __int64 (__fastcall *v162)(); // [rsp+278h] [rbp-170h]
  __int64 v163; // [rsp+280h] [rbp-168h]
  __int64 v164; // [rsp+288h] [rbp-160h]
  __int128 *v165; // [rsp+290h] [rbp-158h] BYREF
  __int128 v166; // [rsp+298h] [rbp-150h]
  __int64 (__fastcall *v167)(_QWORD, _QWORD); // [rsp+2A8h] [rbp-140h]
  __int128 v168; // [rsp+2B0h] [rbp-138h]
  __int64 v169; // [rsp+2C0h] [rbp-128h]
  __int128 v170; // [rsp+2C8h] [rbp-120h]
  __int64 v171; // [rsp+2D8h] [rbp-110h]
  __int64 v172; // [rsp+2E0h] [rbp-108h]
  __int128 v173; // [rsp+2E8h] [rbp-100h]
  __int64 v174; // [rsp+2F8h] [rbp-F0h]
  __int64 v175; // [rsp+300h] [rbp-E8h]
  __int64 v176; // [rsp+308h] [rbp-E0h]
  __int64 v177; // [rsp+310h] [rbp-D8h]
  __int64 v178; // [rsp+318h] [rbp-D0h]
  __int64 v179; // [rsp+320h] [rbp-C8h]
  char v180; // [rsp+328h] [rbp-C0h]
  _BYTE v181[7]; // [rsp+329h] [rbp-BFh]
  __int128 v182; // [rsp+330h] [rbp-B8h]
  _BYTE v183[24]; // [rsp+340h] [rbp-A8h] BYREF
  __int128 v184; // [rsp+358h] [rbp-90h]
  __int128 v185; // [rsp+368h] [rbp-80h]
  __int64 v186; // [rsp+378h] [rbp-70h]
  _QWORD v187[3]; // [rsp+388h] [rbp-60h] BYREF
  __int128 v188; // [rsp+3A0h] [rbp-48h] BYREF
  __int64 v189; // [rsp+3B0h] [rbp-38h]

  v11 = a6;
  v12 = a5;
  v132 = a7[65];
  if ( !v132 && (!a11 || !a7[64]) )
  {
    v16 = a3;
    is_symlink = std::path::Path::is_symlink(a3, a4);
    a3 = v16;
    v11 = a6;
    v12 = a5;
    if ( is_symlink )
    {
      uu_cp::copy_file((char *)a1, a2, v16, a4, a5, v11, (__int64)a7, a8, a9, a10, a11);
      return a1;
    }
  }
  if ( !a7[70] )
  {
    v165 = (_OWORD *)(&dword_0 + 1);
    *(_QWORD *)&v166 = a3;
    *((_QWORD *)&v166 + 1) = a4;
    LOBYTE(v167) = 1;
    *(_QWORD *)&v151 = &v165;
    *((_QWORD *)&v151 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_155938;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v151;
    *(_QWORD *)&dest[24] = 1LL;
    alloc::fmt::format::format_inner(a1 + 8, dest);
    result = a1;
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  v164 = a2;
  v117 = (__int64)a3;
  uucore::features::fs::canonicalize(dest, v12, v11, 0LL, 2LL);
  v19 = *(_QWORD *)&dest[8];
  v20 = *(_QWORD *)dest;
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
  {
LABEL_12:
    result = a1;
    *(_QWORD *)a1 = 2LL;
    *(_QWORD *)(a1 + 8) = v19;
    return result;
  }
  v114 = v12;
  v21 = v11;
  v22 = *(_QWORD *)&dest[16];
  v142 = a4;
  uucore::features::fs::canonicalize(dest, v117, a4, 0LL, 2LL);
  v23 = *(_OWORD *)dest;
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
  {
    if ( v20 )
      _rust_dealloc(v19, v20, 1LL);
    v19 = *((_QWORD *)&v23 + 1);
    goto LABEL_12;
  }
  v118 = std::path::Path::_starts_with(v19, v22, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
  if ( (_QWORD)v23 )
    _rust_dealloc(*((_QWORD *)&v23 + 1), v23, 1LL);
  if ( v20 )
    _rust_dealloc(v19, v20, 1LL);
  v24 = v142;
  if ( v118 )
  {
    *(_QWORD *)&v151 = 1LL;
    *((_QWORD *)&v151 + 1) = v117;
    v152 = v142;
    LOBYTE(v153) = 1;
    v25 = std::path::Path::file_name(v117, v142);
    if ( !v25 )
      core::option::unwrap_failed(&off_1559C0);
    std::path::Path::_join(v183, v114, v21, v25, v26);
    v27 = *(_QWORD *)&v183[8];
    v165 = (_OWORD *)(&dword_0 + 1);
    v166 = *(_OWORD *)&v183[8];
    LOBYTE(v167) = 1;
    *(_QWORD *)v139 = &v151;
    *(_QWORD *)&v139[8] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v139[16] = &v165;
    *(_QWORD *)&v139[24] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_1559D8;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v139;
    *(_QWORD *)&dest[24] = 2LL;
    alloc::fmt::format::format_inner(&v135, dest);
    if ( *(_QWORD *)v183 )
      _rust_dealloc(v27, *(_QWORD *)v183, 1LL);
    *(_QWORD *)(a1 + 24) = v136;
    result = a1;
    *(_OWORD *)(a1 + 8) = v135;
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  v121 = a7[68];
  if ( v121 && (v28 = std::path::Path::parent(v117, v142)) != 0 )
  {
    std::path::Path::_join(v139, v114, v21, v28, v29);
    v30 = 18;
    if ( !a7[50] )
      v30 = 0;
    v31 = a7[48] == 0;
    dest[4] = 1;
    v32 = 63;
    if ( v31 )
      v32 = v30;
    v33 = umask(0);
    v34 = v33;
    umask(v33);
    v35 = v32 | v34 & 0x1FF;
    v24 = v142;
    *(_DWORD *)dest = v35 ^ 0x1FF;
    v36 = *(_QWORD *)&v139[8];
    v37 = std::fs::DirBuilder::_create(dest, *(_QWORD *)&v139[8], *(_QWORD *)&v139[16]);
    if ( v37 )
    {
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = v37;
      v38 = *(_QWORD *)v139;
      if ( *(_QWORD *)v139 )
      {
        v39 = v36;
        goto LABEL_181;
      }
      return a1;
    }
    if ( a7[72] )
    {
      std::path::Path::_join(&v151, v114, v21, v117, v24);
      v131 = *((_QWORD *)&v151 + 1);
      uu_cp::aligned_ancestors(dest);
      v88 = *(_OWORD *)dest;
      if ( *(_QWORD *)&dest[16] )
      {
        v89 = *(_QWORD *)&dest[8];
        v90 = *(_QWORD *)&dest[8] + 32LL * *(_QWORD *)&dest[16];
        do
        {
          if ( !*(_QWORD *)v89 )
            break;
          v91 = *(_OWORD *)(v89 + 16);
          v92 = *(_QWORD *)(v89 + 8);
          *(_QWORD *)&v135 = *(_QWORD *)v89;
          *((_QWORD *)&v135 + 1) = v92;
          *(_OWORD *)v183 = v91;
          v165 = &v135;
          *(_QWORD *)&v166 = <std::path::Display as core::fmt::Display>::fmt;
          *((_QWORD *)&v166 + 1) = v183;
          v167 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &unk_155948;
          *(_QWORD *)&dest[8] = 3LL;
          *(_QWORD *)&dest[32] = 0LL;
          *(_QWORD *)&dest[16] = &v165;
          *(_QWORD *)&dest[24] = 2LL;
          std::io::stdio::_print(dest, v117, v85, v92, v86, v87);
          v89 += 32LL;
        }
        while ( v89 != v90 );
      }
      if ( (_QWORD)v88 )
        _rust_dealloc(*((_QWORD *)&v88 + 1), 32 * v88, 8LL);
      v24 = v142;
      if ( (_QWORD)v151 )
        _rust_dealloc(v131, v151, 1LL);
    }
    v148 = *(_QWORD *)&v139[16];
    v147 = *(_OWORD *)v139;
  }
  else
  {
    std::path::Path::to_path_buf(&v147, v114);
  }
  v140 = (char *)*((_QWORD *)&v147 + 1);
  v141 = v148;
  v122 = a7[56];
  std::env::current_dir(dest);
  v40 = *(_OWORD *)dest;
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
  {
    *(_QWORD *)v139 = *(_QWORD *)&dest[8];
    v165 = (__int128 *)v139;
    *(_QWORD *)&v166 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_1559B0;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v165;
    *(_QWORD *)&dest[24] = 1LL;
    alloc::fmt::format::format_inner(&v188, dest);
    *(_QWORD *)(a1 + 24) = v189;
    *(_OWORD *)(a1 + 8) = v188;
    *(_QWORD *)a1 = 4LL;
    core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)v139, dest);
    goto LABEL_179;
  }
  v41 = *(_QWORD *)&dest[16];
  std::path::Path::_join(&v165, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16], v117, v24);
  v42 = v140;
  std::sys::pal::unix::fs::stat(dest);
  if ( *(_DWORD *)dest == 2 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&dest[8], v42);
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_str(dest, v117);
    if ( *(_QWORD *)dest )
      core::option::unwrap_failed(&off_155890);
    if ( *(_QWORD *)&dest[16] < 2uLL || *(_WORD *)(*(_QWORD *)&dest[8] + *(_QWORD *)&dest[16] - 2LL) != 11823 )
    {
      v44 = v166;
      v45 = std::path::Path::parent(v166, *((_QWORD *)&v166 + 1));
      v43 = 0x8000000000000000LL;
      if ( v45 )
      {
        std::path::Path::to_path_buf(dest, v45);
        v43 = *(_QWORD *)dest;
        *(_OWORD *)v139 = *(_OWORD *)&dest[8];
      }
      *(_OWORD *)v183 = *(_OWORD *)v139;
      if ( v165 )
        _rust_dealloc(v44, v165, 1LL);
      goto LABEL_45;
    }
  }
  v43 = (unsigned __int64)v165;
  *(_OWORD *)v183 = v166;
LABEL_45:
  v154 = *(_OWORD *)v183;
  v151 = v40;
  v152 = v41;
  v153 = v43;
  v155 = v140;
  v156 = v141;
  v157 = v117;
  v158 = v24;
  std::path::Path::to_path_buf(dest, v117);
  v46 = a7;
  v149 = a7 + 48;
  *(_QWORD *)&dest[24] = 0LL;
  *(_QWORD *)&dest[40] = 10LL;
  *(_QWORD *)&dest[48] = 0LL;
  *(_QWORD *)&dest[56] = -1LL;
  LOWORD(v134) = 256;
  BYTE2(v134) = 0;
  BYTE3(v134) = a7[67];
  v177 = 10LL;
  v178 = 0LL;
  v175 = 0LL;
  v176 = *(_QWORD *)&dest[32];
  v179 = -1LL;
  *(_DWORD *)v181 = *(_DWORD *)((char *)&v134 + 1);
  *(_DWORD *)&v181[3] = HIDWORD(v134);
  v173 = *(_OWORD *)dest;
  v174 = *(_QWORD *)&dest[16];
  v165 = 0LL;
  *((_QWORD *)&v166 + 1) = 0LL;
  v167 = (__int64 (__fastcall *)(_QWORD, _QWORD))&byte_8;
  *(_QWORD *)&v47 = 0LL;
  v168 = 0LL;
  v169 = 8LL;
  v170 = 0LL;
  v171 = 8LL;
  v172 = 0LL;
  v180 = v132;
  v182 = 0LL;
  v123 = a7[66];
  v48 = (_BYTE *)&word_12;
  if ( !a7[50] )
    v48 = 0LL;
  v120 = a7[72];
  v49 = 63;
  if ( !a7[48] )
    v49 = (int)v48;
  v150 = v49;
  while ( 1 )
  {
    while ( 1 )
    {
      <walkdir::IntoIter as core::iter::traits::iterator::Iterator>::next(v183, &v165, v46, v48);
      if ( *(_QWORD *)v183 == 2LL )
        break;
      if ( *(_DWORD *)v183 == 3 )
      {
        core::ptr::drop_in_place<walkdir::IntoIter>(&v165, *(double *)&v47);
        if ( v121 )
        {
          v93 = std::path::Path::file_name(v117, v24);
          if ( !v93 )
            core::option::unwrap_failed(&off_155978);
          std::path::Path::_join(v139, v140, v141, v93, v94);
          v95 = *(_QWORD *)&v139[8];
          uu_cp::copy_attributes(dest, v117, v24, *(void **)&v139[8], *(size_t *)&v139[16], v149);
          v96 = *(_QWORD *)dest;
          if ( *(_QWORD *)dest != 13LL )
          {
            *(_QWORD *)(a1 + 56) = *(_QWORD *)&dest[56];
            v110 = *(_OWORD *)&dest[8];
            v111 = *(_OWORD *)&dest[24];
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&dest[40];
            *(_OWORD *)(a1 + 24) = v111;
            *(_OWORD *)(a1 + 8) = v110;
            *(_QWORD *)a1 = v96;
LABEL_172:
            if ( *(_QWORD *)v139 )
              _rust_dealloc(v95, *(_QWORD *)v139, 1LL);
            goto LABEL_164;
          }
          uu_cp::aligned_ancestors(dest);
          v116 = v95;
          v97 = *(_OWORD *)dest;
          if ( *(_QWORD *)&dest[16] )
          {
            v98 = *(__int64 **)&dest[8];
            v99 = *(_QWORD *)&dest[8] + 32LL * *(_QWORD *)&dest[16];
            do
            {
              v100 = *v98;
              if ( !*v98 )
                break;
              v101 = (void *)v98[2];
              v102 = v98[3];
              uucore::features::fs::canonicalize(&v165, v100, v98[1], 0LL, 1LL);
              v103 = v165;
              v104 = v166;
              if ( v165 == (__int128 *)0x8000000000000000LL )
              {
                core::ptr::drop_in_place<std::io::error::Error>(v166, v100);
              }
              else
              {
                uu_cp::copy_attributes(dest, v166, *((size_t *)&v166 + 1), v101, v102, v149);
                v105 = *(_QWORD *)dest;
                if ( *(_QWORD *)dest != 13LL )
                {
                  *(_QWORD *)(a1 + 56) = *(_QWORD *)&dest[56];
                  v112 = *(_OWORD *)&dest[8];
                  v113 = *(_OWORD *)&dest[24];
                  *(_OWORD *)(a1 + 40) = *(_OWORD *)&dest[40];
                  *(_OWORD *)(a1 + 24) = v113;
                  *(_OWORD *)(a1 + 8) = v112;
                  *(_QWORD *)a1 = v105;
                  if ( v103 )
                    _rust_dealloc(v104, v103, 1LL);
                  v95 = v116;
                  if ( (_QWORD)v97 )
                    _rust_dealloc(*((_QWORD *)&v97 + 1), 32 * v97, 8LL);
                  goto LABEL_172;
                }
                if ( v103 )
                  *(double *)&v47 = _rust_dealloc(v104, v103, 1LL);
              }
              v98 += 4;
            }
            while ( v98 != (__int64 *)v99 );
          }
          if ( (_QWORD)v97 )
            *(double *)&v47 = _rust_dealloc(*((_QWORD *)&v97 + 1), 32 * v97, 8LL);
          if ( *(_QWORD *)v139 )
            *(double *)&v47 = _rust_dealloc(v116, *(_QWORD *)v139, 1LL);
        }
        else
        {
          uu_cp::copy_attributes(dest, v117, v24, v140, v141, v149);
          v107 = *(_QWORD *)dest;
          if ( *(_QWORD *)dest != 13LL )
          {
            *(_QWORD *)(a1 + 56) = *(_QWORD *)&dest[56];
            v108 = *(_OWORD *)&dest[8];
            v109 = *(_OWORD *)&dest[24];
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&dest[40];
            *(_OWORD *)(a1 + 24) = v109;
            *(_OWORD *)(a1 + 8) = v108;
            *(_QWORD *)a1 = v107;
            goto LABEL_164;
          }
        }
        *(_QWORD *)a1 = 13LL;
        core::ptr::drop_in_place<uu_cp::copydir::Context>(&v151, *(double *)&v47);
        goto LABEL_179;
      }
      *(_QWORD *)dest = *(_QWORD *)v183;
      *(_OWORD *)&dest[40] = v185;
      *(_OWORD *)&dest[24] = v184;
      *(_OWORD *)&dest[8] = *(_OWORD *)&v183[8];
      *(_QWORD *)&dest[56] = v186;
      if ( uucore::UTIL_NAME != 2 )
        once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      *(_QWORD *)&v47 = xmmword_15C040;
      v135 = xmmword_15C040;
      *(_QWORD *)&v143 = &v135;
      *((_QWORD *)&v143 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v139 = &unk_155990;
      *(_QWORD *)&v139[8] = 2LL;
      *(_QWORD *)&v139[32] = 0LL;
      *(_QWORD *)&v139[16] = &v143;
      *(_QWORD *)&v139[24] = 1LL;
      std::io::stdio::_eprint(v139);
      *(_QWORD *)&v135 = dest;
      *((_QWORD *)&v135 + 1) = <walkdir::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)v139 = &unk_1558C8;
      *(_QWORD *)&v139[8] = 2LL;
      *(_QWORD *)&v139[32] = 0LL;
      *(_QWORD *)&v139[16] = &v135;
      *(_QWORD *)&v139[24] = 1LL;
      std::io::stdio::_eprint(v139);
      if ( *(_QWORD *)dest )
      {
        if ( *(_QWORD *)&dest[8] )
          *(double *)&v47 = _rust_dealloc(*(_QWORD *)&dest[16], *(_QWORD *)&dest[8], 1LL);
        if ( *(_QWORD *)&dest[32] )
          *(double *)&v47 = _rust_dealloc(*(_QWORD *)&dest[40], *(_QWORD *)&dest[32], 1LL);
      }
      else
      {
        v63 = *(_QWORD *)&dest[16];
        if ( *(_QWORD *)&dest[16] != 0x8000000000000000LL && *(_QWORD *)&dest[16] )
          *(double *)&v47 = _rust_dealloc(*(_QWORD *)&dest[24], *(_QWORD *)&dest[16], 1LL);
        core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&dest[8], v63);
      }
    }
    v129 = *(_QWORD *)&v183[8];
    v50 = v184;
    v130 = *(_QWORD *)&v183[16];
    std::path::Path::to_path_buf(&v135, *(_QWORD *)&v183[16]);
    v51 = v136;
    v128 = *((_QWORD *)&v135 + 1);
    std::path::Path::_join(v139, *((_QWORD *)&v151 + 1), v152, *((_QWORD *)&v135 + 1), v136);
    v52 = *(_QWORD *)&v139[8];
    v53 = *(_QWORD *)&v139[16];
    v115 = *(void **)&v139[8];
    if ( v153 != 0x8000000000000000LL )
    {
      v52 = std::path::Path::_strip_prefix(*(_QWORD *)&v139[8], *(_QWORD *)&v139[16], v154, *((_QWORD *)&v154 + 1));
      if ( !v52 )
        goto LABEL_156;
    }
    std::path::Path::to_path_buf(dest, v52);
    v54 = *(_QWORD *)dest;
    if ( *(_QWORD *)dest == 0x8000000000000000LL )
      goto LABEL_156;
    v163 = v51;
    v55 = *(_QWORD *)&dest[8];
    v56 = *(_QWORD *)&dest[16];
    if ( !v123 )
    {
      v58 = v155;
      v59 = v156;
      goto LABEL_76;
    }
    is_dir = std::path::Path::is_dir(v130, v50);
    v58 = v155;
    v59 = v156;
    if ( v156 && ((v155[v156 - 1] == 47 || v155[v156 - 1] == 92) & is_dir) != 0 )
    {
      *(_DWORD *)dest = 511;
      dest[4] = 1;
      v60 = v155;
      v61 = std::fs::DirBuilder::_create(dest, v155, v156);
      if ( v61 )
      {
        v187[0] = v61;
        *(_QWORD *)&v143 = v187;
        *((_QWORD *)&v143 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)dest = &off_1558A8;
        *(_QWORD *)&dest[8] = 2LL;
        *(_QWORD *)&dest[32] = 0LL;
        *(_QWORD *)&dest[16] = &v143;
        *(_QWORD *)&dest[24] = 1LL;
        std::io::stdio::_eprint(dest);
        core::ptr::drop_in_place<std::io::error::Error>(v187[0], v60);
      }
      goto LABEL_76;
    }
    v62 = std::path::Path::_strip_prefix(v55, v56, v157, v158);
    if ( !v62 )
      break;
    std::path::Path::to_path_buf(dest, v62);
    if ( v54 )
      *(double *)&v47 = _rust_dealloc(v55, v54, 1LL);
    v55 = *(_QWORD *)&dest[8];
    v54 = *(_QWORD *)dest;
    v56 = *(_QWORD *)&dest[16];
LABEL_76:
    std::path::Path::_join(dest, v58, v59, v55, v56);
    if ( v54 )
      *(double *)&v47 = _rust_dealloc(v55, v54, 1LL);
    is_file = std::path::Path::is_file(v58, v59);
    v65 = *(_QWORD *)v139;
    if ( *(_QWORD *)v139 == 0x8000000000000000LL )
      goto LABEL_160;
    v66 = v135;
    v119 = *(void **)&dest[8];
    v67 = *(_QWORD *)dest;
    v68 = *(_OWORD **)&dest[16];
    if ( ((unsigned __int8)std::path::Path::is_symlink(v115, v53) & (v132 == 0)) != 0 )
    {
      uu_cp::copy_link(v139, (__int64)v115, v53, v119, (size_t)v68, (__int64)a8);
      goto LABEL_81;
    }
    if ( !(unsigned __int8)std::path::Path::is_dir(v115, v53) )
      goto LABEL_193;
    *(_QWORD *)&v143 = v115;
    *((_QWORD *)&v143 + 1) = v53;
    *(_QWORD *)&v135 = 0LL;
    *((_QWORD *)&v135 + 1) = 1LL;
    *(_QWORD *)&v136 = 0LL;
    *(_QWORD *)&dest[48] = 32LL;
    dest[56] = 3;
    *(_QWORD *)dest = 0LL;
    *(_QWORD *)&dest[16] = 0LL;
    *(_QWORD *)&dest[32] = &v135;
    *(_QWORD *)&dest[40] = &off_155828;
    v125 = v67;
    if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v143, dest) )
      core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v161, &unk_155870, &off_155858);
    v70 = (unsigned __int64)v136 >= 2 && *(_WORD *)(*((_QWORD *)&v135 + 1) + v136 - 2) == 11823;
    if ( (_QWORD)v135 )
      *(double *)&v47 = _rust_dealloc(*((_QWORD *)&v135 + 1), v135, 1LL);
    v31 = !v70;
    v67 = v125;
    if ( v31 && (std::sys::pal::unix::fs::stat(dest), *(_DWORD *)dest == 2) )
    {
      core::ptr::drop_in_place<std::io::error::Error>(*(_QWORD *)&dest[8], v119);
      if ( is_file )
      {
        <uu_cp::Error as core::convert::From<&str>>::from(dest, aCannotOverwrit_0, 45LL);
LABEL_124:
        *(_QWORD *)&v47 = *(_QWORD *)dest;
        *(_OWORD *)&v139[48] = *(_OWORD *)&dest[48];
        *(_OWORD *)&v139[32] = *(_OWORD *)&dest[32];
        *(_OWORD *)&v139[16] = *(_OWORD *)&dest[16];
        *(_OWORD *)v139 = *(_OWORD *)dest;
        goto LABEL_81;
      }
      dest[4] = 0;
      v72 = umask(0);
      v73 = v72;
      umask(v72);
      *(_DWORD *)dest = (v150 | v73 & 0x1FF) ^ 0x1FF;
      v67 = v125;
      v74 = std::fs::DirBuilder::_create(dest, v119, v68);
      if ( v74 )
      {
        *(_QWORD *)v139 = 2LL;
        *(_QWORD *)&v139[8] = v74;
      }
      else
      {
        if ( v120 )
        {
          uu_cp::context_for((__int64)&v135, v128, v163, (__int64)v119, (__int64)v68);
          *(_QWORD *)&v143 = &v135;
          *((_QWORD *)&v143 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)dest = &unk_1558C8;
          *(_QWORD *)&dest[8] = 2LL;
          *(_QWORD *)&dest[32] = 0LL;
          *(_QWORD *)&dest[16] = &v143;
          *(_QWORD *)&dest[24] = 1LL;
          std::io::stdio::_print(dest, v128, v81, v82, v83, v84);
          if ( (_QWORD)v135 )
            *(double *)&v47 = _rust_dealloc(*((_QWORD *)&v135 + 1), v135, 1LL);
        }
        *(_QWORD *)v139 = 13LL;
      }
    }
    else
    {
LABEL_193:
      if ( (unsigned __int8)std::path::Path::is_dir(v115, v53) )
        goto LABEL_110;
      if ( !v122 )
      {
        uu_cp::copy_file(dest, v164, v115, v53, v119, v68, (__int64)a7, a8, a9, a10, 0);
        if ( *(_QWORD *)dest == 3LL )
        {
          v75 = *(_QWORD *)&dest[32];
          if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&dest[32]) == 1 )
          {
            v127 = v67;
            v76 = std::io::error::Error::kind(v75);
            *(_QWORD *)&v143 = 1LL;
            *((_QWORD *)&v143 + 1) = v128;
            *(_QWORD *)&v144 = v163;
            BYTE8(v144) = 1;
            v161 = &v143;
            v162 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v135 = &off_1558E8;
            *((_QWORD *)&v135 + 1) = 2LL;
            *(_QWORD *)&v137 = 0LL;
            *(_QWORD *)&v136 = &v161;
            *((_QWORD *)&v136 + 1) = 1LL;
            alloc::fmt::format::format_inner(v187, &v135);
            v159 = uucore::mods::error::UIoError::new(v76, v187);
            v160 = v77;
            v78 = v159;
            _InterlockedExchange(&uucore::mods::error::EXIT_CODE, (*(__int64 (__fastcall **)(__int64))(v77 + 96))(v159));
            v161 = (__int128 *)uucore::util_name(v78, v187);
            v162 = v79;
            *(_QWORD *)&v143 = &v161;
            *((_QWORD *)&v143 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v144 = &v159;
            *((_QWORD *)&v144 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v135 = &unk_155908;
            *((_QWORD *)&v135 + 1) = 3LL;
            *(_QWORD *)&v137 = 0LL;
            *(_QWORD *)&v136 = &v143;
            *((_QWORD *)&v136 + 1) = 2LL;
            std::io::stdio::_eprint(&v135);
            v80 = v160;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v159, v160);
            core::ptr::drop_in_place<std::io::error::Error>(v75, v80);
            v67 = v127;
            if ( *(_QWORD *)dest == 3LL )
            {
              if ( *(_QWORD *)&dest[8] )
                *(double *)&v47 = _rust_dealloc(*(_QWORD *)&dest[16], *(_QWORD *)&dest[8], 1LL);
            }
            else if ( *(_QWORD *)dest != 13LL )
            {
              core::ptr::drop_in_place<uu_cp::Error>(dest);
            }
            goto LABEL_110;
          }
        }
        else if ( *(_DWORD *)dest == 13 )
        {
          goto LABEL_110;
        }
        goto LABEL_124;
      }
      uu_cp::copy_file(dest, v164, v115, v53, v119, v68, (__int64)a7, a8, a9, a10, 0);
      v126 = v67;
      if ( *(_DWORD *)dest == 13 )
        goto LABEL_109;
      *(_QWORD *)&v47 = *(_QWORD *)&dest[8];
      v71 = *(_QWORD *)dest;
      v135 = *(_OWORD *)&dest[8];
      v136 = *(_OWORD *)&dest[24];
      v137 = *(_OWORD *)&dest[40];
      v138 = *(_QWORD *)&dest[56];
      if ( (unsigned __int8)std::path::Path::is_symlink(v115, v53) )
      {
        core::ptr::drop_in_place<uu_cp::Error>(dest);
LABEL_109:
        v67 = v126;
LABEL_110:
        *(_QWORD *)v139 = 13LL;
        if ( v67 )
          *(double *)&v47 = _rust_dealloc(v119, v67, 1LL);
        if ( v66 )
          *(double *)&v47 = _rust_dealloc(v128, v66, 1LL);
        if ( v65 )
          *(double *)&v47 = _rust_dealloc(v115, v65, 1LL);
        goto LABEL_116;
      }
      v146 = v138;
      *(_QWORD *)&v47 = v135;
      v145 = v137;
      v144 = v136;
      v143 = v135;
      if ( v71 == 13 )
        goto LABEL_109;
      v48 = &v139[8];
      *(_QWORD *)&v139[56] = v146;
      *(_QWORD *)&v47 = v143;
      *(_OWORD *)&v139[40] = v145;
      *(_OWORD *)&v139[24] = v144;
      *(_OWORD *)&v139[8] = v143;
      *(_QWORD *)v139 = v71;
      v67 = v126;
    }
LABEL_81:
    if ( v67 )
      *(double *)&v47 = _rust_dealloc(v119, v67, 1LL);
    if ( v66 )
      *(double *)&v47 = _rust_dealloc(v128, v66, 1LL);
    if ( v65 )
      *(double *)&v47 = _rust_dealloc(v115, v65, 1LL);
    v69 = *(_QWORD *)v139;
    if ( *(_QWORD *)v139 != 13LL )
    {
      *(_QWORD *)(a1 + 56) = *(_QWORD *)&v139[56];
      v47 = *(_OWORD *)&v139[8];
      v106 = *(_OWORD *)&v139[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v139[40];
      *(_OWORD *)(a1 + 24) = v106;
      *(_OWORD *)(a1 + 8) = v47;
      goto LABEL_161;
    }
LABEL_116:
    v24 = v142;
    if ( v129 )
      *(double *)&v47 = _rust_dealloc(v130, v129, 1LL);
  }
  if ( v54 )
    *(double *)&v47 = _rust_dealloc(v55, v54, 1LL);
LABEL_156:
  if ( *(_QWORD *)v139 )
    *(double *)&v47 = _rust_dealloc(v115, *(_QWORD *)v139, 1LL);
  if ( (_QWORD)v135 )
    *(double *)&v47 = _rust_dealloc(v128, v135, 1LL);
LABEL_160:
  v69 = 7LL;
LABEL_161:
  *(_QWORD *)a1 = v69;
  if ( v129 )
    *(double *)&v47 = _rust_dealloc(v130, v129, 1LL);
  core::ptr::drop_in_place<walkdir::IntoIter>(&v165, *(double *)&v47);
LABEL_164:
  if ( (_QWORD)v151 )
    _rust_dealloc(*((_QWORD *)&v151 + 1), v151, 1LL);
  if ( v153 != 0x8000000000000000LL && v153 )
    _rust_dealloc(v154, v153, 1LL);
LABEL_179:
  v38 = v147;
  if ( (_QWORD)v147 )
  {
    v39 = *((_QWORD *)&v147 + 1);
LABEL_181:
    _rust_dealloc(v39, v38, 1LL);
  }
  return a1;
}
