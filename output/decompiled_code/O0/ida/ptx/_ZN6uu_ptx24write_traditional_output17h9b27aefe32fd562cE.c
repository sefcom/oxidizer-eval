__int64 __fastcall uu_ptx::write_traditional_output(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // r15
  __int64 (__fastcall **v9)(); // r14
  __int64 v10; // r15
  __int64 (__fastcall **v11)(); // r14
  __int64 *v12; // rax
  double v13; // rax
  __m128 v14; // xmm0
  double v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __int64 v23; // r15
  void *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(); // rbx
  void **v28; // rbp
  __int64 v29; // rax
  size_t v30; // rdx
  const void *v31; // r13
  void *v32; // rbx
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rcx
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rbp
  __int64 v43; // r14
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // r14
  _QWORD *v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // r15
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // r15
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r14
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r14
  bool v65; // cf
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r15
  unsigned __int64 v70; // rdi
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // r14
  __int64 v74; // rbp
  __int64 v75; // rsi
  void *v76; // rdi
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // r15
  unsigned __int64 v82; // rdi
  __int64 v83; // r13
  __int64 v84; // rbp
  __int64 v85; // r12
  __int64 v86; // r14
  __int64 v87; // rbx
  __int64 v88; // rax
  _BYTE *v89; // rax
  char **v91; // rax
  unsigned __int64 v92; // rbp
  unsigned __int64 v93; // rbp
  char v94; // [rsp+17h] [rbp-431h] BYREF
  _QWORD *v95; // [rsp+18h] [rbp-430h]
  unsigned __int64 v96; // [rsp+20h] [rbp-428h]
  __int64 v97; // [rsp+28h] [rbp-420h]
  void *v98; // [rsp+30h] [rbp-418h]
  void *v99; // [rsp+38h] [rbp-410h]
  _QWORD *v100; // [rsp+40h] [rbp-408h]
  __int64 v101; // [rsp+48h] [rbp-400h]
  size_t n; // [rsp+50h] [rbp-3F8h]
  void *v103; // [rsp+58h] [rbp-3F0h]
  void *v104; // [rsp+60h] [rbp-3E8h]
  char **v105; // [rsp+68h] [rbp-3E0h]
  __int128 v106; // [rsp+70h] [rbp-3D8h] BYREF
  __int64 v107; // [rsp+80h] [rbp-3C8h]
  __int128 v108; // [rsp+88h] [rbp-3C0h] BYREF
  void *dest[2]; // [rsp+98h] [rbp-3B0h]
  __int128 v110; // [rsp+A8h] [rbp-3A0h]
  void *v111; // [rsp+B8h] [rbp-390h]
  unsigned __int64 v112; // [rsp+C0h] [rbp-388h]
  __int64 v113; // [rsp+C8h] [rbp-380h]
  void *v114; // [rsp+D0h] [rbp-378h]
  __int64 v115; // [rsp+D8h] [rbp-370h]
  __int64 v116; // [rsp+E0h] [rbp-368h]
  unsigned __int64 v117; // [rsp+F0h] [rbp-358h]
  char **v118; // [rsp+F8h] [rbp-350h]
  __int128 v119; // [rsp+100h] [rbp-348h] BYREF
  __int128 v120; // [rsp+110h] [rbp-338h]
  __int128 v121; // [rsp+120h] [rbp-328h]
  __int64 *v122; // [rsp+130h] [rbp-318h]
  __int64 (__fastcall *v123)(); // [rsp+138h] [rbp-310h]
  __int64 *v124; // [rsp+140h] [rbp-308h]
  __int64 (__fastcall *v125)(); // [rsp+148h] [rbp-300h]
  __int64 v126; // [rsp+150h] [rbp-2F8h]
  __int64 v127; // [rsp+158h] [rbp-2F0h] BYREF
  __int64 v128; // [rsp+160h] [rbp-2E8h]
  __int64 v129; // [rsp+170h] [rbp-2D8h] BYREF
  __int64 v130; // [rsp+178h] [rbp-2D0h]
  __int64 v131; // [rsp+188h] [rbp-2C0h] BYREF
  __int64 v132; // [rsp+190h] [rbp-2B8h]
  __int64 v133; // [rsp+1A0h] [rbp-2A8h] BYREF
  __int64 v134; // [rsp+1A8h] [rbp-2A0h]
  __int64 v135; // [rsp+1B8h] [rbp-290h] BYREF
  __int64 v136; // [rsp+1C0h] [rbp-288h]
  __int128 v137; // [rsp+1D0h] [rbp-278h] BYREF
  __int64 v138; // [rsp+1E0h] [rbp-268h]
  __m256i v139; // [rsp+1F0h] [rbp-258h] BYREF
  char **v140; // [rsp+218h] [rbp-230h] BYREF
  __int64 (__fastcall *v141)(); // [rsp+220h] [rbp-228h]
  void **v142; // [rsp+228h] [rbp-220h]
  __int64 (__fastcall *v143)(); // [rsp+230h] [rbp-218h]
  __int64 v144; // [rsp+238h] [rbp-210h]
  __int64 v145; // [rsp+248h] [rbp-200h] BYREF
  __int64 v146; // [rsp+250h] [rbp-1F8h]
  char **v147; // [rsp+260h] [rbp-1E8h]
  char **v148; // [rsp+268h] [rbp-1E0h]
  char **v149; // [rsp+270h] [rbp-1D8h]
  char **v150; // [rsp+278h] [rbp-1D0h]
  void *v151; // [rsp+280h] [rbp-1C8h]
  _QWORD *v152; // [rsp+288h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v153)(); // [rsp+290h] [rbp-1B8h]
  __int64 *v154; // [rsp+298h] [rbp-1B0h] BYREF
  __int64 (__fastcall *v155)(); // [rsp+2A0h] [rbp-1A8h]
  char **v156; // [rsp+2A8h] [rbp-1A0h] BYREF
  __int64 v157; // [rsp+2B0h] [rbp-198h]
  __int128 *v158; // [rsp+2B8h] [rbp-190h]
  __int64 v159; // [rsp+2C0h] [rbp-188h]
  __int64 v160; // [rsp+2C8h] [rbp-180h]
  void *v161; // [rsp+2D8h] [rbp-170h] BYREF
  __int64 v162; // [rsp+2E0h] [rbp-168h]
  _QWORD **v163; // [rsp+2E8h] [rbp-160h]
  __int64 v164; // [rsp+2F0h] [rbp-158h]
  __int64 v165; // [rsp+2F8h] [rbp-150h]
  __int64 v166; // [rsp+308h] [rbp-140h]
  _DWORD v167[2]; // [rsp+310h] [rbp-138h] BYREF
  __int64 v168; // [rsp+318h] [rbp-130h]
  _QWORD v169[3]; // [rsp+320h] [rbp-128h] BYREF
  char v170; // [rsp+338h] [rbp-110h]
  __int64 *v171; // [rsp+340h] [rbp-108h]
  __int64 (__fastcall **v172)(); // [rsp+348h] [rbp-100h]
  __m256i v173; // [rsp+350h] [rbp-F8h] BYREF
  _QWORD v174[2]; // [rsp+370h] [rbp-D8h] BYREF
  __int128 v175; // [rsp+380h] [rbp-C8h] BYREF
  __int64 v176; // [rsp+390h] [rbp-B8h]
  _QWORD v177[3]; // [rsp+3A0h] [rbp-A8h] BYREF
  double v178[4]; // [rsp+3B8h] [rbp-90h] BYREF
  __m128 v179; // [rsp+3D8h] [rbp-70h]
  _QWORD v180[12]; // [rsp+3E8h] [rbp-60h] BYREF

  v126 = a2;
  v100 = a1;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, asc_62A99, 1LL) )
  {
    v6 = std::io::stdio::stdout();
    v7 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v8 = v7;
    *v7 = v6;
    v9 = (__int64 (__fastcall **)())&unk_2AB1D8;
  }
  else
  {
    *(_QWORD *)&v108 = 0x1B600000000LL;
    DWORD2(v108) = 16777472;
    WORD6(v108) = 1;
    std::fs::OpenOptions::_open(v167, &v108);
    if ( v167[0] )
    {
      v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v168);
      v11 = &anon_397063f1f014473d61d2154b9752ab14_17_llvm_15845615741859781558;
      if ( v10 )
        return v10;
    }
    else
    {
      LODWORD(v11) = v167[1];
    }
    v12 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v8 = v12;
    if ( !v12 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v12 = (_DWORD)v11;
    v9 = &off_2AB188;
  }
  *(_QWORD *)&v119 = v8;
  *((_QWORD *)&v119 + 1) = v9;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v108, 0x2000LL, 0LL);
  if ( (_QWORD)v108 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v108 + 1), dest[0]);
  v169[0] = *((_QWORD *)&v108 + 1);
  v169[1] = dest[0];
  v169[2] = 0LL;
  v170 = 0;
  v171 = v8;
  v172 = v9;
  if ( !v100[7] || (__int64)v100[8] < 0 )
LABEL_204:
    core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
  regex::regex::string::Regex::new(&v173);
  if ( !v173.m256i_i64[0] )
  {
    v176 = v173.m256i_i64[3];
    v175 = *(_OWORD *)&v173.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v175, &off_2AA8C0, &off_2AB228);
  }
  v139 = v173;
  v13 = *(double *)a3;
  if ( *(_QWORD *)a3 )
  {
    v14 = *(__m128 *)(a3 + 8);
    *(_QWORD *)&v15 = 1LL;
  }
  else
  {
    v14 = 0LL;
    v15 = 0.0;
  }
  *(double *)v177 = v15;
  v177[1] = 0LL;
  *(double *)&v177[2] = v13;
  _mm_storel_ps(v178, v14);
  v178[1] = v15;
  v178[2] = 0.0;
  v178[3] = v13;
  v179 = v14;
  v166 = v126 + 32;
  v117 = 0LL;
  v150 = &off_2AB060;
  v148 = &off_2AB090;
  v118 = &off_2AB2A0;
  v149 = &off_2AAEF8;
  v147 = &off_2AAF28;
  while ( 1 )
  {
    v95 = (_QWORD *)<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v177);
    if ( !v95 )
      break;
    if ( !*(_QWORD *)(v126 + 24)
      || (v16 = core::hash::BuildHasher::hash_one(v166, v95 + 3),
          v17 = hashbrown::raw::RawTable<T,A>::find(v126, v16, v95 + 3),
          v18 = v17,
          v19 = v95,
          !v17) )
    {
      core::option::expect_failed(aMissingFileInF, 24LL, &off_2AB240);
    }
    v20 = *(_QWORD *)(v17 - 48);
    if ( !v20 || (v20 & 7) != 0 || (v21 = *(_QWORD *)(v18 - 40), v21 > 0x555555555555555LL) )
LABEL_206:
      core::panicking::panic_nounwind(anon_45c6b7f83f4af56e17bd9f6b0f063fe4_31_llvm_6024280175120751173, 162LL);
    v22 = v95[7];
    if ( v21 <= v22 )
      core::panicking::panic_bounds_check(v22, v21, &off_2AB258);
    v23 = *(_QWORD *)(v20 + 24 * v22 + 8);
    if ( !v23 )
      goto LABEL_204;
    v24 = *(void **)(v20 + 24 * v22 + 16);
    if ( (__int64)v24 < 0 )
      goto LABEL_204;
    if ( (*((_BYTE *)v100 + 89) & 1) != 0 )
    {
      v25 = v95[4];
      if ( !v25 )
        goto LABEL_204;
      v26 = v95[5];
      if ( v26 < 0 )
        goto LABEL_204;
      *(_QWORD *)&v119 = 0LL;
      *((_QWORD *)&v119 + 1) = v25;
      *(_QWORD *)&v120 = v26;
      BYTE8(v120) = 0;
      v161 = (void *)(v22 + 1);
      v140 = (char **)&v119;
      v141 = <os_display::Quoted as core::fmt::Display>::fmt;
      v142 = &v161;
      v143 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v108 = &unk_2AAC60;
      *((_QWORD *)&v108 + 1) = 2LL;
      dest[0] = &v140;
      dest[1] = &dword_0 + 2;
      *(_QWORD *)&v110 = 0LL;
      alloc::fmt::format::format_inner(&v156, &v108);
      v105 = v156;
      v101 = v157;
      n = (size_t)v158;
    }
    else
    {
      if ( (*((_BYTE *)v100 + 90) & 1) == 0 )
      {
        v101 = 1LL;
        v105 = 0LL;
        n = 0LL;
        goto LABEL_40;
      }
      *((_QWORD *)&v108 + 1) = *(_QWORD *)(v20 + 24 * v22 + 8);
      dest[0] = v24;
      dest[1] = 0LL;
      *(_QWORD *)&v110 = v24;
      LODWORD(v108) = 0;
      BYTE8(v110) = 0;
      regex_automata::util::search::Input::set_span(&v108, 0LL);
      v121 = v110;
      v120 = *(_OWORD *)dest;
      v119 = v108;
      regex_automata::meta::regex::Regex::search(&v140, &v139, &v119);
      if ( v140 )
      {
        v27 = v141;
        v28 = v142;
      }
      else
      {
        v27 = 0LL;
        v28 = 0LL;
      }
      v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v27,
              v28,
              v23,
              v24);
      n = v30;
      v31 = (const void *)v29;
      if ( !v29 )
        core::str::slice_error_fail(v23, v24, v27, v28, &off_2AAC48);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v108, n, 0LL);
      v105 = (char **)*((_QWORD *)&v108 + 1);
      if ( (_QWORD)v108 )
        alloc::raw_vec::handle_error(v105, dest[0]);
      v32 = dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(v31, dest[0], 1LL, 1LL, n);
      v101 = (__int64)v32;
      memcpy(v32, v31, n);
    }
    v19 = v95;
LABEL_40:
    v33 = *((unsigned __int8 *)v100 + 93);
    if ( v33 == 1 )
    {
      v44 = *(_QWORD *)(v18 - 48);
      if ( !v44 )
        goto LABEL_206;
      if ( (v44 & 7) != 0 )
        goto LABEL_206;
      v35 = *(_QWORD *)(v18 - 40);
      if ( v35 > 0x555555555555555LL )
        goto LABEL_206;
      v36 = v19[7];
      if ( v35 <= v36 )
      {
        v91 = &off_2AB270;
LABEL_222:
        v118 = v91;
LABEL_223:
        core::panicking::panic_bounds_check(v36, v35, v118);
      }
      v99 = *(void **)(v44 + 24 * v36 + 8);
      if ( !v99 )
        goto LABEL_204;
      v98 = *(void **)(v44 + 24 * v36 + 16);
      if ( (__int64)v98 < 0 )
        goto LABEL_204;
      v45 = *(_QWORD *)(v18 - 24);
      if ( !v45 )
        goto LABEL_204;
      if ( (v45 & 7) != 0 )
        goto LABEL_204;
      v35 = *(_QWORD *)(v18 - 16);
      if ( v35 > 0x555555555555555LL )
        goto LABEL_204;
      if ( v35 <= v36 )
      {
        v91 = &off_2AB288;
        goto LABEL_222;
      }
      v46 = *(_QWORD *)(v45 + 24 * v36 + 8);
      if ( !v46 || (v46 & 3) != 0 || (v47 = *(_QWORD *)(v45 + 24 * v36 + 16), v47 > 0x1FFFFFFFFFFFFFFFLL) )
LABEL_208:
        core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_34_llvm_11417008648433573330, 162LL);
      v96 = v47;
      if ( !v101 || (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_204;
      v97 = v46;
      *(_QWORD *)&v106 = 0LL;
      *((_QWORD *)&v106 + 1) = 1LL;
      v107 = 0LL;
      v152 = v100;
      v153 = <alloc::string::String as core::fmt::Display>::fmt;
      v161 = &off_2AB020;
      v162 = 1LL;
      v165 = 0LL;
      v163 = &v152;
      v164 = 1LL;
      if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v161) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AB030);
      v48 = v95[8];
      if ( (*((_BYTE *)v100 + 90) & 1) != 0 )
      {
        v53 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                0LL,
                v95[8],
                v99,
                v98);
        if ( !v53 )
          goto LABEL_216;
        v93 = v52;
        v54 = v95[8];
        core::str::pattern::StrSearcher::new(&v108, v53, v52, v101, n);
        do
          <core::str::pattern::StrSearcher as core::str::pattern::Searcher>::next(&v119, &v108);
        while ( !(_QWORD)v119 );
        if ( (_QWORD)v119 == 1LL )
        {
          v55 = *((_QWORD *)&v119 + 1);
          if ( *((_QWORD *)&v119 + 1) > v93 )
            goto LABEL_231;
        }
        else
        {
          v55 = v93;
        }
        v60 = v93 - v55;
        *(_QWORD *)&v108 = v53 + v55;
        *((_QWORD *)&v108 + 1) = v93 - v55;
        dest[0] = (void *)(v53 + v55);
        dest[1] = (void *)(v93 + v53);
        *(_QWORD *)&v110 = 0LL;
        do
          <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v119, &v108);
        while ( !(_QWORD)v119 );
        if ( (_QWORD)v119 == 1LL )
        {
          v61 = *((_QWORD *)&v119 + 1);
          if ( *((_QWORD *)&v119 + 1) > v60 )
            goto LABEL_229;
        }
        else
        {
          v61 = v60;
        }
        v64 = v60 - v61;
        v65 = v54 < v64;
        v66 = v54 - v64;
        if ( v65 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_2AB078);
        if ( v93 <= v66 )
          v93 = v66;
        if ( v93 > v96 )
          goto LABEL_232;
        v49 = v93 - v66;
        v50 = v97 + 4 * v66;
        v51 = v95;
        v48 = v95[8];
      }
      else
      {
        v49 = v95[8];
        v50 = v97;
        v51 = v95;
        if ( v48 > v96 )
        {
          v93 = v95[8];
          v148 = &off_2AB048;
LABEL_232:
          core::slice::index::slice_end_index_len_fail(v93, v96, v148);
        }
      }
      v67 = v51[9];
      v69 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v48,
              v67,
              v99,
              v98);
      if ( !v69 )
      {
        v117 = v48;
        v48 = v67;
        v150 = &off_2AB0A8;
LABEL_216:
        core::str::slice_error_fail(v99, v98, v117, v48, v150);
      }
      v70 = v95[9];
      if ( v96 < v70 )
        core::slice::index::slice_index_order_fail(v70, v96, &off_2AB0C0);
      v71 = v68;
      uu_ptx::get_output_chunks((__int64)&v108, v50, v49, v68, v97 + 4 * v70, v96 - v70, v100);
      if ( !*((_QWORD *)&v108 + 1) )
        goto LABEL_204;
      if ( (__int64)dest[0] < 0 )
        goto LABEL_204;
      v99 = (void *)v108;
      v98 = dest[1];
      v72 = *((_QWORD *)&v110 + 1);
      v95 = (_QWORD *)v110;
      v103 = v111;
      v96 = v112;
      v73 = v113;
      v104 = v114;
      v97 = v115;
      v74 = v116;
      v151 = (void *)*((_QWORD *)&v108 + 1);
      alloc::str::<impl str>::replace(&v127, *((_QWORD *)&v108 + 1), dest[0], 34LL, asc_62B2C, 2LL);
      if ( !v95 )
        goto LABEL_204;
      if ( v72 < 0 )
        goto LABEL_204;
      alloc::str::<impl str>::replace(&v129, v95, v72, 34LL, asc_62B2C, 2LL);
      alloc::str::<impl str>::replace(&v131, v69, v71, 34LL, asc_62B2C, 2LL);
      if ( !v96 )
        goto LABEL_204;
      if ( v73 < 0 )
        goto LABEL_204;
      alloc::str::<impl str>::replace(&v133, v96, v73, 34LL, asc_62B2C, 2LL);
      if ( !v97 || v74 < 0 )
        goto LABEL_204;
      alloc::str::<impl str>::replace(&v145, v97, v74, 34LL, asc_62B2C, 2LL);
      *(_QWORD *)&v119 = &v127;
      *((_QWORD *)&v119 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v120 = &v129;
      *((_QWORD *)&v120 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v121 = &v131;
      *((_QWORD *)&v121 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v122 = &v133;
      v123 = <alloc::string::String as core::fmt::Display>::fmt;
      v124 = &v145;
      v125 = <alloc::string::String as core::fmt::Display>::fmt;
      v156 = &off_2AB0D8;
      v157 = 6LL;
      v160 = 0LL;
      v158 = &v119;
      v159 = 5LL;
      if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v156) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AB138);
      if ( v145 )
        _rust_dealloc(v146, v145, 1LL);
      if ( v133 )
        _rust_dealloc(v134, v133, 1LL);
      if ( v131 )
        _rust_dealloc(v132, v131, 1LL);
      if ( v129 )
        _rust_dealloc(v130, v129, 1LL);
      if ( v127 )
        _rust_dealloc(v128, v127, 1LL);
      if ( (*((_BYTE *)v100 + 89) & 1) != 0 || (*((_BYTE *)v100 + 90) & 1) != 0 )
      {
        alloc::str::<impl str>::replace(&v135, v101, n, 34LL, asc_62B2C, 2LL);
        v154 = &v135;
        v155 = <alloc::string::String as core::fmt::Display>::fmt;
        v140 = &off_2AB150;
        v141 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v144 = 0LL;
        v142 = (void **)&v154;
        v143 = (__int64 (__fastcall *)())(&dword_0 + 1);
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v140) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AB170);
        if ( v135 )
          _rust_dealloc(v136, v135, 1LL);
      }
      v138 = v107;
      v137 = v106;
      if ( v104 )
        _rust_dealloc(v97, v104, 1LL);
      if ( v103 )
        _rust_dealloc(v96, v103, 1LL);
      if ( v98 )
        _rust_dealloc(v95, v98, 1LL);
      v75 = (__int64)v99;
      if ( v99 )
      {
        v76 = v151;
LABEL_184:
        _rust_dealloc(v76, v75, 1LL);
      }
    }
    else
    {
      if ( v33 != 2 )
      {
        v89 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        v10 = (__int64)v89;
        if ( !v89 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *v89 = 0;
        goto LABEL_198;
      }
      v34 = *(_QWORD *)(v18 - 48);
      if ( !v34 )
        goto LABEL_206;
      if ( (v34 & 7) != 0 )
        goto LABEL_206;
      v35 = *(_QWORD *)(v18 - 40);
      if ( v35 > 0x555555555555555LL )
        goto LABEL_206;
      v36 = v19[7];
      if ( v35 <= v36 )
        goto LABEL_223;
      v99 = *(void **)(v34 + 24 * v36 + 8);
      if ( !v99 )
        goto LABEL_204;
      v98 = *(void **)(v34 + 24 * v36 + 16);
      if ( (__int64)v98 < 0 )
        goto LABEL_204;
      v37 = *(_QWORD *)(v18 - 24);
      if ( !v37 )
        goto LABEL_204;
      if ( (v37 & 7) != 0 )
        goto LABEL_204;
      v35 = *(_QWORD *)(v18 - 16);
      if ( v35 > 0x555555555555555LL )
        goto LABEL_204;
      if ( v35 <= v36 )
      {
        v91 = &off_2AB2B8;
        goto LABEL_222;
      }
      v38 = *(_QWORD *)(v37 + 24 * v36 + 8);
      if ( !v38 )
        goto LABEL_208;
      if ( (v38 & 3) != 0 )
        goto LABEL_208;
      v39 = *(_QWORD *)(v37 + 24 * v36 + 16);
      if ( v39 > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_208;
      v97 = v38;
      v96 = v39;
      if ( !v101 || (n & 0x8000000000000000LL) != 0LL )
        goto LABEL_204;
      *(_QWORD *)&v106 = 0LL;
      *((_QWORD *)&v106 + 1) = 1LL;
      v107 = 0LL;
      v152 = v100;
      v153 = <alloc::string::String as core::fmt::Display>::fmt;
      v161 = &off_2AAEA8;
      v162 = 2LL;
      v165 = 0LL;
      v163 = &v152;
      v164 = 1LL;
      if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v161) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AAEC8);
      v40 = v95;
      v41 = v95[8];
      if ( (*((_BYTE *)v100 + 90) & 1) != 0 )
      {
        v57 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                0LL,
                v95[8],
                v99,
                v98);
        if ( !v57 )
          goto LABEL_219;
        v92 = v56;
        v58 = v95[8];
        core::str::pattern::StrSearcher::new(&v108, v57, v56, v101, n);
        do
          <core::str::pattern::StrSearcher as core::str::pattern::Searcher>::next(&v119, &v108);
        while ( !(_QWORD)v119 );
        if ( (_QWORD)v119 == 1LL )
        {
          v59 = *((_QWORD *)&v119 + 1);
          if ( *((_QWORD *)&v119 + 1) > v92 )
LABEL_231:
            core::panicking::panic_nounwind(anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_39_llvm_17209501424320820274, 102LL);
        }
        else
        {
          v59 = v92;
        }
        v62 = v92 - v59;
        *(_QWORD *)&v108 = v57 + v59;
        *((_QWORD *)&v108 + 1) = v92 - v59;
        dest[0] = (void *)(v57 + v59);
        dest[1] = (void *)(v92 + v57);
        *(_QWORD *)&v110 = 0LL;
        do
          <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v119, &v108);
        while ( !(_QWORD)v119 );
        if ( (_QWORD)v119 == 1LL )
        {
          v63 = *((_QWORD *)&v119 + 1);
          if ( *((_QWORD *)&v119 + 1) > v62 )
LABEL_229:
            core::panicking::panic_nounwind(anon_397063f1f014473d61d2154b9752ab14_26_llvm_15845615741859781558, 102LL);
        }
        else
        {
          v63 = v62;
        }
        v77 = v62 - v63;
        v65 = v58 < v77;
        v78 = v58 - v77;
        if ( v65 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_2AAF10);
        if ( v92 <= v78 )
          v92 = v78;
        if ( v92 > v96 )
          goto LABEL_230;
        v42 = v92 - v78;
        v43 = v97 + 4 * v78;
        v40 = v95;
        v41 = v95[8];
      }
      else
      {
        v42 = v95[8];
        v43 = v97;
        if ( v41 > v96 )
        {
          v92 = v95[8];
          v147 = &off_2AAEE0;
LABEL_230:
          core::slice::index::slice_end_index_len_fail(v92, v96, v147);
        }
      }
      v79 = v40[9];
      v81 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v41,
              v79,
              v99,
              v98);
      if ( !v81 )
      {
        v117 = v41;
        v41 = v79;
        v149 = &off_2AAF40;
LABEL_219:
        core::str::slice_error_fail(v99, v98, v117, v41, v149);
      }
      v82 = v95[9];
      if ( v96 < v82 )
        core::slice::index::slice_index_order_fail(v82, v96, &off_2AAF58);
      v83 = v80;
      uu_ptx::get_output_chunks((__int64)&v108, v43, v42, v80, v97 + 4 * v82, v96 - v82, v100);
      if ( !*((_QWORD *)&v108 + 1) )
        goto LABEL_204;
      if ( (__int64)dest[0] < 0 )
        goto LABEL_204;
      v97 = v108;
      v99 = dest[1];
      v84 = *((_QWORD *)&v110 + 1);
      v95 = (_QWORD *)v110;
      v98 = v111;
      v96 = v112;
      v85 = v113;
      v103 = v114;
      v86 = v115;
      v87 = v116;
      v104 = (void *)*((_QWORD *)&v108 + 1);
      uu_ptx::format_tex_field((__int64)&v127, *((__int64 *)&v108 + 1), (__int64)dest[0]);
      if ( !v95 )
        goto LABEL_204;
      if ( v84 < 0 )
        goto LABEL_204;
      uu_ptx::format_tex_field((__int64)&v129, (__int64)v95, v84);
      uu_ptx::format_tex_field((__int64)&v131, v81, v83);
      if ( !v96 )
        goto LABEL_204;
      if ( v85 < 0 )
        goto LABEL_204;
      uu_ptx::format_tex_field((__int64)&v133, v96, v85);
      if ( !v86 || v87 < 0 )
        goto LABEL_204;
      uu_ptx::format_tex_field((__int64)&v145, v86, v87);
      *(_QWORD *)&v119 = &v127;
      *((_QWORD *)&v119 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v120 = &v129;
      *((_QWORD *)&v120 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v121 = &v131;
      *((_QWORD *)&v121 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v122 = &v133;
      v123 = <alloc::string::String as core::fmt::Display>::fmt;
      v124 = &v145;
      v125 = <alloc::string::String as core::fmt::Display>::fmt;
      v156 = (char **)&off_2AAF70;
      v157 = 6LL;
      v160 = 0LL;
      v158 = &v119;
      v159 = 5LL;
      if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v156) )
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AAFD0);
      if ( v145 )
        _rust_dealloc(v146, v145, 1LL);
      if ( v133 )
        _rust_dealloc(v134, v133, 1LL);
      if ( v131 )
        _rust_dealloc(v132, v131, 1LL);
      if ( v129 )
        _rust_dealloc(v130, v129, 1LL);
      if ( v127 )
        _rust_dealloc(v128, v127, 1LL);
      if ( (*((_BYTE *)v100 + 89) & 1) != 0 || (*((_BYTE *)v100 + 90) & 1) != 0 )
      {
        uu_ptx::format_tex_field((__int64)&v135, v101, n);
        v154 = &v135;
        v155 = <alloc::string::String as core::fmt::Display>::fmt;
        v140 = (char **)&off_2AAFE8;
        v141 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v144 = 0LL;
        v142 = (void **)&v154;
        v143 = (__int64 (__fastcall *)())(&dword_0 + 1);
        if ( (unsigned __int8)<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v106, &v140) )
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v94, &unk_2AA8A0, &off_2AB008);
        if ( v135 )
          _rust_dealloc(v136, v135, 1LL);
      }
      v138 = v107;
      v137 = v106;
      if ( v103 )
        _rust_dealloc(v86, v103, 1LL);
      if ( v98 )
        _rust_dealloc(v96, v98, 1LL);
      if ( v99 )
        _rust_dealloc(v95, v99, 1LL);
      v75 = v97;
      if ( v97 )
      {
        v76 = v104;
        goto LABEL_184;
      }
    }
    v174[0] = &v137;
    v174[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v180[0] = &unk_2AB2D0;
    v180[1] = 2LL;
    v180[4] = 0LL;
    v180[2] = v174;
    v180[3] = 1LL;
    v88 = std::io::Write::write_fmt(v169, v180);
    if ( v88 )
    {
      v10 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v88);
      if ( v10 )
      {
        if ( (_QWORD)v137 )
          _rust_dealloc(*((_QWORD *)&v137 + 1), v137, 1LL);
LABEL_198:
        if ( v105 )
          _rust_dealloc(v101, v105, 1LL);
        core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v139);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v139.m256i_i64[2]) )
          alloc::sync::Arc<T,A>::drop_slow(&v139.m256i_u64[2]);
        goto LABEL_202;
      }
    }
    if ( (_QWORD)v137 )
      _rust_dealloc(*((_QWORD *)&v137 + 1), v137, 1LL);
    if ( v105 )
      _rust_dealloc(v101, v105, 1LL);
  }
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v139);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v139.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v139.m256i_u64[2]);
  v10 = 0LL;
LABEL_202:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v169);
  return v10;
}
