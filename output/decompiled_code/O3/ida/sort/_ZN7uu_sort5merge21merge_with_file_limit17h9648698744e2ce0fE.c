_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm1
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  bool v17; // cf
  unsigned __int64 v18; // r12
  unsigned __int128 v19; // kr00_16
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  double v22; // xmm3_8
  double v23; // xmm0_8
  __int64 v24; // r12
  unsigned __int64 v25; // rbx
  double v26; // xmm0_8
  double v27; // xmm1_8
  double v28; // xmm2_8
  char *v29; // rax
  char *v30; // r15
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  double v34; // xmm3_8
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // r12
  __int64 v42; // rbx
  unsigned __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 *v46; // rax
  __int64 j; // rsi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rbx
  char v58; // al
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  double v62; // xmm3_8
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  double v69; // xmm2_8
  bool v70; // cc
  signed __int64 v71; // rt0
  signed __int64 v72; // rax
  __int64 v73; // rcx
  signed __int64 v74; // rtt
  char v75; // al
  __int128 v76; // xmm0
  __int64 *v77; // r12
  __int64 *v78; // r14
  __int64 v79; // rax
  unsigned __int64 v80; // r13
  __int64 v81; // rax
  __int128 v82; // xmm0
  __int64 v83; // rbx
  unsigned __int64 v84; // r12
  char *v85; // rax
  char *v86; // r15
  __int64 v87; // r13
  __int64 v88; // rax
  __int64 v89; // rcx
  double v90; // xmm0_8
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm2
  __int64 v97; // rax
  unsigned __int64 v98; // r13
  _QWORD *v99; // r14
  unsigned __int64 v100; // rbx
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // r12
  unsigned __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int128 *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int128 v112; // xmm0
  __int64 v113; // r13
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // r13
  __int64 v117; // r13
  char v118; // al
  __int64 i; // rsi
  __int128 v120; // xmm0
  __int128 v121; // xmm0
  __int64 v122; // rbx
  char v123; // al
  __int64 v124; // rbx
  signed __int64 v125; // rax
  __int64 v126; // rcx
  signed __int64 v127; // rtt
  char v128; // al
  __int64 v129; // rbx
  _QWORD *v130; // r14
  __int64 v131; // rsi
  __int64 v132; // rsi
  _QWORD *v134; // rax
  signed __int64 v135; // rax
  __int64 v136; // rcx
  signed __int64 v137; // rtt
  char v138; // al
  unsigned __int64 v139; // rbx
  _QWORD *v140; // r14
  __int64 v141; // rsi
  __int64 v142; // rsi
  __int64 v143; // rbx
  char v144; // al
  __int64 v145; // rbx
  signed __int64 v146; // rax
  __int64 v147; // rcx
  signed __int64 v148; // rtt
  char v149; // al
  __int128 v150; // [rsp+28h] [rbp-780h] BYREF
  __int64 v151; // [rsp+38h] [rbp-770h]
  _BYTE v152[80]; // [rsp+40h] [rbp-768h] BYREF
  __int128 v153; // [rsp+90h] [rbp-718h]
  unsigned __int64 v154; // [rsp+A0h] [rbp-708h]
  __int128 v155; // [rsp+B0h] [rbp-6F8h]
  __int128 *v156; // [rsp+C0h] [rbp-6E8h]
  _QWORD *v157; // [rsp+C8h] [rbp-6E0h]
  __int128 v158; // [rsp+D0h] [rbp-6D8h] BYREF
  __int64 v159; // [rsp+E0h] [rbp-6C8h]
  __int128 v160; // [rsp+E8h] [rbp-6C0h] BYREF
  __int64 v161; // [rsp+F8h] [rbp-6B0h] BYREF
  __int64 v162; // [rsp+100h] [rbp-6A8h]
  __int64 v163; // [rsp+108h] [rbp-6A0h]
  __int64 v164; // [rsp+110h] [rbp-698h]
  unsigned __int64 v165; // [rsp+118h] [rbp-690h]
  __int128 v166; // [rsp+120h] [rbp-688h] BYREF
  __int64 v167; // [rsp+130h] [rbp-678h]
  unsigned __int64 v168; // [rsp+138h] [rbp-670h]
  __int64 *v169; // [rsp+140h] [rbp-668h]
  _QWORD *v170; // [rsp+148h] [rbp-660h]
  _OWORD v171[10]; // [rsp+150h] [rbp-658h] BYREF
  __int128 v172; // [rsp+1F0h] [rbp-5B8h] BYREF
  __int128 src[40]; // [rsp+200h] [rbp-5A8h] BYREF
  __int64 v174; // [rsp+488h] [rbp-320h]
  __int128 v175; // [rsp+490h] [rbp-318h] BYREF
  __m256i v176; // [rsp+4A0h] [rbp-308h]
  __m256i v177; // [rsp+4C0h] [rbp-2E8h]
  __int128 v178; // [rsp+4E0h] [rbp-2C8h]
  __int128 v179; // [rsp+4F0h] [rbp-2B8h] BYREF
  __int128 v180; // [rsp+500h] [rbp-2A8h]
  __int128 v181; // [rsp+510h] [rbp-298h]
  __int128 v182; // [rsp+520h] [rbp-288h]
  __int128 v183; // [rsp+530h] [rbp-278h]
  __int128 v184; // [rsp+540h] [rbp-268h]
  __int128 v185; // [rsp+550h] [rbp-258h] BYREF
  __int64 v186; // [rsp+560h] [rbp-248h]
  _BYTE v187[24]; // [rsp+568h] [rbp-240h]
  _OWORD v188[10]; // [rsp+580h] [rbp-228h] BYREF
  unsigned __int64 v189; // [rsp+620h] [rbp-188h]
  __int128 v190; // [rsp+628h] [rbp-180h]
  __int128 v191; // [rsp+638h] [rbp-170h]
  __int64 v192; // [rsp+648h] [rbp-160h]
  __int64 v193; // [rsp+650h] [rbp-158h]
  char v194; // [rsp+658h] [rbp-150h]
  __int64 v195; // [rsp+660h] [rbp-148h]
  _BYTE v196[24]; // [rsp+670h] [rbp-138h] BYREF
  __int128 v197; // [rsp+688h] [rbp-120h]
  __int128 v198; // [rsp+698h] [rbp-110h]
  __int128 v199; // [rsp+6A8h] [rbp-100h]
  __int64 v200; // [rsp+6B8h] [rbp-F0h]
  unsigned __int64 v201; // [rsp+6C8h] [rbp-E0h]
  unsigned __int64 v202; // [rsp+6D0h] [rbp-D8h]
  __int64 v203; // [rsp+6D8h] [rbp-D0h]
  unsigned __int64 v204; // [rsp+6E0h] [rbp-C8h]
  __int128 v205; // [rsp+6E8h] [rbp-C0h]
  __m256i v206; // [rsp+6F8h] [rbp-B0h]
  _OWORD v207[9]; // [rsp+718h] [rbp-90h] BYREF

  v164 = a4;
  v4 = a3;
  v157 = a1;
  v5 = *(_QWORD *)(a2 + 8);
  v156 = (__int128 *)a2;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = (v6 - v5) / 0x30uLL;
  v8 = a3[14];
  v170 = a3;
  if ( v7 <= v8 )
  {
    std::sync::mpmc::channel(src);
    v150 = src[0];
    v185 = src[1];
    v167 = *((_QWORD *)&src[1] + 1);
    v164 = *(_QWORD *)&src[1];
    if ( v6 != v5 )
    {
      if ( (unsigned __int64)(v6 - v5) > 0x3333333333333330LL )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = 8LL;
        v13 = _rust_alloc(120 * v7, 8LL);
        if ( v13 )
        {
          *(_QWORD *)&v175 = (v6 - v5) / 0x30uLL;
          *((_QWORD *)&v175 + 1) = v13;
          v176.m256i_i64[0] = 0LL;
          v14 = _rust_alloc(16 * v7, 8LL);
          if ( !v14 )
            alloc::raw_vec::handle_error(8LL, 16 * v7);
LABEL_75:
          *(_QWORD *)&v179 = (v6 - v5) / 0x30uLL;
          *((_QWORD *)&v179 + 1) = v14;
          *(_QWORD *)&v180 = 0LL;
          v76 = *v156;
          *(_OWORD *)&v152[16] = v156[1];
          *(_OWORD *)v152 = v76;
          v77 = *(__int64 **)&v152[24];
          v78 = (__int64 *)*((_QWORD *)&v76 + 1);
          if ( *((_QWORD *)&v76 + 1) != *(_QWORD *)&v152[24] )
          {
            v79 = *(_QWORD *)&v152[24] - *((_QWORD *)&v76 + 1) - 48LL;
            v80 = 0LL;
            *(_QWORD *)&v155 = 0x8000000000000000LL;
            v169 = *(__int64 **)&v152[24];
            do
            {
              v165 = v79;
              v81 = *v78;
              if ( *v78 == (_QWORD)v155
                || (*((_QWORD *)&v188[2] + 1) = v78[5],
                    v82 = *(_OWORD *)(v78 + 1),
                    *(_OWORD *)((char *)&v188[1] + 8) = *(_OWORD *)(v78 + 3),
                    *(_OWORD *)((char *)v188 + 8) = v82,
                    *(_QWORD *)&v188[0] = v81,
                    <uu_sort::merge::ClosedCompressedTmpFile as uu_sort::merge::ClosedTmpFile>::reopen(src, v188),
                    v83 = *(_QWORD *)&src[0],
                    *(_QWORD *)&src[0] == 0x8000000000000001LL) )
              {
                *(_QWORD *)&v152[8] = v78 + 6;
                if ( v78 + 6 != v77 )
                {
                  v99 = v78 + 10;
                  v100 = v165 / 0x30;
                  do
                  {
                    v101 = *(v99 - 4);
                    if ( v101 )
                      _rust_dealloc(*(v99 - 3), v101, 1LL);
                    v102 = *(v99 - 1);
                    if ( v102 )
                      _rust_dealloc(*v99, v102, 1LL);
                    v99 += 6;
                    --v100;
                  }
                  while ( v100 );
                }
                goto LABEL_96;
              }
              *((_QWORD *)&v171[4] + 1) = *((_QWORD *)&src[4] + 1);
              *(_OWORD *)((char *)&v171[3] + 8) = *(__int128 *)((char *)&src[3] + 8);
              *(_OWORD *)((char *)&v171[2] + 8) = *(__int128 *)((char *)&src[2] + 8);
              *(_OWORD *)((char *)&v171[1] + 8) = *(__int128 *)((char *)&src[1] + 8);
              *(_OWORD *)((char *)v171 + 8) = *(__int128 *)((char *)src + 8);
              *(_QWORD *)&v171[0] = *(_QWORD *)&src[0];
              std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
              v84 = v80;
              *(_QWORD *)&src[32] = 1LL;
              *((_QWORD *)&src[32] + 1) = 1LL;
              LOBYTE(src[33]) = 0;
              v85 = (char *)_rust_alloc(640LL, 128LL);
              if ( !v85 )
              {
                *(_QWORD *)&v152[8] = v78 + 6;
                *(_QWORD *)&v152[32] = v80 + 1;
                alloc::alloc::handle_alloc_error(128LL, 640LL);
              }
              v86 = v85;
              memcpy(v85, src, 0x280uLL);
              *(_QWORD *)v196 = 0LL;
              *(_QWORD *)&v196[8] = v86;
              *(_QWORD *)&src[0] = 0LL;
              *((_QWORD *)&src[0] + 1) = v86;
              v87 = v180;
              if ( (_QWORD)v180 == (_QWORD)v179 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v179);
              v88 = *((_QWORD *)&v179 + 1);
              v89 = 16 * v87;
              *(_QWORD *)(*((_QWORD *)&v179 + 1) + v89) = 0LL;
              *(_QWORD *)(v88 + v89 + 8) = v86;
              *(_QWORD *)&v180 = v87 + 1;
              v90 = *((double *)v171 + 1);
              if ( v83 == (_QWORD)v155 )
              {
                *(_QWORD *)&v152[8] = v78 + 6;
                *(_QWORD *)&v152[32] = v84 + 1;
                v134 = v157;
                *(_OWORD *)(v157 + 1) = *(_OWORD *)((char *)v171 + 8);
                *v134 = 3LL;
                if ( !_InterlockedDecrement64((volatile signed __int64 *)v86 + 64) )
                {
                  v135 = *((_QWORD *)v86 + 16);
                  v136 = *((_QWORD *)v86 + 50);
                  do
                  {
                    v137 = v135;
                    v135 = _InterlockedCompareExchange64((volatile signed __int64 *)v86 + 16, v136 | v135, v135);
                  }
                  while ( v137 != v135 );
                  if ( (v135 & *((_QWORD *)v86 + 50)) == 0 )
                    std::sync::mpmc::waker::SyncWaker::disconnect(v86 + 320);
                  v138 = v86[528];
                  v86[528] = 1;
                  if ( v138 )
                    v90 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v86);
                }
                if ( *(_QWORD *)&v152[24] != *(_QWORD *)&v152[8] )
                {
                  v139 = (*(_QWORD *)&v152[24] - *(_QWORD *)&v152[8]) / 0x30uLL;
                  v140 = (_QWORD *)(*(_QWORD *)&v152[8] + 32LL);
                  do
                  {
                    v141 = *(v140 - 4);
                    if ( v141 )
                      _rust_dealloc(*(v140 - 3), v141, 1LL);
                    v142 = *(v140 - 1);
                    if ( v142 )
                      _rust_dealloc(*v140, v142, 1LL);
                    v140 += 6;
                    --v139;
                  }
                  while ( v139 );
                }
                if ( *(_QWORD *)&v152[16] )
                  _rust_dealloc(*(_QWORD *)v152, 48LL * *(_QWORD *)&v152[16], 8LL);
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v179);
                if ( (_QWORD)v179 )
                  _rust_dealloc(*((_QWORD *)&v179 + 1), 16 * v179, 8LL);
                <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v175, v90);
                if ( (_QWORD)v175 )
                  _rust_dealloc(*((_QWORD *)&v175 + 1), 120 * v175, 8LL);
                if ( (_QWORD)v185 == 2LL )
                {
                  std::sync::mpmc::counter::Receiver<C>::release((char *)&v185 + 8);
                }
                else if ( (_DWORD)v185 == 1 )
                {
                  std::sync::mpmc::counter::Receiver<C>::release((char *)&v185 + 8);
                }
                else
                {
                  v143 = *((_QWORD *)&v185 + 1);
                  if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v185 + 1) + 520LL)) )
                  {
                    std::sync::mpmc::array::Channel<T>::disconnect_receivers(v143);
                    v144 = *(_BYTE *)(v143 + 528);
                    *(_BYTE *)(v143 + 528) = 1;
                    if ( v144 )
                      core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v143);
                  }
                }
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
                  v145 = *((_QWORD *)&v150 + 1);
                  if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v150 + 1) + 512LL)) )
                  {
                    v146 = *(_QWORD *)(v145 + 128);
                    v147 = *(_QWORD *)(v145 + 400);
                    do
                    {
                      v148 = v146;
                      v146 = _InterlockedCompareExchange64((volatile signed __int64 *)(v145 + 128), v147 | v146, v146);
                    }
                    while ( v148 != v146 );
                    if ( (v146 & *(_QWORD *)(v145 + 400)) == 0 )
                      std::sync::mpmc::waker::SyncWaker::disconnect(v145 + 320);
                    v149 = *(_BYTE *)(v145 + 528);
                    *(_BYTE *)(v145 + 528) = 1;
                    if ( v149 )
                      core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v145);
                  }
                }
                return v157;
              }
              *((_QWORD *)&src[5] + 1) = *((_QWORD *)&v171[4] + 1);
              *(__int128 *)((char *)&src[4] + 8) = *(_OWORD *)((char *)&v171[3] + 8);
              *(__int128 *)((char *)&src[3] + 8) = *(_OWORD *)((char *)&v171[2] + 8);
              *(__int128 *)((char *)&src[2] + 8) = *(_OWORD *)((char *)&v171[1] + 8);
              *(_QWORD *)&src[0] = 0LL;
              *((_QWORD *)&src[0] + 1) = v86;
              *(_QWORD *)&src[1] = v83;
              *(__int128 *)((char *)&src[1] + 8) = *(_OWORD *)((char *)v171 + 8);
              *(_QWORD *)&src[6] = 0LL;
              *((_QWORD *)&src[6] + 1) = 1LL;
              *(_QWORD *)&src[7] = 0LL;
              v91 = v176.m256i_i64[0];
              if ( v176.m256i_i64[0] == (_QWORD)v175 )
                alloc::raw_vec::RawVec<T,A>::grow_one(&v175, *((double *)v171 + 1));
              v92 = *((_QWORD *)&v175 + 1);
              v93 = 120 * v91;
              *(_QWORD *)(*((_QWORD *)&v175 + 1) + v93 + 112) = *(_QWORD *)&src[7];
              *(_OWORD *)(v92 + v93 + 96) = src[6];
              *(_OWORD *)(v92 + v93 + 80) = src[5];
              *(_OWORD *)(v92 + v93 + 64) = src[4];
              v94 = src[0];
              v95 = src[1];
              v96 = src[2];
              *(_OWORD *)(v92 + v93 + 48) = src[3];
              *(_OWORD *)(v92 + v93 + 32) = v96;
              *(_OWORD *)(v92 + v93 + 16) = v95;
              *(_OWORD *)(v92 + v93) = v94;
              v176.m256i_i64[0] = v91 + 1;
              v97 = _rust_alloc_zeroed(0x2000LL, 1LL);
              v98 = v84;
              if ( !v97 )
              {
                *(_QWORD *)&v152[8] = v78 + 6;
                *(_QWORD *)&v152[32] = v84 + 1;
                alloc::raw_vec::handle_error(1LL, 0x2000LL);
              }
              src[1] = 8uLL;
              src[3] = 0LL;
              src[4] = 8uLL;
              src[0] = v84;
              *((_QWORD *)&src[2] + 1) = 8LL;
              *((_QWORD *)&src[5] + 1) = 8LL;
              *(_QWORD *)&src[6] = 0LL;
              *((_QWORD *)&src[6] + 1) = 0x2000LL;
              *(_QWORD *)&src[7] = v97;
              *((_QWORD *)&src[7] + 1) = 0x2000LL;
              std::sync::mpmc::Sender<T>::send(v188, &v150, src, (char *)src + 8);
              v77 = v169;
              if ( *((_QWORD *)&v188[0] + 1) != (_QWORD)v155 )
              {
                *(_QWORD *)&v152[8] = v78 + 6;
                *(_QWORD *)&v152[32] = v98 + 1;
                src[7] = v188[7];
                src[6] = v188[6];
                src[5] = v188[5];
                src[4] = v188[4];
                src[3] = v188[3];
                src[2] = v188[2];
                src[1] = v188[1];
                src[0] = v188[0];
                core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
              }
              v78 += 6;
              v79 = v165 - 48;
              v80 = v98 + 1;
            }
            while ( v78 != v169 );
            *(_QWORD *)&v152[8] = v169;
          }
LABEL_96:
          if ( *(_QWORD *)&v152[16] )
            _rust_dealloc(*(_QWORD *)v152, 48LL * *(_QWORD *)&v152[16], 8LL);
          v103 = v176.m256i_i64[0];
          if ( v176.m256i_i64[0] )
          {
            v104 = 0LL;
            do
            {
              v105 = _rust_alloc_zeroed(0x2000LL, 1LL);
              if ( !v105 )
                alloc::raw_vec::handle_error(1LL, 0x2000LL);
              src[1] = 8uLL;
              src[3] = 0LL;
              src[4] = 8uLL;
              src[0] = v104;
              *((_QWORD *)&src[2] + 1) = 8LL;
              *((_QWORD *)&src[5] + 1) = 8LL;
              *(_QWORD *)&src[6] = 0LL;
              *((_QWORD *)&src[6] + 1) = 0x2000LL;
              *(_QWORD *)&src[7] = v105;
              *((_QWORD *)&src[7] + 1) = 0x2000LL;
              std::sync::mpmc::Sender<T>::send(v188, &v150, src, v106);
              if ( *((_QWORD *)&v188[0] + 1) != 0x8000000000000000LL )
              {
                src[7] = v188[7];
                src[6] = v188[6];
                src[5] = v188[5];
                src[4] = v188[4];
                src[3] = v188[3];
                src[2] = v188[2];
                src[1] = v188[1];
                src[0] = v188[0];
                core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
              }
              ++v104;
            }
            while ( v103 != v104 );
          }
          <uu_sort::GlobalSettings as core::clone::Clone>::clone(v188, v170);
          *(_QWORD *)&src[0] = v164;
          *((_QWORD *)&src[0] + 1) = v167;
          src[1] = v175;
          *(_QWORD *)&src[2] = v176.m256i_i64[0];
          memcpy((char *)&src[2] + 8, v188, 0xA0uLL);
          *(_QWORD *)&v188[1] = 0x8000000000000000LL;
          *(_QWORD *)&v188[0] = 0LL;
          std::thread::Builder::spawn_unchecked(v171, v188, src);
          if ( !*(_QWORD *)&v171[0] )
          {
            *(_QWORD *)&v188[0] = *((_QWORD *)&v171[0] + 1);
            core::result::unwrap_failed(aFailedToSpawnT, 22LL, v188, &off_1931D0, &off_193410);
          }
          *(_QWORD *)&v152[16] = *(_QWORD *)&v171[1];
          *(_OWORD *)v152 = v171[0];
          *(_QWORD *)&v171[0] = 0LL;
          *((_QWORD *)&v171[0] + 1) = 8LL;
          *(_QWORD *)&v171[1] = 0LL;
          v107 = (__int128 *)*((_QWORD *)&v179 + 1);
          *(_QWORD *)&v188[0] = *((_QWORD *)&v179 + 1);
          *((_QWORD *)&v188[0] + 1) = *((_QWORD *)&v179 + 1);
          *(_QWORD *)&v188[1] = v179;
          *((_QWORD *)&v188[1] + 1) = *((_QWORD *)&v179 + 1) + 16 * v180;
          *(_QWORD *)&v188[2] = 0LL;
          if ( (_QWORD)v180 )
          {
            do
            {
              *((_QWORD *)&v188[0] + 1) = v107 + 1;
              v112 = *v107;
              v113 = (*(_QWORD *)&v188[2])++;
              *(_OWORD *)v196 = v112;
              v114 = std::sync::mpmc::Receiver<T>::recv(v196);
              if ( v114 )
              {
                *(_QWORD *)&src[0] = 1LL;
                *((_QWORD *)&src[0] + 1) = 1LL;
                *(_QWORD *)&src[1] = v114;
                v115 = _rust_alloc(24LL, 8LL);
                if ( !v115 )
                  alloc::alloc::handle_alloc_error(8LL, 24LL);
                *(_QWORD *)(v115 + 16) = *(_QWORD *)&src[1];
                *(_OWORD *)v115 = src[0];
                src[1] = (unsigned __int64)v115;
                src[0] = *(_OWORD *)v196;
                *(_QWORD *)&src[2] = v113;
                v116 = *(_QWORD *)&v171[1];
                if ( *(_QWORD *)&v171[1] == *(_QWORD *)&v171[0] )
                  alloc::raw_vec::RawVec<T,A>::grow_one(v171);
                v108 = *((_QWORD *)&v171[0] + 1);
                v109 = 5 * v116;
                v110 = src[0];
                v111 = src[1];
                *(_QWORD *)(*((_QWORD *)&v171[0] + 1) + 8 * v109 + 32) = *(_QWORD *)&src[2];
                *(_OWORD *)(v108 + 8 * v109 + 16) = v111;
                *(_OWORD *)(v108 + 8 * v109) = v110;
                *(_QWORD *)&v171[1] = v116 + 1;
              }
              else if ( *(_QWORD *)v196 )
              {
                if ( *(_DWORD *)v196 == 1 )
                  std::sync::mpmc::counter::Receiver<C>::release(&v196[8]);
                else
                  std::sync::mpmc::counter::Receiver<C>::release(&v196[8]);
              }
              else
              {
                v117 = *(_QWORD *)&v196[8];
                if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)&v196[8] + 520LL)) )
                {
                  std::sync::mpmc::array::Channel<T>::disconnect_receivers(v117);
                  v118 = *(_BYTE *)(v117 + 528);
                  *(_BYTE *)(v117 + 528) = 1;
                  if ( v118 )
                    core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v117);
                }
              }
              v107 = (__int128 *)*((_QWORD *)&v188[0] + 1);
            }
            while ( *((_QWORD *)&v188[0] + 1) != *((_QWORD *)&v188[1] + 1) );
          }
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v188);
          *(_QWORD *)&src[1] = *(_QWORD *)&v171[1];
          src[0] = v171[0];
          *((_QWORD *)&src[1] + 1) = v170;
          v41 = v157;
          if ( *(_QWORD *)&v171[1] )
          {
            for ( i = (*(_QWORD *)&v171[1] >> 1) - 1LL; i != -1; --i )
              binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, i, *(_QWORD *)&src[1]);
          }
          v120 = src[0];
          *((_OWORD *)v41 + 2) = src[1];
          *((_OWORD *)v41 + 1) = v120;
          v121 = v150;
          *((_OWORD *)v41 + 3) = *(_OWORD *)v152;
          v41[8] = *(_QWORD *)&v152[16];
          *(_OWORD *)v41 = v121;
          v41[9] = 0LL;
          return v41;
        }
      }
      alloc::raw_vec::handle_error(v12, 120 * v7);
    }
    *(_QWORD *)&v175 = 0LL;
    *((_QWORD *)&v175 + 1) = 8LL;
    v176.m256i_i64[0] = 0LL;
    v14 = 8LL;
    goto LABEL_75;
  }
  if ( !v8 )
    core::panicking::panic(
      anon_21b577e8ef70acd0d31b630f442194b7_33_llvm_11221174558704488820,
      27LL,
      &anon_21b577e8ef70acd0d31b630f442194b7_35_llvm_11221174558704488820);
  *((_QWORD *)&v188[1] + 1) = 0LL;
  v188[0] = 0LL;
  v188[2] = 8uLL;
  *(_QWORD *)&v188[3] = 0x8000000000000001LL;
  v9 = v156[1];
  v188[8] = *v156;
  v188[9] = v9;
  v189 = v8;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = -1LL;
  v194 = 0;
  v195 = 0LL;
  v161 = 0LL;
  v162 = 8LL;
  v163 = 0LL;
  *(_QWORD *)&v155 = 0x8000000000000000LL;
  v10 = a3[6] == 0x8000000000000000LL;
  v168 = (v6 - v5) / 0x30uLL;
  if ( v10 )
    v11 = 0LL;
  else
    v11 = a3[7];
  v174 = v11;
  v203 = a3[8];
  v15 = 0x8000000000000002LL;
  v16 = v168;
  v202 = v8;
  v201 = 0x8000000000000002LL;
  while ( 1 )
  {
    v17 = v16 < v8;
    v18 = v16 - v8;
    if ( v17 )
      v18 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(src, v188);
    if ( *(_QWORD *)&src[0] == v15 )
      core::option::unwrap_failed(&off_193330);
    v204 = v18;
    v184 = src[5];
    v183 = src[4];
    v182 = src[3];
    v181 = src[2];
    v180 = src[1];
    v179 = src[0];
    std::sync::mpmc::channel(src);
    v166 = src[0];
    v19 = src[1];
    v167 = v19 >> 64;
    v156 = (__int128 *)v19;
    v172 = src[1];
    *(_QWORD *)&v158 = 0LL;
    *((_QWORD *)&v158 + 1) = 8LL;
    v159 = 0LL;
    *(_QWORD *)&v150 = 0LL;
    *((_QWORD *)&v150 + 1) = 8LL;
    v151 = 0LL;
    *(_QWORD *)&v20 = v180;
    *(_QWORD *)&v21 = v181;
    v22 = *(double *)&v182;
    *(_OWORD *)v152 = v179;
    v153 = v184;
    v23 = *(double *)&v183;
    *(_OWORD *)&v152[64] = v183;
    *(_OWORD *)&v152[48] = v182;
    *(_OWORD *)&v152[32] = v181;
    *(_OWORD *)&v152[16] = v180;
    v24 = v179;
    v169 = (__int64 *)*((_QWORD *)&v184 + 1);
    v165 = v184;
    v25 = 0LL;
    if ( (_QWORD)v179 != 0x8000000000000001LL )
    {
      *((_QWORD *)&src[4] + 1) = *(_QWORD *)&v152[72];
      *(__int128 *)((char *)&src[3] + 8) = *(_OWORD *)&v152[56];
      *(__int128 *)((char *)&src[2] + 8) = *(_OWORD *)&v152[40];
      *(__int128 *)((char *)&src[1] + 8) = *(_OWORD *)&v152[24];
      *(__int128 *)((char *)src + 8) = *(_OWORD *)&v152[8];
      goto LABEL_18;
    }
    while ( 1 )
    {
      itertools::groupbylazy::IntoChunks<I>::step(src, v165, v169);
      v24 = *(_QWORD *)&src[0];
      if ( *(_QWORD *)&src[0] == 0x8000000000000001LL )
        break;
LABEL_18:
      v200 = *((_QWORD *)&src[4] + 1);
      v26 = *((double *)src + 1);
      v27 = *((double *)&src[1] + 1);
      v28 = *((double *)&src[2] + 1);
      v199 = *(__int128 *)((char *)&src[3] + 8);
      v198 = *(__int128 *)((char *)&src[2] + 8);
      v197 = *(__int128 *)((char *)&src[1] + 8);
      *(_OWORD *)&v196[8] = *(__int128 *)((char *)src + 8);
      *(_QWORD *)v196 = v24;
      std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
      *(_QWORD *)&src[32] = 1LL;
      *((_QWORD *)&src[32] + 1) = 1LL;
      LOBYTE(src[33]) = 0;
      v29 = (char *)_rust_alloc(640LL, 128LL);
      if ( !v29 )
      {
        *(_QWORD *)v152 = 0x8000000000000001LL;
        v154 = v25 + 1;
        alloc::alloc::handle_alloc_error(128LL, 640LL);
      }
      v30 = v29;
      memcpy(v29, src, 0x280uLL);
      *(_QWORD *)&v160 = 0LL;
      *((_QWORD *)&v160 + 1) = v30;
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = v30;
      v31 = v151;
      if ( v151 == (_QWORD)v150 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v150);
      v32 = *((_QWORD *)&v150 + 1);
      v33 = 16 * v31;
      *(_QWORD *)(*((_QWORD *)&v150 + 1) + v33) = 0LL;
      *(_QWORD *)(v32 + v33 + 8) = v30;
      v151 = v31 + 1;
      v34 = *(double *)&v196[8];
      if ( v24 == (_QWORD)v155 )
      {
        v155 = *(_OWORD *)&v196[8];
        *(_QWORD *)v152 = 0x8000000000000001LL;
        v154 = v25 + 1;
        v71 = _InterlockedDecrement64((volatile signed __int64 *)v30 + 64);
        v41 = v157;
        if ( !v71 )
        {
          v72 = *((_QWORD *)v30 + 16);
          v73 = *((_QWORD *)v30 + 50);
          do
          {
            v74 = v72;
            v72 = _InterlockedCompareExchange64((volatile signed __int64 *)v30 + 16, v73 | v72, v72);
          }
          while ( v74 != v72 );
          if ( (v72 & *((_QWORD *)v30 + 50)) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v30 + 320);
          v75 = v30[528];
          v30[528] = 1;
          if ( v75 )
            v26 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v30);
        }
        core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(
          v152,
          v26,
          v27,
          v28,
          v34);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v150);
        if ( (_QWORD)v150 )
          _rust_dealloc(*((_QWORD *)&v150 + 1), 16 * v150, 8LL);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v158, v26);
        if ( (_QWORD)v158 )
          _rust_dealloc(*((_QWORD *)&v158 + 1), 120 * v158, 8LL);
        if ( (_QWORD)v172 == 2LL )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v172 + 8);
        }
        else if ( (_DWORD)v172 == 1 )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v172 + 8);
        }
        else
        {
          v122 = *((_QWORD *)&v172 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v172 + 1) + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v122);
            v123 = *(_BYTE *)(v122 + 528);
            *(_BYTE *)(v122 + 528) = 1;
            if ( v123 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v122);
          }
        }
        if ( (_QWORD)v166 == 2LL )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v166 + 8);
        }
        else if ( (_DWORD)v166 == 1 )
        {
          std::sync::mpmc::counter::Sender<C>::release((char *)&v166 + 8);
        }
        else
        {
          v124 = *((_QWORD *)&v166 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v166 + 1) + 512LL)) )
          {
            v125 = *(_QWORD *)(v124 + 128);
            v126 = *(_QWORD *)(v124 + 400);
            do
            {
              v127 = v125;
              v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v124 + 128), v126 | v125, v125);
            }
            while ( v127 != v125 );
            if ( (v125 & *(_QWORD *)(v124 + 400)) == 0 )
              std::sync::mpmc::waker::SyncWaker::disconnect(v124 + 320);
            v128 = *(_BYTE *)(v124 + 528);
            *(_BYTE *)(v124 + 528) = 1;
            if ( v128 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v124);
          }
        }
        *(_OWORD *)(v41 + 1) = v155;
        goto LABEL_140;
      }
      *((_QWORD *)&src[5] + 1) = v200;
      *(__int128 *)((char *)&src[4] + 8) = v199;
      *(__int128 *)((char *)&src[3] + 8) = v198;
      *(__int128 *)((char *)&src[2] + 8) = v197;
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = v30;
      *(_QWORD *)&src[1] = v24;
      *(__int128 *)((char *)&src[1] + 8) = *(_OWORD *)&v196[8];
      *(_QWORD *)&src[6] = 0LL;
      *((_QWORD *)&src[6] + 1) = 1LL;
      *(_QWORD *)&src[7] = 0LL;
      v35 = v159;
      if ( v159 == (_QWORD)v158 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v158, *(double *)&v197);
      v36 = *((_QWORD *)&v158 + 1);
      v37 = 120 * v35;
      *(_QWORD *)(*((_QWORD *)&v158 + 1) + v37 + 112) = *(_QWORD *)&src[7];
      *(_OWORD *)(v36 + v37 + 96) = src[6];
      *(_OWORD *)(v36 + v37 + 80) = src[5];
      *(_OWORD *)(v36 + v37 + 64) = src[4];
      v38 = src[0];
      v20 = src[1];
      v21 = src[2];
      v22 = *(double *)&src[3];
      *(_OWORD *)(v36 + v37 + 48) = src[3];
      *(_OWORD *)(v36 + v37 + 32) = v21;
      *(_OWORD *)(v36 + v37 + 16) = v20;
      *(_OWORD *)(v36 + v37) = v38;
      v159 = v35 + 1;
      v39 = _rust_alloc_zeroed(0x2000LL, 1LL);
      v4 = v170;
      if ( !v39 )
      {
        *(_QWORD *)v152 = 0x8000000000000001LL;
        v154 = v25 + 1;
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      }
      v23 = 0.0;
      src[1] = 8uLL;
      src[3] = 0LL;
      src[4] = 8uLL;
      src[0] = v25;
      *((_QWORD *)&src[2] + 1) = 8LL;
      *((_QWORD *)&src[5] + 1) = 8LL;
      *(_QWORD *)&src[6] = 0LL;
      *((_QWORD *)&src[6] + 1) = 0x2000LL;
      *(_QWORD *)&src[7] = v39;
      *((_QWORD *)&src[7] + 1) = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v171, &v166, src, v40);
      if ( *((_QWORD *)&v171[0] + 1) != (_QWORD)v155 )
      {
        *(_QWORD *)v152 = 0x8000000000000001LL;
        v154 = v25 + 1;
        src[7] = v171[7];
        src[6] = v171[6];
        src[5] = v171[5];
        src[4] = v171[4];
        src[3] = v171[3];
        src[2] = v171[2];
        src[1] = v171[1];
        src[0] = v171[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
      }
      ++v25;
    }
    *(_QWORD *)v152 = 0x8000000000000001LL;
    v154 = v25;
    core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(
      v152,
      v23,
      *(double *)&v20,
      *(double *)&v21,
      v22);
    v41 = v157;
    v42 = v159;
    if ( v159 )
    {
      v43 = 0LL;
      do
      {
        v44 = _rust_alloc_zeroed(0x2000LL, 1LL);
        if ( !v44 )
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        src[1] = 8uLL;
        src[3] = 0LL;
        src[4] = 8uLL;
        src[0] = v43;
        *((_QWORD *)&src[2] + 1) = 8LL;
        *((_QWORD *)&src[5] + 1) = 8LL;
        *(_QWORD *)&src[6] = 0LL;
        *((_QWORD *)&src[6] + 1) = 0x2000LL;
        *(_QWORD *)&src[7] = v44;
        *((_QWORD *)&src[7] + 1) = 0x2000LL;
        std::sync::mpmc::Sender<T>::send(v171, &v166, src, v45);
        if ( *((_QWORD *)&v171[0] + 1) != (_QWORD)v155 )
        {
          src[7] = v171[7];
          src[6] = v171[6];
          src[5] = v171[5];
          src[4] = v171[4];
          src[3] = v171[3];
          src[2] = v171[2];
          src[1] = v171[1];
          src[0] = v171[0];
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v171, v4);
    *(_QWORD *)&src[0] = v156;
    *((_QWORD *)&src[0] + 1) = v167;
    *(_QWORD *)&src[2] = v159;
    src[1] = v158;
    memcpy((char *)&src[2] + 8, v171, 0xA0uLL);
    *(_QWORD *)&v171[1] = v155;
    *(_QWORD *)&v171[0] = 0LL;
    std::thread::Builder::spawn_unchecked(v152, v171, src);
    if ( !*(_QWORD *)v152 )
    {
      *(_QWORD *)&v171[0] = *(_QWORD *)&v152[8];
      core::result::unwrap_failed(aFailedToSpawnT, 22LL, v171, &off_1931D0, &off_193410);
    }
    *(_QWORD *)&v196[16] = *(_QWORD *)&v152[16];
    *(_OWORD *)v196 = *(_OWORD *)v152;
    *(_QWORD *)v152 = 0LL;
    *(_QWORD *)&v152[8] = 8LL;
    *(_QWORD *)&v152[16] = 0LL;
    v46 = (__int128 *)*((_QWORD *)&v150 + 1);
    *(_QWORD *)&v171[0] = *((_QWORD *)&v150 + 1);
    *((_QWORD *)&v171[0] + 1) = *((_QWORD *)&v150 + 1);
    *(_QWORD *)&v171[1] = v150;
    *((_QWORD *)&v171[1] + 1) = *((_QWORD *)&v150 + 1) + 16 * v151;
    *(_QWORD *)&v171[2] = 0LL;
    if ( v151 )
    {
      do
      {
        *((_QWORD *)&v171[0] + 1) = v46 + 1;
        v52 = *v46;
        v53 = (*(_QWORD *)&v171[2])++;
        v160 = v52;
        v54 = std::sync::mpmc::Receiver<T>::recv(&v160);
        if ( v54 )
        {
          *(_QWORD *)&src[0] = 1LL;
          *((_QWORD *)&src[0] + 1) = 1LL;
          *(_QWORD *)&src[1] = v54;
          v55 = _rust_alloc(24LL, 8LL);
          if ( !v55 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          *(_QWORD *)(v55 + 16) = *(_QWORD *)&src[1];
          *(_OWORD *)v55 = src[0];
          src[1] = (unsigned __int64)v55;
          src[0] = v160;
          *(_QWORD *)&src[2] = v53;
          v56 = *(_QWORD *)&v152[16];
          if ( *(_QWORD *)&v152[16] == *(_QWORD *)v152 )
            alloc::raw_vec::RawVec<T,A>::grow_one(v152);
          v48 = *(_QWORD *)&v152[8];
          v49 = 5 * v56;
          v50 = src[0];
          v51 = src[1];
          *(_QWORD *)(*(_QWORD *)&v152[8] + 8 * v49 + 32) = *(_QWORD *)&src[2];
          *(_OWORD *)(v48 + 8 * v49 + 16) = v51;
          *(_OWORD *)(v48 + 8 * v49) = v50;
          *(_QWORD *)&v152[16] = v56 + 1;
        }
        else if ( (_QWORD)v160 == 2LL )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v160 + 8);
        }
        else if ( (_DWORD)v160 == 1 )
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v160 + 8);
        }
        else
        {
          v57 = *((_QWORD *)&v160 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v160 + 1) + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v57);
            v58 = *(_BYTE *)(v57 + 528);
            *(_BYTE *)(v57 + 528) = 1;
            if ( v58 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v57);
          }
        }
        v46 = (__int128 *)*((_QWORD *)&v171[0] + 1);
      }
      while ( *((_QWORD *)&v171[0] + 1) != *((_QWORD *)&v171[1] + 1) );
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v171);
    *(_QWORD *)&src[1] = *(_QWORD *)&v152[16];
    src[0] = *(_OWORD *)v152;
    *((_QWORD *)&src[1] + 1) = v4;
    if ( *(_QWORD *)&v152[16] )
    {
      for ( j = (*(_QWORD *)&v152[16] >> 1) - 1LL; j != -1; --j )
        binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, j, *(_QWORD *)&src[1]);
    }
    v185 = *(__int128 *)((char *)src + 8);
    v186 = *((_QWORD *)&src[1] + 1);
    *(_OWORD *)v187 = *(_OWORD *)v196;
    *(_QWORD *)&v187[16] = *(_QWORD *)&v196[16];
    *(_OWORD *)&v177.m256i_u64[1] = *(_OWORD *)&v187[8];
    v176.m256i_i64[3] = *((_QWORD *)&src[1] + 1);
    v177.m256i_i64[0] = *(_QWORD *)v196;
    *(_OWORD *)&v176.m256i_u64[1] = *(__int128 *)((char *)src + 8);
    v178 = v207[2];
    v175 = v166;
    v176.m256i_i64[0] = *(_QWORD *)&src[0];
    v177.m256i_i64[3] = 0LL;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(v152, v164);
    if ( *(_QWORD *)&v152[8] == (_QWORD)v155 )
    {
      *(_OWORD *)(v41 + 1) = *(_OWORD *)&v152[16];
LABEL_193:
      *v41 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v175);
      goto LABEL_141;
    }
    v207[0] = *(_OWORD *)v152;
    v207[1] = *(_OWORD *)&v152[16];
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(src, v207, v174, v203);
    v59 = *(_QWORD *)&src[1];
    if ( *(_QWORD *)&src[0] == (_QWORD)v155 )
    {
      v41[1] = *((_QWORD *)&src[0] + 1);
      v41[2] = v59;
      goto LABEL_193;
    }
    *((_QWORD *)&v171[6] + 1) = *((_QWORD *)&src[6] + 1);
    *(_OWORD *)((char *)&v171[5] + 8) = *(__int128 *)((char *)&src[5] + 8);
    *(_OWORD *)((char *)&v171[4] + 8) = *(__int128 *)((char *)&src[4] + 8);
    *(_OWORD *)((char *)&v171[3] + 8) = *(__int128 *)((char *)&src[3] + 8);
    *(_OWORD *)((char *)&v171[2] + 8) = *(__int128 *)((char *)&src[2] + 8);
    *(_OWORD *)((char *)&v171[1] + 8) = *(__int128 *)((char *)&src[1] + 8);
    v171[0] = src[0];
    *(_QWORD *)&v171[1] = *(_QWORD *)&src[1];
    src[5] = v178;
    *(__m256i *)&src[3] = v177;
    *(__m256i *)&src[1] = v176;
    src[0] = v175;
    v60 = uu_sort::merge::FileMerger::write_all_to(src, v4, &v171[3]);
    if ( v60 )
      break;
    src[6] = v171[6];
    src[5] = v171[5];
    src[4] = v171[4];
    v62 = *(double *)&v171[3];
    src[3] = v171[3];
    src[2] = v171[2];
    src[1] = v171[1];
    src[0] = v171[0];
    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(v152, src);
    v63 = *(_QWORD *)&v152[16];
    if ( *(_QWORD *)v152 == (_QWORD)v155 )
    {
      v41[1] = *(_QWORD *)&v152[8];
      v41[2] = v63;
LABEL_140:
      *v41 = 3LL;
      goto LABEL_141;
    }
    v206 = *(__m256i *)&v152[16];
    v205 = *(_OWORD *)v152;
    v64 = v163;
    if ( v163 == v161 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v161, *(_QWORD *)&v152[40], *(_QWORD *)v152, *(_QWORD *)&v152[16]);
    v65 = v162;
    v66 = 48 * v64;
    v67 = v205;
    v68 = *(_OWORD *)v206.m256i_i8;
    v69 = *(double *)&v206.m256i_i64[2];
    *(_OWORD *)(v162 + v66 + 32) = *(_OWORD *)&v206.m256i_u64[2];
    *(_OWORD *)(v65 + v66 + 16) = v68;
    *(_OWORD *)(v65 + v66) = v67;
    v163 = v64 + 1;
    v8 = v202;
    v70 = v168 <= v202;
    v16 = v204;
    v168 = v204;
    v15 = v201;
    if ( v70 )
    {
      <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(src, v188);
      v41 = v157;
      if ( *(_QWORD *)&src[0] != v15 )
      {
        core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(
          src,
          *(double *)&v67,
          *(double *)&v68,
          v69,
          v62);
        core::panicking::panic(aAssertionFaile_15, 42LL, &off_1932F0);
      }
      *(_QWORD *)&src[0] = v162;
      *((_QWORD *)&src[0] + 1) = v162;
      *(_QWORD *)&src[1] = v161;
      *((_QWORD *)&src[1] + 1) = v162 + 48 * v163;
      *(_QWORD *)&src[2] = 1LL;
      *((_QWORD *)&src[2] + 1) = &unk_1933C0;
      uu_sort::merge::merge_with_file_limit(v157, src, v4, v164);
      goto LABEL_150;
    }
  }
  v41[1] = v60;
  v41[2] = v61;
  *v41 = 3LL;
  core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(v171);
LABEL_141:
  v129 = v163;
  if ( v163 )
  {
    v130 = (_QWORD *)(v162 + 32);
    do
    {
      v131 = *(v130 - 4);
      if ( v131 )
        _rust_dealloc(*(v130 - 3), v131, 1LL);
      v132 = *(v130 - 1);
      if ( v132 )
        _rust_dealloc(*v130, v132, 1LL);
      v130 += 6;
      --v129;
    }
    while ( v129 );
  }
  if ( v161 )
    _rust_dealloc(v162, 48 * v161, 8LL);
LABEL_150:
  core::ptr::drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>>(v188);
  return v41;
}
