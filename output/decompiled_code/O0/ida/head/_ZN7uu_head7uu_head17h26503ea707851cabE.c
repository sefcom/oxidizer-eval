__int64 __fastcall uu_head::uu_head(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v3; // rax
  char v4; // r13
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  bool v10; // zf
  char v11; // dl
  size_t v12; // r13
  __int8 v13; // al
  __int64 v14; // r14
  __int64 v15; // r14
  size_t v16; // rdx
  size_t v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  size_t v21; // rdx
  __int64 v22; // rax
  char v23; // al
  size_t v24; // rax
  __int64 v25; // rax
  size_t v26; // r14
  __int8 *v27; // r14
  __int64 v28; // r15
  void *v29; // r15
  __int64 v30; // r14
  void *v31; // r14
  unsigned __int8 v32; // r14
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // r14
  __int8 v36; // al
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r14
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // r13
  __int128 v45; // rax
  __int64 v46; // r14
  size_t v47; // rbp
  size_t v48; // r15
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // al
  size_t v56; // rbp
  size_t v57; // r15
  __int8 *v58; // r13
  size_t v59; // rax
  size_t v60; // rbp
  size_t v61; // rax
  bool v62; // cf
  bool v63; // cc
  size_t v64; // rax
  size_t v65; // r13
  __int64 v66; // r15
  void *v67; // r15
  __int64 v68; // r14
  void *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // r14
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // r14
  unsigned __int8 v80; // r15
  __int64 v81; // r15
  unsigned __int64 v82; // r13
  __int64 v83; // rdx
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // r15
  int v90; // ecx
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // r14
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // r15
  __int64 v100; // rax
  __int64 v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int64 v105; // r15
  __int64 v106; // r14
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // r14
  __int64 v110; // rsi
  __int64 v111; // rdi
  volatile __int32 *v112; // r14
  volatile __int32 *v113; // rdi
  __int64 v114; // rax
  unsigned __int64 v115; // rdx
  char *v116; // r14
  __int64 v117; // r13
  unsigned __int64 v118; // r15
  char *v119; // rdx
  __int64 v120; // rbp
  __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  char *v123; // r14
  __int64 v124; // r13
  char *v125; // rax
  unsigned __int64 v126; // rdx
  __int64 v127; // r14
  __int64 v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rdi
  __int64 v131; // rdi
  __int64 v132; // rsi
  char v133; // al
  __int64 v134; // rdx
  void *v135; // rcx
  __int64 v136; // r14
  __int64 v137; // r15
  __int64 v138; // r13
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // r14
  __int64 v142; // r15
  __int64 (__fastcall **v143)(); // rax
  __int64 (__fastcall *v144)(); // rsi
  __int64 v145; // r14
  unsigned __int64 v146; // rdx
  __int64 result; // rax
  char **v148; // rax
  char **v149; // rax
  char **v150; // rax
  char **v151; // rax
  char **v152; // rax
  unsigned int v153; // [rsp-EFFCh] [rbp-104A4h] BYREF
  __int64 *v154; // [rsp-EFF8h] [rbp-104A0h] BYREF
  __int64 v155; // [rsp-EFF0h] [rbp-10498h] BYREF
  __int64 v156; // [rsp-EFE8h] [rbp-10490h] BYREF
  __int64 v157; // [rsp-EFE0h] [rbp-10488h] BYREF
  __int64 n_bytes; // [rsp-EFD8h] [rbp-10480h]
  __int64 v159; // [rsp-EFD0h] [rbp-10478h] BYREF
  __int128 v160; // [rsp-EFC8h] [rbp-10470h] BYREF
  _BYTE v161[24]; // [rsp-EFB8h] [rbp-10460h] BYREF
  unsigned int *v162; // [rsp-EFA0h] [rbp-10448h]
  __m256i v163; // [rsp-EF98h] [rbp-10440h] BYREF
  __int128 v164; // [rsp-EF78h] [rbp-10420h]
  __int64 v165; // [rsp-EF68h] [rbp-10410h]
  char **v166; // [rsp-EF60h] [rbp-10408h]
  size_t v167; // [rsp-EF58h] [rbp-10400h]
  __int64 v168; // [rsp-EF50h] [rbp-103F8h] BYREF
  volatile __int32 *v169; // [rsp-EF48h] [rbp-103F0h] BYREF
  char v170; // [rsp-EF40h] [rbp-103E8h]
  char *v171; // [rsp-EF38h] [rbp-103E0h]
  size_t v172; // [rsp-EF30h] [rbp-103D8h]
  char **v173; // [rsp-EF28h] [rbp-103D0h]
  __int64 *v174; // [rsp-EF20h] [rbp-103C8h]
  __int64 v175; // [rsp-EF18h] [rbp-103C0h] BYREF
  __int64 (__fastcall **v176)(); // [rsp-EF10h] [rbp-103B8h]
  __int64 v177; // [rsp-EF08h] [rbp-103B0h] BYREF
  void *v178; // [rsp-EF00h] [rbp-103A8h]
  __int128 v179; // [rsp-EEF8h] [rbp-103A0h]
  __int64 v180; // [rsp-EEE8h] [rbp-10390h]
  unsigned int *v181; // [rsp-EEE0h] [rbp-10388h]
  char **v182; // [rsp-EED8h] [rbp-10380h]
  char **v183; // [rsp-EED0h] [rbp-10378h]
  char **v184; // [rsp-EEC8h] [rbp-10370h]
  __int64 v185; // [rsp-EEC0h] [rbp-10368h] BYREF
  unsigned __int64 v186; // [rsp-EEB8h] [rbp-10360h]
  __int64 v187; // [rsp-EEB0h] [rbp-10358h]
  char **v188; // [rsp-EEA8h] [rbp-10350h]
  __int64 *v189; // [rsp-EEA0h] [rbp-10348h]
  __int64 v190; // [rsp-EE98h] [rbp-10340h]
  __int64 v191; // [rsp-EE90h] [rbp-10338h] BYREF
  __int64 v192; // [rsp-EE88h] [rbp-10330h] BYREF
  __int64 v193; // [rsp-EE80h] [rbp-10328h]
  __int64 v194; // [rsp-EE78h] [rbp-10320h] BYREF
  void *v195; // [rsp-EE70h] [rbp-10318h]
  __int128 v196; // [rsp-EE68h] [rbp-10310h]
  __int64 v197; // [rsp-EE58h] [rbp-10300h]
  unsigned int *v198; // [rsp-EE50h] [rbp-102F8h]
  __m256i v199; // [rsp-EE48h] [rbp-102F0h] BYREF
  __int128 v200; // [rsp-EE28h] [rbp-102D0h]
  __int64 v201; // [rsp-EE18h] [rbp-102C0h]
  unsigned __int64 v202; // [rsp-EDF8h] [rbp-102A0h]
  unsigned __int64 v203; // [rsp-EDF0h] [rbp-10298h]
  __int64 v204; // [rsp-ED98h] [rbp-10240h]
  char *v205; // [rsp-ED90h] [rbp-10238h]
  char *v206; // [rsp-ED88h] [rbp-10230h]
  __int64 v207; // [rsp-ED80h] [rbp-10228h]
  __int64 v208; // [rsp-ED78h] [rbp-10220h] BYREF
  _DWORD v209[2]; // [rsp-ED70h] [rbp-10218h] BYREF
  __int64 v210; // [rsp-ED68h] [rbp-10210h]
  __int64 v211; // [rsp-ED60h] [rbp-10208h] BYREF
  _QWORD v212[2]; // [rsp-ED58h] [rbp-10200h] BYREF
  _QWORD v213[2]; // [rsp-ED48h] [rbp-101F0h] BYREF
  _QWORD v214[2]; // [rsp-ED38h] [rbp-101E0h] BYREF
  _QWORD v215[2]; // [rsp-ED28h] [rbp-101D0h] BYREF
  _QWORD v216[2]; // [rsp-ED18h] [rbp-101C0h] BYREF
  _QWORD v217[3]; // [rsp-ED08h] [rbp-101B0h] BYREF
  _QWORD v218[4]; // [rsp-ECF0h] [rbp-10198h] BYREF
  _QWORD v219[4]; // [rsp-ECD0h] [rbp-10178h] BYREF
  _QWORD v220[6]; // [rsp-ECB0h] [rbp-10158h] BYREF
  _QWORD v221[6]; // [rsp-EC80h] [rbp-10128h] BYREF
  _QWORD v222[6]; // [rsp-EC50h] [rbp-100F8h] BYREF
  _QWORD v223[3]; // [rsp-EC20h] [rbp-100C8h] BYREF
  __int128 v224; // [rsp-EC08h] [rbp-100B0h]
  _QWORD v225[3]; // [rsp-EBF0h] [rbp-10098h] BYREF
  __int128 v226; // [rsp-EBD8h] [rbp-10080h]
  _QWORD v227[3]; // [rsp-EBC0h] [rbp-10068h] BYREF
  __int128 v228; // [rsp-EBA8h] [rbp-10050h]
  char v229; // [rsp-EB91h] [rbp-10039h] BYREF
  __m256i v230; // [rsp-EB90h] [rbp-10038h] BYREF
  __int128 v231; // [rsp-EB70h] [rbp-10018h]
  __int64 v232; // [rsp-EB60h] [rbp-10008h]
  unsigned __int64 v233; // [rsp-EB40h] [rbp-FFE8h]
  __int64 v234; // [rsp-DB88h] [rbp-F030h] BYREF

  do
    v230.m256i_i64[1] = 0LL;
  while ( &v230.m256i_u64[1] != (unsigned __int64 *)((char *)&v234 - (char *)&unk_10000) );
  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 || (v1 & 7) != 0 || (v3 = *(_QWORD *)(a1 + 32), v3 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v3 )
    return 0LL;
  v189 = &v230.m256i_i64[1];
  v190 = v1 + 24 * v3;
  v174 = &v230.m256i_i64[2];
  v183 = &off_117CC8;
  v188 = &off_117CB0;
  v173 = &off_117BF0;
  v184 = &off_117C38;
  v166 = &off_117C50;
  v182 = &off_117C80;
  v4 = 0;
  while ( 2 )
  {
    for ( v1 += 24LL; ; v1 += 24LL )
    {
      v5 = *(_BYTE **)(v1 - 16);
      if ( !v5 )
        goto LABEL_307;
      v6 = *(_QWORD *)(v1 - 8);
      if ( v6 < 0 )
        goto LABEL_307;
      if ( (*(_BYTE *)(a1 + 42) & 1) != 0 || v6 == 1 && *v5 == 45 )
      {
        if ( *(_QWORD *)(a1 + 32) > 1uLL && (*(_BYTE *)(a1 + 40) & 1) == 0 || (*(_BYTE *)(a1 + 41) & 1) != 0 )
        {
          if ( (v4 & 1) != 0 )
          {
            v223[0] = &off_117D58;
            v223[1] = 1LL;
            v223[2] = 8LL;
            v224 = 0LL;
            ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v223);
          }
          v225[0] = &off_117D88;
          v225[1] = 1LL;
          v225[2] = 8LL;
          v226 = 0LL;
          ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v225);
        }
        v208 = std::io::stdio::stdin();
        v169 = (volatile __int32 *)((__int64 (__fastcall *)(__int64 *))std::io::stdio::Stdin::lock)(&v208);
        v170 = v11 & 1;
        v12 = *(_QWORD *)(a1 + 8);
        switch ( *(_QWORD *)a1 )
        {
          case 0LL:
            v13 = *(_BYTE *)(a1 + 43);
            v163.m256i_i64[0] = (__int64)&v169;
            v163.m256i_i64[1] = v12;
            v163.m256i_i8[16] = v13;
            v177 = std::io::stdio::stdout();
            v14 = std::io::stdio::Stdout::lock(&v177);
            *(_QWORD *)&v160 = v14;
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v199, 0x4000LL, 0LL);
            if ( v199.m256i_i64[0] )
              alloc::raw_vec::handle_error(v199.m256i_i64[1], v199.m256i_i64[2]);
            *(_OWORD *)v230.m256i_i8 = *(_OWORD *)&v199.m256i_u64[1];
            v230.m256i_i64[2] = 0LL;
            v230.m256i_i8[24] = 0;
            *(_QWORD *)&v231 = v14;
            v15 = ((__int64 (__fastcall *)(__m256i *, __m256i *))<std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from)(
                    &v230,
                    &v163);
            v17 = v16;
            ((void (__fastcall *)(__m256i *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v230);
            if ( !v15 )
              v17 = 0LL;
            goto LABEL_234;
          case 1LL:
            v32 = *(_BYTE *)(a1 + 43);
            v194 = std::io::stdio::stdout();
            v177 = std::io::stdio::Stdout::lock(&v194);
            ((void (__fastcall *)(__m256i *, volatile __int32 **, _QWORD, size_t))uu_head::take::TakeAllBut<I>::new)(
              &v199,
              &v169,
              v32,
              v12);
            v232 = v201;
            v231 = v200;
            v230 = v199;
            while ( 2 )
            {
              ((void (__fastcall *)(__int128 *, __m256i *))<uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next)(
                &v160,
                &v230);
              v33 = v160;
              if ( (_QWORD)v160 == 0x8000000000000001LL )
              {
                ((void (__fastcall *)(__m256i *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v230);
                ((void (__fastcall *)(__m256i *, __m256i *))alloc::raw_vec::RawVec<T,A>::current_memory)(&v163, &v230);
                v70 = v163.m256i_i64[1];
                if ( v163.m256i_i64[1] )
                  ((void (__fastcall *)(unsigned __int64 *, __int64, __int64, __int64))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
                    &v230.m256i_u64[2],
                    v163.m256i_i64[0],
                    v163.m256i_i64[1],
                    v163.m256i_i64[2]);
                v71 = v177;
                v10 = (*(_DWORD *)(v177 + 12))-- == 1;
                if ( !v10
                  || (v72 = core::option::Option<T>::map_or(0LL, 0LL, v70),
                      core::sync::atomic::atomic_store(v71, v72, 0LL),
                      v73 = v177,
                      _InterlockedExchange((volatile __int32 *)(v177 + 8), 0) != 2) )
                {
LABEL_227:
                  v17 = 0LL;
                  goto LABEL_234;
                }
                v74 = v73 + 8;
                v17 = 0LL;
              }
              else
              {
                v34 = *((_QWORD *)&v160 + 1);
                if ( (_QWORD)v160 == 0x8000000000000000LL )
                {
                  v17 = *((_QWORD *)&v160 + 1);
                }
                else
                {
                  if ( !*((_QWORD *)&v160 + 1) || *(__int64 *)v161 < 0 )
LABEL_308:
                    core::panicking::panic_nounwind(
                      anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473,
                      162LL);
                  v17 = ((__int64 (__fastcall *)(__int64 *, _QWORD))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                          &v177,
                          *((_QWORD *)&v160 + 1));
                  if ( !v17 )
                  {
                    if ( v33 )
                      _rust_dealloc(v34, v33, 1LL);
                    continue;
                  }
                  if ( v33 )
                    _rust_dealloc(v34, v33, 1LL);
                }
                ((void (__fastcall *)(__m256i *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v230);
                ((void (__fastcall *)(__m256i *, __m256i *))alloc::raw_vec::RawVec<T,A>::current_memory)(&v163, &v230);
                v75 = v163.m256i_i64[1];
                if ( v163.m256i_i64[1] )
                  ((void (__fastcall *)(unsigned __int64 *, __int64, __int64, __int64))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
                    &v230.m256i_u64[2],
                    v163.m256i_i64[0],
                    v163.m256i_i64[1],
                    v163.m256i_i64[2]);
                v76 = v177;
                v10 = (*(_DWORD *)(v177 + 12))-- == 1;
                if ( !v10 )
                  goto LABEL_234;
                v77 = core::option::Option<T>::map_or(0LL, 0LL, v75);
                core::sync::atomic::atomic_store(v76, v77, 0LL);
                v78 = v177;
                if ( _InterlockedExchange((volatile __int32 *)(v177 + 8), 0) != 2 )
                  goto LABEL_234;
                v74 = v78 + 8;
              }
              break;
            }
            std::sys::sync::mutex::futex::Mutex::wake(v74);
            goto LABEL_234;
          case 2LL:
            n_bytes = uu_head::read_n_bytes((__int64)&v169, *(_QWORD *)(a1 + 8));
            if ( (v170 & 1) != 0 )
              goto LABEL_236;
            goto LABEL_235;
          case 3LL:
            if ( !v12 )
            {
              v17 = uu_head::read_n_bytes((__int64)&v169, -1LL);
              goto LABEL_234;
            }
            v194 = std::io::stdio::stdout();
            v177 = std::io::stdio::Stdout::lock(&v194);
            v199.m256i_i64[0] = 0LL;
            *(_OWORD *)&v199.m256i_u64[1] = 1uLL;
            memset(&v230, 0, (size_t)&unk_10000);
            v19 = 0LL;
            while ( 1 )
            {
              while ( 1 )
              {
                v20 = ((__int64 (__fastcall *)(volatile __int32 **, __m256i *, void *))<std::io::stdio::StdinLock as std::io::Read>::read)(
                        &v169,
                        &v230,
                        &unk_10000);
                v17 = v21;
                if ( !v20 )
                  break;
                *(_QWORD *)&v160 = v21;
                switch ( v21 & 3 )
                {
                  case 0uLL:
                    v22 = 16LL;
                    goto LABEL_48;
                  case 1uLL:
                    v22 = 15LL;
LABEL_48:
                    v23 = *(_BYTE *)(v21 + v22);
                    break;
                  case 2uLL:
                    v23 = ((__int64 (__fastcall *)(size_t))std::sys::pal::unix::decode_error_kind)(HIDWORD(v21));
                    break;
                  case 3uLL:
                    v23 = ((__int64 (__fastcall *)(size_t))std::io::error::repr_bitpacked::kind_from_prim)(HIDWORD(v21));
                    if ( v23 == 41 )
LABEL_348:
                      core::hint::unreachable_unchecked::precondition_check();
                    return result;
                }
                if ( v23 != 35 )
                  goto LABEL_229;
                ((void (__fastcall *)(__m256i *, size_t))std::io::error::repr_bitpacked::decode_repr)(&v163, v17);
                if ( v163.m256i_i8[0] >= 3u )
                  ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v163.m256i_u64[1]);
              }
              if ( !v21 )
                break;
              v62 = __CFADD__(v21, v19);
              v19 += v21;
              if ( v62 )
                goto LABEL_328;
              v24 = v19 - v12;
              if ( v19 <= v12 )
              {
                if ( v19 < v12 )
                  goto LABEL_326;
                if ( v24 > v21 )
                {
                  v149 = &off_117C68;
LABEL_325:
                  v166 = v149;
LABEL_326:
                  ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_sub_overflow)(v166);
                }
                v17 = v21 - v24;
                if ( v21 - v24 > (unsigned __int64)&unk_10000 )
                {
                  v148 = &off_117C80;
LABEL_322:
                  v184 = v148;
LABEL_323:
                  ((void (__fastcall __noreturn *)(size_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
                    v17,
                    &unk_10000,
                    v184);
                }
                ((void (__fastcall *)(__m256i *, __int64, __int64, size_t))core::slice::raw::from_raw_parts::precondition_check)(
                  &v230,
                  1LL,
                  1LL,
                  v17);
                v30 = v199.m256i_i64[2];
                if ( v199.m256i_i64[0] - v199.m256i_i64[2] < v17 )
                {
                  ((void (__fastcall *)(__m256i *, __int64, size_t))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                    &v199,
                    v199.m256i_i64[2],
                    v17);
                  v30 = v199.m256i_i64[2];
                }
                v31 = (void *)(v199.m256i_i64[1] + v30);
                ((void (__fastcall *)(__m256i *, void *, __int64, __int64, size_t))core::intrinsics::copy_nonoverlapping::precondition_check)(
                  &v230,
                  v31,
                  1LL,
                  1LL,
                  v17);
                memcpy(v31, &v230, v17);
                v199.m256i_i64[2] += v17;
              }
              else
              {
                if ( !v199.m256i_i64[1] || v199.m256i_i64[2] < 0 )
                  goto LABEL_308;
                v25 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(&v177);
                if ( v25 )
                  goto LABEL_228;
                v26 = v17 - v12;
                if ( v17 < v12 )
                {
                  v149 = &off_117C08;
                  goto LABEL_325;
                }
                if ( __CFADD__(v26, v199.m256i_i64[2]) )
                {
                  v173 = &off_117C08;
LABEL_328:
                  ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_add_overflow)(v173);
                }
                if ( v26 + v199.m256i_i64[2] >= (unsigned __int64)&unk_10001 )
                {
                  v17 = v26 + v199.m256i_i64[2];
                  v148 = &off_117C20;
                  goto LABEL_322;
                }
                v25 = ((__int64 (__fastcall *)(__int64 *, __m256i *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                        &v177,
                        &v230);
                if ( v25 )
                {
LABEL_228:
                  v17 = v25;
LABEL_229:
                  if ( v199.m256i_i64[0] )
                    _rust_dealloc(v199.m256i_i64[1], v199.m256i_i64[0], 1LL);
                  v109 = v177;
                  v10 = (*(_DWORD *)(v177 + 12))-- == 1;
                  if ( v10 )
                  {
                    v110 = core::option::Option<T>::map_or(0LL, 0LL, v21);
                    core::sync::atomic::atomic_store(v109, v110, 0LL);
                    v111 = v177;
                    if ( _InterlockedExchange((volatile __int32 *)(v177 + 8), 0) == 2 )
                      std::sys::sync::mutex::futex::Mutex::wake(v111 + 8);
                  }
LABEL_234:
                  n_bytes = v17;
                  if ( (v170 & 1) == 0 )
                  {
LABEL_235:
                    v112 = v169;
                    if ( (((__int64 (__fastcall *)(void *, _QWORD))core::sync::atomic::atomic_load)(
                            &std::panicking::panic_count::GLOBAL_PANIC_COUNT,
                            0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
                      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
                    {
                      ((void (__fastcall *)(volatile __int32 *, __int64, _QWORD))core::sync::atomic::atomic_store)(
                        v112 + 1,
                        1LL,
                        0LL);
                    }
                  }
LABEL_236:
                  v113 = v169;
                  if ( _InterlockedExchange(v169, 0) == 2 )
                    std::sys::sync::mutex::futex::Mutex::wake(v113);
                  goto LABEL_274;
                }
                if ( !v199.m256i_i64[1] || v199.m256i_i64[2] < 0 )
LABEL_317:
                  core::panicking::panic_nounwind(
                    anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263,
                    166LL);
                v199.m256i_i64[2] = 0LL;
                if ( v17 > (unsigned __int64)&unk_10000 )
                  goto LABEL_323;
                v27 = &v230.m256i_i8[v26];
                ((void (__fastcall *)(__int8 *, __int64, __int64, size_t))core::slice::raw::from_raw_parts::precondition_check)(
                  v27,
                  1LL,
                  1LL,
                  v12);
                v28 = v199.m256i_i64[2];
                if ( v199.m256i_i64[0] - v199.m256i_i64[2] < v12 )
                {
                  ((void (__fastcall *)(__m256i *, __int64, size_t))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                    &v199,
                    v199.m256i_i64[2],
                    v12);
                  v28 = v199.m256i_i64[2];
                }
                v29 = (void *)(v199.m256i_i64[1] + v28);
                ((void (__fastcall *)(__int8 *, void *, __int64, __int64, size_t))core::intrinsics::copy_nonoverlapping::precondition_check)(
                  v27,
                  v29,
                  1LL,
                  1LL,
                  v12);
                memcpy(v29, v27, v12);
                v199.m256i_i64[2] += v12;
              }
            }
            if ( v199.m256i_i64[0] )
              _rust_dealloc(v199.m256i_i64[1], v199.m256i_i64[0], 1LL);
            v106 = v177;
            v10 = (*(_DWORD *)(v177 + 12))-- == 1;
            if ( v10 )
            {
              v107 = core::option::Option<T>::map_or(0LL, 0LL, v21);
              core::sync::atomic::atomic_store(v106, v107, 0LL);
              v108 = v177;
              if ( _InterlockedExchange((volatile __int32 *)(v177 + 8), 0) == 2 )
                std::sys::sync::mutex::futex::Mutex::wake(v108 + 8);
            }
            goto LABEL_227;
        }
      }
      v192 = *(_QWORD *)(v1 - 16);
      v193 = v6;
      v230.m256i_i64[0] = 0x1B600000000LL;
      v230.m256i_i16[6] = 0;
      v230.m256i_i32[2] = 1;
      ((void (__fastcall *)(_DWORD *, __m256i *))std::fs::OpenOptions::_open)(v209, &v230);
      if ( !v209[0] )
        break;
      v191 = ((__int64 (__fastcall *)(__int64, __int64, __int64))<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context)(
               v210,
               v192,
               v193);
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
      v7 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v8, 1LL, 1LL, v9);
      v212[0] = v8;
      v212[1] = v9;
      v218[0] = v212;
      v218[1] = <&T as core::fmt::Display>::fmt;
      v218[2] = &v191;
      v218[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v220[0] = &unk_117BC0;
      v220[1] = 3LL;
      v220[4] = 0LL;
      v220[2] = v218;
      v220[3] = 2LL;
      std::io::stdio::_eprint(v220);
      ((void (__fastcall *)(__int64 *))core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>)(&v191);
      v10 = v1 == v190;
      if ( v10 )
        return 0LL;
    }
    v153 = v209[1];
    if ( *(_QWORD *)(a1 + 32) > 1uLL && (*(_BYTE *)(a1 + 40) & 1) == 0 || (*(_BYTE *)(a1 + 41) & 1) != 0 )
    {
      if ( (v4 & 1) != 0 )
      {
        v227[0] = &off_117D58;
        v227[1] = 1LL;
        v227[2] = 8LL;
        v228 = 0LL;
        ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v227);
      }
      v213[0] = &v192;
      v213[1] = <&T as core::fmt::Display>::fmt;
      v221[0] = &off_117D68;
      v221[1] = 2LL;
      v221[4] = 0LL;
      v221[2] = v213;
      v221[3] = 1LL;
      ((void (__fastcall *)(_QWORD *))std::io::stdio::_print)(v221);
    }
    switch ( *(_QWORD *)a1 )
    {
      case 0LL:
        v35 = *(_QWORD *)(a1 + 8);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v230, &unk_10000, 0LL);
        if ( v230.m256i_i64[0] )
          goto LABEL_314;
        if ( !v230.m256i_i64[2] )
          goto LABEL_312;
        v177 = v230.m256i_i64[2];
        v178 = &unk_10000;
        v179 = 0LL;
        v180 = 0LL;
        v181 = &v153;
        v36 = *(_BYTE *)(a1 + 43);
        v163.m256i_i64[0] = (__int64)&v177;
        v163.m256i_i64[1] = v35;
        v163.m256i_i8[16] = v36;
        v154 = (__int64 *)std::io::stdio::stdout();
        v37 = std::io::stdio::Stdout::lock(&v154);
        *(_QWORD *)&v160 = v37;
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v199, 0x4000LL, 0LL);
        if ( v199.m256i_i64[0] )
          alloc::raw_vec::handle_error(v199.m256i_i64[1], v199.m256i_i64[2]);
        *(_OWORD *)v230.m256i_i8 = *(_OWORD *)&v199.m256i_u64[1];
        v230.m256i_i64[2] = 0LL;
        v230.m256i_i8[24] = 0;
        *(_QWORD *)&v231 = v37;
        v38 = ((__int64 (__fastcall *)(__m256i *, __m256i *))<std::io::buffered::bufwriter::BufWriter<I> as std::io::copy::BufferedWriterSpec>::copy_from)(
                &v230,
                &v163);
        v18 = v39;
        if ( !v38 )
          v18 = 0LL;
        ((void (__fastcall *)(__m256i *))core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>)(&v230);
        v40 = (__int64)v178;
        if ( !v178 )
          goto LABEL_273;
        v41 = v177;
        goto LABEL_214;
      case 1LL:
      case 3LL:
        ((void (__fastcall *)(__m256i *, unsigned int *))std::fs::File::metadata)(&v199, &v153);
        if ( v199.m256i_i64[0] == 2 )
        {
          v18 = v199.m256i_u64[1];
          goto LABEL_273;
        }
        v43 = v202;
        v44 = v203;
        *(_QWORD *)&v45 = ((__int64 (__fastcall *)(unsigned int *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                            &v153,
                            2LL,
                            0LL);
        v46 = *((_QWORD *)&v45 + 1);
        *(_OWORD *)v163.m256i_i8 = v45;
        if ( (_QWORD)v45 )
          goto LABEL_94;
        if ( ((__int64 (__fastcall *)(unsigned int *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
               &v153,
               1LL,
               0LL) )
        {
          ((void (__fastcall *)(__m256i *, __int64))std::io::error::repr_bitpacked::decode_repr)(&v230, v83);
          if ( v230.m256i_i8[0] >= 3u )
            ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v230.m256i_u64[1]);
          if ( v163.m256i_i64[0] )
          {
            v46 = v163.m256i_i64[1];
LABEL_94:
            ((void (__fastcall *)(__m256i *, __int64))std::io::error::repr_bitpacked::decode_repr)(&v230, v46);
            if ( v230.m256i_i8[0] >= 3u )
              goto LABEL_95;
          }
          goto LABEL_96;
        }
        if ( ((__int64 (__fastcall *)(unsigned int *, _QWORD, __int64))<std::fs::File as std::io::Seek>::seek)(
               &v153,
               0LL,
               v46) )
        {
          ((void (__fastcall *)(__m256i *, __int64))std::io::error::repr_bitpacked::decode_repr)(&v230, v102);
          if ( v230.m256i_i8[0] >= 3u )
LABEL_95:
            ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v230.m256i_u64[1]);
LABEL_96:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v230, &unk_10000, 0LL);
          if ( !v230.m256i_i64[0] )
          {
            if ( v230.m256i_i64[2] )
            {
              *(_QWORD *)&v160 = v230.m256i_i64[2];
              *((_QWORD *)&v160 + 1) = &unk_10000;
              memset(v161, 0, sizeof(v161));
              v162 = &v153;
              if ( *(_QWORD *)a1 != 1LL )
              {
                if ( *(_QWORD *)a1 != 3LL )
                  ((void (__fastcall __noreturn *)(const char *, __int64, char **))core::panicking::panic)(
                    aInternalErrorE_3,
                    40LL,
                    &off_117D28);
                v47 = *(_QWORD *)(a1 + 8);
                if ( v47 )
                {
                  v211 = std::io::stdio::stdout();
                  v159 = std::io::stdio::Stdout::lock(&v211);
                  v154 = 0LL;
                  v155 = 1LL;
                  v156 = 0LL;
                  memset(&v230, 0, (size_t)&unk_10000);
                  v48 = 0LL;
                  while ( 1 )
                  {
                    v49 = *((_QWORD *)&v160 + 1);
                    v50 = *(_QWORD *)v161;
                    v51 = *(_QWORD *)&v161[8];
                    if ( *(_QWORD *)v161 == *(_QWORD *)&v161[8] && *((_QWORD *)&v160 + 1) < (unsigned __int64)&unk_10001 )
                      break;
                    if ( *(_QWORD *)v161 >= *(_QWORD *)&v161[8] )
                    {
                      *(_OWORD *)v163.m256i_i8 = v160;
                      v163.m256i_i64[2] = 0LL;
                      v163.m256i_i64[3] = *(_QWORD *)&v161[16];
                      v54 = ((__int64 (__fastcall *)(unsigned int *, __m256i *, _QWORD))std::sys::pal::unix::fs::File::read_buf)(
                              v162,
                              &v163,
                              0LL);
                      v18 = v54;
                      if ( v54 )
                      {
                        v168 = v54;
                        v53 = 16LL;
                        switch ( v18 & 3 )
                        {
                          case 0uLL:
                            goto LABEL_115;
                          case 1uLL:
                            goto LABEL_114;
                          case 2uLL:
                            goto LABEL_116;
                          case 3uLL:
                            goto LABEL_117;
                        }
                      }
                      *(_QWORD *)v161 = 0LL;
                      v51 = v163.m256i_u64[2];
                      *(_OWORD *)&v161[8] = *(_OWORD *)&v163.m256i_u64[2];
                      v49 = *((_QWORD *)&v160 + 1);
                      v50 = 0LL;
                    }
                    v18 = v51 - v50;
                    if ( v51 < v50 || v51 > v49 )
                      core::panicking::panic_nounwind(
                        anon_82aadc510ef785ff699953d1cb54b4b6_3_llvm_15380159803405013143,
                        97LL);
                    if ( (_QWORD)v160 )
                    {
                      v167 = v47;
                      v56 = v48;
                      v58 = (__int8 *)(v50 + v160);
                      v57 = (size_t)&unk_10000;
                      if ( v18 < (unsigned __int64)&unk_10000 )
                        v57 = v51 - v50;
                      ((void (__fastcall *)(__int8 *, __int64, __int64, size_t))core::slice::raw::from_raw_parts::precondition_check)(
                        v58,
                        1LL,
                        1LL,
                        v57);
                      ((void (__fastcall *)(__int8 *, __int64, __int64, unsigned __int64))core::slice::raw::from_raw_parts::precondition_check)(
                        &v58[v57],
                        1LL,
                        1LL,
                        v18 - v57);
                      if ( v18 == 1 )
                      {
                        v230.m256i_i8[0] = *v58;
                      }
                      else
                      {
                        ((void (__fastcall *)(__int8 *, __m256i *, __int64, __int64, size_t))core::intrinsics::copy_nonoverlapping::precondition_check)(
                          v58,
                          &v230,
                          1LL,
                          1LL,
                          v57);
                        memcpy(&v230, v58, v57);
                      }
                      v59 = v57 + *(_QWORD *)v161;
                      if ( v57 + *(_QWORD *)v161 >= *(_QWORD *)&v161[8] )
                        v59 = *(_QWORD *)&v161[8];
                      *(_QWORD *)v161 = v59;
LABEL_130:
                      if ( !v57 )
                      {
                        if ( v154 )
                          _rust_dealloc(v155, v154, 1LL);
                        v127 = v159;
                        v10 = (*(_DWORD *)(v159 + 12))-- == 1;
                        if ( v10 )
                        {
                          v128 = core::option::Option<T>::map_or(0LL, 0LL, v51);
                          core::sync::atomic::atomic_store(v127, v128, 0LL);
                          v129 = v159;
                          if ( _InterlockedExchange((volatile __int32 *)(v159 + 8), 0) == 2 )
                            std::sys::sync::mutex::futex::Mutex::wake(v129 + 8);
                        }
                        goto LABEL_269;
                      }
                      v62 = __CFADD__(v57, v56);
                      v60 = v57 + v56;
                      if ( v62 )
                        goto LABEL_335;
                      v172 = v60;
                      v61 = v60;
                      v47 = v167;
                      v62 = v61 < v167;
                      v63 = v61 <= v167;
                      v64 = v61 - v167;
                      if ( v63 )
                      {
                        if ( v62 )
                          goto LABEL_339;
                        v62 = v57 < v64;
                        v57 -= v64;
                        if ( v62 )
                        {
                          v151 = &off_117C68;
LABEL_338:
                          v166 = v151;
LABEL_339:
                          ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_sub_overflow)(v166);
                        }
                        if ( v57 > (unsigned __int64)&unk_10000 )
                          goto LABEL_342;
                        ((void (__fastcall *)(__m256i *, __int64, __int64, size_t))core::slice::raw::from_raw_parts::precondition_check)(
                          &v230,
                          1LL,
                          1LL,
                          v57);
                        v68 = v156;
                        if ( (unsigned __int64)v154 - v156 < v57 )
                        {
                          ((void (__fastcall *)(__int64 **, __int64, size_t))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                            &v154,
                            v156,
                            v57);
                          v68 = v156;
                        }
                        v69 = (void *)(v155 + v68);
                        ((void (__fastcall *)(__m256i *, void *, __int64, __int64, size_t))core::intrinsics::copy_nonoverlapping::precondition_check)(
                          &v230,
                          v69,
                          1LL,
                          1LL,
                          v57);
                        memcpy(v69, &v230, v57);
                        v156 += v57;
                        v48 = v172;
                      }
                      else
                      {
                        if ( !v155 || v156 < 0 )
                          goto LABEL_308;
                        v18 = ((__int64 (__fastcall *)(__int64 *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(&v159);
                        if ( v18 )
                          goto LABEL_180;
                        v65 = v57 - v47;
                        if ( v57 < v47 )
                        {
                          v151 = &off_117C08;
                          goto LABEL_338;
                        }
                        if ( __CFADD__(v65, v156) )
                        {
                          v173 = &off_117C08;
LABEL_335:
                          ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_add_overflow)(v173);
                        }
                        if ( v65 + v156 >= (unsigned __int64)&unk_10001 )
                        {
                          v57 = v65 + v156;
                          v152 = &off_117C20;
LABEL_341:
                          v182 = v152;
LABEL_342:
                          ((void (__fastcall __noreturn *)(size_t, void *, char **))core::slice::index::slice_end_index_len_fail)(
                            v57,
                            &unk_10000,
                            v182);
                        }
                        v18 = ((__int64 (__fastcall *)(__int64 *, __m256i *))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                                &v159,
                                &v230);
                        if ( v18 )
                        {
LABEL_180:
                          if ( v154 )
                            _rust_dealloc(v155, v154, 1LL);
                          v84 = v159;
                          v10 = (*(_DWORD *)(v159 + 12))-- == 1;
                          if ( v10 )
                          {
                            v85 = core::option::Option<T>::map_or(0LL, 0LL, v51);
                            core::sync::atomic::atomic_store(v84, v85, 0LL);
                            v86 = v159;
                            if ( _InterlockedExchange((volatile __int32 *)(v159 + 8), 0) == 2 )
                              std::sys::sync::mutex::futex::Mutex::wake(v86 + 8);
                          }
                          goto LABEL_210;
                        }
                        if ( !v155 || v156 < 0 )
                          goto LABEL_317;
                        v156 = 0LL;
                        if ( v57 > (unsigned __int64)&unk_10000 )
                        {
                          v152 = &off_117C38;
                          goto LABEL_341;
                        }
                        ((void (__fastcall *)(__int8 *, __int64, __int64, size_t))core::slice::raw::from_raw_parts::precondition_check)(
                          &v230.m256i_i8[v65],
                          1LL,
                          1LL,
                          v47);
                        v66 = v156;
                        if ( (unsigned __int64)v154 - v156 < v47 )
                        {
                          ((void (__fastcall *)(__int64 **, __int64, size_t))alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle)(
                            &v154,
                            v156,
                            v47);
                          v66 = v156;
                        }
                        v67 = (void *)(v155 + v66);
                        ((void (__fastcall *)(__int8 *, void *, __int64, __int64, size_t))core::intrinsics::copy_nonoverlapping::precondition_check)(
                          &v230.m256i_i8[v65],
                          v67,
                          1LL,
                          1LL,
                          v47);
                        memcpy(v67, &v230.m256i_i8[v65], v47);
                        v156 += v47;
                        v48 = v172;
                      }
                    }
                    else
                    {
                      v168 = v51 - v50;
                      v53 = 16LL;
                      switch ( v18 & 3 )
                      {
                        case 0uLL:
                          goto LABEL_115;
                        case 1uLL:
LABEL_114:
                          v53 = 15LL;
LABEL_115:
                          v55 = *(_BYTE *)(v18 + v53);
                          goto LABEL_118;
                        case 2uLL:
LABEL_116:
                          v55 = ((__int64 (__fastcall *)(unsigned __int64))std::sys::pal::unix::decode_error_kind)(HIDWORD(v18));
                          goto LABEL_118;
                        case 3uLL:
LABEL_117:
                          v55 = ((__int64 (__fastcall *)(unsigned __int64))std::io::error::repr_bitpacked::kind_from_prim)(HIDWORD(v18));
                          if ( v55 == 41 )
                            goto LABEL_348;
LABEL_118:
                          if ( v55 != 35 )
                            goto LABEL_180;
                          ((void (__fastcall *)(__m256i *, unsigned __int64))std::io::error::repr_bitpacked::decode_repr)(
                            &v163,
                            v18);
                          if ( v163.m256i_i8[0] >= 3u )
                            ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v163.m256i_u64[1]);
                          break;
                      }
                    }
                  }
                  *(_OWORD *)v161 = 0LL;
                  v52 = ((__int64 (__fastcall *)(unsigned int *, __m256i *, void *, _QWORD))std::sys::pal::unix::fs::File::read)(
                          v162,
                          &v230,
                          &unk_10000,
                          *((_QWORD *)&v160 + 1));
                  v18 = v51;
                  if ( v52 )
                  {
                    v168 = v51;
                    v53 = 16LL;
                    switch ( v51 & 3 )
                    {
                      case 0uLL:
                        goto LABEL_115;
                      case 1uLL:
                        goto LABEL_114;
                      case 2uLL:
                        goto LABEL_116;
                      case 3uLL:
                        goto LABEL_117;
                    }
                  }
                  v167 = v47;
                  v56 = v48;
                  v57 = v51;
                  goto LABEL_130;
                }
                v163.m256i_i64[0] = (__int64)&v160;
                v163.m256i_i64[1] = -1LL;
                v157 = std::io::stdio::stdout();
                v185 = std::io::stdio::Stdout::lock(&v157);
                v87 = ((__int64 (__fastcall *)(__m256i *, __int64 *))<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy)(
                        &v163,
                        &v185);
                v89 = v185;
                v90 = *(_DWORD *)(v185 + 12) - 1;
                *(_DWORD *)(v185 + 12) = v90;
                if ( v87 )
                {
                  v18 = v88;
                  if ( v90 )
                    goto LABEL_210;
                  v91 = core::option::Option<T>::map_or(0LL, 0LL, v88);
                  core::sync::atomic::atomic_store(v89, v91, 0LL);
                  v92 = v185;
                  if ( _InterlockedExchange((volatile __int32 *)(v185 + 8), 0) != 2 )
                    goto LABEL_210;
                  v93 = v92 + 8;
                }
                else
                {
                  if ( v90
                    || (v103 = core::option::Option<T>::map_or(0LL, 0LL, v88),
                        core::sync::atomic::atomic_store(v89, v103, 0LL),
                        v104 = v185,
                        _InterlockedExchange((volatile __int32 *)(v185 + 8), 0) != 2) )
                  {
                    v18 = 0LL;
                    goto LABEL_210;
                  }
                  v93 = v104 + 8;
                  v18 = 0LL;
                }
LABEL_202:
                std::sys::sync::mutex::futex::Mutex::wake(v93);
LABEL_210:
                if ( !v18 )
                  goto LABEL_269;
                v40 = *((_QWORD *)&v160 + 1);
                goto LABEL_212;
              }
              v79 = *(_QWORD *)(a1 + 8);
              v80 = *(_BYTE *)(a1 + 43);
              v168 = std::io::stdio::stdout();
              v157 = std::io::stdio::Stdout::lock(&v168);
              ((void (__fastcall *)(__m256i *, __int128 *, _QWORD, __int64))uu_head::take::TakeAllBut<I>::new)(
                &v163,
                &v160,
                v80,
                v79);
              v232 = v165;
              v231 = v164;
              v230 = v163;
              while ( 1 )
              {
                ((void (__fastcall *)(__int64 *, __m256i *))<uu_head::take::TakeAllBut<I> as core::iter::traits::iterator::Iterator>::next)(
                  &v185,
                  &v230);
                v81 = v185;
                if ( v185 == 0x8000000000000001LL )
                  break;
                v82 = v186;
                if ( v185 == 0x8000000000000000LL )
                {
                  v18 = v186;
                  goto LABEL_197;
                }
                if ( !v186 || v187 < 0 )
                  goto LABEL_308;
                v18 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64))<std::io::stdio::StdoutLock as std::io::Write>::write_all)(
                        &v157,
                        v186);
                if ( v18 )
                {
                  if ( v81 )
                    _rust_dealloc(v82, v81, 1LL);
LABEL_197:
                  ((void (__fastcall *)(__m256i *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v230);
                  ((void (__fastcall *)(__int64 **, __m256i *))alloc::raw_vec::RawVec<T,A>::current_memory)(
                    &v154,
                    &v230);
                  v98 = v155;
                  if ( v155 )
                    ((void (__fastcall *)(unsigned __int64 *, __int64 *, __int64, __int64))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
                      &v230.m256i_u64[2],
                      v154,
                      v155,
                      v156);
                  v99 = v157;
                  v10 = (*(_DWORD *)(v157 + 12))-- == 1;
                  if ( v10 )
                  {
                    v100 = core::option::Option<T>::map_or(0LL, 0LL, v98);
                    core::sync::atomic::atomic_store(v99, v100, 0LL);
                    v101 = v157;
                    if ( _InterlockedExchange((volatile __int32 *)(v157 + 8), 0) == 2 )
                    {
                      v93 = v101 + 8;
                      goto LABEL_202;
                    }
                  }
                  goto LABEL_210;
                }
                if ( v81 )
                  _rust_dealloc(v82, v81, 1LL);
              }
              ((void (__fastcall *)(__m256i *))<alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop)(&v230);
              ((void (__fastcall *)(__int64 **, __m256i *))alloc::raw_vec::RawVec<T,A>::current_memory)(&v154, &v230);
              v94 = v155;
              if ( v155 )
                ((void (__fastcall *)(unsigned __int64 *, __int64 *, __int64, __int64))<alloc::alloc::Global as core::alloc::Allocator>::deallocate)(
                  &v230.m256i_u64[2],
                  v154,
                  v155,
                  v156);
              v95 = v157;
              v10 = (*(_DWORD *)(v157 + 12))-- == 1;
              if ( v10 )
              {
                v96 = core::option::Option<T>::map_or(0LL, 0LL, v94);
                core::sync::atomic::atomic_store(v95, v96, 0LL);
                v97 = v157;
                if ( _InterlockedExchange((volatile __int32 *)(v157 + 8), 0) == 2 )
                {
                  v93 = v97 + 8;
                  v18 = 0LL;
                  goto LABEL_202;
                }
              }
LABEL_269:
              v40 = *((_QWORD *)&v160 + 1);
              if ( !*((_QWORD *)&v160 + 1) )
                goto LABEL_272;
              goto LABEL_270;
            }
LABEL_312:
            core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
          }
LABEL_315:
          alloc::raw_vec::handle_error(*v189, *v174);
        }
        if ( v44 - 1 >= 0x20000000 )
          v44 = 512LL;
        if ( v43 <= v44 )
          goto LABEL_96;
        if ( *(_QWORD *)a1 != 1LL )
        {
          if ( *(_QWORD *)a1 != 3LL )
            ((void (__fastcall __noreturn *)(const char *, __int64, char **))core::panicking::panic)(
              aInternalErrorE_3,
              40LL,
              &off_117D40);
          v105 = *(_QWORD *)(a1 + 8);
          ((void (__fastcall *)(__m256i *, unsigned int *))std::fs::File::metadata)(&v230, &v153);
          if ( v230.m256i_i64[0] == 2 )
          {
            v18 = v230.m256i_u64[1];
            goto LABEL_273;
          }
          v145 = v233 - v105;
          if ( v233 <= v105 )
            goto LABEL_272;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v154, &unk_10000, 0LL);
          if ( v154 )
          {
            v174 = &v156;
            v189 = &v155;
            goto LABEL_315;
          }
          if ( !v156 )
            goto LABEL_312;
          *(_QWORD *)&v160 = v156;
          *((_QWORD *)&v160 + 1) = &unk_10000;
          memset(v161, 0, sizeof(v161));
          v162 = &v153;
          v18 = uu_head::read_n_bytes((__int64)&v160, v145);
          v40 = *((_QWORD *)&v160 + 1);
          if ( v18 )
          {
LABEL_212:
            if ( !v40 )
              goto LABEL_273;
            v41 = v160;
            goto LABEL_214;
          }
          if ( *((_QWORD *)&v160 + 1) )
          {
LABEL_270:
            v130 = v160;
LABEL_271:
            _rust_dealloc(v130, v40, 1LL);
          }
LABEL_272:
          v18 = 0LL;
          goto LABEL_273;
        }
        v167 = *(_QWORD *)(a1 + 8);
        LOBYTE(v157) = *(_BYTE *)(a1 + 43);
        v114 = ((__int64 (__fastcall *)(unsigned int *, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                 &v153,
                 1LL,
                 0LL);
        v18 = v115;
        if ( v114 )
          goto LABEL_273;
        v116 = (char *)v115;
        memset(&v230, 0, (size_t)&unk_10000);
        v117 = (__int64)&unk_10000;
        if ( v116 < (char *)&unk_10000 )
          v117 = (__int64)v116;
        v10 = v167++ == -1LL;
        LOBYTE(v172) = v10;
        v207 = -v117;
        v206 = &v229 + v117;
        v118 = 0LL;
        v119 = v116;
        v120 = 0LL;
        v204 = v117;
        v171 = v116;
        break;
      case 2LL:
        v42 = *(_QWORD *)(a1 + 8);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v230, &unk_10000, 0LL);
        if ( v230.m256i_i64[0] )
          goto LABEL_315;
        if ( !v230.m256i_i64[2] )
          goto LABEL_312;
        v194 = v230.m256i_i64[2];
        v195 = &unk_10000;
        v196 = 0LL;
        v197 = 0LL;
        v198 = &v153;
        v18 = uu_head::read_n_bytes((__int64)&v194, v42);
        v40 = (__int64)v195;
        if ( !v195 )
          goto LABEL_273;
        v41 = v194;
        goto LABEL_214;
    }
    do
    {
      v121 = (__int64)&v119[-v118];
      if ( v121 == 0x8000000000000000LL )
        ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_neg_overflow)(&off_117C98);
      if ( v117 < v121 )
        v121 = v117;
      if ( ((__int64 (__fastcall *)(unsigned int *, __int64, __int64))<std::fs::File as std::io::Seek>::seek)(
             &v153,
             2LL,
             -v121) )
      {
        v18 = v122;
        goto LABEL_273;
      }
      v18 = ((__int64 (__fastcall *)(unsigned int *, __m256i *, __int64))std::io::default_read_exact)(
              &v153,
              &v230,
              v117);
      if ( v18 )
        goto LABEL_273;
      if ( !v171 )
      {
        v125 = (char *)v118;
        v119 = 0LL;
        goto LABEL_260;
      }
      v205 = (char *)(v118 + v117);
      v123 = v206;
      v124 = v207;
      do
      {
        v185 = (__int64)v123;
        v154 = &v157;
        if ( (unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64 **))core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq)(
                                &v185,
                                &v154) )
        {
          if ( !++v120 )
            goto LABEL_333;
        }
        if ( (_BYTE)v172 )
        {
          v150 = &off_117CE0;
LABEL_332:
          v183 = v150;
LABEL_333:
          ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_add_overflow)(v183);
        }
        if ( v120 == v167 )
        {
          if ( ((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD))<std::fs::File as std::io::Seek>::seek)(
                 &v153,
                 0LL,
                 0LL) )
          {
            v18 = v146;
            if ( v146 )
              goto LABEL_273;
          }
          if ( v118 > (unsigned __int64)v171 )
          {
            v188 = &off_117D10;
            goto LABEL_346;
          }
          v18 = (unsigned __int64)&v171[-v118];
LABEL_298:
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v230, &unk_10000, 0LL);
          if ( v230.m256i_i64[0] )
          {
LABEL_314:
            v174 = &v230.m256i_i64[2];
            goto LABEL_315;
          }
          if ( !v230.m256i_i64[2] )
            goto LABEL_312;
          v163.m256i_i64[0] = v230.m256i_i64[2];
          v163.m256i_i64[1] = (__int64)&unk_10000;
          *(_OWORD *)&v163.m256i_u64[2] = 0LL;
          *(_QWORD *)&v164 = 0LL;
          *((_QWORD *)&v164 + 1) = &v153;
          v18 = uu_head::read_n_bytes((__int64)&v163, v18);
          v40 = v163.m256i_i64[1];
          if ( v18 )
          {
            if ( !v163.m256i_i64[1] )
              goto LABEL_273;
            v41 = v163.m256i_i64[0];
LABEL_214:
            _rust_dealloc(v41, v40, 1LL);
            goto LABEL_273;
          }
          if ( v163.m256i_i64[1] )
          {
            v130 = v163.m256i_i64[0];
            goto LABEL_271;
          }
          goto LABEL_272;
        }
        if ( !++v118 )
        {
          v150 = &off_117CF8;
          goto LABEL_332;
        }
        --v123;
        ++v124;
      }
      while ( v124 );
      v119 = v171;
      v125 = v205;
      v117 = v204;
      if ( v205 > v171 )
LABEL_346:
        ((void (__fastcall __noreturn *)(char **))core::panicking::panic_const::panic_const_sub_overflow)(v188);
LABEL_260:
      v118 = (unsigned __int64)v125;
    }
    while ( v125 != v119 );
    v18 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD))<std::fs::File as std::io::Seek>::seek)(
            &v153,
            0LL,
            0LL);
    if ( !v18 )
      goto LABEL_298;
    v18 = v126;
    if ( !v126 )
      goto LABEL_298;
LABEL_273:
    n_bytes = v18;
    ((void (__fastcall *)(_QWORD))std::sys::pal::unix::fs::debug_assert_fd_is_open)(v153);
    close(v153);
LABEL_274:
    if ( n_bytes )
    {
      v131 = *(_QWORD *)(v1 - 16);
      if ( v131 )
      {
        v132 = *(_QWORD *)(v1 - 8);
        if ( v132 >= 0 )
        {
          v133 = ((__int64 (__fastcall *)(__int64, __int64, const char *, __int64))<[A] as core::slice::cmp::SlicePartialEq<B>>::equal)(
                   v131,
                   v132,
                   asc_1F7EF,
                   1LL);
          v134 = 14LL;
          v135 = &unk_1F837;
          if ( v133 || (v135 = *(void **)(v1 - 16)) != 0LL && (v134 = *(_QWORD *)(v1 - 8), v134 >= 0) )
          {
            v214[0] = v135;
            v214[1] = v134;
            v215[0] = v214;
            v215[1] = <&T as core::fmt::Display>::fmt;
            v230.m256i_i64[0] = (__int64)&off_117D98;
            v230.m256i_i64[1] = 2LL;
            v230.m256i_i64[2] = (__int64)v215;
            v230.m256i_i64[3] = 1LL;
            *(_QWORD *)&v231 = 0LL;
            alloc::fmt::format::format_inner(v217, &v230);
            v136 = v217[0];
            v137 = v217[1];
            v138 = v217[2];
            v139 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))alloc::alloc::Global::alloc_impl)(
                     1LL,
                     8LL,
                     32LL,
                     0LL);
            if ( !v139 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)v139 = v136;
            *(_QWORD *)(v139 + 8) = v137;
            *(_QWORD *)(v139 + 16) = v138;
            *(_DWORD *)(v139 + 24) = 1;
            v175 = v139;
            v176 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
            _InterlockedExchange(
              &uucore::mods::error::EXIT_CODE,
              ((__int64 (__fastcall *)(__int64))<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code)(v139));
            v140 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v141 = *(_QWORD *)(v140 + 8);
            v142 = *(_QWORD *)(v140 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v141, 1LL, 1LL, v142);
            v216[0] = v141;
            v216[1] = v142;
            v219[0] = v216;
            v219[1] = <&T as core::fmt::Display>::fmt;
            v219[2] = &v175;
            v219[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v222[0] = &unk_117BC0;
            v222[1] = 3LL;
            v222[4] = 0LL;
            v222[2] = v219;
            v222[3] = 2LL;
            std::io::stdio::_eprint(v222);
            v143 = v176;
            if ( *v176 )
            {
              ((void (__fastcall *)(__int64))*v176)(v175);
              v143 = v176;
            }
            v144 = v143[1];
            if ( v144 )
              _rust_dealloc(v175, v144, v143[2]);
            if ( n_bytes )
            {
              ((void (__fastcall *)(__m256i *))std::io::error::repr_bitpacked::decode_repr)(&v230);
              if ( v230.m256i_i8[0] >= 3u )
                ((void (__fastcall *)(unsigned __int64 *))core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>)(&v230.m256i_u64[1]);
            }
            goto LABEL_7;
          }
        }
      }
LABEL_307:
      core::panicking::panic_nounwind(anon_5c14c8e0fe94f958943f16684aa0fba9_15_llvm_16152083550558900114, 162LL);
    }
LABEL_7:
    v4 = 1;
    if ( v1 != v190 )
      continue;
    return 0LL;
  }
}
