__int64 __fastcall uu_sort::ext_sort::ext_sort(__int64 *a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  __int128 v7; // kr50_16
  __int64 v8; // r14
  __int128 v9; // xmm0
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rbx
  __int128 v16; // xmm0
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // r15
  char v24; // bp
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rbp
  __int64 v28; // r15
  char v29; // bp
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // ebp
  unsigned __int64 v33; // rcx
  int v34; // ebp
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r14
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r12
  __int64 v43; // r15
  __int64 v44; // r14
  _QWORD *v45; // rax
  __int64 v46; // r14
  __int64 v47; // r14
  unsigned __int64 v48; // rbx
  bool v49; // al
  __int64 v50; // rbx
  _QWORD *v51; // rdi
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  __int64 v54; // r14
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r12
  __int64 v57; // r15
  _QWORD *v58; // rax
  __int64 v59; // r14
  unsigned __int64 v60; // rbx
  bool v61; // al
  __int64 v62; // rbx
  _QWORD *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rbx
  unsigned int v67; // r12d
  __int128 v68; // kr90_16
  _QWORD *v69; // rbp
  unsigned __int64 v70; // rax
  __int64 j; // r15
  __int64 v72; // rbx
  __int64 v73; // rax
  const void *v74; // rbx
  size_t v75; // r12
  __int64 v76; // r14
  void *v77; // r13
  size_t v78; // r14
  __int64 v79; // rax
  unsigned __int64 v80; // rbx
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int128 v84; // xmm0
  int v85; // r8d
  __int64 v86; // r14
  _QWORD *v87; // rax
  __int64 v88; // r14
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v93; // r13
  _QWORD *v94; // rbp
  unsigned __int64 v95; // rax
  __int64 i; // r14
  __int64 v97; // rbx
  __int64 v98; // rax
  const void *v99; // r13
  size_t v100; // r12
  __int64 v101; // r15
  void *v102; // rbx
  size_t v103; // r15
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int128 v108; // xmm0
  __int128 v109; // xmm1
  __int64 v110; // rdx
  __int64 v111; // rdx
  unsigned __int8 v112; // [rsp+Eh] [rbp-65Ah]
  unsigned __int8 v113; // [rsp+Eh] [rbp-65Ah]
  unsigned __int8 v114; // [rsp+Fh] [rbp-659h] BYREF
  unsigned __int64 v115; // [rsp+10h] [rbp-658h]
  __int128 v116; // [rsp+18h] [rbp-650h] BYREF
  __int128 v117; // [rsp+28h] [rbp-640h] BYREF
  __int64 v118; // [rsp+38h] [rbp-630h] BYREF
  __int128 v119; // [rsp+40h] [rbp-628h] BYREF
  __int128 v120; // [rsp+50h] [rbp-618h] BYREF
  __m256i v121; // [rsp+60h] [rbp-608h] BYREF
  __int128 v122; // [rsp+80h] [rbp-5E8h]
  __int128 v123; // [rsp+90h] [rbp-5D8h]
  __int128 v124; // [rsp+A0h] [rbp-5C8h]
  __int128 v125; // [rsp+B0h] [rbp-5B8h]
  __int128 v126; // [rsp+C0h] [rbp-5A8h]
  __int64 v127; // [rsp+D0h] [rbp-598h]
  __int128 v128; // [rsp+E0h] [rbp-588h] BYREF
  unsigned __int64 v129; // [rsp+F0h] [rbp-578h] BYREF
  __int64 v130; // [rsp+F8h] [rbp-570h]
  __int64 v131; // [rsp+100h] [rbp-568h]
  __int128 v132; // [rsp+108h] [rbp-560h] BYREF
  __int64 v133; // [rsp+118h] [rbp-550h]
  __int128 v134; // [rsp+120h] [rbp-548h] BYREF
  _BYTE v135[80]; // [rsp+130h] [rbp-538h]
  __int128 v136; // [rsp+180h] [rbp-4E8h]
  __int64 v137; // [rsp+190h] [rbp-4D8h]
  __int64 v138; // [rsp+1A0h] [rbp-4C8h]
  __int64 v139; // [rsp+1A8h] [rbp-4C0h] BYREF
  __int128 v140; // [rsp+1B0h] [rbp-4B8h] BYREF
  __m256i v141; // [rsp+1C0h] [rbp-4A8h]
  __int128 v142; // [rsp+1E0h] [rbp-488h]
  int fd[4]; // [rsp+1F0h] [rbp-478h]
  __int128 v144; // [rsp+200h] [rbp-468h]
  __int128 v145; // [rsp+210h] [rbp-458h]
  __int64 v146; // [rsp+220h] [rbp-448h] BYREF
  __int64 v147; // [rsp+228h] [rbp-440h]
  __int64 v148; // [rsp+230h] [rbp-438h]
  unsigned __int128 v149; // [rsp+238h] [rbp-430h] BYREF
  __int128 v150; // [rsp+248h] [rbp-420h]
  __int128 *v151; // [rsp+258h] [rbp-410h]
  __int128 v152; // [rsp+260h] [rbp-408h] BYREF
  __int128 v153; // [rsp+270h] [rbp-3F8h] BYREF
  __int128 v154; // [rsp+280h] [rbp-3E8h]
  __int128 v155; // [rsp+290h] [rbp-3D8h]
  __int128 v156; // [rsp+2A0h] [rbp-3C8h]
  __int128 v157; // [rsp+2B0h] [rbp-3B8h]
  __int128 v158; // [rsp+2C0h] [rbp-3A8h]
  _BYTE v159[56]; // [rsp+2D0h] [rbp-398h] BYREF
  __int128 v160; // [rsp+308h] [rbp-360h]
  __int128 v161; // [rsp+318h] [rbp-350h]
  __int128 v162; // [rsp+328h] [rbp-340h]
  __int64 v163; // [rsp+338h] [rbp-330h]
  __int64 *v164; // [rsp+348h] [rbp-320h] BYREF
  unsigned __int128 v165; // [rsp+350h] [rbp-318h] BYREF
  __int128 v166; // [rsp+360h] [rbp-308h]
  __int128 v167; // [rsp+370h] [rbp-2F8h] BYREF
  _BYTE v168[24]; // [rsp+380h] [rbp-2E8h]
  __int128 v169; // [rsp+398h] [rbp-2D0h]
  __int128 v170; // [rsp+3A8h] [rbp-2C0h]
  __int128 v171; // [rsp+3B8h] [rbp-2B0h]
  __int64 v172; // [rsp+3C8h] [rbp-2A0h]
  __int128 v173; // [rsp+3F0h] [rbp-278h] BYREF
  _BYTE v174[96]; // [rsp+400h] [rbp-268h] BYREF
  _BYTE v175[48]; // [rsp+460h] [rbp-208h] BYREF
  __int128 v176; // [rsp+490h] [rbp-1D8h]
  __m256i v177; // [rsp+4A0h] [rbp-1C8h]
  __int128 v178; // [rsp+4C0h] [rbp-1A8h] BYREF
  __int64 v179; // [rsp+4D0h] [rbp-198h]
  __int128 v180; // [rsp+4D8h] [rbp-190h] BYREF
  __int64 v181; // [rsp+4E8h] [rbp-180h]
  __int64 v182; // [rsp+4F0h] [rbp-178h]
  _BYTE dest[160]; // [rsp+4F8h] [rbp-170h] BYREF
  _BYTE src[208]; // [rsp+598h] [rbp-D0h] BYREF

  v138 = a4;
  v151 = a3;
  v115 = a2;
  std::sync::mpmc::sync_channel(&v121, 1LL);
  v4 = v121.m256i_i64[1];
  v5 = v121.m256i_i64[0];
  v176 = *(_OWORD *)v121.m256i_i8;
  v128 = *(_OWORD *)&v121.m256i_u64[2];
  std::sync::mpmc::sync_channel(&v121, 1LL);
  v6 = v121.m256i_i64[0];
  v7 = *(_OWORD *)&v121.m256i_u64[2];
  v133 = v121.m256i_i64[1];
  v177 = v121;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a2);
  v180 = v7;
  v181 = v5;
  v182 = v4;
  memcpy(dest, src, sizeof(dest));
  v121.m256i_i64[2] = 0x8000000000000000LL;
  v121.m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked_(&v134, &v121, &v180, 0LL);
  v8 = a2;
  if ( !(_QWORD)v134 )
  {
    *(_QWORD *)&v134 = *((_QWORD *)&v134 + 1);
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v134,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v178 = v134;
  v179 = *(_QWORD *)v135;
  core::ptr::drop_in_place<std::thread::JoinInner<()>>(&v178);
  if ( *(_QWORD *)(a2 + 48) != 0x8000000000000000LL )
  {
    v16 = *v151;
    *(_OWORD *)fd = v151[1];
    v142 = v16;
    v17 = (*(unsigned __int64 *)(a2 + 104) * (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >> 64;
    v113 = *(_BYTE *)(a2 + 153);
    v164 = a1;
    *(_QWORD *)&v132 = v6;
    *((_QWORD *)&v132 + 1) = v133;
    v18 = *a1;
    if ( *a1 == a1[1] )
      goto LABEL_275;
    *a1 = v18 + 24;
    if ( !v18 )
      goto LABEL_275;
    v19 = v17;
    uu_sort::open(v121.m256i_i64, v18);
    v20 = v121.m256i_i64[2];
    v13 = v121.m256i_i64[1];
    if ( v121.m256i_i64[0] )
    {
      if ( v121.m256i_i64[0] != 2 )
      {
        v21 = 0x8000000000000003LL;
LABEL_38:
        if ( (_QWORD)v132 )
        {
          if ( (_QWORD)v132 == 1LL )
            std::sync::mpmc::counter::Sender<C>::release((char *)&v132 + 8);
          else
            std::sync::mpmc::counter::Sender<C>::release((char *)&v132 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v132 + 8);
        }
LABEL_43:
        if ( v21 == 0x8000000000000003LL )
        {
LABEL_44:
          if ( (_QWORD)v142 == 0x8000000000000000LL )
            goto LABEL_178;
          if ( (_QWORD)v142 )
            _rust_dealloc(*((_QWORD *)&v142 + 1), v142, 1LL);
          v32 = fd[2];
          std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[2]);
LABEL_62:
          close(v32);
          goto LABEL_178;
        }
        *(_QWORD *)&v140 = v21;
        *((_QWORD *)&v140 + 1) = v13;
        v33 = 3LL;
        if ( (v21 ^ 0x8000000000000000LL) < 3 )
          v33 = v21 ^ 0x8000000000000000LL;
        v141.m256i_i64[0] = v20;
        switch ( v33 )
        {
          case 0uLL:
            if ( (_QWORD)v142 != 0x8000000000000000LL )
            {
              if ( (_QWORD)v142 )
                _rust_dealloc(*((_QWORD *)&v142 + 1), v142, 1LL);
              v34 = fd[2];
              std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[2]);
LABEL_70:
              close(v34);
            }
LABEL_71:
            v13 = 0LL;
            goto LABEL_178;
          case 1uLL:
            *(_QWORD *)&v152 = v13;
            v47 = *(_QWORD *)(v13 + 32);
            v48 = *(_QWORD *)(v13 + 40);
            v49 = v47 == 0 || (v47 & 7) != 0 || v48 > 0x555555555555555LL;
            if ( (*(_BYTE *)(v115 + 132) & 1) != 0 )
            {
              if ( v49 )
                goto LABEL_279;
              *(_OWORD *)v168 = *(_OWORD *)fd;
              v167 = v142;
              uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
              v121.m256i_i64[0] = 0LL;
              v121.m256i_i64[2] = v47;
              v121.m256i_i64[3] = v47 + 24 * v48;
              v86 = v115;
              *(_QWORD *)&v122 = v115;
              *((_QWORD *)&v122 + 1) = &v152;
              while ( 1 )
              {
                v87 = (_QWORD *)<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v121);
                if ( !v87 )
                  break;
                uu_sort::Line::print(v87, &v134, v86);
              }
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v134);
            }
            else
            {
              if ( v49 )
                goto LABEL_279;
              *(_OWORD *)v135 = *(_OWORD *)fd;
              v134 = v142;
              uu_sort::Output::into_write((__int64)&v121, (__int64 *)&v134);
              v50 = 24 * v48;
              v51 = (_QWORD *)v47;
              while ( v50 )
              {
                v50 -= 24LL;
                uu_sort::Line::print(v51, &v121, v115);
                v51 += 3;
              }
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v121);
            }
            v13 = 0LL;
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v152);
            goto LABEL_178;
          case 2uLL:
            *(_QWORD *)v159 = v13;
            *(_QWORD *)&v152 = v20;
            v38 = *(_QWORD *)(v13 + 32);
            if ( !v38 )
              goto LABEL_279;
            if ( (v38 & 7) != 0 )
              goto LABEL_279;
            v39 = *(_QWORD *)(v13 + 40);
            if ( v39 > 0x555555555555555LL )
              goto LABEL_279;
            v40 = *(_QWORD *)(v20 + 32);
            if ( !v40 )
              goto LABEL_279;
            if ( (v40 & 7) != 0 )
              goto LABEL_279;
            v41 = *(_QWORD *)(v20 + 40);
            if ( v41 > 0x555555555555555LL )
              goto LABEL_279;
            v42 = v38 + 24 * v39;
            v43 = v40 + 24 * v41;
            if ( (*(_BYTE *)(v115 + 132) & 1) != 0 )
            {
              *(_OWORD *)v168 = *(_OWORD *)fd;
              v167 = v142;
              uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
              v121.m256i_i64[0] = 0LL;
              v121.m256i_i64[3] = v115;
              *(_QWORD *)&v122 = 0LL;
              *(_QWORD *)&v123 = v38;
              *((_QWORD *)&v123 + 1) = v42;
              v124 = (unsigned __int64)v159;
              *((_QWORD *)&v125 + 1) = v40;
              v88 = v115;
              *(_QWORD *)&v126 = v43;
              *((_QWORD *)&v126 + 1) = &v152;
              v127 = v115;
              while ( 1 )
              {
                v89 = (_QWORD *)<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v121);
                if ( !v89 )
                  break;
                uu_sort::Line::print(v89, &v134, v88);
              }
            }
            else
            {
              *(_OWORD *)v168 = *(_OWORD *)fd;
              v167 = v142;
              uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
              *(_OWORD *)v121.m256i_i8 = v115;
              v121.m256i_i64[3] = v38;
              *(_QWORD *)&v122 = v42;
              *((_QWORD *)&v122 + 1) = v159;
              *(_QWORD *)&v123 = 0LL;
              *(_QWORD *)&v124 = v40;
              v44 = v115;
              *((_QWORD *)&v124 + 1) = v43;
              *(_QWORD *)&v125 = &v152;
              while ( 1 )
              {
                v45 = (_QWORD *)<itertools::merge_join::MergeBy<I,J,F> as core::iter::traits::iterator::Iterator>::next(&v121);
                if ( !v45 )
                  break;
                uu_sort::Line::print(v45, &v134, v44);
              }
            }
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v134);
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v152);
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v159);
LABEL_177:
            v13 = 0LL;
            goto LABEL_178;
          case 3uLL:
            *(_QWORD *)&v173 = v13;
            *((_QWORD *)&v173 + 1) = v13;
            *(_QWORD *)v174 = v21;
            *(_QWORD *)&v174[8] = v13 + 48 * v20;
            v46 = v115;
            uu_sort::merge::merge_with_file_limit(&v167, &v173, v115, v138);
            v13 = *((_QWORD *)&v167 + 1);
            if ( (_QWORD)v167 == 3LL )
              goto LABEL_44;
            *(_QWORD *)&v135[72] = v172;
            *(_OWORD *)&v135[56] = v171;
            *(_OWORD *)&v135[40] = v170;
            *(_OWORD *)&v135[24] = v169;
            *(_OWORD *)&v135[8] = *(_OWORD *)&v168[8];
            v134 = v167;
            *(_QWORD *)v135 = *(_QWORD *)v168;
            *(_OWORD *)v159 = v142;
            *(_OWORD *)&v159[16] = *(_OWORD *)fd;
            uu_sort::Output::into_write((__int64)&v152, (__int64 *)v159);
            v125 = *(_OWORD *)&v135[64];
            v124 = *(_OWORD *)&v135[48];
            v123 = *(_OWORD *)&v135[32];
            v122 = *(_OWORD *)&v135[16];
            *(_OWORD *)&v121.m256i_u64[2] = *(_OWORD *)v135;
            *(_OWORD *)v121.m256i_i8 = v134;
            v13 = uu_sort::merge::FileMerger::write_all_to(&v121, v46, &v152);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v152);
            goto LABEL_178;
        }
      }
LABEL_275:
      core::option::unwrap_failed(&off_1D4878);
    }
    v27 = v19 >> 3;
    v116 = *(_OWORD *)&v121.m256i_u64[1];
    v146 = 0LL;
    v147 = 1LL;
    v148 = 0LL;
    v28 = 8000LL;
    if ( v27 < 0x1F40 )
      v28 = v27;
    uu_sort::chunks::RecycledChunk::new(&v167, v28);
    v20 = (__int64)&v164;
    uu_sort::chunks::read(
      (unsigned int)&v119,
      (unsigned int)&v132,
      (unsigned int)&v167,
      1,
      v27,
      (unsigned int)&v146,
      (__int64)&v116,
      (__int64)&v164,
      v113,
      v8);
    v13 = v119;
    if ( (_QWORD)v119 )
      goto LABEL_30;
    if ( (BYTE8(v119) & 1) == 0 )
      goto LABEL_77;
    uu_sort::chunks::RecycledChunk::new(&v167, v28);
    uu_sort::chunks::read(
      (unsigned int)&v119,
      (unsigned int)&v132,
      (unsigned int)&v167,
      1,
      v27,
      (unsigned int)&v146,
      (__int64)&v116,
      (__int64)&v164,
      v113,
      v8);
    v13 = v119;
    if ( (_QWORD)v119 )
    {
LABEL_30:
      v20 = *((_QWORD *)&v119 + 1);
      v21 = 0x8000000000000003LL;
      v29 = 0;
      goto LABEL_31;
    }
    v133 = v113;
    if ( (BYTE8(v119) & 1) != 0 )
    {
      v117 = v132;
      v129 = 0LL;
      v130 = 8LL;
      v131 = 0LL;
      while ( 1 )
      {
        if ( (_QWORD)v128 )
        {
          if ( (_QWORD)v128 == 1LL )
            std::sync::mpmc::list::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v65, 1000000000LL);
          else
            std::sync::mpmc::zero::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v65, 1000000000LL);
        }
        else
        {
          std::sync::mpmc::array::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v65, 1000000000LL);
        }
        if ( (v152 & 1) != 0 || !*((_QWORD *)&v152 + 1) )
          break;
        v139 = *((_QWORD *)&v152 + 1);
        uu_sort::tmp_dir::TmpDirWrapper::next_file(&v165, v138);
        if ( *((_QWORD *)&v165 + 1) == 0x8000000000000000LL )
        {
          v20 = *((_QWORD *)&v166 + 1);
          v13 = v166;
          goto LABEL_264;
        }
        v149 = v165;
        v150 = v166;
        if ( *(_QWORD *)(v115 + 48) == 0x8000000000000000LL )
        {
          v93 = 0LL;
        }
        else
        {
          v93 = *(_QWORD *)(v115 + 56);
          v13 = *(_QWORD *)(v115 + 64);
          core::slice::raw::from_raw_parts::precondition_check(v93, 1LL, 1LL, v13);
        }
        <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(v159, &v149, v93, v13);
        v13 = *(_QWORD *)&v159[8];
        v20 = *(_QWORD *)&v159[16];
        if ( *(_QWORD *)v159 == 0x8000000000000000LL )
        {
          *(_QWORD *)&v175[16] = *(_QWORD *)&v159[16];
          *(_OWORD *)v175 = __PAIR128__(*(unsigned __int64 *)&v159[8], 0x8000000000000000LL);
LABEL_264:
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v139);
LABEL_265:
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v129);
          v21 = 0x8000000000000003LL;
          v29 = 1;
          switch ( (__int64)v117 )
          {
            case 0LL:
              goto LABEL_266;
            case 1LL:
              goto LABEL_267;
            case 2LL:
              goto LABEL_268;
            case 3LL:
              goto LABEL_31;
          }
          goto LABEL_31;
        }
        *(_QWORD *)&v174[88] = v163;
        *(_OWORD *)&v174[72] = v162;
        *(_OWORD *)&v174[56] = v161;
        *(_OWORD *)&v174[40] = v160;
        *(_OWORD *)&v174[24] = *(_OWORD *)&v159[40];
        *(_OWORD *)&v174[8] = *(_OWORD *)&v159[24];
        v173 = *(_OWORD *)v159;
        *(_QWORD *)v174 = *(_QWORD *)&v159[16];
        v94 = *(_QWORD **)(v139 + 32);
        if ( !v94 )
          goto LABEL_279;
        if ( ((unsigned __int8)v94 & 7) != 0 )
          goto LABEL_279;
        v95 = *(_QWORD *)(v139 + 40);
        if ( v95 > 0x555555555555555LL )
          goto LABEL_279;
        for ( i = 24 * v95; i; i -= 24LL )
        {
          v99 = (const void *)*v94;
          v100 = v94[1];
          v101 = *(_QWORD *)&v174[48];
          if ( *(_QWORD *)&v174[32] - *(_QWORD *)&v174[48] <= v100 )
          {
            v104 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v174[32], *v94, v94[1]);
            if ( v104 )
            {
              v118 = v104;
              core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v118, &off_1D47C8, &off_1D4890);
            }
            v103 = *(_QWORD *)&v174[48];
          }
          else
          {
            v102 = (void *)(*(_QWORD *)&v174[48] + *(_QWORD *)&v174[40]);
            core::intrinsics::copy_nonoverlapping::precondition_check(
              *v94,
              *(_QWORD *)&v174[48] + *(_QWORD *)&v174[40],
              1LL,
              1LL,
              v94[1]);
            memcpy(v102, v99, v100);
            v103 = v100 + v101;
            *(_QWORD *)&v174[48] = v103;
          }
          v114 = v113;
          if ( *(_QWORD *)&v174[32] - v103 > 1 )
          {
            v97 = *(_QWORD *)&v174[40];
            core::intrinsics::copy_nonoverlapping::precondition_check(&v114, *(_QWORD *)&v174[40] + v103, 1LL, 1LL, 1LL);
            *(_BYTE *)(v97 + v103) = v114;
            *(_QWORD *)&v174[48] = v103 + 1;
            v98 = 0LL;
          }
          else
          {
            v98 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v174[32], &v114, 1LL);
          }
          v94 += 3;
          if ( v98 )
          {
            v118 = v98;
            core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v118, &off_1D47C8, &off_1D48A8);
          }
        }
        v152 = v173;
        v153 = *(_OWORD *)v174;
        v154 = *(_OWORD *)&v174[16];
        v155 = *(_OWORD *)&v174[32];
        v156 = *(_OWORD *)&v174[48];
        v157 = *(_OWORD *)&v174[64];
        v158 = *(_OWORD *)&v174[80];
        <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(v175, &v152);
        v13 = *(_QWORD *)&v175[8];
        v20 = *(_QWORD *)&v175[16];
        if ( *(_QWORD *)v175 == 0x8000000000000000LL )
          goto LABEL_264;
        v141 = *(__m256i *)&v175[16];
        v140 = *(_OWORD *)v175;
        v105 = v131;
        if ( v131 == v129 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v129);
        v106 = v130;
        v107 = 48 * v105;
        v108 = v140;
        v109 = *(_OWORD *)v141.m256i_i8;
        *(_OWORD *)(v130 + v107 + 32) = *(_OWORD *)&v141.m256i_u64[2];
        *(_OWORD *)(v106 + v107 + 16) = v109;
        *(_OWORD *)(v106 + v107) = v108;
        v131 = v105 + 1;
        uu_sort::chunks::Chunk::recycle(&v134, v139);
        if ( (_QWORD)v117 == 3LL )
        {
          core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v134);
        }
        else
        {
          v127 = v137;
          v126 = v136;
          v125 = *(_OWORD *)&v135[64];
          v124 = *(_OWORD *)&v135[48];
          v123 = *(_OWORD *)&v135[32];
          v122 = *(_OWORD *)&v135[16];
          *(_OWORD *)&v121.m256i_u64[2] = *(_OWORD *)v135;
          *(_OWORD *)v121.m256i_i8 = v134;
          uu_sort::chunks::read(
            (unsigned int)&v120,
            (unsigned int)&v117,
            (unsigned int)&v121,
            0,
            (unsigned int)&v164,
            (unsigned int)&v146,
            (__int64)&v116,
            (__int64)&v164,
            v133,
            v115);
          v13 = v120;
          if ( (_QWORD)v120 )
          {
            v20 = *((_QWORD *)&v120 + 1);
            goto LABEL_265;
          }
          if ( (BYTE8(v120) & 1) == 0 )
          {
            switch ( (__int64)v117 )
            {
              case 0LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
                break;
              case 1LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
                break;
              case 2LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
                break;
              case 3LL:
                break;
            }
            *(_QWORD *)&v117 = 3LL;
          }
        }
      }
      v21 = v129;
      v13 = v130;
      v20 = v131;
      v29 = 1;
      switch ( (__int64)v117 )
      {
        case 0LL:
LABEL_266:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
          goto LABEL_269;
        case 1LL:
LABEL_267:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
          goto LABEL_269;
        case 2LL:
LABEL_268:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v117 + 8);
LABEL_269:
          v29 = 1;
          break;
        case 3LL:
          break;
      }
    }
    else
    {
LABEL_77:
      *(_OWORD *)v121.m256i_i8 = v132;
      if ( (_QWORD)v132 )
      {
        if ( (_QWORD)v132 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
        else
          std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
      }
      if ( (_QWORD)v128 )
      {
        if ( (_QWORD)v128 == 1LL )
          std::sync::mpmc::list::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v37, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v37, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v37, 1000000000LL);
      }
      v29 = 1;
      if ( (v121.m256i_i8[0] & 1) != 0 || (v13 = v121.m256i_i64[1]) == 0 )
      {
        v13 = 0LL;
        v21 = 0x8000000000000000LL;
      }
      else
      {
        *(_QWORD *)&v134 = v121.m256i_i64[1];
        if ( (_QWORD)v128 )
        {
          if ( (_QWORD)v128 == 1LL )
            std::sync::mpmc::list::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v111, 1000000000LL);
          else
            std::sync::mpmc::zero::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v111, 1000000000LL);
        }
        else
        {
          std::sync::mpmc::array::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v111, 1000000000LL);
        }
        v20 = v121.m256i_i64[1];
        v21 = 0x8000000000000000LL - (v121.m256i_i8[0] & 1u | (v121.m256i_i64[1] == 0)) + 2;
      }
    }
LABEL_31:
    if ( v146 )
      _rust_dealloc(v147, v146, 1LL);
    v30 = *((_QWORD *)&v116 + 1);
    if ( **((_QWORD **)&v116 + 1) )
    {
      (**((void (__fastcall ***)(_QWORD))&v116 + 1))(v116);
      v30 = *((_QWORD *)&v116 + 1);
    }
    v31 = *(_QWORD *)(v30 + 8);
    if ( v31 )
      _rust_dealloc(v116, v31, *(_QWORD *)(v30 + 16));
    if ( v29 )
      goto LABEL_43;
    goto LABEL_38;
  }
  v9 = *v151;
  v145 = v151[1];
  v144 = v9;
  v10 = (*(unsigned __int64 *)(a2 + 104) * (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >> 64;
  v112 = *(_BYTE *)(a2 + 153);
  v118 = (__int64)a1;
  *(_QWORD *)&v116 = v6;
  *((_QWORD *)&v116 + 1) = v133;
  v11 = *a1;
  if ( *a1 == a1[1] || (*a1 = v11 + 24, !v11) )
LABEL_274:
    core::option::unwrap_failed(&off_1D4878);
  v12 = v10;
  uu_sort::open(v121.m256i_i64, v11);
  v14 = v121.m256i_i64[2];
  v13 = v121.m256i_i64[1];
  if ( !v121.m256i_i64[0] )
  {
    v22 = v12 >> 3;
    v119 = *(_OWORD *)&v121.m256i_u64[1];
    v129 = 0LL;
    v130 = 1LL;
    v131 = 0LL;
    v23 = 8000LL;
    if ( v22 < 0x1F40 )
      v23 = v22;
    uu_sort::chunks::RecycledChunk::new(&v167, v23);
    uu_sort::chunks::read(
      (unsigned int)&v117,
      (unsigned int)&v116,
      (unsigned int)&v167,
      1,
      v22,
      (unsigned int)&v129,
      (__int64)&v119,
      (__int64)&v118,
      v112,
      v8);
    v13 = v117;
    if ( (_QWORD)v117 )
      goto LABEL_16;
    if ( (BYTE8(v117) & 1) == 0 )
      goto LABEL_73;
    uu_sort::chunks::RecycledChunk::new(&v167, v23);
    uu_sort::chunks::read(
      (unsigned int)&v117,
      (unsigned int)&v116,
      (unsigned int)&v167,
      1,
      v22,
      (unsigned int)&v129,
      (__int64)&v119,
      (__int64)&v118,
      v112,
      v8);
    v13 = v117;
    if ( (_QWORD)v117 )
    {
LABEL_16:
      v14 = *((_QWORD *)&v117 + 1);
      v15 = 0x8000000000000003LL;
      v24 = 0;
      goto LABEL_17;
    }
    v133 = v112;
    if ( (BYTE8(v117) & 1) != 0 )
    {
      v120 = v116;
      *(_QWORD *)&v149 = 0LL;
      *((_QWORD *)&v149 + 1) = 8LL;
      *(_QWORD *)&v150 = 0LL;
      while ( 1 )
      {
        if ( (_QWORD)v128 )
        {
          if ( (_QWORD)v128 == 1LL )
            std::sync::mpmc::list::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v64, 1000000000LL);
          else
            std::sync::mpmc::zero::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v64, 1000000000LL);
        }
        else
        {
          std::sync::mpmc::array::Channel<T>::recv(&v152, *((_QWORD *)&v128 + 1), v64, 1000000000LL);
        }
        if ( (v152 & 1) != 0 || !*((_QWORD *)&v152 + 1) )
          break;
        *(_QWORD *)&v132 = *((_QWORD *)&v152 + 1);
        uu_sort::tmp_dir::TmpDirWrapper::next_file(&v140, v138);
        v66 = *((_QWORD *)&v140 + 1);
        if ( *((_QWORD *)&v140 + 1) == 0x8000000000000000LL )
        {
          v14 = v141.m256i_i64[1];
          v13 = v141.m256i_i64[0];
LABEL_255:
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v132);
          goto LABEL_256;
        }
        v67 = v140;
        v68 = *(_OWORD *)v141.m256i_i8;
        if ( *(_QWORD *)(v8 + 48) != 0x8000000000000000LL )
          core::slice::raw::from_raw_parts::precondition_check(*(_QWORD *)(v115 + 56), 1LL, 1LL, *(_QWORD *)(v115 + 64));
        *(_QWORD *)v175 = v66;
        *(_OWORD *)&v175[8] = v68;
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v173, 0x2000LL, v67);
        *(_OWORD *)&v159[40] = *(_OWORD *)v174;
        *(_OWORD *)&v159[24] = v173;
        *(_QWORD *)v159 = v66;
        *(_OWORD *)&v159[8] = v68;
        v69 = *(_QWORD **)(v132 + 32);
        if ( !v69 )
          goto LABEL_279;
        if ( ((unsigned __int8)v69 & 7) != 0 )
          goto LABEL_279;
        v70 = *(_QWORD *)(v132 + 40);
        if ( v70 > 0x555555555555555LL )
          goto LABEL_279;
        for ( j = 24 * v70; j; j -= 24LL )
        {
          v74 = (const void *)*v69;
          v75 = v69[1];
          v76 = *(_QWORD *)&v159[40];
          if ( *(_QWORD *)&v159[24] - *(_QWORD *)&v159[40] <= v75 )
          {
            v79 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v159[24], *v69, v69[1]);
            if ( v79 )
            {
              *(_QWORD *)&v173 = v79;
              core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v173, &off_1D47C8, &off_1D4890);
            }
            v78 = *(_QWORD *)&v159[40];
          }
          else
          {
            v77 = (void *)(*(_QWORD *)&v159[40] + *(_QWORD *)&v159[32]);
            core::intrinsics::copy_nonoverlapping::precondition_check(
              *v69,
              *(_QWORD *)&v159[40] + *(_QWORD *)&v159[32],
              1LL,
              1LL,
              v69[1]);
            memcpy(v77, v74, v75);
            v78 = v75 + v76;
            *(_QWORD *)&v159[40] = v78;
          }
          v175[0] = v112;
          if ( *(_QWORD *)&v159[24] - v78 > 1 )
          {
            v72 = *(_QWORD *)&v159[32];
            core::intrinsics::copy_nonoverlapping::precondition_check(v175, *(_QWORD *)&v159[32] + v78, 1LL, 1LL, 1LL);
            *(_BYTE *)(v72 + v78) = v175[0];
            *(_QWORD *)&v159[40] = v78 + 1;
            v73 = 0LL;
          }
          else
          {
            v73 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v159[24], v175, 1LL);
          }
          v69 += 3;
          if ( v73 )
          {
            *(_QWORD *)&v173 = v73;
            core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v173, &off_1D47C8, &off_1D48A8);
          }
        }
        v152 = *(_OWORD *)v159;
        v153 = *(_OWORD *)&v159[16];
        v154 = *(_OWORD *)&v159[32];
        *(_QWORD *)&v155 = *(_QWORD *)&v159[48];
        v13 = *(_QWORD *)&v159[8];
        v80 = *(_QWORD *)v159;
        v14 = *(_QWORD *)&v159[16];
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>((char *)&v153 + 8);
        v8 = v115;
        if ( v80 == 0x8000000000000000LL )
          goto LABEL_255;
        v165 = __PAIR128__(v13, v80);
        *(_QWORD *)&v166 = v14;
        v81 = v150;
        if ( (_QWORD)v150 == (_QWORD)v149 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v149);
        v82 = *((_QWORD *)&v149 + 1);
        v83 = 3 * v81;
        v84 = v165;
        *(_QWORD *)(*((_QWORD *)&v149 + 1) + 8 * v83 + 16) = v166;
        *(_OWORD *)(v82 + 8 * v83) = v84;
        *(_QWORD *)&v150 = v81 + 1;
        uu_sort::chunks::Chunk::recycle(&v134, v132);
        if ( (_QWORD)v120 == 3LL )
        {
          core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v134);
        }
        else
        {
          v127 = v137;
          v126 = v136;
          v125 = *(_OWORD *)&v135[64];
          v124 = *(_OWORD *)&v135[48];
          v123 = *(_OWORD *)&v135[32];
          v122 = *(_OWORD *)&v135[16];
          *(_OWORD *)&v121.m256i_u64[2] = *(_OWORD *)v135;
          *(_OWORD *)v121.m256i_i8 = v134;
          uu_sort::chunks::read(
            (unsigned int)&v146,
            (unsigned int)&v120,
            (unsigned int)&v121,
            0,
            v85,
            (unsigned int)&v129,
            (__int64)&v119,
            (__int64)&v118,
            v133,
            v8);
          v13 = v146;
          if ( v146 )
          {
            v14 = v147;
LABEL_256:
            core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v149);
            v15 = 0x8000000000000003LL;
            v24 = 1;
            switch ( (__int64)v120 )
            {
              case 0LL:
                goto LABEL_257;
              case 1LL:
                goto LABEL_258;
              case 2LL:
                goto LABEL_259;
              case 3LL:
                goto LABEL_17;
            }
            goto LABEL_17;
          }
          if ( (v147 & 1) == 0 )
          {
            switch ( (__int64)v120 )
            {
              case 0LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
                break;
              case 1LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
                break;
              case 2LL:
                std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
                break;
              case 3LL:
                break;
            }
            *(_QWORD *)&v120 = 3LL;
          }
        }
      }
      v13 = *((_QWORD *)&v149 + 1);
      v15 = v149;
      v14 = v150;
      v24 = 1;
      switch ( (__int64)v120 )
      {
        case 0LL:
LABEL_257:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
          goto LABEL_260;
        case 1LL:
LABEL_258:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
          goto LABEL_260;
        case 2LL:
LABEL_259:
          std::sync::mpmc::counter::Sender<C>::release((char *)&v120 + 8);
LABEL_260:
          v24 = 1;
          break;
        case 3LL:
          break;
      }
    }
    else
    {
LABEL_73:
      *(_OWORD *)v121.m256i_i8 = v116;
      if ( (_QWORD)v116 )
      {
        if ( (_QWORD)v116 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
        else
          std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release(&v121.m256i_u64[1]);
      }
      if ( (_QWORD)v128 )
      {
        if ( (_QWORD)v128 == 1LL )
          std::sync::mpmc::list::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v36, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v36, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v36, 1000000000LL);
      }
      v24 = 1;
      if ( (v121.m256i_i8[0] & 1) != 0 || (v13 = v121.m256i_i64[1]) == 0 )
      {
        v13 = 0LL;
        v15 = 0x8000000000000000LL;
      }
      else
      {
        *(_QWORD *)&v134 = v121.m256i_i64[1];
        if ( (_QWORD)v128 )
        {
          if ( (_QWORD)v128 == 1LL )
            std::sync::mpmc::list::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v110, 1000000000LL);
          else
            std::sync::mpmc::zero::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v110, 1000000000LL);
        }
        else
        {
          std::sync::mpmc::array::Channel<T>::recv(&v121, *((_QWORD *)&v128 + 1), v110, 1000000000LL);
        }
        v14 = v121.m256i_i64[1];
        v15 = 0x8000000000000000LL - (v121.m256i_i8[0] & 1u | (v121.m256i_i64[1] == 0)) + 2;
      }
    }
LABEL_17:
    if ( v129 )
      _rust_dealloc(v130, v129, 1LL);
    v25 = *((_QWORD *)&v119 + 1);
    if ( **((_QWORD **)&v119 + 1) )
    {
      (**((void (__fastcall ***)(_QWORD))&v119 + 1))(v119);
      v25 = *((_QWORD *)&v119 + 1);
    }
    v26 = *(_QWORD *)(v25 + 8);
    if ( v26 )
      _rust_dealloc(v119, v26, *(_QWORD *)(v25 + 16));
    if ( v24 )
      goto LABEL_57;
    goto LABEL_24;
  }
  if ( v121.m256i_i64[0] == 2 )
    goto LABEL_274;
  v15 = 0x8000000000000003LL;
LABEL_24:
  if ( (_QWORD)v116 )
  {
    if ( (_QWORD)v116 == 1LL )
      std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
    else
      std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v116 + 8);
  }
LABEL_57:
  if ( v15 == 0x8000000000000003LL )
  {
LABEL_58:
    if ( (_QWORD)v144 == 0x8000000000000000LL )
      goto LABEL_178;
    if ( (_QWORD)v144 )
      _rust_dealloc(*((_QWORD *)&v144 + 1), v144, 1LL);
    v32 = DWORD2(v145);
    std::sys::pal::unix::fs::debug_assert_fd_is_open(DWORD2(v145));
    goto LABEL_62;
  }
  *(_QWORD *)&v140 = v15;
  *((_QWORD *)&v140 + 1) = v13;
  v35 = 3LL;
  if ( (v15 ^ 0x8000000000000000LL) < 3 )
    v35 = v15 ^ 0x8000000000000000LL;
  v141.m256i_i64[0] = v14;
  switch ( v35 )
  {
    case 0uLL:
      if ( (_QWORD)v144 == 0x8000000000000000LL )
        goto LABEL_71;
      if ( (_QWORD)v144 )
        _rust_dealloc(*((_QWORD *)&v144 + 1), v144, 1LL);
      v34 = DWORD2(v145);
      std::sys::pal::unix::fs::debug_assert_fd_is_open(DWORD2(v145));
      goto LABEL_70;
    case 1uLL:
      *(_QWORD *)&v152 = v13;
      v59 = *(_QWORD *)(v13 + 32);
      v60 = *(_QWORD *)(v13 + 40);
      v61 = v59 == 0 || (v59 & 7) != 0 || v60 > 0x555555555555555LL;
      if ( (*(_BYTE *)(v115 + 132) & 1) != 0 )
      {
        if ( !v61 )
        {
          *(_OWORD *)v168 = v145;
          v167 = v144;
          uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
          v121.m256i_i64[0] = 0LL;
          v121.m256i_i64[2] = v59;
          v121.m256i_i64[3] = v59 + 24 * v60;
          *(_QWORD *)&v122 = v115;
          *((_QWORD *)&v122 + 1) = &v152;
          while ( 1 )
          {
            v90 = (_QWORD *)<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v121);
            if ( !v90 )
              break;
            uu_sort::Line::print(v90, &v134, v115);
          }
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v134);
          goto LABEL_175;
        }
LABEL_279:
        core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
      }
      if ( v61 )
        goto LABEL_279;
      *(_OWORD *)v135 = v145;
      v134 = v144;
      uu_sort::Output::into_write((__int64)&v121, (__int64 *)&v134);
      v62 = 24 * v60;
      v63 = (_QWORD *)v59;
      while ( v62 )
      {
        v62 -= 24LL;
        uu_sort::Line::print(v63, &v121, v115);
        v63 += 3;
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v121);
LABEL_175:
      v13 = 0LL;
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v152);
LABEL_178:
      if ( (_QWORD)v128 )
      {
        if ( (_QWORD)v128 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v128 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v128 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v128 + 8);
      }
      return v13;
    case 2uLL:
      *(_QWORD *)v159 = v13;
      *(_QWORD *)&v152 = v14;
      v52 = *(_QWORD *)(v13 + 32);
      if ( !v52 )
        goto LABEL_279;
      if ( (v52 & 7) != 0 )
        goto LABEL_279;
      v53 = *(_QWORD *)(v13 + 40);
      if ( v53 > 0x555555555555555LL )
        goto LABEL_279;
      v54 = *(_QWORD *)(v14 + 32);
      if ( !v54 )
        goto LABEL_279;
      if ( (v54 & 7) != 0 )
        goto LABEL_279;
      v55 = *(_QWORD *)(v14 + 40);
      if ( v55 > 0x555555555555555LL )
        goto LABEL_279;
      v56 = v52 + 24 * v53;
      v57 = v54 + 24 * v55;
      if ( (*(_BYTE *)(v115 + 132) & 1) != 0 )
      {
        *(_OWORD *)v168 = v145;
        v167 = v144;
        uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
        v121.m256i_i64[0] = 0LL;
        v121.m256i_i64[3] = v115;
        *(_QWORD *)&v122 = 0LL;
        *(_QWORD *)&v123 = v52;
        *((_QWORD *)&v123 + 1) = v56;
        v124 = (unsigned __int64)v159;
        *((_QWORD *)&v125 + 1) = v54;
        *(_QWORD *)&v126 = v57;
        *((_QWORD *)&v126 + 1) = &v152;
        v127 = v115;
        while ( 1 )
        {
          v91 = (_QWORD *)<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v121);
          if ( !v91 )
            break;
          uu_sort::Line::print(v91, &v134, v115);
        }
      }
      else
      {
        *(_OWORD *)v168 = v145;
        v167 = v144;
        uu_sort::Output::into_write((__int64)&v134, (__int64 *)&v167);
        *(_OWORD *)v121.m256i_i8 = v115;
        v121.m256i_i64[3] = v52;
        *(_QWORD *)&v122 = v56;
        *((_QWORD *)&v122 + 1) = v159;
        *(_QWORD *)&v123 = 0LL;
        *(_QWORD *)&v124 = v54;
        *((_QWORD *)&v124 + 1) = v57;
        *(_QWORD *)&v125 = &v152;
        while ( 1 )
        {
          v58 = (_QWORD *)<itertools::merge_join::MergeBy<I,J,F> as core::iter::traits::iterator::Iterator>::next(&v121);
          if ( !v58 )
            break;
          uu_sort::Line::print(v58, &v134, v115);
        }
      }
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v134);
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v152);
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v159);
      goto LABEL_177;
    case 3uLL:
      *(_QWORD *)&v173 = v13;
      *((_QWORD *)&v173 + 1) = v13;
      *(_QWORD *)v174 = v15;
      *(_QWORD *)&v174[8] = v13 + 24 * v14;
      uu_sort::merge::merge_with_file_limit(&v167, &v173, v115, v138);
      v13 = *((_QWORD *)&v167 + 1);
      if ( (_QWORD)v167 == 3LL )
        goto LABEL_58;
      *(_QWORD *)&v135[72] = v172;
      *(_OWORD *)&v135[56] = v171;
      *(_OWORD *)&v135[40] = v170;
      *(_OWORD *)&v135[24] = v169;
      *(_OWORD *)&v135[8] = *(_OWORD *)&v168[8];
      v134 = v167;
      *(_QWORD *)v135 = *(_QWORD *)v168;
      *(_OWORD *)v159 = v144;
      *(_OWORD *)&v159[16] = v145;
      uu_sort::Output::into_write((__int64)&v152, (__int64 *)v159);
      v125 = *(_OWORD *)&v135[64];
      v124 = *(_OWORD *)&v135[48];
      v123 = *(_OWORD *)&v135[32];
      v122 = *(_OWORD *)&v135[16];
      *(_OWORD *)&v121.m256i_u64[2] = *(_OWORD *)v135;
      *(_OWORD *)v121.m256i_i8 = v134;
      v13 = uu_sort::merge::FileMerger::write_all_to(&v121, v115, &v152);
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v152);
      goto LABEL_178;
  }
}
