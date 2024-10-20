__int64 __fastcall uu_sort::merge::merge_with_file_limit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  bool v12; // cf
  unsigned __int128 v13; // kr00_16
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  double v21; // xmm0_8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rax
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  __int128 *v34; // rax
  unsigned __int64 i; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rbx
  char v46; // al
  __int64 v47; // r14
  __int32 v48; // ebx
  __int128 v49; // kr20_16
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  bool v58; // cc
  __int64 v59; // r15
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  signed __int64 v63; // rax
  __int64 v64; // rcx
  signed __int64 v65; // rtt
  char v66; // al
  _QWORD *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 j; // r14
  __int128 v72; // xmm0
  __int64 v73; // r14
  unsigned __int64 v74; // r12
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // r13
  void *v78; // rax
  __int64 v79; // r15
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rcx
  double v83; // xmm0_8
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // rcx
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm2
  __int64 v90; // rax
  __int64 v91; // r15
  _QWORD *v92; // r14
  unsigned __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // r12
  unsigned __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int128 *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  __int64 v105; // r13
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // r13
  __int64 v109; // r13
  char v110; // al
  unsigned __int64 m; // rsi
  __int128 v112; // xmm0
  __int128 v113; // xmm0
  __int64 v114; // rbx
  char v115; // al
  __int64 v116; // rbx
  signed __int64 v117; // rax
  __int64 v118; // rcx
  signed __int64 v119; // rtt
  char v120; // al
  __int64 v121; // rbx
  _QWORD *v122; // r14
  __int64 v123; // rsi
  signed __int64 v125; // rax
  __int64 v126; // rcx
  signed __int64 v127; // rtt
  char v128; // al
  unsigned __int64 v129; // rbx
  _QWORD *v130; // r14
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 k; // r14
  __int64 v134; // rbx
  char v135; // al
  __int64 v136; // rbx
  signed __int64 v137; // rax
  __int64 v138; // rcx
  signed __int64 v139; // rtt
  char v140; // al
  __m256i v142; // [rsp+50h] [rbp-658h] BYREF
  __int128 v143; // [rsp+70h] [rbp-638h]
  unsigned __int64 v144; // [rsp+80h] [rbp-628h]
  __int128 v145; // [rsp+90h] [rbp-618h] BYREF
  __int64 v146; // [rsp+A0h] [rbp-608h]
  _OWORD *v147; // [rsp+A8h] [rbp-600h]
  __int128 v148; // [rsp+B0h] [rbp-5F8h]
  __int64 v149; // [rsp+C8h] [rbp-5E0h]
  __int128 v150; // [rsp+D0h] [rbp-5D8h]
  __int64 v151; // [rsp+E8h] [rbp-5C0h]
  __int128 v152; // [rsp+F0h] [rbp-5B8h] BYREF
  __int64 v153; // [rsp+100h] [rbp-5A8h]
  __int64 v154; // [rsp+108h] [rbp-5A0h] BYREF
  __int64 v155; // [rsp+110h] [rbp-598h]
  __int64 v156; // [rsp+118h] [rbp-590h]
  __m256i v157[5]; // [rsp+120h] [rbp-588h] BYREF
  __int128 v158; // [rsp+1C0h] [rbp-4E8h] BYREF
  __m256i v159; // [rsp+1D0h] [rbp-4D8h] BYREF
  __int128 v160; // [rsp+1F0h] [rbp-4B8h]
  __int128 v161; // [rsp+200h] [rbp-4A8h] BYREF
  _BYTE v162[24]; // [rsp+210h] [rbp-498h] BYREF
  __int64 v163; // [rsp+228h] [rbp-480h]
  __int64 v164; // [rsp+230h] [rbp-478h]
  __int64 v165; // [rsp+238h] [rbp-470h]
  __int128 v166; // [rsp+240h] [rbp-468h] BYREF
  __int128 v167; // [rsp+250h] [rbp-458h] BYREF
  __int64 v168; // [rsp+260h] [rbp-448h]
  _BYTE v169[24]; // [rsp+268h] [rbp-440h]
  __m256i src[20]; // [rsp+280h] [rbp-428h] BYREF
  __m256i v171[5]; // [rsp+500h] [rbp-1A8h] BYREF
  __int64 v172; // [rsp+5A0h] [rbp-108h]
  char v173; // [rsp+5A8h] [rbp-100h]
  __int64 v174; // [rsp+5B0h] [rbp-F8h]
  unsigned __int64 v175; // [rsp+5B8h] [rbp-F0h]
  unsigned __int64 v176; // [rsp+5C0h] [rbp-E8h]
  unsigned __int64 v177; // [rsp+5C8h] [rbp-E0h]
  _BYTE v178[48]; // [rsp+5D0h] [rbp-D8h] BYREF
  __m256i v179; // [rsp+600h] [rbp-A8h]
  __int128 v180; // [rsp+620h] [rbp-88h]
  __int128 v181; // [rsp+638h] [rbp-70h]

  v151 = a4;
  v5 = *(_QWORD *)(a2 + 8);
  v147 = (_OWORD *)a2;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)(v6 - v5);
  v8 = (v6 - v5) / 0x18uLL;
  v149 = a3;
  v9 = *(_QWORD *)(a3 + 112);
  if ( v8 > v9 )
  {
    if ( !v9 )
      core::panicking::panic(
        anon_21b577e8ef70acd0d31b630f442194b7_33_llvm_11221174558704488820,
        27LL,
        &anon_21b577e8ef70acd0d31b630f442194b7_35_llvm_11221174558704488820);
    v171[0].m256i_i64[3] = 0LL;
    *(_OWORD *)v171[0].m256i_i8 = 0LL;
    *(_OWORD *)v171[1].m256i_i8 = 8uLL;
    v171[1].m256i_i64[2] = 0x8000000000000001LL;
    v10 = v147[1];
    *(_OWORD *)&v171[2].m256i_u64[2] = *v147;
    *(_OWORD *)v171[3].m256i_i8 = v10;
    v171[3].m256i_i64[2] = v9;
    *(_OWORD *)&v171[3].m256i_u64[3] = 0LL;
    *(_OWORD *)&v171[4].m256i_u64[1] = 0LL;
    v171[4].m256i_i64[3] = 0LL;
    v172 = -1LL;
    v173 = 0;
    v174 = 0LL;
    v154 = 0LL;
    v155 = 8LL;
    v156 = 0LL;
    v147 = (_OWORD *)0x8000000000000002LL;
    v11 = (v6 - v5) / 0x18uLL;
    v175 = v9;
LABEL_4:
    v12 = v11 < v9;
    *(_QWORD *)&v7 = v11 - v9;
    if ( v12 )
      *(_QWORD *)&v7 = 0LL;
    v176 = v7;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
      src,
      v171,
      *((_QWORD *)&v7 + 1),
      0LL);
    if ( (_OWORD *)src[0].m256i_i64[0] == v147 )
      core::option::unwrap_failed(&off_193330);
    v177 = v8;
    v160 = *(_OWORD *)src[1].m256i_i8;
    v159 = src[0];
    std::sync::mpmc::channel(src);
    v161 = *(_OWORD *)src[0].m256i_i8;
    v13 = *(_OWORD *)&src[0].m256i_u64[2];
    v164 = v13 >> 64;
    v165 = v13;
    v166 = *(_OWORD *)&src[0].m256i_u64[2];
    *(_QWORD *)&v152 = 0LL;
    *((_QWORD *)&v152 + 1) = 8LL;
    v153 = 0LL;
    *(_QWORD *)&v145 = 0LL;
    *((_QWORD *)&v145 + 1) = 8LL;
    v146 = 0LL;
    v142 = v159;
    v143 = v160;
    v14 = v159.m256i_i64[0];
    *(_QWORD *)&v150 = *((_QWORD *)&v160 + 1);
    *(_QWORD *)&v148 = v160;
    v15 = 0LL;
    if ( v159.m256i_i64[0] != 0x8000000000000001LL )
    {
      src[0].m256i_i64[3] = v142.m256i_i64[3];
      *(_OWORD *)&src[0].m256i_u64[1] = *(_OWORD *)&v142.m256i_u64[1];
      goto LABEL_10;
    }
    while ( 1 )
    {
      itertools::groupbylazy::IntoChunks<I>::step(src, v148, v150);
      v14 = src[0].m256i_i64[0];
      if ( src[0].m256i_i64[0] == 0x8000000000000001LL )
      {
        v29 = (_QWORD *)v148;
        if ( *(_QWORD *)v148 )
          core::cell::panic_already_borrowed(&anon_5e1370f02050f3d3373ac32d9310e55d_1_llvm_10414264628066819742);
        v30 = *(_QWORD *)(v148 + 160);
        if ( v30 == -1LL || v30 < (unsigned __int64)v150 )
          *(_QWORD *)(v148 + 160) = v150;
        *v29 = 0LL;
        v31 = v153;
        if ( v153 )
        {
          v32 = 0LL;
          do
          {
            v33 = _rust_alloc_zeroed(0x2000LL, 1LL);
            if ( !v33 )
              alloc::raw_vec::handle_error(1LL, 0x2000LL);
            *(_OWORD *)&src[0].m256i_u64[2] = 8uLL;
            *(_OWORD *)&src[1].m256i_u64[2] = 0LL;
            *(_OWORD *)src[2].m256i_i8 = 8uLL;
            *(_OWORD *)src[0].m256i_i8 = v32;
            src[1].m256i_i64[1] = 8LL;
            src[2].m256i_i64[3] = 8LL;
            src[3].m256i_i64[0] = 0LL;
            src[3].m256i_i64[1] = 0x2000LL;
            src[3].m256i_i64[2] = v33;
            src[3].m256i_i64[3] = 0x2000LL;
            std::sync::mpmc::Sender<T>::send(v157, &v161, src, &src[0].m256i_u64[3]);
            if ( v157[0].m256i_i64[1] != 0x8000000000000000LL )
            {
              src[3] = v157[3];
              src[2] = v157[2];
              src[1] = v157[1];
              src[0] = v157[0];
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
            }
            ++v32;
          }
          while ( v31 != v32 );
        }
        <uu_sort::GlobalSettings as core::clone::Clone>::clone(v157, v149);
        src[0].m256i_i64[0] = v165;
        src[0].m256i_i64[1] = v164;
        src[1].m256i_i64[0] = v153;
        *(_OWORD *)&src[0].m256i_u64[2] = v152;
        memcpy(&src[1].m256i_u64[1], v157, 0xA0uLL);
        *(_QWORD *)&v150 = 0x8000000000000000LL;
        v157[0].m256i_i64[2] = 0x8000000000000000LL;
        v157[0].m256i_i64[0] = 0LL;
        std::thread::Builder::spawn_unchecked(&v142, v157, src);
        if ( !v142.m256i_i64[0] )
        {
          v157[0].m256i_i64[0] = v142.m256i_i64[1];
          core::result::unwrap_failed(aFailedToSpawnT, 22LL, v157, &off_1931D0, &off_193410);
        }
        *(_QWORD *)&v162[16] = v142.m256i_i64[2];
        *(_OWORD *)v162 = *(_OWORD *)v142.m256i_i8;
        v142.m256i_i64[0] = 0LL;
        *(_OWORD *)&v142.m256i_u64[1] = 8uLL;
        v34 = (__int128 *)*((_QWORD *)&v145 + 1);
        v157[0].m256i_i64[0] = *((_QWORD *)&v145 + 1);
        v157[0].m256i_i64[1] = *((_QWORD *)&v145 + 1);
        v157[0].m256i_i64[2] = v145;
        v157[0].m256i_i64[3] = *((_QWORD *)&v145 + 1) + 16 * v146;
        v157[1].m256i_i64[0] = 0LL;
        if ( v146 )
        {
          do
          {
            v157[0].m256i_i64[1] = (__int64)(v34 + 1);
            v40 = *v34;
            v41 = v157[1].m256i_i64[0]++;
            v158 = v40;
            v42 = std::sync::mpmc::Receiver<T>::recv(&v158);
            if ( v42 )
            {
              src[0].m256i_i64[0] = 1LL;
              src[0].m256i_i64[1] = 1LL;
              src[0].m256i_i64[2] = v42;
              v43 = _rust_alloc(24LL, 8LL);
              if ( !v43 )
                alloc::alloc::handle_alloc_error(8LL, 24LL);
              *(_QWORD *)(v43 + 16) = src[0].m256i_i64[2];
              *(_OWORD *)v43 = *(_OWORD *)src[0].m256i_i8;
              *(_OWORD *)&src[0].m256i_u64[2] = (unsigned __int64)v43;
              *(_OWORD *)src[0].m256i_i8 = v158;
              src[1].m256i_i64[0] = v41;
              v44 = v142.m256i_i64[2];
              if ( v142.m256i_i64[2] == v142.m256i_i64[0] )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v142);
              v36 = v142.m256i_i64[1];
              v37 = 5 * v44;
              v38 = *(_OWORD *)src[0].m256i_i8;
              v39 = *(_OWORD *)&src[0].m256i_u64[2];
              *(_QWORD *)(v142.m256i_i64[1] + 8 * v37 + 32) = src[1].m256i_i64[0];
              *(_OWORD *)(v36 + 8 * v37 + 16) = v39;
              *(_OWORD *)(v36 + 8 * v37) = v38;
              v142.m256i_i64[2] = v44 + 1;
            }
            else if ( (_QWORD)v158 == 2LL )
            {
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v158 + 8);
            }
            else if ( (_DWORD)v158 == 1 )
            {
              std::sync::mpmc::counter::Receiver<C>::release((char *)&v158 + 8);
            }
            else
            {
              v45 = *((_QWORD *)&v158 + 1);
              if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v158 + 1) + 520LL)) )
              {
                std::sync::mpmc::array::Channel<T>::disconnect_receivers(v45);
                v46 = *(_BYTE *)(v45 + 528);
                *(_BYTE *)(v45 + 528) = 1;
                if ( v46 )
                  core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v45);
              }
            }
            v34 = (__int128 *)v157[0].m256i_i64[1];
          }
          while ( v157[0].m256i_i64[1] != v157[0].m256i_i64[3] );
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v157);
        src[0].m256i_i64[2] = v142.m256i_i64[2];
        *(_OWORD *)src[0].m256i_i8 = *(_OWORD *)v142.m256i_i8;
        src[0].m256i_i64[3] = v149;
        if ( v142.m256i_i64[2] )
        {
          for ( i = ((unsigned __int64)v142.m256i_i64[2] >> 1) - 1; i != -1LL; --i )
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, i, src[0].m256i_i64[2]);
        }
        v167 = *(_OWORD *)&src[0].m256i_u64[1];
        v168 = src[0].m256i_i64[3];
        *(_OWORD *)v169 = *(_OWORD *)v162;
        *(_QWORD *)&v169[16] = *(_QWORD *)&v162[16];
        *(_OWORD *)&v179.m256i_u64[1] = *(_OWORD *)&v169[8];
        *(__m256i *)&v178[16] = src[0];
        v179.m256i_i64[0] = *(_QWORD *)v162;
        v180 = v181;
        *(_OWORD *)v178 = v161;
        v179.m256i_i64[3] = 0LL;
        uu_sort::tmp_dir::TmpDirWrapper::next_file(src, v151);
        v47 = src[0].m256i_i64[1];
        if ( src[0].m256i_i64[1] == (_QWORD)v150 )
        {
          *(_OWORD *)(a1 + 8) = *(_OWORD *)&src[0].m256i_u64[2];
          *(_QWORD *)a1 = 3LL;
          core::ptr::drop_in_place<uu_sort::merge::FileMerger>(v178);
          goto LABEL_148;
        }
        v48 = src[0].m256i_i32[0];
        v49 = *(_OWORD *)&src[0].m256i_u64[2];
        v50 = _rust_alloc(0x2000LL, 1LL);
        if ( !v50 )
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        v157[0].m256i_i64[3] = 0x2000LL;
        *(_OWORD *)v157[1].m256i_i8 = (unsigned __int64)v50;
        v157[1].m256i_i8[16] = 0;
        v157[1].m256i_i32[5] = v48;
        v157[0].m256i_i64[0] = v47;
        *(_OWORD *)&v157[0].m256i_u64[1] = v49;
        *(_OWORD *)&src[2].m256i_u64[2] = v180;
        *(__m256i *)((char *)&src[1] + 16) = v179;
        *(_OWORD *)src[1].m256i_i8 = *(_OWORD *)&v178[32];
        src[0] = *(__m256i *)v178;
        v51 = uu_sort::merge::FileMerger::write_all_to(src, v149, &v157[0].m256i_u64[3]);
        v53 = v177;
        if ( v51 )
        {
          *(_QWORD *)(a1 + 8) = v51;
          *(_QWORD *)(a1 + 16) = v52;
          *(_QWORD *)a1 = 3LL;
          if ( v157[0].m256i_i64[0] )
            _rust_dealloc(v157[0].m256i_i64[1], v157[0].m256i_i64[0], 1LL);
          core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&v157[0].m256i_u64[3]);
          goto LABEL_148;
        }
        src[0] = v157[0];
        src[1].m256i_i64[2] = v157[1].m256i_i64[2];
        *(_OWORD *)src[1].m256i_i8 = *(_OWORD *)v157[1].m256i_i8;
        v54 = v157[0].m256i_i64[0];
        v148 = *(_OWORD *)&v157[0].m256i_u64[1];
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&src[0].m256i_u64[3]);
        if ( v54 == (_QWORD)v150 )
        {
          *(_OWORD *)(a1 + 8) = v148;
          *(_QWORD *)a1 = 3LL;
          goto LABEL_148;
        }
        v55 = v156;
        if ( v156 == v154 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v154);
        v56 = v155;
        v57 = 3 * v55;
        *(_QWORD *)(v155 + 8 * v57) = v54;
        *(_OWORD *)(v56 + 8 * v57 + 8) = v148;
        v156 = v55 + 1;
        v9 = v175;
        v58 = v53 <= v175;
        v11 = v176;
        v8 = v176;
        if ( v58 )
        {
          <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(
            src,
            v171,
            *((_QWORD *)&v7 + 1),
            0LL);
          v59 = a1;
          if ( (_OWORD *)src[0].m256i_i64[0] != v147 )
          {
            core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>>(src);
            core::panicking::panic(aAssertionFaile_15, 42LL, &off_1932F0);
          }
          src[0].m256i_i64[0] = v155;
          src[0].m256i_i64[1] = v155;
          src[0].m256i_i64[2] = v154;
          src[0].m256i_i64[3] = v155 + 24 * v156;
          src[1].m256i_i64[0] = 1LL;
          src[1].m256i_i64[1] = (__int64)&unk_1933E8;
          uu_sort::merge::merge_with_file_limit((_QWORD *)a1, (__int128 *)src[0].m256i_i8, v149, v151);
          core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(v171);
          return v59;
        }
        goto LABEL_4;
      }
LABEL_10:
      v163 = src[0].m256i_i64[3];
      *(_OWORD *)&v162[8] = *(_OWORD *)&src[0].m256i_u64[1];
      *(_QWORD *)v162 = v14;
      std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
      src[16].m256i_i64[0] = 1LL;
      src[16].m256i_i64[1] = 1LL;
      src[16].m256i_i8[16] = 0;
      v16 = (void *)_rust_alloc(640LL, 128LL);
      if ( !v16 )
      {
        v142.m256i_i64[0] = 0x8000000000000001LL;
        v144 = v15 + 1;
        alloc::alloc::handle_alloc_error(128LL, 640LL);
      }
      v17 = (__int64)v16;
      memcpy(v16, src, 0x280uLL);
      *(_QWORD *)&v158 = 0LL;
      *((_QWORD *)&v158 + 1) = v17;
      src[0].m256i_i64[0] = 0LL;
      src[0].m256i_i64[1] = v17;
      v18 = v146;
      if ( v146 == (_QWORD)v145 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v145);
      v19 = *((_QWORD *)&v145 + 1);
      v20 = 16 * v18;
      *(_QWORD *)(*((_QWORD *)&v145 + 1) + v20) = 0LL;
      *(_QWORD *)(v19 + v20 + 8) = v17;
      v146 = v18 + 1;
      v21 = *(double *)&v162[8];
      if ( v14 == 0x8000000000000000LL )
        break;
      src[0].m256i_i64[0] = 0LL;
      src[0].m256i_i64[1] = v17;
      src[0].m256i_i64[2] = v14;
      *(_OWORD *)&src[0].m256i_u64[3] = *(_OWORD *)&v162[8];
      *(_OWORD *)&src[1].m256i_u64[1] = (unsigned __int64)v163;
      src[1].m256i_i64[3] = 1LL;
      src[2].m256i_i64[0] = 0LL;
      v22 = v153;
      if ( v153 == (_QWORD)v152 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v152, *(double *)&v162[8]);
      v23 = *((_QWORD *)&v152 + 1);
      v24 = 9 * v22;
      *(_QWORD *)(*((_QWORD *)&v152 + 1) + 8 * v24 + 64) = src[2].m256i_i64[0];
      v25 = *(_OWORD *)src[0].m256i_i8;
      v26 = *(_OWORD *)&src[0].m256i_u64[2];
      v27 = *(_OWORD *)src[1].m256i_i8;
      *(_OWORD *)(v23 + 8 * v24 + 48) = *(_OWORD *)&src[1].m256i_u64[2];
      *(_OWORD *)(v23 + 8 * v24 + 32) = v27;
      *(_OWORD *)(v23 + 8 * v24 + 16) = v26;
      *(_OWORD *)(v23 + 8 * v24) = v25;
      v153 = v22 + 1;
      v28 = _rust_alloc_zeroed(0x2000LL, 1LL);
      if ( !v28 )
      {
        v142.m256i_i64[0] = 0x8000000000000001LL;
        v144 = v15 + 1;
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      }
      *(_OWORD *)&src[0].m256i_u64[2] = 8uLL;
      *(_OWORD *)&src[1].m256i_u64[2] = 0LL;
      *(_OWORD *)src[2].m256i_i8 = 8uLL;
      *(_OWORD *)src[0].m256i_i8 = v15;
      src[1].m256i_i64[1] = 8LL;
      src[2].m256i_i64[3] = 8LL;
      src[3].m256i_i64[0] = 0LL;
      src[3].m256i_i64[1] = 0x2000LL;
      src[3].m256i_i64[2] = v28;
      src[3].m256i_i64[3] = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v157, &v161, src, &src[0].m256i_u64[3]);
      if ( v157[0].m256i_i64[1] != 0x8000000000000000LL )
      {
        v142.m256i_i64[0] = 0x8000000000000001LL;
        v144 = v15 + 1;
        src[3] = v157[3];
        src[2] = v157[2];
        src[1] = v157[1];
        src[0] = v157[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
      }
      ++v15;
    }
    v150 = *(_OWORD *)&v162[8];
    v142.m256i_i64[0] = 0x8000000000000001LL;
    v144 = v15 + 1;
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v17 + 512)) )
    {
      v63 = *(_QWORD *)(v17 + 128);
      v64 = *(_QWORD *)(v17 + 400);
      do
      {
        v65 = v63;
        v63 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 128), v64 | v63, v63);
      }
      while ( v65 != v63 );
      if ( (v63 & *(_QWORD *)(v17 + 400)) == 0 )
        std::sync::mpmc::waker::SyncWaker::disconnect(v17 + 320);
      v66 = *(_BYTE *)(v17 + 528);
      *(_BYTE *)(v17 + 528) = 1;
      if ( v66 )
        v21 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v17);
    }
    v67 = (_QWORD *)v143;
    if ( *(_QWORD *)v143 )
      core::cell::panic_already_borrowed(&anon_5e1370f02050f3d3373ac32d9310e55d_1_llvm_10414264628066819742);
    v68 = *((_QWORD *)&v143 + 1);
    v69 = *(_QWORD *)(v143 + 160);
    if ( v69 == -1LL || v69 < *((_QWORD *)&v143 + 1) )
      *(_QWORD *)(v143 + 160) = *((_QWORD *)&v143 + 1);
    *v67 = 0LL;
    if ( v142.m256i_i64[0] != 0x8000000000000001LL )
      core::ptr::drop_in_place<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
        &v142,
        src,
        v69,
        v68,
        v21);
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v145);
    if ( (_QWORD)v145 )
      _rust_dealloc(*((_QWORD *)&v145 + 1), 16 * v145, 8LL);
    v70 = *((_QWORD *)&v152 + 1);
    for ( j = v153 + 1; j != 1; --j )
    {
      core::ptr::drop_in_place<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>(v21);
      v70 += 72LL;
    }
    if ( (_QWORD)v152 )
      _rust_dealloc(*((_QWORD *)&v152 + 1), 72 * v152, 8LL);
    if ( (_QWORD)v166 == 2LL )
    {
      std::sync::mpmc::counter::Receiver<C>::release((char *)&v166 + 8);
    }
    else if ( (_DWORD)v166 == 1 )
    {
      std::sync::mpmc::counter::Receiver<C>::release((char *)&v166 + 8);
    }
    else
    {
      v114 = *((_QWORD *)&v166 + 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v166 + 1) + 520LL)) )
      {
        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v114);
        v115 = *(_BYTE *)(v114 + 528);
        *(_BYTE *)(v114 + 528) = 1;
        if ( v115 )
          core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v114);
      }
    }
    if ( (_QWORD)v161 == 2LL )
    {
      std::sync::mpmc::counter::Sender<C>::release((char *)&v161 + 8);
    }
    else if ( (_DWORD)v161 == 1 )
    {
      std::sync::mpmc::counter::Sender<C>::release((char *)&v161 + 8);
    }
    else
    {
      v116 = *((_QWORD *)&v161 + 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v161 + 1) + 512LL)) )
      {
        v117 = *(_QWORD *)(v116 + 128);
        v118 = *(_QWORD *)(v116 + 400);
        do
        {
          v119 = v117;
          v117 = _InterlockedCompareExchange64((volatile signed __int64 *)(v116 + 128), v118 | v117, v117);
        }
        while ( v119 != v117 );
        if ( (v117 & *(_QWORD *)(v116 + 400)) == 0 )
          std::sync::mpmc::waker::SyncWaker::disconnect(v116 + 320);
        v120 = *(_BYTE *)(v116 + 528);
        *(_BYTE *)(v116 + 528) = 1;
        if ( v120 )
          core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v116);
      }
    }
    *(_OWORD *)(a1 + 8) = v150;
    *(_QWORD *)a1 = 3LL;
LABEL_148:
    v121 = v156;
    if ( v156 )
    {
      v122 = (_QWORD *)(v155 + 8);
      do
      {
        v123 = *(v122 - 1);
        if ( v123 )
          _rust_dealloc(*v122, v123, 1LL);
        v122 += 3;
        --v121;
      }
      while ( v121 );
    }
    if ( v154 )
      _rust_dealloc(v155, 24 * v154, 8LL);
    core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>>(v171);
    return a1;
  }
  std::sync::mpmc::channel(src);
  v145 = *(_OWORD *)src[0].m256i_i8;
  *(_OWORD *)v162 = *(_OWORD *)&src[0].m256i_u64[2];
  v164 = src[0].m256i_i64[3];
  v165 = src[0].m256i_i64[2];
  if ( v6 != v5 )
  {
    if ( (unsigned __int64)(v6 - v5) > 0x2AAAAAAAAAAAAAA8LL )
    {
      v60 = 0LL;
    }
    else
    {
      v60 = 8LL;
      v61 = _rust_alloc(72 * v8, 8LL);
      if ( v61 )
      {
        v159.m256i_i64[0] = (v6 - v5) / 0x18uLL;
        *(_OWORD *)&v159.m256i_u64[1] = (unsigned __int64)v61;
        v62 = _rust_alloc(16 * v8, 8LL);
        if ( !v62 )
          alloc::raw_vec::handle_error(8LL, 16 * v8);
        goto LABEL_85;
      }
    }
    alloc::raw_vec::handle_error(v60, 72 * v8);
  }
  v159.m256i_i64[0] = 0LL;
  *(_OWORD *)&v159.m256i_u64[1] = 8uLL;
  v62 = 8LL;
LABEL_85:
  v142.m256i_i64[0] = (v6 - v5) / 0x18uLL;
  *(_OWORD *)&v142.m256i_u64[1] = (unsigned __int64)v62;
  v72 = *v147;
  *(_OWORD *)&v157[0].m256i_u64[2] = v147[1];
  *(_OWORD *)v157[0].m256i_i8 = v72;
  v73 = *((_QWORD *)&v72 + 1);
  if ( *((_QWORD *)&v72 + 1) != v157[0].m256i_i64[3] )
  {
    v74 = v157[0].m256i_i64[3] - *((_QWORD *)&v72 + 1) - 24;
    v75 = 0LL;
    *(_QWORD *)&v150 = 0x8000000000000000LL;
    v151 = v157[0].m256i_i64[3];
    while ( 1 )
    {
      v76 = *(_QWORD *)v73;
      if ( *(_QWORD *)v73 == (_QWORD)v150 )
        break;
      *(_OWORD *)&v171[0].m256i_u64[1] = *(_OWORD *)(v73 + 8);
      v171[0].m256i_i64[0] = v76;
      <uu_sort::merge::ClosedPlainTmpFile as uu_sort::merge::ClosedTmpFile>::reopen(src, v171);
      v77 = src[0].m256i_i64[0];
      if ( src[0].m256i_i64[0] == 0x8000000000000001LL )
        break;
      *(_QWORD *)&v148 = v75;
      *(__m256i *)v178 = src[0];
      std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
      src[16].m256i_i64[0] = 1LL;
      src[16].m256i_i64[1] = 1LL;
      src[16].m256i_i8[16] = 0;
      v78 = (void *)_rust_alloc(640LL, 128LL);
      if ( !v78 )
      {
        v157[0].m256i_i64[1] = v73 + 24;
        v157[1].m256i_i64[0] = v148 + 1;
        alloc::alloc::handle_alloc_error(128LL, 640LL);
      }
      v79 = (__int64)v78;
      memcpy(v78, src, 0x280uLL);
      *(_QWORD *)&v167 = 0LL;
      *((_QWORD *)&v167 + 1) = v79;
      src[0].m256i_i64[0] = 0LL;
      src[0].m256i_i64[1] = v79;
      v80 = v142.m256i_i64[2];
      if ( v142.m256i_i64[2] == v142.m256i_i64[0] )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v142);
      v81 = v142.m256i_i64[1];
      v82 = 16 * v80;
      *(_QWORD *)(v142.m256i_i64[1] + v82) = 0LL;
      *(_QWORD *)(v81 + v82 + 8) = v79;
      v142.m256i_i64[2] = v80 + 1;
      v83 = *(double *)&v178[8];
      if ( v77 == (_QWORD)v150 )
      {
        v157[0].m256i_i64[1] = v73 + 24;
        v157[1].m256i_i64[0] = v148 + 1;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)&v178[8];
        *(_QWORD *)a1 = 3LL;
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v79 + 512)) )
        {
          v125 = *(_QWORD *)(v79 + 128);
          v126 = *(_QWORD *)(v79 + 400);
          do
          {
            v127 = v125;
            v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 128), v126 | v125, v125);
          }
          while ( v127 != v125 );
          if ( (v125 & *(_QWORD *)(v79 + 400)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v79 + 320);
          v128 = *(_BYTE *)(v79 + 528);
          *(_BYTE *)(v79 + 528) = 1;
          if ( v128 )
            v83 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v79);
        }
        if ( v157[0].m256i_i64[3] != v157[0].m256i_i64[1] )
        {
          v129 = (v157[0].m256i_i64[3] - v157[0].m256i_i64[1]) / 0x18uLL;
          v130 = (_QWORD *)(v157[0].m256i_i64[1] + 8);
          do
          {
            v131 = *(v130 - 1);
            if ( v131 )
              _rust_dealloc(*v130, v131, 1LL);
            v130 += 3;
            --v129;
          }
          while ( v129 );
        }
        if ( v157[0].m256i_i64[2] )
          _rust_dealloc(v157[0].m256i_i64[0], 24 * v157[0].m256i_i64[2], 8LL);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v142);
        if ( v142.m256i_i64[0] )
          _rust_dealloc(v142.m256i_i64[1], 16 * v142.m256i_i64[0], 8LL);
        v132 = v159.m256i_i64[1];
        for ( k = v159.m256i_i64[2] + 1; k != 1; --k )
        {
          core::ptr::drop_in_place<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>(v83);
          v132 += 72LL;
        }
        if ( v159.m256i_i64[0] )
          _rust_dealloc(v159.m256i_i64[1], 72 * v159.m256i_i64[0], 8LL);
        if ( *(_QWORD *)v162 == 2LL )
        {
          std::sync::mpmc::counter::Receiver<C>::release(&v162[8]);
        }
        else if ( *(_DWORD *)v162 == 1 )
        {
          std::sync::mpmc::counter::Receiver<C>::release(&v162[8]);
        }
        else
        {
          v134 = *(_QWORD *)&v162[8];
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)&v162[8] + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v134);
            v135 = *(_BYTE *)(v134 + 528);
            *(_BYTE *)(v134 + 528) = 1;
            if ( v135 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v134);
          }
        }
        if ( (_QWORD)v145 == 2LL )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v145 + 8);
        }
        else if ( (_DWORD)v145 == 1 )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v145 + 8);
        }
        else
        {
          v136 = *((_QWORD *)&v145 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v145 + 1) + 512LL)) )
          {
            v137 = *(_QWORD *)(v136 + 128);
            v138 = *(_QWORD *)(v136 + 400);
            do
            {
              v139 = v137;
              v137 = _InterlockedCompareExchange64((volatile signed __int64 *)(v136 + 128), v138 | v137, v137);
            }
            while ( v139 != v137 );
            if ( (v137 & *(_QWORD *)(v136 + 400)) == 0 )
              std::sync::mpmc::waker::SyncWaker::disconnect(v136 + 320);
            v140 = *(_BYTE *)(v136 + 528);
            *(_BYTE *)(v136 + 528) = 1;
            if ( v140 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v136);
          }
        }
        return a1;
      }
      src[0].m256i_i64[0] = 0LL;
      src[0].m256i_i64[1] = v79;
      src[0].m256i_i64[2] = v77;
      *(_OWORD *)&src[0].m256i_u64[3] = *(_OWORD *)&v178[8];
      *(_OWORD *)&src[1].m256i_u64[1] = *(unsigned __int64 *)&v178[24];
      src[1].m256i_i64[3] = 1LL;
      src[2].m256i_i64[0] = 0LL;
      v84 = v159.m256i_i64[2];
      if ( v159.m256i_i64[2] == v159.m256i_i64[0] )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v159, *(double *)&v178[8]);
      v85 = v159.m256i_i64[1];
      v86 = 9 * v84;
      *(_QWORD *)(v159.m256i_i64[1] + 8 * v86 + 64) = src[2].m256i_i64[0];
      v87 = *(_OWORD *)src[0].m256i_i8;
      v88 = *(_OWORD *)&src[0].m256i_u64[2];
      v89 = *(_OWORD *)src[1].m256i_i8;
      *(_OWORD *)(v85 + 8 * v86 + 48) = *(_OWORD *)&src[1].m256i_u64[2];
      *(_OWORD *)(v85 + 8 * v86 + 32) = v89;
      *(_OWORD *)(v85 + 8 * v86 + 16) = v88;
      *(_OWORD *)(v85 + 8 * v86) = v87;
      v159.m256i_i64[2] = v84 + 1;
      v90 = _rust_alloc_zeroed(0x2000LL, 1LL);
      if ( !v90 )
      {
        v157[0].m256i_i64[1] = v73 + 24;
        v157[1].m256i_i64[0] = v148 + 1;
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      }
      *(_OWORD *)&src[0].m256i_u64[2] = 8uLL;
      *(_OWORD *)&src[1].m256i_u64[2] = 0LL;
      *(_OWORD *)src[2].m256i_i8 = 8uLL;
      v91 = v148;
      *(_OWORD *)src[0].m256i_i8 = (unsigned __int64)v148;
      src[1].m256i_i64[1] = 8LL;
      src[2].m256i_i64[3] = 8LL;
      src[3].m256i_i64[0] = 0LL;
      src[3].m256i_i64[1] = 0x2000LL;
      src[3].m256i_i64[2] = v90;
      src[3].m256i_i64[3] = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v171, &v145, src, &src[0].m256i_u64[1]);
      if ( v171[0].m256i_i64[1] != (_QWORD)v150 )
      {
        v157[0].m256i_i64[1] = v73 + 24;
        v157[1].m256i_i64[0] = v91 + 1;
        src[3] = v171[3];
        src[2] = v171[2];
        src[1] = v171[1];
        src[0] = v171[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
      }
      v73 += 24LL;
      v74 -= 24LL;
      v75 = v91 + 1;
      if ( v73 == v151 )
      {
        v157[0].m256i_i64[1] = v151;
        goto LABEL_104;
      }
    }
    v157[0].m256i_i64[1] = v73 + 24;
    if ( v73 + 24 != v151 )
    {
      v92 = (_QWORD *)(v73 + 32);
      v93 = v74 / 0x18;
      do
      {
        v94 = *(v92 - 1);
        if ( v94 )
          _rust_dealloc(*v92, v94, 1LL);
        v92 += 3;
        --v93;
      }
      while ( v93 );
    }
  }
LABEL_104:
  if ( v157[0].m256i_i64[2] )
    _rust_dealloc(v157[0].m256i_i64[0], 24 * v157[0].m256i_i64[2], 8LL);
  v95 = v159.m256i_i64[2];
  if ( v159.m256i_i64[2] )
  {
    v96 = 0LL;
    do
    {
      v97 = _rust_alloc_zeroed(0x2000LL, 1LL);
      if ( !v97 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      *(_OWORD *)&src[0].m256i_u64[2] = 8uLL;
      *(_OWORD *)&src[1].m256i_u64[2] = 0LL;
      *(_OWORD *)src[2].m256i_i8 = 8uLL;
      *(_OWORD *)src[0].m256i_i8 = v96;
      src[1].m256i_i64[1] = 8LL;
      src[2].m256i_i64[3] = 8LL;
      src[3].m256i_i64[0] = 0LL;
      src[3].m256i_i64[1] = 0x2000LL;
      src[3].m256i_i64[2] = v97;
      src[3].m256i_i64[3] = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v171, &v145, src, v98);
      if ( v171[0].m256i_i64[1] != 0x8000000000000000LL )
      {
        src[3] = v171[3];
        src[2] = v171[2];
        src[1] = v171[1];
        src[0] = v171[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
      }
      ++v96;
    }
    while ( v95 != v96 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(v171, v149);
  src[0].m256i_i64[0] = v165;
  src[0].m256i_i64[1] = v164;
  *(_OWORD *)&src[0].m256i_u64[2] = *(_OWORD *)v159.m256i_i8;
  src[1].m256i_i64[0] = v159.m256i_i64[2];
  memcpy(&src[1].m256i_u64[1], v171, 0xA0uLL);
  v171[0].m256i_i64[2] = 0x8000000000000000LL;
  v171[0].m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked(v157, v171, src);
  if ( !v157[0].m256i_i64[0] )
  {
    v171[0].m256i_i64[0] = v157[0].m256i_i64[1];
    core::result::unwrap_failed(aFailedToSpawnT, 22LL, v171, &off_1931D0, &off_193410);
  }
  *(_QWORD *)&v178[16] = v157[0].m256i_i64[2];
  *(_OWORD *)v178 = *(_OWORD *)v157[0].m256i_i8;
  v157[0].m256i_i64[0] = 0LL;
  *(_OWORD *)&v157[0].m256i_u64[1] = 8uLL;
  v99 = (__int128 *)v142.m256i_i64[1];
  v171[0].m256i_i64[0] = v142.m256i_i64[1];
  v171[0].m256i_i64[1] = v142.m256i_i64[1];
  v171[0].m256i_i64[2] = v142.m256i_i64[0];
  v171[0].m256i_i64[3] = v142.m256i_i64[1] + 16 * v142.m256i_i64[2];
  v171[1].m256i_i64[0] = 0LL;
  if ( v142.m256i_i64[2] )
  {
    do
    {
      v171[0].m256i_i64[1] = (__int64)(v99 + 1);
      v104 = *v99;
      v105 = v171[1].m256i_i64[0]++;
      v167 = v104;
      v106 = std::sync::mpmc::Receiver<T>::recv(&v167);
      if ( v106 )
      {
        src[0].m256i_i64[0] = 1LL;
        src[0].m256i_i64[1] = 1LL;
        src[0].m256i_i64[2] = v106;
        v107 = _rust_alloc(24LL, 8LL);
        if ( !v107 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v107 + 16) = src[0].m256i_i64[2];
        *(_OWORD *)v107 = *(_OWORD *)src[0].m256i_i8;
        *(_OWORD *)&src[0].m256i_u64[2] = (unsigned __int64)v107;
        *(_OWORD *)src[0].m256i_i8 = v167;
        src[1].m256i_i64[0] = v105;
        v108 = v157[0].m256i_i64[2];
        if ( v157[0].m256i_i64[2] == v157[0].m256i_i64[0] )
          alloc::raw_vec::RawVec<T,A>::grow_one(v157);
        v100 = v157[0].m256i_i64[1];
        v101 = 5 * v108;
        v102 = *(_OWORD *)src[0].m256i_i8;
        v103 = *(_OWORD *)&src[0].m256i_u64[2];
        *(_QWORD *)(v157[0].m256i_i64[1] + 8 * v101 + 32) = src[1].m256i_i64[0];
        *(_OWORD *)(v100 + 8 * v101 + 16) = v103;
        *(_OWORD *)(v100 + 8 * v101) = v102;
        v157[0].m256i_i64[2] = v108 + 1;
      }
      else if ( (_QWORD)v167 )
      {
        if ( (_DWORD)v167 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v167 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v167 + 8);
      }
      else
      {
        v109 = *((_QWORD *)&v167 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v167 + 1) + 520LL)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v109);
          v110 = *(_BYTE *)(v109 + 528);
          *(_BYTE *)(v109 + 528) = 1;
          if ( v110 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v109);
        }
      }
      v99 = (__int128 *)v171[0].m256i_i64[1];
    }
    while ( v171[0].m256i_i64[1] != v171[0].m256i_i64[3] );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v171);
  src[0].m256i_i64[2] = v157[0].m256i_i64[2];
  *(_OWORD *)src[0].m256i_i8 = *(_OWORD *)v157[0].m256i_i8;
  src[0].m256i_i64[3] = v149;
  v59 = a1;
  if ( v157[0].m256i_i64[2] )
  {
    for ( m = ((unsigned __int64)v157[0].m256i_i64[2] >> 1) - 1; m != -1LL; --m )
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, m, src[0].m256i_i64[2]);
  }
  v112 = *(_OWORD *)src[0].m256i_i8;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&src[0].m256i_u64[2];
  *(_OWORD *)(a1 + 16) = v112;
  v113 = v145;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v178;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&v178[16];
  *(_OWORD *)a1 = v113;
  *(_QWORD *)(a1 + 72) = 0LL;
  return v59;
}
