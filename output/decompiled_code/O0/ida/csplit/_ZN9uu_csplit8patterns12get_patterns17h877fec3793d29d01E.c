__int64 *__fastcall uu_csplit::patterns::get_patterns(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // r14
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  unsigned __int64 v39; // r12
  __int64 v40; // r14
  unsigned __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // r12
  __int64 v47; // r14
  unsigned __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rbx
  __int64 v53; // r14
  unsigned __int64 v54; // r15
  __int64 inner; // rax
  __int64 v56; // r14
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbp
  __int64 v63; // r14
  __int64 v64; // r15
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // r13
  __int64 *v70; // r14
  __int64 v71; // rdx
  __m256i *v72; // rax
  char v74; // [rsp+6h] [rbp-482h] BYREF
  char v75; // [rsp+7h] [rbp-481h] BYREF
  __int64 v76; // [rsp+8h] [rbp-480h]
  __int64 v77; // [rsp+10h] [rbp-478h] BYREF
  __int64 v78; // [rsp+18h] [rbp-470h]
  __int64 v79; // [rsp+20h] [rbp-468h]
  __int128 v80; // [rsp+28h] [rbp-460h] BYREF
  unsigned __int64 v81; // [rsp+38h] [rbp-450h]
  __int64 v82; // [rsp+40h] [rbp-448h]
  unsigned __int64 v83; // [rsp+48h] [rbp-440h]
  __int64 v84; // [rsp+50h] [rbp-438h]
  __int64 v85; // [rsp+58h] [rbp-430h]
  __int128 v86; // [rsp+60h] [rbp-428h] BYREF
  __int64 v87; // [rsp+70h] [rbp-418h] BYREF
  __int64 *v88; // [rsp+78h] [rbp-410h]
  __int128 v89; // [rsp+80h] [rbp-408h] BYREF
  __int128 v90; // [rsp+90h] [rbp-3F8h] BYREF
  __int128 v91; // [rsp+A0h] [rbp-3E8h]
  __int128 v92; // [rsp+B0h] [rbp-3D8h]
  __int64 v93; // [rsp+C0h] [rbp-3C8h]
  __m256i v94; // [rsp+D0h] [rbp-3B8h] BYREF
  __m256i v95; // [rsp+F0h] [rbp-398h] BYREF
  __int128 v96; // [rsp+110h] [rbp-378h]
  unsigned __int64 v97; // [rsp+120h] [rbp-368h]
  __int64 v98; // [rsp+128h] [rbp-360h]
  __int128 v99; // [rsp+130h] [rbp-358h] BYREF
  unsigned __int64 v100; // [rsp+140h] [rbp-348h]
  __int128 v101; // [rsp+150h] [rbp-338h]
  __int64 v102; // [rsp+160h] [rbp-328h]
  __int128 v103; // [rsp+170h] [rbp-318h] BYREF
  __int128 v104; // [rsp+180h] [rbp-308h] BYREF
  __int128 v105; // [rsp+190h] [rbp-2F8h]
  __int128 v106; // [rsp+1A0h] [rbp-2E8h]
  __int64 v107; // [rsp+1B0h] [rbp-2D8h]
  __int64 v108; // [rsp+1B8h] [rbp-2D0h]
  _BYTE v109[8]; // [rsp+1C0h] [rbp-2C8h] BYREF
  __int64 v110; // [rsp+1C8h] [rbp-2C0h]
  __int128 v111; // [rsp+1D0h] [rbp-2B8h] BYREF
  __int64 v112; // [rsp+1E0h] [rbp-2A8h]
  _BYTE v113[48]; // [rsp+1E8h] [rbp-2A0h] BYREF
  __int64 v114; // [rsp+218h] [rbp-270h]
  __int128 v115; // [rsp+220h] [rbp-268h] BYREF
  __int128 v116; // [rsp+230h] [rbp-258h] BYREF
  __int128 v117; // [rsp+240h] [rbp-248h]
  __int128 v118; // [rsp+250h] [rbp-238h]
  __int64 v119; // [rsp+260h] [rbp-228h]
  __int128 v120; // [rsp+270h] [rbp-218h] BYREF
  __int128 v121; // [rsp+280h] [rbp-208h]
  __int128 v122; // [rsp+290h] [rbp-1F8h]
  __int64 v123; // [rsp+2A0h] [rbp-1E8h]
  __m256i v124; // [rsp+2A8h] [rbp-1E0h] BYREF
  __m256i v125; // [rsp+2C8h] [rbp-1C0h] BYREF
  __m256i v126; // [rsp+2E8h] [rbp-1A0h] BYREF
  __m256i v127; // [rsp+308h] [rbp-180h] BYREF
  char v128[8]; // [rsp+328h] [rbp-160h] BYREF
  __int64 v129; // [rsp+330h] [rbp-158h]
  _BYTE v130[48]; // [rsp+338h] [rbp-150h]
  __int64 v131; // [rsp+368h] [rbp-120h]
  __int128 v132; // [rsp+370h] [rbp-118h] BYREF
  __int64 v133; // [rsp+380h] [rbp-108h]
  __int128 v134; // [rsp+390h] [rbp-F8h] BYREF
  __int64 v135; // [rsp+3A0h] [rbp-E8h]
  __m256i v136; // [rsp+3B0h] [rbp-D8h] BYREF
  __m256i v137; // [rsp+3D0h] [rbp-B8h] BYREF
  _OWORD v138[2]; // [rsp+3F8h] [rbp-90h] BYREF
  __int128 v139; // [rsp+418h] [rbp-70h]
  __int128 v140; // [rsp+428h] [rbp-60h]
  __int64 v141; // [rsp+438h] [rbp-50h]
  __int128 v142; // [rsp+440h] [rbp-48h] BYREF
  unsigned __int64 v143; // [rsp+450h] [rbp-38h]

  v88 = a1;
  if ( a3 )
  {
    if ( a3 > 0x249249249249249LL )
    {
      v5 = 0LL;
      goto LABEL_121;
    }
    v3 = 56 * a3;
    v5 = 8LL;
    v6 = _rust_alloc(56 * a3, 8LL);
    if ( !v6 )
LABEL_121:
      alloc::raw_vec::handle_error(v5, v3);
  }
  else
  {
    v6 = 8LL;
  }
  *(_QWORD *)&v80 = a3;
  *((_QWORD *)&v80 + 1) = v6;
  v81 = 0LL;
  regex::regex::string::Regex::new(&v124, aPUptoPSkiptoPO, 56LL);
  if ( !v124.m256i_i64[0] )
  {
    v135 = v124.m256i_i64[3];
    v134 = *(_OWORD *)&v124.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v134, &off_2A4D70, &off_2A4E40);
  }
  v94 = v124;
  regex::regex::string::Regex::new(&v125, aPTimesD, 23LL);
  if ( !v125.m256i_i64[0] )
  {
    v133 = v125.m256i_i64[3];
    v132 = *(_OWORD *)&v125.m256i_u64[1];
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v132, &off_2A4D70, &off_2A4E58);
  }
  v95 = v125;
  v85 = a2;
  v98 = a2 + 24 * a3;
  v7 = 0LL;
  while ( v7 )
  {
    v14 = v85;
    v15 = v84;
    if ( !v84 )
      goto LABEL_79;
LABEL_17:
    v7 = 1LL;
    if ( v14 == v98 )
    {
      v85 = v98;
LABEL_24:
      v84 = 0LL;
      goto LABEL_25;
    }
    v85 = v14 + 24;
    if ( !v14 )
      goto LABEL_24;
    v16 = *(_QWORD *)(v14 + 8);
    if ( !v16 )
      goto LABEL_116;
    v17 = *(_QWORD *)(v14 + 16);
    if ( v17 < 0 )
      goto LABEL_116;
    regex::regex::string::Regex::captures_at(v138, &v95, v16, v17, 0LL);
    if ( *(_QWORD *)&v138[0] != 2LL )
    {
      v119 = v141;
      v118 = v140;
      v117 = v139;
      v116 = v138[1];
      v115 = v138[0];
      if ( DWORD2(v139)
        && (v52 = HIDWORD(v117),
            v53 = *(_QWORD *)(v118 + 48),
            v54 = *(_QWORD *)(v118 + 56),
            core::slice::raw::from_raw_parts::precondition_check(v53, 48LL, 8LL, v54),
            v54 > v52)
        && v53
        && (inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(48 * v52 + v53, aTimes, 5LL)) != 0
        && (regex_automata::util::captures::Captures::get_group(&v77, &v116, *(unsigned int *)(inner + 16)), v77)
        && (v56 = *((_QWORD *)&v118 + 1)) != 0 )
      {
        v57 = v119;
        v58 = v78;
        v59 = v79;
        v60 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v78,
                v79,
                *((_QWORD *)&v118 + 1),
                v119);
        if ( !v60 )
          core::str::slice_error_fail(
            v56,
            v57,
            v58,
            v59,
            &anon_bb214e635f3e52e586c02a5eeb538d7c_34_llvm_3235605871402522358);
        core::num::<impl core::str::traits::FromStr for usize>::from_str(v109, v60);
        if ( (v109[0] & 1) != 0 )
        {
          v74 = v109[1];
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v74, &unk_2A4D90, &off_2A4E70);
        }
        v82 = v110 + 1;
        if ( v110 == -1 )
          core::panicking::panic_const::panic_const_add_overflow(&off_2A4E88);
        v61 = 1LL;
      }
      else
      {
        v61 = 0LL;
      }
      v76 = v61;
      core::ptr::drop_in_place<regex_automata::util::captures::Captures>(&v116);
      v84 = v14;
      v7 = 0LL;
      goto LABEL_26;
    }
    v84 = v14;
LABEL_25:
    v82 = 1LL;
    v76 = 1LL;
LABEL_26:
    v18 = *(_QWORD *)(v15 + 8);
    if ( !v18 )
      goto LABEL_116;
    v19 = *(_QWORD *)(v15 + 16);
    if ( v19 < 0 )
      goto LABEL_116;
    regex::regex::string::Regex::captures_at(&v103, &v94, v18, v19, 0LL);
    v108 = v103;
    if ( (_QWORD)v103 == 2LL )
    {
      v32 = *(_QWORD *)(v15 + 8);
      if ( !v32 || *(__int64 *)(v15 + 16) < 0 )
        goto LABEL_116;
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v128, v32);
      if ( (v128[0] & 1) != 0 )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v142, v15);
        v97 = v143;
        v96 = v142;
        if ( (_QWORD)v103 != 2LL )
          core::ptr::drop_in_place<regex_automata::util::captures::Captures>(&v104);
        goto LABEL_110;
      }
      *((_QWORD *)&v120 + 1) = v129;
      *(_QWORD *)&v121 = v76;
      *((_QWORD *)&v121 + 1) = v82;
      LODWORD(v120) = 0;
      v33 = v81;
      if ( v81 == (_QWORD)v80 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v80);
      v34 = *((_QWORD *)&v80 + 1);
      v35 = 56 * v33;
      v36 = v120;
      v37 = v121;
      v38 = v122;
      *(_QWORD *)(*((_QWORD *)&v80 + 1) + v35 + 48) = v123;
      *(_OWORD *)(v34 + v35 + 32) = v38;
      *(_OWORD *)(v34 + v35 + 16) = v37;
      *(_OWORD *)(v34 + v35) = v36;
      v81 = v33 + 1;
      if ( (_QWORD)v103 != 2LL )
        core::ptr::drop_in_place<regex_automata::util::captures::Captures>(&v104);
    }
    else
    {
      v93 = v107;
      v92 = v106;
      v91 = v105;
      v90 = v104;
      v89 = v103;
      if ( DWORD2(v105)
        && (v20 = HIDWORD(v91),
            v21 = *(_QWORD *)(v92 + 48),
            v22 = *(_QWORD *)(v92 + 56),
            core::slice::raw::from_raw_parts::precondition_check(v21, 48LL, 8LL, v22),
            v22 > v20)
        && v21
        && (v23 = hashbrown::map::HashMap<K,V,S,A>::get_inner(48 * v20 + v21, aOffset, 6LL)) != 0
        && (regex_automata::util::captures::Captures::get_group(&v77, &v90, *(unsigned int *)(v23 + 16)), v77)
        && (v24 = *((_QWORD *)&v92 + 1)) != 0 )
      {
        v25 = v93;
        v26 = v78;
        v27 = v79;
        v28 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v78,
                v79,
                *((_QWORD *)&v92 + 1),
                v93);
        if ( !v28 )
          goto LABEL_117;
        v30 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v28, v29);
        if ( (v30 & 1) != 0 )
        {
          v75 = BYTE1(v30);
          core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v75, &unk_2A4D90, &off_2A4EA0);
        }
        v31 = HIDWORD(v30);
      }
      else
      {
        v31 = 0LL;
      }
      v83 = v31;
      if ( DWORD2(v91) )
      {
        v39 = HIDWORD(v91);
        v40 = *(_QWORD *)(v92 + 48);
        v41 = *(_QWORD *)(v92 + 56);
        core::slice::raw::from_raw_parts::precondition_check(v40, 48LL, 8LL, v41);
        if ( v41 > v39 )
        {
          if ( v40 )
          {
            v42 = hashbrown::map::HashMap<K,V,S,A>::get_inner(48 * v39 + v40, aUpto, 4LL);
            if ( v42 )
            {
              regex_automata::util::captures::Captures::get_group(&v77, &v90, *(unsigned int *)(v42 + 16));
              if ( v77 )
              {
                v24 = *((_QWORD *)&v92 + 1);
                if ( *((_QWORD *)&v92 + 1) )
                {
                  v25 = v93;
                  v26 = v78;
                  v27 = v79;
                  v43 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          v78,
                          v79,
                          *((_QWORD *)&v92 + 1),
                          v93);
                  if ( !v43 )
                    goto LABEL_117;
                  regex::regex::string::Regex::new(&v126, v43, v44);
                  if ( !v126.m256i_i64[0] )
                  {
                    v87 = v126.m256i_i64[3];
                    v86 = *(_OWORD *)&v126.m256i_u64[1];
                    <alloc::string::String as core::clone::Clone>::clone(&v111, v15);
                    v102 = v112;
                    v101 = v111;
                    if ( (_QWORD)v86 != 0x8000000000000000LL )
                    {
                      alloc::raw_vec::RawVec<T,A>::current_memory(&v77, &v86);
                      if ( v78 )
                        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v87, v77, v78, v79);
                    }
                    *(_OWORD *)v136.m256i_i8 = v101;
                    v136.m256i_i64[2] = v102;
                    v72 = &v136;
LABEL_109:
                    v97 = v72->m256i_u64[2];
                    v96 = *(_OWORD *)v72->m256i_i8;
                    v7 = v72->m256i_i64[3];
                    core::ptr::drop_in_place<regex_automata::util::captures::Captures>(&v90);
LABEL_110:
                    core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v95);
                    if ( !_InterlockedDecrement64((volatile signed __int64 *)v95.m256i_i64[2]) )
                      alloc::sync::Arc<T,A>::drop_slow(&v95.m256i_u64[2]);
                    core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v94);
                    if ( !_InterlockedDecrement64((volatile signed __int64 *)v94.m256i_i64[2]) )
                      alloc::sync::Arc<T,A>::drop_slow(&v94.m256i_u64[2]);
                    core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v80);
                    v70 = v88;
                    *v88 = 7LL;
                    *(_OWORD *)(v70 + 1) = v96;
                    v70[3] = v97;
                    v70[4] = v7;
                    return v70;
                  }
                  v136 = v126;
                  *(__m256i *)&v130[8] = v126;
                  *(_DWORD *)&v130[4] = v83;
                  *(_QWORD *)&v130[40] = v76;
                  v131 = v82;
                  *(_DWORD *)v130 = 1;
                  v45 = v81;
                  if ( v81 == (_QWORD)v80 )
                    alloc::raw_vec::RawVec<T,A>::grow_one(&v80);
                  v8 = *((_QWORD *)&v80 + 1);
                  v9 = 56 * v45;
                  v10 = *(_OWORD *)v130;
                  v11 = *(_OWORD *)&v130[16];
                  v12 = *(_OWORD *)&v130[32];
                  v13 = v131;
LABEL_10:
                  *(_QWORD *)(v8 + v9 + 48) = v13;
                  *(_OWORD *)(v8 + v9 + 32) = v12;
                  *(_OWORD *)(v8 + v9 + 16) = v11;
                  *(_OWORD *)(v8 + v9) = v10;
                  v81 = v45 + 1;
                  goto LABEL_11;
                }
              }
            }
          }
        }
      }
      if ( DWORD2(v91) )
      {
        v46 = HIDWORD(v91);
        v47 = *(_QWORD *)(v92 + 48);
        v48 = *(_QWORD *)(v92 + 56);
        core::slice::raw::from_raw_parts::precondition_check(v47, 48LL, 8LL, v48);
        if ( v48 > v46 )
        {
          if ( v47 )
          {
            v49 = hashbrown::map::HashMap<K,V,S,A>::get_inner(48 * v46 + v47, aSkipto, 6LL);
            if ( v49 )
            {
              regex_automata::util::captures::Captures::get_group(&v77, &v90, *(unsigned int *)(v49 + 16));
              if ( v77 )
              {
                v24 = *((_QWORD *)&v92 + 1);
                if ( *((_QWORD *)&v92 + 1) )
                {
                  v25 = v93;
                  v26 = v78;
                  v27 = v79;
                  v50 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                          v78,
                          v79,
                          *((_QWORD *)&v92 + 1),
                          v93);
                  if ( !v50 )
LABEL_117:
                    core::str::slice_error_fail(
                      v24,
                      v25,
                      v26,
                      v27,
                      &anon_bb214e635f3e52e586c02a5eeb538d7c_34_llvm_3235605871402522358);
                  regex::regex::string::Regex::new(&v127, v50, v51);
                  if ( !v127.m256i_i64[0] )
                  {
                    v87 = v127.m256i_i64[3];
                    v86 = *(_OWORD *)&v127.m256i_u64[1];
                    <alloc::string::String as core::clone::Clone>::clone(&v111, v15);
                    v102 = v112;
                    v101 = v111;
                    if ( (_QWORD)v86 != 0x8000000000000000LL )
                    {
                      alloc::raw_vec::RawVec<T,A>::current_memory(&v77, &v86);
                      if ( v78 )
                        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v87, v77, v78, v79);
                    }
                    *(_OWORD *)v137.m256i_i8 = v101;
                    v137.m256i_i64[2] = v102;
                    v72 = &v137;
                    goto LABEL_109;
                  }
                  v137 = v127;
                  *(__m256i *)&v113[8] = v127;
                  *(_DWORD *)&v113[4] = v83;
                  *(_QWORD *)&v113[40] = v76;
                  v114 = v82;
                  *(_DWORD *)v113 = 2;
                  v45 = v81;
                  if ( v81 == (_QWORD)v80 )
                    alloc::raw_vec::RawVec<T,A>::grow_one(&v80);
                  v8 = *((_QWORD *)&v80 + 1);
                  v9 = 56 * v45;
                  v10 = *(_OWORD *)v113;
                  v11 = *(_OWORD *)&v113[16];
                  v12 = *(_OWORD *)&v113[32];
                  v13 = v114;
                  goto LABEL_10;
                }
              }
            }
          }
        }
      }
LABEL_11:
      core::ptr::drop_in_place<regex_automata::util::captures::Captures>(&v90);
    }
  }
  v15 = v85;
  if ( v85 != v98 )
  {
    v14 = v85 + 24;
    if ( v85 )
      goto LABEL_17;
  }
LABEL_79:
  v97 = v81;
  v96 = v80;
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v95);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v95.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v95.m256i_u64[2]);
  core::ptr::drop_in_place<regex_automata::meta::regex::Regex>(&v94);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v94.m256i_i64[2]) )
    alloc::sync::Arc<T,A>::drop_slow(&v94.m256i_u64[2]);
  v100 = v97;
  v99 = v96;
  v62 = *((_QWORD *)&v96 + 1);
  if ( !*((_QWORD *)&v96 + 1) || (BYTE8(v96) & 7) != 0 || v100 > 0x249249249249249LL )
LABEL_116:
    core::panicking::panic_nounwind(anon_bb214e635f3e52e586c02a5eeb538d7c_28_llvm_3235605871402522358, 162LL);
  if ( !v100 )
  {
LABEL_95:
    v70 = v88;
    v88[3] = v100;
    *(_OWORD *)(v70 + 1) = v99;
    *v70 = 12LL;
    return v70;
  }
  v63 = 56 * v100;
  v64 = 0LL;
  v65 = 0LL;
  while ( 2 )
  {
    if ( *(_DWORD *)(v62 + v64) )
      goto LABEL_90;
    v66 = *(_QWORD *)(v62 + v64 + 8);
    if ( !v66 )
    {
      v71 = 5LL;
      v66 = v65;
      goto LABEL_100;
    }
    if ( v66 == v65 )
    {
      *(_QWORD *)v113 = v65;
      v67 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v68 = *(_QWORD *)(v67 + 8);
      v69 = *(_QWORD *)(v67 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v68, 1LL, 1LL, v69);
      *(_QWORD *)&v138[0] = v68;
      *((_QWORD *)&v138[0] + 1) = v69;
      *(_QWORD *)&v120 = v138;
      *((_QWORD *)&v120 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v103 = &anon_cabc7e2b96dc9c3478bce89b84d97ba5_61_llvm_17439056317561537834;
      *((_QWORD *)&v103 + 1) = 2LL;
      *(_QWORD *)&v105 = 0LL;
      *(_QWORD *)&v104 = &v120;
      *((_QWORD *)&v104 + 1) = 1LL;
      std::io::stdio::_eprint(&v103);
      *(_QWORD *)&v115 = v113;
      *((_QWORD *)&v115 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v89 = &anon_cabc7e2b96dc9c3478bce89b84d97ba5_64_llvm_17439056317561537834;
      *((_QWORD *)&v89 + 1) = 2LL;
      *(_QWORD *)&v91 = 0LL;
      *(_QWORD *)&v90 = &v115;
      *((_QWORD *)&v90 + 1) = 1LL;
      std::io::stdio::_eprint(&v89);
      v66 = *(_QWORD *)v113;
LABEL_89:
      v65 = v66;
LABEL_90:
      v64 += 56LL;
      if ( v63 == v64 )
        goto LABEL_95;
      continue;
    }
    break;
  }
  if ( v66 >= v65 )
    goto LABEL_89;
  v71 = 6LL;
LABEL_100:
  v70 = v88;
  *v88 = v71;
  v70[1] = v66;
  v70[2] = v65;
  core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v99);
  return v70;
}
