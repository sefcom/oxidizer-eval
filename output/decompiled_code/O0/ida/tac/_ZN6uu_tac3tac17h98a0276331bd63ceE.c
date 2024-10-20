_OWORD *__fastcall uu_tac::tac(__int64 a1, __int64 a2, int a3, int a4, _BYTE *a5, unsigned __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  const void *v9; // r13
  size_t v10; // r15
  size_t v11; // rsi
  size_t v12; // r14
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 (__fastcall **v18)(); // rax
  __int64 (__fastcall *v19)(); // rsi
  _OWORD *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 (__fastcall **v25)(); // rax
  __int64 (__fastcall *v26)(); // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  size_t v31; // r15
  _OWORD *v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 (__fastcall **v38)(); // rax
  __int64 (__fastcall *v39)(); // rcx
  __int64 (__fastcall *v40)(); // rsi
  unsigned int v41; // ebp
  size_t v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdx
  _OWORD *v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rdx
  __int64 (__fastcall **v54)(); // rax
  __int64 (__fastcall *v55)(); // rcx
  __int64 (__fastcall *v56)(); // rsi
  __int64 v57; // r14
  size_t v58; // rcx
  size_t v59; // rax
  size_t v60; // rbx
  size_t v61; // rbp
  size_t v62; // r13
  __int64 v63; // rsi
  bool v64; // cf
  size_t v65; // rax
  size_t *v66; // r14
  size_t v67; // rdx
  size_t v68; // r15
  __int64 v69; // rax
  size_t *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rbx
  size_t v77; // r15
  size_t v78; // rdx
  char *v79; // rsi
  char *v80; // rbx
  char *v81; // rdi
  char *v82; // rcx
  char *v83; // r15
  size_t v84; // r14
  _BYTE *v85; // rsi
  char *v86; // r15
  char *v87; // rdi
  size_t v88; // rcx
  __int64 v89; // r14
  char *v90; // r14
  char *v91; // rdi
  size_t v92; // rcx
  __int64 v93; // r14
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rbx
  unsigned __int64 i; // rcx
  void *v97; // rax
  int v98; // esi
  int v99; // edi
  unsigned __int64 v100; // r9
  _BYTE *j; // r8
  int v102; // r10d
  __int64 v103; // rdx
  _BYTE *v104; // rax
  unsigned __int64 v105; // rcx
  __int64 v106; // r12
  char v107; // dl
  unsigned __int64 v108; // rsi
  unsigned __int64 v109; // r15
  __int64 v110; // rdx
  __int64 v111; // r14
  __int64 v112; // rcx
  __int64 v113; // rdx
  size_t v114; // r15
  __int64 v115; // rax
  unsigned __int64 v116; // rdx
  size_t v117; // rcx
  unsigned __int64 v118; // r13
  size_t v119; // r14
  _BYTE *v120; // rsi
  size_t v121; // rbx
  char *v122; // rdi
  size_t v123; // rcx
  size_t v124; // rbx
  char *v125; // rdi
  size_t v126; // rcx
  __int64 v127; // rcx
  _OWORD *v128; // rbx
  _OWORD *v130; // rax
  __int128 v131; // xmm0
  _OWORD *v132; // rax
  __int64 v133; // rdx
  __int128 v134; // xmm0
  __int64 v135; // rcx
  char **v136; // rax
  unsigned __int64 src; // [rsp+8h] [rbp-5F0h]
  char v138; // [rsp+1Ch] [rbp-5DCh]
  unsigned int v139; // [rsp+20h] [rbp-5D8h]
  bool v140; // [rsp+27h] [rbp-5D1h]
  size_t n; // [rsp+28h] [rbp-5D0h]
  unsigned __int64 v143; // [rsp+38h] [rbp-5C0h]
  __int64 v144; // [rsp+40h] [rbp-5B8h]
  __int64 v145; // [rsp+40h] [rbp-5B8h]
  int fd[4]; // [rsp+48h] [rbp-5B0h] BYREF
  char *v147; // [rsp+58h] [rbp-5A0h]
  char v148; // [rsp+60h] [rbp-598h]
  __int64 v149; // [rsp+68h] [rbp-590h]
  unsigned __int64 v150; // [rsp+70h] [rbp-588h]
  __int64 v151; // [rsp+78h] [rbp-580h] BYREF
  char *v152; // [rsp+80h] [rbp-578h]
  size_t v153; // [rsp+88h] [rbp-570h]
  size_t v154; // [rsp+90h] [rbp-568h]
  size_t v155; // [rsp+98h] [rbp-560h]
  char v156; // [rsp+A0h] [rbp-558h]
  int v157; // [rsp+ACh] [rbp-54Ch]
  size_t len[2]; // [rsp+B0h] [rbp-548h] BYREF
  void *dest[2]; // [rsp+C0h] [rbp-538h] BYREF
  __int64 v160; // [rsp+D0h] [rbp-528h]
  __int64 v161; // [rsp+D8h] [rbp-520h]
  const void *v162; // [rsp+E0h] [rbp-518h]
  int v163; // [rsp+E8h] [rbp-510h]
  int v164; // [rsp+ECh] [rbp-50Ch]
  __int64 v165; // [rsp+F0h] [rbp-508h]
  size_t v166; // [rsp+F8h] [rbp-500h]
  unsigned __int64 v167; // [rsp+100h] [rbp-4F8h]
  size_t v168; // [rsp+108h] [rbp-4F0h]
  __m256i v169; // [rsp+160h] [rbp-498h] BYREF
  char **v170; // [rsp+180h] [rbp-478h]
  char **v171; // [rsp+188h] [rbp-470h]
  _OWORD *v172; // [rsp+190h] [rbp-468h] BYREF
  __int64 (__fastcall **v173)(); // [rsp+198h] [rbp-460h]
  _OWORD *v174; // [rsp+1A0h] [rbp-458h] BYREF
  __int64 (__fastcall **v175)(); // [rsp+1A8h] [rbp-450h]
  _OWORD *v176; // [rsp+1B0h] [rbp-448h] BYREF
  __int64 (__fastcall **v177)(); // [rsp+1B8h] [rbp-440h]
  _OWORD *v178; // [rsp+1C0h] [rbp-438h] BYREF
  __int64 (__fastcall **v179)(); // [rsp+1C8h] [rbp-430h]
  __int64 v180; // [rsp+1D0h] [rbp-428h]
  char *v181; // [rsp+1D8h] [rbp-420h] BYREF
  __int64 v182; // [rsp+1E0h] [rbp-418h]
  __int64 v183; // [rsp+1E8h] [rbp-410h]
  char *v184; // [rsp+1F0h] [rbp-408h] BYREF
  __int64 v185; // [rsp+1F8h] [rbp-400h]
  __int128 v186; // [rsp+200h] [rbp-3F8h] BYREF
  __int128 v187; // [rsp+210h] [rbp-3E8h]
  size_t v188; // [rsp+220h] [rbp-3D8h]
  __int64 v189; // [rsp+228h] [rbp-3D0h] BYREF
  __int64 v190; // [rsp+230h] [rbp-3C8h]
  __int64 v191; // [rsp+238h] [rbp-3C0h]
  _QWORD v192[2]; // [rsp+240h] [rbp-3B8h] BYREF
  char **v193; // [rsp+250h] [rbp-3A8h]
  unsigned __int64 v194; // [rsp+258h] [rbp-3A0h]
  __int64 v195; // [rsp+260h] [rbp-398h]
  __int64 v196; // [rsp+268h] [rbp-390h]
  __int128 v197; // [rsp+270h] [rbp-388h] BYREF
  __int64 v198; // [rsp+280h] [rbp-378h]
  __int64 v199; // [rsp+288h] [rbp-370h]
  void **v200; // [rsp+290h] [rbp-368h]
  unsigned __int64 v201; // [rsp+298h] [rbp-360h]
  _BYTE *v202; // [rsp+2A0h] [rbp-358h]
  _QWORD v203[3]; // [rsp+2A8h] [rbp-350h] BYREF
  __int64 v204; // [rsp+2C0h] [rbp-338h] BYREF
  __int64 v205; // [rsp+2C8h] [rbp-330h] BYREF
  unsigned __int64 v206; // [rsp+2D0h] [rbp-328h]
  unsigned __int64 v207; // [rsp+2D8h] [rbp-320h]
  __int64 v208; // [rsp+2E8h] [rbp-310h] BYREF
  __int128 v209; // [rsp+2F0h] [rbp-308h]
  __int128 v210; // [rsp+300h] [rbp-2F8h]
  __int128 v211; // [rsp+310h] [rbp-2E8h]
  __int128 v212; // [rsp+320h] [rbp-2D8h]
  __int128 v213; // [rsp+330h] [rbp-2C8h]
  __int128 v214; // [rsp+340h] [rbp-2B8h]
  __int128 v215; // [rsp+350h] [rbp-2A8h]
  __int128 v216; // [rsp+360h] [rbp-298h]
  __m256i v217; // [rsp+370h] [rbp-288h] BYREF
  __m256i v218; // [rsp+390h] [rbp-268h]
  _QWORD v219[2]; // [rsp+3B0h] [rbp-248h] BYREF
  _QWORD v220[2]; // [rsp+3C0h] [rbp-238h] BYREF
  _QWORD v221[2]; // [rsp+3D0h] [rbp-228h] BYREF
  _QWORD v222[2]; // [rsp+3E0h] [rbp-218h] BYREF
  _QWORD v223[2]; // [rsp+3F0h] [rbp-208h] BYREF
  __int64 v224; // [rsp+400h] [rbp-1F8h] BYREF
  unsigned __int64 v225; // [rsp+408h] [rbp-1F0h]
  __int64 v226; // [rsp+410h] [rbp-1E8h]
  _QWORD v227[4]; // [rsp+418h] [rbp-1E0h] BYREF
  _QWORD v228[4]; // [rsp+438h] [rbp-1C0h] BYREF
  _QWORD v229[4]; // [rsp+458h] [rbp-1A0h] BYREF
  _QWORD v230[3]; // [rsp+478h] [rbp-180h] BYREF
  char v231; // [rsp+490h] [rbp-168h]
  _QWORD v232[4]; // [rsp+498h] [rbp-160h] BYREF
  __int128 v233; // [rsp+4B8h] [rbp-140h]
  __int128 v234; // [rsp+4C8h] [rbp-130h]
  _QWORD v235[6]; // [rsp+4D8h] [rbp-120h] BYREF
  _QWORD v236[6]; // [rsp+508h] [rbp-F0h] BYREF
  _QWORD v237[6]; // [rsp+538h] [rbp-C0h] BYREF
  __int128 v238; // [rsp+568h] [rbp-90h] BYREF
  __int64 v239; // [rsp+578h] [rbp-80h]
  __int128 v240; // [rsp+580h] [rbp-78h] BYREF
  __int64 v241; // [rsp+590h] [rbp-68h]
  _QWORD v242[12]; // [rsp+598h] [rbp-60h] BYREF

  v157 = a3;
  v7 = a1;
  v150 = a6;
  if ( a4 )
  {
    regex::regex::bytes::Regex::new(&v217, a5, a6);
    if ( !v217.m256i_i64[0] )
    {
      v218.m256i_i64[3] = v217.m256i_i64[3];
      *(_OWORD *)&v218.m256i_u64[1] = *(_OWORD *)&v217.m256i_u64[1];
      v218.m256i_i64[0] = 0x8000000000000000LL;
      v130 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v130 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v128 = v130;
      v131 = *(_OWORD *)v218.m256i_i8;
      v130[1] = *(_OWORD *)&v218.m256i_u64[2];
      *v130 = v131;
      return v128;
    }
    v169 = v217;
    if ( !a2 )
    {
LABEL_218:
      if ( v169.m256i_i64[0] )
      {
        core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v169);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v169.m256i_i64[2]) )
          alloc::sync::Arc<T,A>::drop_slow(&v169.m256i_u64[2]);
      }
      return 0LL;
    }
  }
  else
  {
    v169.m256i_i64[0] = 0LL;
    if ( !a2 )
      goto LABEL_218;
  }
  v8 = a1 + 16 * a2;
  v195 = v8;
  v200 = dest;
  v202 = &a5[v150];
  v140 = a5 == 0LL || v150 == 0;
  v194 = v150 & 3;
  v201 = v150 & 0xFFFFFFFFFFFFFFFCLL;
  v171 = &off_28ED60;
  v170 = &off_28ECB8;
  v193 = &off_28ED00;
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_218;
    v9 = *(const void **)v7;
    v196 = v7;
    v10 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_5D0FD, 1LL) )
    {
      std::io::stdio::stdin();
      fd[0] = 0;
      std::fs::File::metadata(len, fd);
      if ( len[0] == 2 )
      {
        v11 = len[1];
      }
      else
      {
        memmap2::os::MmapInner::new(&v151, v167, 1LL, 1LL, 0LL, 0LL);
        v11 = (size_t)v152;
        if ( !v151 )
        {
          v44 = v153;
          v43 = (unsigned __int64)v152;
          v181 = v152;
          v182 = v153;
          v180 = 1LL;
          goto LABEL_76;
        }
      }
      v180 = 0LL;
      std::io::error::repr_bitpacked::decode_repr(len, v11);
      if ( LOBYTE(len[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&len[1]);
      if ( v180 != 1 )
      {
        v189 = 0LL;
        v190 = 1LL;
        v191 = 0LL;
        v203[0] = std::io::stdio::stdin();
        v27 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(v203, &v189);
        v30 = v28;
        if ( v27 == 1 )
        {
          v203[1] = v28;
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(len, 5LL, 0LL);
          v31 = len[1];
          if ( len[0] )
            alloc::raw_vec::handle_error(len[1], dest[0]);
          v6 = (__int64)dest[0];
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_5D0FF, dest[0], 1LL, 1LL, 5LL);
          *(_BYTE *)(v6 + 4) = 110;
          *(_DWORD *)v6 = 1768191091;
          *(_QWORD *)&v209 = v31;
          *((_QWORD *)&v209 + 1) = v6;
          *(_QWORD *)&v210 = 5LL;
          *((_QWORD *)&v210 + 1) = v30;
          v32 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v32 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v33 = v209;
          v32[1] = v210;
          *v32 = v33;
          v172 = v32;
          v173 = &off_28EB70;
          _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
          v34 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v35 = *(_QWORD *)(v34 + 8);
          v36 = *(_QWORD *)(v34 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v35, 1LL, 1LL, v36);
          v219[0] = v35;
          v219[1] = v36;
          v227[0] = v219;
          v227[1] = <&T as core::fmt::Display>::fmt;
          v227[2] = &v172;
          v227[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v235[0] = &unk_28ED90;
          v235[1] = 3LL;
          v235[4] = 0LL;
          v235[2] = v227;
          v235[3] = 2LL;
          std::io::stdio::_eprint(v235);
          v38 = v173;
          v39 = *v173;
          if ( *v173 )
          {
            ((void (__fastcall *)(_OWORD *))v39)(v172);
            v38 = v173;
          }
          v40 = v38[1];
          if ( v40 )
            _rust_dealloc(v172, v40, v38[2]);
          if ( v189 )
            _rust_dealloc(v190, v189, 1LL);
          if ( v180 )
          {
            memmap2::os::MmapInner::as_mmap_params(len, &v181, v37, v39);
            goto LABEL_7;
          }
          goto LABEL_8;
        }
        if ( v27 )
        {
          std::io::error::repr_bitpacked::decode_repr(len, v28);
          if ( LOBYTE(len[0]) >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&len[1]);
        }
        v143 = v190;
        if ( v190 )
        {
          n = v191;
          if ( v191 >= 0 )
          {
            v8 = v189;
            if ( v180 == 1 )
            {
              v144 = v189;
              memmap2::os::MmapInner::as_mmap_params(len, &v181, v28, v29);
              munmap((void *)len[0], len[1]);
              v139 = 0;
              v138 = 1;
              src = v143;
              v8 = v144;
            }
            else
            {
              v139 = 0;
              v138 = 1;
              src = v190;
            }
            goto LABEL_79;
          }
        }
LABEL_253:
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      }
      v43 = (unsigned __int64)v181;
      v44 = v182;
LABEL_76:
      v192[0] = v43;
      v192[1] = v44;
      src = v43;
      if ( !v43 || v44 < 0 )
        core::panicking::panic_nounwind(anon_2e379de88427cfdda108dad8baf8b250_42_llvm_16806681140142669859, 162LL);
      n = v44;
      LOBYTE(v43) = 1;
      v139 = v43;
      v138 = 0;
      goto LABEL_79;
    }
    if ( (unsigned __int8)std::path::Path::is_dir(v9, v10) )
    {
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(len, v10, 0LL);
      v12 = len[1];
      if ( !len[0] )
      {
        v6 = (__int64)dest[0];
        core::intrinsics::copy_nonoverlapping::precondition_check(v9, dest[0], 1LL, 1LL, v10);
        memcpy((void *)v6, v9, v10);
        *((_QWORD *)&v211 + 1) = v12;
        *(_QWORD *)&v212 = v6;
        *((_QWORD *)&v212 + 1) = v10;
        *(_QWORD *)&v211 = 0x8000000000000001LL;
        v13 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v13 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v14 = v211;
        v13[1] = v212;
        *v13 = v14;
        v174 = v13;
        v175 = &off_28EB70;
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        v15 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v16 = *(_QWORD *)(v15 + 8);
        v17 = *(_QWORD *)(v15 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v16, 1LL, 1LL, v17);
        v220[0] = v16;
        v220[1] = v17;
        v228[0] = v220;
        v228[1] = <&T as core::fmt::Display>::fmt;
        v228[2] = &v174;
        v228[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v236[0] = &unk_28ED90;
        v236[1] = 3LL;
        v236[4] = 0LL;
        v236[2] = v228;
        v236[3] = 2LL;
        std::io::stdio::_eprint(v236);
        v18 = v175;
        if ( *v175 )
        {
          ((void (__fastcall *)(_OWORD *))*v175)(v174);
          v18 = v175;
        }
        v19 = v18[1];
        if ( v19 )
          _rust_dealloc(v174, v19, v18[2]);
        goto LABEL_8;
      }
      goto LABEL_236;
    }
    std::sys::pal::unix::fs::stat(len);
    if ( len[0] == 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(len, len[1]);
      if ( LOBYTE(len[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&len[1]);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(len, v10, 0LL);
      v12 = len[1];
      if ( !len[0] )
      {
        v6 = (__int64)dest[0];
        core::intrinsics::copy_nonoverlapping::precondition_check(v9, dest[0], 1LL, 1LL, v10);
        memcpy((void *)v6, v9, v10);
        *((_QWORD *)&v213 + 1) = v12;
        *(_QWORD *)&v214 = v6;
        *((_QWORD *)&v214 + 1) = v10;
        *(_QWORD *)&v213 = 0x8000000000000002LL;
        v20 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v20 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v21 = v213;
        v20[1] = v214;
        *v20 = v21;
        v176 = v20;
        v177 = &off_28EB70;
        _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
        v22 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v23 = *(_QWORD *)(v22 + 8);
        v24 = *(_QWORD *)(v22 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v23, 1LL, 1LL, v24);
        v221[0] = v23;
        v221[1] = v24;
        v229[0] = v221;
        v229[1] = <&T as core::fmt::Display>::fmt;
        v229[2] = &v176;
        v229[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v237[0] = &unk_28ED90;
        v237[1] = 3LL;
        v237[4] = 0LL;
        v237[2] = v229;
        v237[3] = 2LL;
        std::io::stdio::_eprint(v237);
        v25 = v177;
        if ( *v177 )
        {
          ((void (__fastcall *)(_OWORD *))*v177)(v176);
          v25 = v177;
        }
        v26 = v25[1];
        if ( v26 )
          _rust_dealloc(v176, v26, v25[2]);
        goto LABEL_8;
      }
LABEL_236:
      alloc::raw_vec::handle_error(v12, *v200);
    }
    len[0] = 0x1B600000000LL;
    WORD2(len[1]) = 0;
    LODWORD(len[1]) = 1;
    std::fs::OpenOptions::_open(fd, len, v9, v10);
    if ( fd[0] )
    {
      std::io::error::repr_bitpacked::decode_repr(len, *(_QWORD *)&fd[2]);
      if ( LOBYTE(len[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&len[1]);
LABEL_50:
      v183 = 0LL;
      goto LABEL_64;
    }
    v41 = fd[1];
    if ( fd[1] == -1 )
      goto LABEL_50;
    LODWORD(v205) = fd[1];
    std::fs::File::metadata(len, &v205);
    if ( len[0] == 2 )
    {
      v42 = len[1];
    }
    else
    {
      memmap2::os::MmapInner::new(&v151, v167, 1LL, 1LL, v41, 0LL);
      v42 = (size_t)v152;
      if ( !v151 )
      {
        v184 = v152;
        v185 = v153;
        v45 = 1LL;
        goto LABEL_63;
      }
    }
    std::io::error::repr_bitpacked::decode_repr(len, v42);
    if ( LOBYTE(len[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&len[1]);
    v45 = 0LL;
LABEL_63:
    v183 = v45;
    std::sys::pal::unix::fs::debug_assert_fd_is_open(v41);
    close(v41);
    if ( v183 == 1 )
    {
      v43 = (unsigned __int64)v184;
      v44 = v185;
      goto LABEL_76;
    }
LABEL_64:
    v46 = v8;
    std::fs::read::inner(&v224, v9, v10);
    v8 = v224;
    if ( v224 != 0x8000000000000000LL )
      break;
    v6 = v225;
    v203[2] = v225;
    v230[0] = 0LL;
    v230[1] = v9;
    v230[2] = v10;
    v231 = 1;
    v222[0] = v230;
    v222[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    len[0] = (size_t)&anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    len[1] = 1LL;
    dest[0] = v222;
    dest[1] = &dword_0 + 1;
    v160 = 0LL;
    alloc::fmt::format::format_inner(&v238, len);
    v197 = v238;
    v198 = v239;
    <alloc::string::String as core::clone::Clone>::clone(&v240, &v197);
    v8 = v46;
    *(_QWORD *)&v216 = v241;
    v215 = v240;
    *((_QWORD *)&v216 + 1) = v6;
    v48 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v48 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v49 = v215;
    v48[1] = v216;
    *v48 = v49;
    v178 = v48;
    v179 = &off_28EB70;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    v50 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v51 = *(_QWORD *)(v50 + 8);
    v52 = *(_QWORD *)(v50 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v51, 1LL, 1LL, v52);
    v223[0] = v51;
    v223[1] = v52;
    v232[0] = v223;
    v232[1] = <&T as core::fmt::Display>::fmt;
    v232[2] = &v178;
    v232[3] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v242[0] = &unk_28ED90;
    v242[1] = 3LL;
    v242[4] = 0LL;
    v242[2] = v232;
    v242[3] = 2LL;
    std::io::stdio::_eprint(v242);
    v54 = v179;
    v55 = *v179;
    if ( *v179 )
    {
      ((void (__fastcall *)(_OWORD *))v55)(v178);
      v54 = v179;
    }
    v56 = v54[1];
    if ( v56 )
      _rust_dealloc(v178, v56, v54[2]);
    if ( (_QWORD)v197 )
      _rust_dealloc(*((_QWORD *)&v197 + 1), v197, 1LL);
    if ( v183 )
    {
      memmap2::os::MmapInner::as_mmap_params(len, &v184, v53, v55);
      goto LABEL_7;
    }
LABEL_8:
    v7 = v196 + 16;
    if ( v196 + 16 == v195 )
      goto LABEL_218;
  }
  src = v225;
  if ( !v225 )
    goto LABEL_253;
  n = v226;
  if ( v226 < 0 )
    goto LABEL_253;
  if ( v183 == 1 )
  {
    memmap2::os::MmapInner::as_mmap_params(len, &v184, v47, v225);
    munmap((void *)len[0], len[1]);
  }
  v139 = 0;
  v138 = 1;
  v143 = src;
LABEL_79:
  v145 = v8;
  if ( !v169.m256i_i64[0] )
  {
    *(_QWORD *)&v186 = std::io::stdio::stdout();
    v93 = std::io::stdio::Stdout::lock(&v186);
    v205 = v93;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(fd, 0x2000LL, 0LL);
    v95 = v150;
    i = v194;
    if ( *(_QWORD *)fd )
      alloc::raw_vec::handle_error(*(_QWORD *)&fd[2], v147);
    v151 = *(_QWORD *)&fd[2];
    v152 = v147;
    v153 = 0LL;
    LOBYTE(v154) = 0;
    v155 = v93;
    *(_QWORD *)fd = 0LL;
    *(_QWORD *)&fd[2] = a5;
    v147 = (char *)v150;
    if ( v150 >= 2 )
    {
      if ( a5 )
      {
        if ( v150 >= 4 )
        {
          v105 = v201;
          v6 = 0LL;
          v104 = a5;
          do
          {
            v106 = v6 | (1LL << *v104) | (1LL << v104[1]) | (1LL << v104[2]);
            v107 = v104[3];
            v104 += 4;
            v6 = v106 | (1LL << v107);
            v105 -= 4LL;
          }
          while ( v105 );
          i = v194;
        }
        else
        {
          v6 = 0LL;
          v104 = a5;
        }
        if ( i )
        {
          v108 = i;
          for ( i = 0LL; i != v108; ++i )
            v6 |= 1LL << v104[i];
        }
      }
      else
      {
        v6 = 0LL;
      }
      v109 = memchr::arch::all::twoway::Suffix::reverse(a5, v150, 0LL, i);
      v111 = v110;
      v9 = (const void *)memchr::arch::all::twoway::Suffix::reverse(a5, v95, 1LL, v112);
      if ( v109 < (unsigned __int64)v9 )
      {
        v9 = (const void *)v109;
        v113 = v111;
      }
      v97 = (void *)memchr::arch::all::twoway::Shift::reverse(a5, v95, v113, v9);
      i = v94 >> 8;
      if ( !v140 )
        goto LABEL_146;
    }
    else
    {
      if ( !v150 )
      {
        v98 = 0;
        v99 = 1;
        v97 = &dword_0 + 2;
LABEL_178:
        dest[0] = v147;
        *(_OWORD *)len = *(_OWORD *)fd;
        dest[1] = v97;
        LOBYTE(v160) = v94;
        *(_DWORD *)((char *)&v160 + 1) = i;
        HIBYTE(v160) = BYTE6(i);
        *(_WORD *)((char *)&v160 + 5) = WORD2(i);
        v161 = v6;
        v162 = v9;
        v163 = v98;
        v164 = v99;
        v165 = 1LL;
        v114 = n;
        v166 = n;
        v167 = src;
        v168 = n;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !<memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(len) )
            {
              if ( len[0] && dest[0] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&dest[1], len[1], 1LL);
              if ( v114 > n )
                core::slice::index::slice_end_index_len_fail(v114, n, &off_28ED30);
              v124 = v153;
              if ( v151 - v153 <= v114 )
              {
                v89 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v151, src, v114);
                if ( !v89 )
                  goto LABEL_207;
              }
              else
              {
                if ( !v152 )
                  goto LABEL_233;
                v125 = &v152[v153];
                v126 = (size_t)&v152[v153 - src];
                if ( (unsigned __int64)&v152[v153] <= src )
                  v126 = src - (_QWORD)v125;
                if ( v126 < v114 )
                  goto LABEL_233;
                memcpy(v125, (const void *)src, v114);
                v153 = v114 + v124;
LABEL_207:
                v89 = 0LL;
              }
LABEL_211:
              core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v151);
              goto LABEL_212;
            }
            v118 = v116;
            if ( (_BYTE)v157 )
              break;
            v118 = v95 + v116;
            if ( __CFADD__(v95, v116) )
              core::panicking::panic_const::panic_const_add_overflow(&off_28ED48);
            v119 = v114 - v118;
            v117 = n;
            if ( v114 < v118 )
              goto LABEL_241;
            if ( v114 > n )
              goto LABEL_244;
            v120 = (_BYTE *)(src + v118);
            v121 = v153;
            if ( v151 - v153 > v119 )
              goto LABEL_190;
LABEL_179:
            v115 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v151, v120, v114 - v118);
            v95 = v150;
            v89 = v115;
            v114 = v118;
            if ( v115 )
            {
              if ( len[0] && dest[0] )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&dest[1], len[1], 1LL);
              goto LABEL_211;
            }
          }
          v119 = v114 - v116;
          if ( v114 < v116 )
          {
            v171 = &off_28ED78;
LABEL_241:
            core::slice::index::slice_index_order_fail(v118, v114, v171, v117);
          }
          if ( v114 > n )
          {
            v171 = &off_28ED78;
LABEL_244:
            core::slice::index::slice_end_index_len_fail(v114, n, v171);
          }
          v120 = (_BYTE *)(src + v116);
          v121 = v153;
          if ( v151 - v153 <= v119 )
            goto LABEL_179;
LABEL_190:
          if ( !v152 )
            goto LABEL_233;
          v122 = &v152[v121];
          v123 = &v152[v121] - v120;
          if ( &v152[v121] <= v120 )
            v123 = v120 - v122;
          if ( v123 < v119 )
            goto LABEL_233;
          memcpy(v122, v120, v119);
          v153 = v119 + v121;
          v114 = v118;
          v95 = v150;
        }
      }
      LOBYTE(v94) = *a5;
      v97 = &dword_0 + 3;
      if ( !v140 )
      {
LABEL_146:
        v98 = (unsigned __int8)a5[v95 - 1];
        v99 = 1;
        v100 = 1LL;
        for ( j = v202; ; --j )
        {
          if ( v100 )
          {
            if ( j < a5 )
              core::panicking::panic_nounwind(aUnsafePrecondi_7, 71LL);
            if ( j - a5 <= v100 )
              goto LABEL_178;
            j -= v100;
            v100 = 0LL;
          }
          else if ( j == a5 )
          {
            goto LABEL_178;
          }
          v102 = (unsigned __int8)*(j - 1);
          v98 = v102 + 2 * v98;
          v99 *= 2;
        }
      }
    }
    v98 = 0;
    v99 = 1;
    goto LABEL_178;
  }
  v204 = std::io::stdio::stdout();
  v57 = std::io::stdio::Stdout::lock(&v204);
  v151 = v57;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(len, 0x2000LL, 0LL);
  v58 = n;
  if ( len[0] )
    alloc::raw_vec::handle_error(len[1], dest[0]);
  *(_QWORD *)fd = len[1];
  *(void **)&fd[2] = dest[0];
  v147 = 0LL;
  v148 = 0;
  v149 = v57;
  v59 = n;
  v60 = n;
  if ( !n )
    goto LABEL_135;
  v199 = -(__int64)src;
  v61 = n;
  while ( 2 )
  {
    v188 = v58;
    v60 = v61;
    if ( v61 > v59 )
      goto LABEL_252;
    --v61;
    v62 = v60 - 1;
    while ( 2 )
    {
      LODWORD(v151) = 0;
      v152 = (char *)src;
      v153 = v60;
      v154 = v61;
      v155 = v60;
      v156 = 0;
      v63 = *(_QWORD *)(*(_QWORD *)(v169.m256i_i64[0] + 32) + 168LL);
      v64 = v62-- == 0;
      if ( v64 )
      {
        if ( (v63 & 7) != 0 )
          core::panicking::panic_misaligned_pointer_dereference(8LL, v63, &off_28EAF0);
        break;
      }
      if ( (v63 & 7) != 0 )
        core::panicking::panic_misaligned_pointer_dereference(8LL, v63, &off_28EB08);
      if ( (*(_BYTE *)(v63 + 60) & 1) != 0 )
      {
LABEL_85:
        v61 = v62;
        if ( v62 == -1LL )
        {
          v60 = v188;
          v59 = n;
          goto LABEL_135;
        }
        continue;
      }
      break;
    }
    if ( *(_QWORD *)v63 )
    {
      v65 = 0LL;
      if ( v60 >= v61 )
        v65 = v60 - v61;
      if ( v65 < *(_QWORD *)(v63 + 8)
        || (*(_BYTE *)(v63 + 60) & 1) != 0
        && (*(_BYTE *)(v63 + 64) & 2) != 0
        && *(_QWORD *)(v63 + 16)
        && v65 > *(_QWORD *)(v63 + 24) )
      {
        goto LABEL_85;
      }
    }
    v66 = (size_t *)v169.m256i_i64[1];
    if ( std::thread::local::LocalKey<T>::try_with(&anon_fe9d1cf8fd7ac9e4a312d14ad42d0810_5_llvm_7710048280991797506) )
      core::result::unwrap_failed(
        anon_03522450585ae836116edbf29800e378_5_llvm_5073154966127019408,
        70LL,
        len,
        &anon_aa544b4575c241ebcfed66846f2ea1f4_20_llvm_1798200679842195478,
        &anon_03522450585ae836116edbf29800e378_7_llvm_5073154966127019408);
    v68 = v67;
    v6 = (__int64)(v66 + 5);
    v69 = core::sync::atomic::atomic_load(v66 + 5, 2LL);
    if ( v68 == v69 )
    {
      v70 = v66 + 5;
      core::sync::atomic::atomic_store(v66 + 5, 1LL, 1LL);
      dest[0] = v66;
      len[0] = 1LL;
      len[1] = v68;
      LOBYTE(dest[1]) = 0;
    }
    else
    {
      v70 = len;
      regex_automata::util::pool::inner::Pool<T,F>::get_slow(len, v66, v68, v69);
    }
    v187 = *(_OWORD *)dest;
    v186 = *(_OWORD *)len;
    v71 = *(_QWORD *)(v169.m256i_i64[0] + 16);
    v72 = *(_QWORD *)(v169.m256i_i64[0] + 24);
    v73 = *(_QWORD *)(v72 + 16);
    if ( len[0] )
    {
      v208 = *((_QWORD *)&v186 + 1);
      if ( *((_QWORD *)&v186 + 1) == 2LL )
      {
        len[0] = 0LL;
        core::panicking::assert_failed(
          1LL,
          &regex_automata::util::pool::inner::THREAD_ID_DROPPED,
          &v208,
          len,
          &anon_950cfcae45c35517223fb4df16fabba4_430_llvm_13970589784840883217);
      }
      if ( *(_QWORD *)(v187 + 48) == 3LL )
        core::hint::unreachable_unchecked::precondition_check(v70, v73, v187, v71);
      v74 = v187 + 48;
    }
    else
    {
      v74 = *((_QWORD *)&v186 + 1);
    }
    (*(void (__fastcall **)(__int64 *, unsigned __int64, __int64, __int64 *))(v72 + 104))(
      &v205,
      v71 + ((v73 - 1) & 0xFFFFFFFFFFFFFFF0LL) + 16,
      v74,
      &v151);
    *(_OWORD *)dest = v187;
    *(_OWORD *)len = v186;
    regex_automata::util::pool::inner::PoolGuard<T,F>::put(len);
    if ( !v205 )
      goto LABEL_85;
    v76 = v207 - v206;
    if ( v207 < v206 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_28ECD0);
    v77 = v188;
    if ( (_BYTE)v157 )
    {
      v78 = v188 - v61;
      if ( v188 >= v61 )
      {
        if ( v188 <= n )
        {
          v79 = (char *)(src + v61);
          v80 = v147;
          if ( *(_QWORD *)fd - (_QWORD)v147 > v78 )
          {
            if ( *(_QWORD *)&fd[2] )
            {
              v81 = &v147[*(_QWORD *)&fd[2]];
              v82 = &v147[*(_QWORD *)&fd[2] + v199 - v61];
              if ( &v147[*(_QWORD *)&fd[2]] <= v79 )
                v82 = (char *)(v61 + src - (_QWORD)v81);
              if ( (unsigned __int64)v82 >= v78 )
              {
                memcpy(v81, v79, v78);
                v83 = &v80[v77 - v61];
                v60 = v61;
                goto LABEL_128;
              }
            }
LABEL_233:
            core::panicking::panic_nounwind(aUnsafePrecondi_5, 166LL);
          }
          v89 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v79, v78);
          v60 = v61;
LABEL_131:
          if ( !v89 )
            goto LABEL_132;
          goto LABEL_156;
        }
        v60 = v188;
        v136 = &off_28ED18;
LABEL_251:
        v170 = v136;
LABEL_252:
        core::slice::index::slice_end_index_len_fail(v60, n, v170);
      }
      v60 = v61;
      v193 = &off_28ED18;
LABEL_263:
      core::slice::index::slice_index_order_fail(v60, v188, v193, v75);
    }
    v64 = __CFADD__(v61, v76);
    v60 = v61 + v76;
    if ( v64 )
      core::panicking::panic_const::panic_const_add_overflow(&off_28ECE8);
    v84 = v188 - v60;
    if ( v188 < v60 )
      goto LABEL_263;
    if ( v188 > n )
    {
      v60 = v188;
      v136 = &off_28ED00;
      goto LABEL_251;
    }
    v85 = (_BYTE *)(src + v60);
    v86 = v147;
    if ( *(_QWORD *)fd - (_QWORD)v147 <= v84 )
    {
      v89 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, v85, v84);
      goto LABEL_131;
    }
    if ( !*(_QWORD *)&fd[2] )
      goto LABEL_233;
    v87 = &v147[*(_QWORD *)&fd[2]];
    v88 = &v147[*(_QWORD *)&fd[2]] - v85;
    if ( &v147[*(_QWORD *)&fd[2]] <= v85 )
      v88 = v85 - v87;
    if ( v88 < v84 )
      goto LABEL_233;
    memcpy(v87, v85, v84);
    v83 = &v86[v84];
LABEL_128:
    v147 = v83;
LABEL_132:
    v58 = v60;
    v59 = n;
    if ( v61 )
      continue;
    break;
  }
LABEL_135:
  if ( v60 > v59 )
  {
    v136 = &off_28ECA0;
    goto LABEL_251;
  }
  v90 = v147;
  if ( *(_QWORD *)fd - (_QWORD)v147 <= v60 )
  {
    v89 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(fd, src, v60);
    if ( v89 )
      goto LABEL_156;
  }
  else
  {
    if ( !*(_QWORD *)&fd[2] )
      goto LABEL_233;
    v91 = &v147[*(_QWORD *)&fd[2]];
    v92 = (size_t)&v147[*(_QWORD *)&fd[2] - src];
    if ( (unsigned __int64)&v147[*(_QWORD *)&fd[2]] <= src )
      v92 = src - (_QWORD)v91;
    if ( v92 < v60 )
      goto LABEL_233;
    memcpy(v91, (const void *)src, v60);
    v147 = &v90[v60];
  }
  v89 = 0LL;
LABEL_156:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(fd);
LABEL_212:
  v8 = v145;
  if ( !v89 )
  {
    v127 = v139;
    LOBYTE(v127) = (v145 == 0) | v139;
    if ( (_BYTE)v127 != 1 )
      _rust_dealloc(v143, v145, 1LL);
    if ( !v138 )
    {
      memmap2::os::MmapInner::as_mmap_params(len, v192, v103, v127);
LABEL_7:
      munmap((void *)len[0], len[1]);
    }
    goto LABEL_8;
  }
  *((_QWORD *)&v233 + 1) = v89;
  *(_QWORD *)&v233 = 0x8000000000000004LL;
  v132 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v132 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v128 = v132;
  v134 = v233;
  v132[1] = v234;
  *v132 = v134;
  v135 = v139;
  LOBYTE(v135) = (v145 == 0) | v139;
  if ( (_BYTE)v135 != 1 )
    _rust_dealloc(v143, v145, 1LL);
  if ( !v138 )
  {
    memmap2::os::MmapInner::as_mmap_params(len, v192, v133, v135);
    munmap((void *)len[0], len[1]);
  }
  if ( v169.m256i_i64[0] )
  {
    core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v169);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)v169.m256i_i64[2]) )
      alloc::sync::Arc<T,A>::drop_slow(&v169.m256i_u64[2]);
  }
  return v128;
}
