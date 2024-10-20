__int64 __fastcall uu_sort::ext_sort::ext_sort(__int64 *a1, unsigned __int64 a2, __int128 *a3, __int64 a4)
{
  void *v4; // r15
  void *v5; // rax
  void *v6; // rbx
  void *v7; // rax
  unsigned __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rsi
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  char v24; // r15
  __int128 v25; // kr20_16
  __int64 v26; // rsi
  bool v27; // zf
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  char v31; // r12
  __int128 v32; // kr30_16
  __int64 v33; // rsi
  __int64 v34; // rbx
  signed __int64 v35; // rax
  __int64 v36; // rcx
  signed __int64 v37; // rtt
  char v38; // al
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rbx
  signed __int64 v42; // rax
  __int64 v43; // rcx
  signed __int64 v44; // rtt
  char v45; // al
  __int128 *v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rcx
  __int128 *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r13
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // rax
  __int128 v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r13
  __int64 v62; // rbx
  __int64 v63; // r14
  __int64 v64; // rax
  __int128 v65; // xmm0
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // r12
  int v70; // ebx
  __int128 v71; // kr40_16
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // r12
  const void *v76; // rsi
  unsigned __int64 v77; // rbx
  __int64 v78; // r13
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // r14
  __int64 v84; // rax
  __int64 v85; // rcx
  void *v86; // r8
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // r14
  __int64 v92; // r13
  const void *v93; // rsi
  unsigned __int64 v94; // r12
  __int64 v95; // r15
  __int64 v96; // r15
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r14
  __int64 v100; // rax
  __int64 v101; // rcx
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  void *v104; // r8
  __int64 v105; // rbx
  __int64 v106; // rbx
  __int64 v107; // r15
  __int64 v108; // rbx
  __int64 v109; // r14
  __int64 v110; // rdi
  __int64 v111; // r15
  __int64 v112; // rbx
  __int64 v113; // r14
  __int64 v114; // rdi
  volatile signed __int64 *v115; // rbx
  char v116; // al
  signed __int64 v118; // rax
  __int64 v119; // rcx
  signed __int64 v120; // rtt
  char v121; // al
  signed __int64 v122; // rax
  __int64 v123; // rcx
  signed __int64 v124; // rtt
  char v125; // al
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned __int64 v130; // rbx
  __int64 v131; // [rsp+30h] [rbp-5F8h]
  unsigned __int64 v132; // [rsp+30h] [rbp-5F8h]
  char v133; // [rsp+3Fh] [rbp-5E9h]
  unsigned __int64 v134; // [rsp+40h] [rbp-5E8h]
  __int64 v135; // [rsp+40h] [rbp-5E8h]
  char v138; // [rsp+5Dh] [rbp-5CBh]
  char v139; // [rsp+5Eh] [rbp-5CAh]
  char v140; // [rsp+5Fh] [rbp-5C9h] BYREF
  __int128 v141; // [rsp+60h] [rbp-5C8h] BYREF
  __int64 v142; // [rsp+70h] [rbp-5B8h]
  _BYTE v143[112]; // [rsp+80h] [rbp-5A8h] BYREF
  __int64 *v144; // [rsp+F8h] [rbp-530h]
  __int128 v145; // [rsp+100h] [rbp-528h] BYREF
  __m256i v146; // [rsp+110h] [rbp-518h] BYREF
  __int128 v147; // [rsp+130h] [rbp-4F8h] BYREF
  __int64 v148; // [rsp+140h] [rbp-4E8h]
  __int128 v149; // [rsp+148h] [rbp-4E0h] BYREF
  __int128 v150; // [rsp+158h] [rbp-4D0h] BYREF
  __int128 v151; // [rsp+168h] [rbp-4C0h] BYREF
  __int64 v152; // [rsp+178h] [rbp-4B0h] BYREF
  volatile signed __int64 *v153; // [rsp+180h] [rbp-4A8h] BYREF
  __int64 v154; // [rsp+188h] [rbp-4A0h]
  __int128 v155; // [rsp+190h] [rbp-498h] BYREF
  __m256i v156; // [rsp+1A0h] [rbp-488h] BYREF
  _OWORD v157[2]; // [rsp+1C0h] [rbp-468h] BYREF
  __int64 v158; // [rsp+1E8h] [rbp-440h]
  __int64 *v159; // [rsp+1F0h] [rbp-438h] BYREF
  int v160; // [rsp+1FCh] [rbp-42Ch]
  __int128 src[40]; // [rsp+200h] [rbp-428h] BYREF
  __int64 v162; // [rsp+488h] [rbp-1A0h] BYREF
  __int128 v163; // [rsp+490h] [rbp-198h]
  __int64 v164; // [rsp+4A0h] [rbp-188h]
  void *v165; // [rsp+4A8h] [rbp-180h]
  __int64 v166; // [rsp+4B0h] [rbp-178h]
  unsigned __int64 v167; // [rsp+4B8h] [rbp-170h]
  __m128 v168; // [rsp+4C0h] [rbp-168h]
  _BYTE v169[120]; // [rsp+4D8h] [rbp-150h] BYREF
  _BYTE v170[216]; // [rsp+550h] [rbp-D8h] BYREF

  v154 = a4;
  std::sync::mpmc::array::Channel<T>::with_capacity(src, 1LL);
  *(_QWORD *)&src[32] = 1LL;
  *((_QWORD *)&src[32] + 1) = 1LL;
  LOBYTE(src[33]) = 0;
  v4 = &_rust_no_alloc_shim_is_unstable;
  v5 = (void *)_rust_alloc(640LL, 128LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(128LL, 640LL);
  v6 = v5;
  memcpy(v5, src, 0x280uLL);
  v164 = 0LL;
  v165 = v6;
  v152 = 0LL;
  v153 = (volatile signed __int64 *)v6;
  std::sync::mpmc::array::Channel<T>::with_capacity(src, 1LL);
  *(_QWORD *)&src[32] = 1LL;
  *((_QWORD *)&src[32] + 1) = 1LL;
  LOBYTE(src[33]) = 0;
  v7 = (void *)_rust_alloc(640LL, 128LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(128LL, 640LL);
  v8 = (unsigned __int64)v7;
  memcpy(v7, src, 0x280uLL);
  *(_QWORD *)&v163 = 0LL;
  *((_QWORD *)&v163 + 1) = v8;
  v166 = 0LL;
  v167 = v8;
  if ( *(_BYTE *)(a2 + 135) )
  {
    v141 = *(_OWORD *)(a2 + 136);
    LOBYTE(v4) = 1;
  }
  else
  {
    LODWORD(v4) = 0;
  }
  v144 = a1;
  LOBYTE(v158) = *(_BYTE *)(a2 + 152);
  v168 = (__m128)*(unsigned __int64 *)(a2 + 124);
  v133 = *(_BYTE *)(a2 + 132);
  v139 = *(_BYTE *)(a2 + 133);
  v138 = *(_BYTE *)(a2 + 134);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v155, a2);
  v160 = (int)v4;
  v9 = *(_DWORD *)(a2 + 120);
  <alloc::string::String as core::clone::Clone>::clone(&v145, a2 + 24);
  LOBYTE(v131) = *(_BYTE *)(a2 + 153);
  v134 = *(_QWORD *)(a2 + 104);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = 0x8000000000000000LL;
  if ( v10 != 0x8000000000000000LL )
  {
    <alloc::string::String as core::clone::Clone>::clone(src, a2 + 48);
    v11 = *(_QWORD *)&src[0];
    v157[0] = *(__int128 *)((char *)src + 8);
  }
  *(_OWORD *)v143 = v155;
  *(_QWORD *)&v143[16] = v156.m256i_i64[0];
  *(_QWORD *)&v143[40] = v146.m256i_i64[0];
  *(__int128 *)((char *)&src[10] + 8) = v141;
  *(__int128 *)((char *)&src[5] + 8) = v157[0];
  *(_QWORD *)&src[0] = 0LL;
  *(__int128 *)((char *)src + 8) = v8;
  *(_OWORD *)&v143[24] = v145;
  *((_QWORD *)&src[1] + 1) = v6;
  *((_QWORD *)&src[4] + 1) = v146.m256i_i64[0];
  *(_QWORD *)&src[3] = v156.m256i_i64[0];
  *(__int128 *)((char *)&src[3] + 8) = v145;
  src[2] = v155;
  *(_QWORD *)&src[5] = v11;
  v12 = *(_QWORD *)(a2 + 88);
  *(__int128 *)((char *)&src[6] + 8) = *(_OWORD *)(a2 + 72);
  *((_QWORD *)&src[7] + 1) = v12;
  LOBYTE(src[8]) = *(_BYTE *)(a2 + 96);
  v13 = *(_QWORD *)(a2 + 112);
  *((_QWORD *)&src[8] + 1) = v134;
  *(_QWORD *)&src[9] = v13;
  DWORD2(src[9]) = v9;
  _mm_storel_ps((double *)((char *)&src[9] + 12), v168);
  BYTE4(src[10]) = v133;
  BYTE5(src[10]) = v139;
  BYTE6(src[10]) = v138;
  BYTE7(src[10]) = v160;
  BYTE8(src[11]) = v158;
  BYTE9(src[11]) = v131;
  *(_QWORD *)&v143[16] = 0x8000000000000000LL;
  *(_QWORD *)v143 = 0LL;
  std::thread::Builder::spawn_unchecked(&v145, v143, src);
  v14 = v144;
  if ( !(_QWORD)v145 )
  {
    *(_QWORD *)v143 = *((_QWORD *)&v145 + 1);
    core::result::unwrap_failed(aFailedToSpawnT_1, 22LL, v143, &off_195270, &off_195290);
  }
  *(_QWORD *)&v143[16] = v146.m256i_i64[0];
  *(_OWORD *)v143 = v145;
  <std::sys::pal::unix::thread::Thread as core::ops::drop::Drop>::drop(&v143[16]);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v143) )
    alloc::sync::Arc<T,A>::drop_slow(v143);
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&v143[8]) )
    alloc::sync::Arc<T,A>::drop_slow(&v143[8]);
  if ( v10 != 0x8000000000000000LL )
  {
    v159 = v14;
    v150 = v163;
    v19 = *v14;
    if ( *v14 == v14[1] || (*v14 = v19 + 24, uu_sort::open(src, v19), *(_QWORD *)&src[0] == 2LL) )
      core::option::unwrap_failed(&off_1952A8);
    v20 = *(_QWORD *)&src[1];
    v17 = *((_QWORD *)&src[0] + 1);
    if ( *(_QWORD *)&src[0] )
    {
      v21 = 0x8000000000000003LL;
LABEL_51:
      if ( (_QWORD)v150 == 2LL )
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v150 + 8);
      }
      else if ( (_DWORD)v150 == 1 )
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v150 + 8);
      }
      else
      {
        v34 = *((_QWORD *)&v150 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v150 + 1) + 512LL)) )
        {
          v35 = *(_QWORD *)(v34 + 128);
          v36 = *(_QWORD *)(v34 + 400);
          do
          {
            v37 = v35;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 128), v36 | v35, v35);
          }
          while ( v37 != v35 );
          if ( (v35 & *(_QWORD *)(v34 + 400)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v34 + 320);
          v38 = *(_BYTE *)(v34 + 528);
          *(_BYTE *)(v34 + 528) = 1;
          if ( v38 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v34);
        }
      }
LABEL_62:
      if ( v21 == 0x8000000000000003LL )
        goto LABEL_77;
      v39 = 3LL;
      if ( (v21 ^ 0x8000000000000000LL) < 3 )
        v39 = v21 ^ 0x8000000000000000LL;
      switch ( v39 )
      {
        case 0uLL:
LABEL_84:
          v49 = a3;
          v50 = *(_QWORD *)a3;
          if ( *(_QWORD *)a3 != 0x8000000000000000LL )
          {
            if ( v50 )
            {
              _rust_dealloc(*((_QWORD *)a3 + 1), v50, 1LL);
              v49 = a3;
            }
            close(*((_DWORD *)v49 + 6));
          }
          break;
        case 1uLL:
          *(_QWORD *)v143 = v17;
          if ( v133 )
          {
            v40 = *(_QWORD *)(v17 + 32) + 24LL * *(_QWORD *)(v17 + 40);
            *(_QWORD *)&src[1] = *(_QWORD *)(v17 + 32);
            *((_QWORD *)&src[1] + 1) = v40;
            *(_QWORD *)&src[0] = 0LL;
            *(_QWORD *)&src[2] = a2;
            *((_QWORD *)&src[2] + 1) = v143;
            uu_sort::print_sorted((__int64 *)src, a2, (__int64 *)a3);
          }
          else
          {
            v107 = *(_QWORD *)(v17 + 32);
            v108 = *(_QWORD *)(v17 + 40);
            uu_sort::Output::into_write((__int64)src, (__int64 *)a3);
            v109 = 24 * v108;
            v110 = v107;
            while ( v109 )
            {
              v109 -= 24LL;
              uu_sort::Line::print(v110, src, a2);
              v110 += 24LL;
            }
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(src);
          }
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v143);
          break;
        case 2uLL:
          *(_QWORD *)&v155 = v17;
          *(_QWORD *)&v145 = v20;
          v53 = *(_QWORD *)(v17 + 32);
          v54 = v53 + 24LL * *(_QWORD *)(v17 + 40);
          v55 = *(_QWORD *)(v20 + 32);
          v56 = v55 + 24LL * *(_QWORD *)(v20 + 40);
          if ( v133 )
          {
            uu_sort::Output::into_write((__int64)v143, (__int64 *)a3);
            *(_QWORD *)&src[0] = 0LL;
            *(__int128 *)((char *)&src[1] + 8) = a2;
            *(_QWORD *)&src[3] = v53;
            *((_QWORD *)&src[3] + 1) = v54;
            *(_QWORD *)&src[4] = &v155;
            *((_QWORD *)&src[4] + 1) = 0LL;
            *((_QWORD *)&src[5] + 1) = v55;
            *(_QWORD *)&src[6] = v56;
            *((_QWORD *)&src[6] + 1) = &v145;
            *(_QWORD *)&src[7] = a2;
            while ( 1 )
            {
              v57 = <itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(src);
              if ( !v57 )
                break;
              uu_sort::Line::print(v57, v143, a2);
            }
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v143);
          }
          else
          {
            src[0] = a2;
            *((_QWORD *)&src[1] + 1) = v53;
            *(_QWORD *)&src[2] = v54;
            *((_QWORD *)&src[2] + 1) = &v155;
            *(_QWORD *)&src[3] = 0LL;
            *(_QWORD *)&src[4] = v55;
            *((_QWORD *)&src[4] + 1) = v56;
            *(_QWORD *)&src[5] = &v145;
            uu_sort::print_sorted((unsigned __int64 *)src, a2, (__int64 *)a3);
          }
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v145);
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v155);
          break;
        case 3uLL:
          *(_QWORD *)&src[0] = v17;
          *((_QWORD *)&src[0] + 1) = v17;
          *(_QWORD *)&src[1] = v21;
          *((_QWORD *)&src[1] + 1) = v17 + 48 * v20;
          uu_sort::merge::merge_with_file_limit(v143, (__int64)src, (_QWORD *)a2, v154);
          v17 = *(_QWORD *)&v143[8];
          if ( *(_QWORD *)v143 == 3LL )
            goto LABEL_77;
          *((_QWORD *)&src[5] + 1) = *(_QWORD *)&v143[88];
          *(__int128 *)((char *)&src[4] + 8) = *(_OWORD *)&v143[72];
          *(__int128 *)((char *)&src[3] + 8) = *(_OWORD *)&v143[56];
          *(__int128 *)((char *)&src[2] + 8) = *(_OWORD *)&v143[40];
          *(__int128 *)((char *)&src[1] + 8) = *(_OWORD *)&v143[24];
          src[0] = *(_OWORD *)v143;
          *(_QWORD *)&src[1] = *(_QWORD *)&v143[16];
          v58 = *a3;
          *(_OWORD *)&v143[16] = a3[1];
          *(_OWORD *)v143 = v58;
          v59 = uu_sort::merge::FileMerger::write_all(src, a2, (__int64 *)v143);
          goto LABEL_112;
      }
LABEL_185:
      v17 = 0LL;
      goto LABEL_186;
    }
    v28 = v134 / 0xA;
    v151 = *(__int128 *)((char *)src + 8);
    *(_QWORD *)&v147 = 0LL;
    *((_QWORD *)&v147 + 1) = 1LL;
    v148 = 0LL;
    v29 = 8000LL;
    if ( v134 / 0xA < 0x1F40 )
      v29 = v134 / 0xA;
    v30 = 1LL;
    if ( v134 < 0xA || (v30 = _rust_alloc_zeroed(v29, 1LL)) != 0 )
    {
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 8LL;
      src[1] = 0LL;
      src[2] = 8uLL;
      *((_QWORD *)&src[3] + 1) = 8LL;
      src[4] = 0LL;
      src[5] = 8uLL;
      *(_QWORD *)&src[6] = v29;
      *((_QWORD *)&src[6] + 1) = v30;
      *(_QWORD *)&src[7] = v29;
      v144 = (__int64 *)(unsigned __int8)v131;
      uu_sort::chunks::read(
        (__int64)v143,
        (__int64)&v150,
        (__int64)src,
        1LL,
        (void *)v28,
        (__int64)&v147,
        (__int64 *)&v151,
        &v159,
        (unsigned __int8)v131,
        a2);
      v17 = *(_QWORD *)v143;
      if ( *(_QWORD *)v143 )
      {
LABEL_43:
        v131 = *(_QWORD *)&v143[8];
        v21 = 0x8000000000000003LL;
        v31 = 0;
        goto LABEL_44;
      }
      if ( !v143[8] )
        goto LABEL_168;
      v52 = 1LL;
      if ( v134 < 0xA || (v52 = _rust_alloc_zeroed(v29, 1LL)) != 0 )
      {
        *(_QWORD *)&src[0] = 0LL;
        *((_QWORD *)&src[0] + 1) = 8LL;
        src[1] = 0LL;
        src[2] = 8uLL;
        *((_QWORD *)&src[3] + 1) = 8LL;
        src[4] = 0LL;
        src[5] = 8uLL;
        *(_QWORD *)&src[6] = v29;
        *((_QWORD *)&src[6] + 1) = v52;
        *(_QWORD *)&src[7] = v29;
        uu_sort::chunks::read(
          (__int64)v143,
          (__int64)&v150,
          (__int64)src,
          1LL,
          (void *)v28,
          (__int64)&v147,
          (__int64 *)&v151,
          &v159,
          (unsigned int)v144,
          a2);
        v17 = *(_QWORD *)v143;
        if ( *(_QWORD *)v143 )
          goto LABEL_43;
        if ( v143[8] )
        {
          v149 = v150;
          *(_QWORD *)&v141 = 0LL;
          *((_QWORD *)&v141 + 1) = 8LL;
          v142 = 0LL;
          v135 = *(_QWORD *)(a2 + 56);
          v158 = *(_QWORD *)(a2 + 64);
          while ( 1 )
          {
            while ( 1 )
            {
              v87 = std::sync::mpmc::Receiver<T>::recv(&v152);
              v88 = v87;
              if ( !v87 )
              {
                v17 = *((_QWORD *)&v141 + 1);
                v21 = v141;
                v89 = v142;
                goto LABEL_229;
              }
              v162 = v87;
              uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)src, v154);
              if ( *((_QWORD *)&src[0] + 1) == 0x8000000000000000LL )
              {
                v89 = *((_QWORD *)&src[1] + 1);
                v17 = *(_QWORD *)&src[1];
LABEL_226:
                self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v162);
                goto LABEL_227;
              }
              v157[0] = src[0];
              v157[1] = src[1];
              <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(
                src,
                v157,
                v135,
                v158);
              v89 = *(_QWORD *)&src[1];
              v17 = *((_QWORD *)&src[0] + 1);
              if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
                goto LABEL_226;
              *(_QWORD *)&v143[104] = *((_QWORD *)&src[6] + 1);
              *(_OWORD *)&v143[88] = *(__int128 *)((char *)&src[5] + 8);
              *(_OWORD *)&v143[72] = *(__int128 *)((char *)&src[4] + 8);
              *(_OWORD *)&v143[56] = *(__int128 *)((char *)&src[3] + 8);
              *(_OWORD *)&v143[40] = *(__int128 *)((char *)&src[2] + 8);
              *(_OWORD *)&v143[24] = *(__int128 *)((char *)&src[1] + 8);
              *(_QWORD *)v143 = *(_QWORD *)&src[0];
              *(_OWORD *)&v143[8] = *(__int128 *)((char *)src + 8);
              v90 = *(_QWORD *)(v88 + 40);
              if ( v90 )
              {
                v91 = *(_QWORD *)(v88 + 32);
                v92 = v91 + 24 * v90;
                do
                {
                  v93 = *(const void **)v91;
                  v94 = *(_QWORD *)(v91 + 8);
                  v95 = *(_QWORD *)&v143[64];
                  if ( *(_QWORD *)&v143[48] - *(_QWORD *)&v143[64] <= v94 )
                  {
                    v97 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(
                            &v143[48],
                            v93,
                            *(_QWORD *)(v91 + 8));
                    if ( v97 )
                    {
                      *(_QWORD *)&src[0] = v97;
                      core::result::unwrap_failed(aCalledResultUn_11, 43LL, src, &off_195270, &off_1952C0);
                    }
                    v96 = *(_QWORD *)&v143[64];
                  }
                  else
                  {
                    memcpy((void *)(*(_QWORD *)&v143[64] + *(_QWORD *)&v143[56]), v93, *(_QWORD *)(v91 + 8));
                    v96 = v94 + v95;
                    *(_QWORD *)&v143[64] = v96;
                  }
                  v140 = v131;
                  if ( (unsigned __int64)(*(_QWORD *)&v143[48] - v96) >= 2 )
                  {
                    *(_BYTE *)(*(_QWORD *)&v143[56] + v96) = v131;
                    *(_QWORD *)&v143[64] = v96 + 1;
                  }
                  else
                  {
                    v98 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v143[48], &v140, 1LL);
                    if ( v98 )
                    {
                      *(_QWORD *)&src[0] = v98;
                      core::result::unwrap_failed(aCalledResultUn_11, 43LL, src, &off_195270, &off_1952D8);
                    }
                  }
                  v91 += 24LL;
                }
                while ( v91 != v92 );
              }
              src[6] = *(_OWORD *)&v143[96];
              src[5] = *(_OWORD *)&v143[80];
              src[4] = *(_OWORD *)&v143[64];
              src[3] = *(_OWORD *)&v143[48];
              src[2] = *(_OWORD *)&v143[32];
              *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v143[24];
              *(_QWORD *)&src[0] = *(_QWORD *)v143;
              *(__int128 *)((char *)src + 8) = *(_OWORD *)&v143[8];
              <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(
                &v155,
                src);
              v17 = *((_QWORD *)&v155 + 1);
              v89 = v156.m256i_i64[0];
              if ( (_QWORD)v155 == 0x8000000000000000LL )
                goto LABEL_226;
              v146 = v156;
              v145 = v155;
              v99 = v142;
              if ( v142 == (_QWORD)v141 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v141, &v146.m256i_u64[1], &v156.m256i_u64[1], v156.m256i_i64[3]);
              v100 = *((_QWORD *)&v141 + 1);
              v101 = 48 * v99;
              v102 = v145;
              v103 = *(_OWORD *)v146.m256i_i8;
              *(_OWORD *)(*((_QWORD *)&v141 + 1) + v101 + 32) = *(_OWORD *)&v146.m256i_u64[2];
              *(_OWORD *)(v100 + v101 + 16) = v103;
              *(_OWORD *)(v100 + v101) = v102;
              v142 = v99 + 1;
              uu_sort::chunks::Chunk::recycle((__int64)v169, v88);
              if ( (_DWORD)v149 != 3 )
                break;
              core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v169);
            }
            uu_sort::chunks::read(
              (__int64)src,
              (__int64)&v149,
              (__int64)v169,
              0LL,
              v104,
              (__int64)&v147,
              (__int64 *)&v151,
              &v159,
              (unsigned int)v144,
              a2);
            v17 = *(_QWORD *)&src[0];
            if ( *(_QWORD *)&src[0] )
              break;
            if ( !BYTE8(src[0]) )
            {
              if ( (_DWORD)v149 != 3 )
                <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(&v149);
              *(_QWORD *)&v149 = 3LL;
            }
          }
          v89 = *((_QWORD *)&src[0] + 1);
LABEL_227:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v141);
          v21 = 0x8000000000000003LL;
          if ( (_QWORD)v141 )
            _rust_dealloc(*((_QWORD *)&v141 + 1), 48 * v141, 8LL);
LABEL_229:
          v131 = v89;
          if ( (_DWORD)v149 != 3 )
            <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(&v149);
          v31 = 1;
LABEL_44:
          if ( (_QWORD)v147 )
            _rust_dealloc(*((_QWORD *)&v147 + 1), v147, 1LL);
          v32 = v151;
          if ( **((_QWORD **)&v151 + 1) )
            (**((void (__fastcall ***)(_QWORD))&v151 + 1))(v151);
          v33 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8LL);
          if ( v33 )
            _rust_dealloc(v32, v33, *(_QWORD *)(*((_QWORD *)&v32 + 1) + 16LL));
          v27 = v31 == 0;
          v20 = v131;
          if ( !v27 )
            goto LABEL_62;
          goto LABEL_51;
        }
LABEL_168:
        v106 = *((_QWORD *)&v150 + 1);
        src[0] = v150;
        if ( (_QWORD)v150 )
        {
          if ( (_DWORD)v150 == 1 )
            std::sync::mpmc::counter::Sender<C>::release((char *)src + 8);
          else
            std::sync::mpmc::counter::Sender<C>::release((char *)src + 8);
        }
        else if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v150 + 1) + 512LL)) )
        {
          v118 = *(_QWORD *)(v106 + 128);
          v119 = *(_QWORD *)(v106 + 400);
          do
          {
            v120 = v118;
            v118 = _InterlockedCompareExchange64((volatile signed __int64 *)(v106 + 128), v119 | v118, v118);
          }
          while ( v120 != v118 );
          if ( (v118 & *(_QWORD *)(v106 + 400)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v106 + 320);
          v121 = *(_BYTE *)(v106 + 528);
          *(_BYTE *)(v106 + 528) = 1;
          if ( v121 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v106);
        }
        v128 = std::sync::mpmc::Receiver<T>::recv(&v152);
        v17 = v128;
        v31 = 1;
        if ( v128 )
        {
          *(_QWORD *)&src[0] = v128;
          v129 = std::sync::mpmc::Receiver<T>::recv(&v152);
          v131 = v129;
          v21 = ((__PAIR128__(0x8000000000000000LL, v129) - 1) >> 64) + 2;
        }
        else
        {
          v21 = 0x8000000000000000LL;
        }
        goto LABEL_44;
      }
    }
    alloc::raw_vec::handle_error(1LL, v29);
  }
  *(_QWORD *)&v151 = v14;
  v147 = v163;
  v15 = *v14;
  if ( *v14 == v14[1] || (*v14 = v15 + 24, uu_sort::open(src, v15), *(_QWORD *)&src[0] == 2LL) )
    core::option::unwrap_failed(&off_1952A8);
  v16 = *(_QWORD *)&src[1];
  v17 = *((_QWORD *)&src[0] + 1);
  if ( !*(_QWORD *)&src[0] )
  {
    v22 = v134 / 0xA;
    v141 = *(__int128 *)((char *)src + 8);
    *(_QWORD *)&v155 = 0LL;
    *((_QWORD *)&v155 + 1) = 1LL;
    v156.m256i_i64[0] = 0LL;
    v16 = 8000LL;
    if ( v134 / 0xA < 0x1F40 )
      v16 = v134 / 0xA;
    v23 = 1LL;
    if ( v134 < 0xA || (v23 = _rust_alloc_zeroed(v16, 1LL)) != 0 )
    {
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 8LL;
      src[1] = 0LL;
      src[2] = 8uLL;
      *((_QWORD *)&src[3] + 1) = 8LL;
      src[4] = 0LL;
      src[5] = 8uLL;
      *(_QWORD *)&src[6] = v16;
      *((_QWORD *)&src[6] + 1) = v23;
      *(_QWORD *)&src[7] = v16;
      v144 = (__int64 *)(unsigned __int8)v131;
      uu_sort::chunks::read(
        (__int64)v143,
        (__int64)&v147,
        (__int64)src,
        1LL,
        (void *)v22,
        (__int64)&v155,
        (__int64 *)&v141,
        (__int64 **)&v151,
        (unsigned __int8)v131,
        a2);
      v17 = *(_QWORD *)v143;
      if ( *(_QWORD *)v143 )
      {
LABEL_27:
        v16 = *(_QWORD *)&v143[8];
        v132 = 0x8000000000000003LL;
        v24 = 0;
        goto LABEL_28;
      }
      if ( !v143[8] )
        goto LABEL_165;
      v51 = 1LL;
      if ( v134 < 0xA || (v51 = _rust_alloc_zeroed(v16, 1LL)) != 0 )
      {
        *(_QWORD *)&src[0] = 0LL;
        *((_QWORD *)&src[0] + 1) = 8LL;
        src[1] = 0LL;
        src[2] = 8uLL;
        *((_QWORD *)&src[3] + 1) = 8LL;
        src[4] = 0LL;
        src[5] = 8uLL;
        *(_QWORD *)&src[6] = v16;
        *((_QWORD *)&src[6] + 1) = v51;
        *(_QWORD *)&src[7] = v16;
        uu_sort::chunks::read(
          (__int64)v143,
          (__int64)&v147,
          (__int64)src,
          1LL,
          (void *)v22,
          (__int64)&v155,
          (__int64 *)&v141,
          (__int64 **)&v151,
          (unsigned int)v144,
          a2);
        v17 = *(_QWORD *)v143;
        if ( *(_QWORD *)v143 )
          goto LABEL_27;
        if ( v143[8] )
        {
          v157[0] = v147;
          *(_QWORD *)&v145 = 0LL;
          *((_QWORD *)&v145 + 1) = 8LL;
          v146.m256i_i64[0] = 0LL;
          while ( 1 )
          {
            while ( 1 )
            {
              v67 = std::sync::mpmc::Receiver<T>::recv(&v152);
              v68 = v67;
              if ( !v67 )
              {
                v17 = *((_QWORD *)&v145 + 1);
                v130 = v145;
                v16 = v146.m256i_i64[0];
                goto LABEL_221;
              }
              *(_QWORD *)&v149 = v67;
              uu_sort::tmp_dir::TmpDirWrapper::next_file((__int64)src, v154);
              v69 = *((_QWORD *)&src[0] + 1);
              if ( *((_QWORD *)&src[0] + 1) == 0x8000000000000000LL )
              {
                v16 = *((_QWORD *)&src[1] + 1);
                v17 = *(_QWORD *)&src[1];
LABEL_218:
                self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v149);
                goto LABEL_219;
              }
              v70 = src[0];
              v71 = src[1];
              v72 = _rust_alloc(0x2000LL, 1LL);
              if ( !v72 )
                alloc::raw_vec::handle_error(1LL, 0x2000LL);
              *(_QWORD *)&v143[24] = 0x2000LL;
              *(_OWORD *)&v143[32] = (unsigned __int64)v72;
              v143[48] = 0;
              *(_DWORD *)&v143[52] = v70;
              *(_QWORD *)v143 = v69;
              *(_OWORD *)&v143[8] = v71;
              v73 = *(_QWORD *)(v68 + 40);
              if ( v73 )
              {
                v74 = *(_QWORD *)(v68 + 32);
                v75 = v74 + 24 * v73;
                do
                {
                  v76 = *(const void **)v74;
                  v77 = *(_QWORD *)(v74 + 8);
                  v78 = *(_QWORD *)&v143[40];
                  if ( *(_QWORD *)&v143[24] - *(_QWORD *)&v143[40] <= v77 )
                  {
                    v80 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(
                            &v143[24],
                            v76,
                            *(_QWORD *)(v74 + 8));
                    if ( v80 )
                    {
                      *(_QWORD *)&src[0] = v80;
                      core::result::unwrap_failed(aCalledResultUn_11, 43LL, src, &off_195270, &off_1952C0);
                    }
                    v79 = *(_QWORD *)&v143[40];
                  }
                  else
                  {
                    memcpy((void *)(*(_QWORD *)&v143[40] + *(_QWORD *)&v143[32]), v76, *(_QWORD *)(v74 + 8));
                    v79 = v77 + v78;
                    *(_QWORD *)&v143[40] = v79;
                  }
                  LOBYTE(v150) = v131;
                  if ( (unsigned __int64)(*(_QWORD *)&v143[24] - v79) >= 2 )
                  {
                    *(_BYTE *)(*(_QWORD *)&v143[32] + v79) = v131;
                    *(_QWORD *)&v143[40] = v79 + 1;
                  }
                  else
                  {
                    v81 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v143[24], &v150, 1LL);
                    if ( v81 )
                    {
                      *(_QWORD *)&src[0] = v81;
                      core::result::unwrap_failed(aCalledResultUn_11, 43LL, src, &off_195270, &off_1952D8);
                    }
                  }
                  v74 += 24LL;
                }
                while ( v74 != v75 );
              }
              src[0] = *(_OWORD *)v143;
              src[1] = *(_OWORD *)&v143[16];
              *(_QWORD *)&src[3] = *(_QWORD *)&v143[48];
              src[2] = *(_OWORD *)&v143[32];
              v17 = *(_QWORD *)&v143[8];
              v82 = *(_QWORD *)v143;
              v16 = *(_QWORD *)&v143[16];
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>((char *)&src[1] + 8);
              if ( v82 == 0x8000000000000000LL )
                goto LABEL_218;
              v83 = v146.m256i_i64[0];
              if ( v146.m256i_i64[0] == (_QWORD)v145 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v145);
              v84 = *((_QWORD *)&v145 + 1);
              v85 = 3 * v83;
              *(_QWORD *)(*((_QWORD *)&v145 + 1) + 8 * v85) = v82;
              *(_QWORD *)(v84 + 8 * v85 + 8) = v17;
              *(_QWORD *)(v84 + 8 * v85 + 16) = v16;
              v146.m256i_i64[0] = v83 + 1;
              uu_sort::chunks::Chunk::recycle((__int64)v170, v68);
              if ( LODWORD(v157[0]) != 3 )
                break;
              core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v170);
            }
            uu_sort::chunks::read(
              (__int64)src,
              (__int64)v157,
              (__int64)v170,
              0LL,
              v86,
              (__int64)&v155,
              (__int64 *)&v141,
              (__int64 **)&v151,
              (unsigned int)v144,
              a2);
            v17 = *(_QWORD *)&src[0];
            if ( *(_QWORD *)&src[0] )
              break;
            if ( !BYTE8(src[0]) )
            {
              if ( LODWORD(v157[0]) != 3 )
                <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(v157);
              *(_QWORD *)&v157[0] = 3LL;
            }
          }
          v16 = *((_QWORD *)&src[0] + 1);
LABEL_219:
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v145);
          v130 = 0x8000000000000003LL;
          if ( (_QWORD)v145 )
            _rust_dealloc(*((_QWORD *)&v145 + 1), 24 * v145, 8LL);
LABEL_221:
          if ( LODWORD(v157[0]) != 3 )
            <std::sync::mpmc::Sender<T> as core::ops::drop::Drop>::drop(v157);
          v132 = v130;
          v24 = 1;
LABEL_28:
          if ( (_QWORD)v155 )
            _rust_dealloc(*((_QWORD *)&v155 + 1), v155, 1LL);
          v25 = v141;
          if ( **((_QWORD **)&v141 + 1) )
            (**((void (__fastcall ***)(_QWORD))&v141 + 1))(v141);
          v26 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
          if ( v26 )
            _rust_dealloc(v25, v26, *(_QWORD *)(*((_QWORD *)&v25 + 1) + 16LL));
          v27 = v24 == 0;
          v18 = v132;
          if ( !v27 )
            goto LABEL_76;
          goto LABEL_35;
        }
LABEL_165:
        v105 = *((_QWORD *)&v147 + 1);
        src[0] = v147;
        if ( (_QWORD)v147 == 2LL )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)src + 8);
        }
        else if ( (_DWORD)v147 == 1 )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)src + 8);
        }
        else if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v147 + 1) + 512LL)) )
        {
          v122 = *(_QWORD *)(v105 + 128);
          v123 = *(_QWORD *)(v105 + 400);
          do
          {
            v124 = v122;
            v122 = _InterlockedCompareExchange64((volatile signed __int64 *)(v105 + 128), v123 | v122, v122);
          }
          while ( v124 != v122 );
          if ( (v122 & *(_QWORD *)(v105 + 400)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v105 + 320);
          v125 = *(_BYTE *)(v105 + 528);
          *(_BYTE *)(v105 + 528) = 1;
          if ( v125 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v105);
        }
        v126 = std::sync::mpmc::Receiver<T>::recv(&v152);
        v17 = v126;
        v24 = 1;
        if ( v126 )
        {
          *(_QWORD *)&src[0] = v126;
          v127 = std::sync::mpmc::Receiver<T>::recv(&v152);
          v16 = v127;
          v132 = ((__PAIR128__(0x8000000000000000LL, v127) - 1) >> 64) + 2;
        }
        else
        {
          v132 = 0x8000000000000000LL;
        }
        goto LABEL_28;
      }
    }
    alloc::raw_vec::handle_error(1LL, v16);
  }
  v18 = 0x8000000000000003LL;
LABEL_35:
  if ( (_QWORD)v147 == 2LL )
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v147 + 8);
  }
  else if ( (_DWORD)v147 == 1 )
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v147 + 8);
  }
  else
  {
    v41 = *((_QWORD *)&v147 + 1);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v147 + 1) + 512LL)) )
    {
      v42 = *(_QWORD *)(v41 + 128);
      v43 = *(_QWORD *)(v41 + 400);
      do
      {
        v44 = v42;
        v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 128), v43 | v42, v42);
      }
      while ( v44 != v42 );
      if ( (v42 & *(_QWORD *)(v41 + 400)) == 0 )
        std::sync::mpmc::waker::SyncWaker::disconnect(v41 + 320);
      v45 = *(_BYTE *)(v41 + 528);
      *(_BYTE *)(v41 + 528) = 1;
      if ( v45 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v41);
    }
  }
LABEL_76:
  if ( v18 == 0x8000000000000003LL )
  {
LABEL_77:
    v46 = a3;
    v47 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 != 0x8000000000000000LL )
    {
      if ( v47 )
      {
        _rust_dealloc(*((_QWORD *)a3 + 1), v47, 1LL);
        v46 = a3;
      }
      close(*((_DWORD *)v46 + 6));
    }
    goto LABEL_186;
  }
  v48 = 3LL;
  if ( (v18 ^ 0x8000000000000000LL) < 3 )
    v48 = v18 ^ 0x8000000000000000LL;
  switch ( v48 )
  {
    case 0uLL:
      goto LABEL_84;
    case 1uLL:
      *(_QWORD *)v143 = v17;
      if ( v133 )
      {
        v66 = *(_QWORD *)(v17 + 32) + 24LL * *(_QWORD *)(v17 + 40);
        *(_QWORD *)&src[1] = *(_QWORD *)(v17 + 32);
        *((_QWORD *)&src[1] + 1) = v66;
        *(_QWORD *)&src[0] = 0LL;
        *(_QWORD *)&src[2] = a2;
        *((_QWORD *)&src[2] + 1) = v143;
        uu_sort::print_sorted((__int64 *)src, a2, (__int64 *)a3);
      }
      else
      {
        v111 = *(_QWORD *)(v17 + 32);
        v112 = *(_QWORD *)(v17 + 40);
        uu_sort::Output::into_write((__int64)src, (__int64 *)a3);
        v113 = 24 * v112;
        v114 = v111;
        while ( v113 )
        {
          v113 -= 24LL;
          uu_sort::Line::print(v114, src, a2);
          v114 += 24LL;
        }
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(src);
      }
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v143);
      goto LABEL_185;
    case 2uLL:
      *(_QWORD *)&v155 = v17;
      *(_QWORD *)&v145 = v16;
      v60 = *(_QWORD *)(v17 + 32);
      v61 = v60 + 24LL * *(_QWORD *)(v17 + 40);
      v62 = *(_QWORD *)(v16 + 32);
      v63 = v62 + 24LL * *(_QWORD *)(v16 + 40);
      if ( v133 )
      {
        uu_sort::Output::into_write((__int64)v143, (__int64 *)a3);
        *(_QWORD *)&src[0] = 0LL;
        *(__int128 *)((char *)&src[1] + 8) = a2;
        *(_QWORD *)&src[3] = v60;
        *((_QWORD *)&src[3] + 1) = v61;
        *(_QWORD *)&src[4] = &v155;
        *((_QWORD *)&src[4] + 1) = 0LL;
        *((_QWORD *)&src[5] + 1) = v62;
        *(_QWORD *)&src[6] = v63;
        *((_QWORD *)&src[6] + 1) = &v145;
        *(_QWORD *)&src[7] = a2;
        while ( 1 )
        {
          v64 = <itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(src);
          if ( !v64 )
            break;
          uu_sort::Line::print(v64, v143, a2);
        }
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v143);
      }
      else
      {
        src[0] = a2;
        *((_QWORD *)&src[1] + 1) = v60;
        *(_QWORD *)&src[2] = v61;
        *((_QWORD *)&src[2] + 1) = &v155;
        *(_QWORD *)&src[3] = 0LL;
        *(_QWORD *)&src[4] = v62;
        *((_QWORD *)&src[4] + 1) = v63;
        *(_QWORD *)&src[5] = &v145;
        uu_sort::print_sorted((unsigned __int64 *)src, a2, (__int64 *)a3);
      }
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v145);
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v155);
      goto LABEL_185;
    case 3uLL:
      *(_QWORD *)&src[0] = v17;
      *((_QWORD *)&src[0] + 1) = v17;
      *(_QWORD *)&src[1] = v18;
      *((_QWORD *)&src[1] + 1) = v17 + 24 * v16;
      uu_sort::merge::merge_with_file_limit((__int64)v143, (__int64)src, a2, v154);
      v17 = *(_QWORD *)&v143[8];
      if ( *(_QWORD *)v143 == 3LL )
        goto LABEL_77;
      *((_QWORD *)&src[5] + 1) = *(_QWORD *)&v143[88];
      *(__int128 *)((char *)&src[4] + 8) = *(_OWORD *)&v143[72];
      *(__int128 *)((char *)&src[3] + 8) = *(_OWORD *)&v143[56];
      *(__int128 *)((char *)&src[2] + 8) = *(_OWORD *)&v143[40];
      *(__int128 *)((char *)&src[1] + 8) = *(_OWORD *)&v143[24];
      src[0] = *(_OWORD *)v143;
      *(_QWORD *)&src[1] = *(_QWORD *)&v143[16];
      v65 = *a3;
      *(_OWORD *)&v143[16] = a3[1];
      *(_OWORD *)v143 = v65;
      v59 = uu_sort::merge::FileMerger::write_all(src, a2, (__int64 *)v143);
      break;
  }
LABEL_112:
  v17 = v59;
LABEL_186:
  if ( v152 == 2 )
  {
    std::sync::mpmc::counter::Receiver<C>::release(&v153);
  }
  else if ( (_DWORD)v152 == 1 )
  {
    std::sync::mpmc::counter::Receiver<C>::release(&v153);
  }
  else
  {
    v115 = v153;
    if ( !_InterlockedDecrement64(v153 + 65) )
    {
      std::sync::mpmc::array::Channel<T>::disconnect_receivers(v115);
      v116 = *((_BYTE *)v115 + 528);
      *((_BYTE *)v115 + 528) = 1;
      if ( v116 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v115);
    }
  }
  return v17;
}
