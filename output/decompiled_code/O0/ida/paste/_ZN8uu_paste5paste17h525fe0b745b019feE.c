_OWORD *__fastcall uu_paste::paste(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 *v9; // rax
  unsigned int v10; // edx
  size_t v11; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // rbx
  unsigned __int64 v14; // r13
  _BYTE *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rbx
  _BYTE *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rax
  _OWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbx
  _BYTE *v33; // r15
  __int64 v34; // rcx
  __int64 *v35; // rcx
  const __m128i *v36; // rax
  __int64 v37; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  char v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  _OWORD *v48; // rax
  __int128 v49; // xmm0
  unsigned __int64 v50; // r14
  char **v51; // rbp
  __int64 v52; // r14
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // r12
  __int64 v60; // r15
  unsigned __int64 v61; // rbx
  __int64 v62; // rsi
  unsigned __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r15
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 *v72; // rdi
  __int64 v73; // r15
  _QWORD *v74; // r12
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rsi
  int v79; // [rsp+0h] [rbp-2B8h] BYREF
  char v80; // [rsp+7h] [rbp-2B1h]
  unsigned __int64 v81; // [rsp+8h] [rbp-2B0h] BYREF
  __int64 v82; // [rsp+10h] [rbp-2A8h]
  __int64 v83; // [rsp+18h] [rbp-2A0h]
  __int128 v84; // [rsp+20h] [rbp-298h] BYREF
  unsigned __int64 v85; // [rsp+30h] [rbp-288h]
  __int64 v86; // [rsp+38h] [rbp-280h]
  __int64 v87; // [rsp+40h] [rbp-278h] BYREF
  __int64 *v88; // [rsp+48h] [rbp-270h] BYREF
  int v89; // [rsp+54h] [rbp-264h]
  char **v90; // [rsp+58h] [rbp-260h]
  char **v91; // [rsp+60h] [rbp-258h]
  char **v92; // [rsp+68h] [rbp-250h]
  __int64 *v93; // [rsp+70h] [rbp-248h]
  _QWORD *v94; // [rsp+78h] [rbp-240h] BYREF
  __int64 v95; // [rsp+80h] [rbp-238h]
  __int128 v96; // [rsp+88h] [rbp-230h] BYREF
  unsigned __int64 v97; // [rsp+98h] [rbp-220h]
  __m256i v98; // [rsp+A0h] [rbp-218h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-1F8h]
  __int64 v100; // [rsp+D0h] [rbp-1E8h]
  __int64 v101; // [rsp+D8h] [rbp-1E0h] BYREF
  __int64 v102; // [rsp+E0h] [rbp-1D8h]
  __int64 v103; // [rsp+E8h] [rbp-1D0h]
  void *v104; // [rsp+F0h] [rbp-1C8h]
  __int64 *v105; // [rsp+F8h] [rbp-1C0h] BYREF
  __int64 *v106; // [rsp+100h] [rbp-1B8h]
  __int64 v107; // [rsp+108h] [rbp-1B0h]
  __int64 v108; // [rsp+110h] [rbp-1A8h]
  __int64 v109; // [rsp+118h] [rbp-1A0h] BYREF
  __int128 v110; // [rsp+120h] [rbp-198h]
  _QWORD *v111; // [rsp+130h] [rbp-188h]
  __int64 v112; // [rsp+138h] [rbp-180h]
  _QWORD *v113; // [rsp+140h] [rbp-178h]
  _QWORD *v114; // [rsp+148h] [rbp-170h]
  _QWORD *v115; // [rsp+150h] [rbp-168h]
  _QWORD *v116; // [rsp+158h] [rbp-160h]
  __int128 v117; // [rsp+160h] [rbp-158h] BYREF
  unsigned __int64 v118; // [rsp+170h] [rbp-148h]
  _DWORD v119[2]; // [rsp+180h] [rbp-138h] BYREF
  __int64 v120; // [rsp+188h] [rbp-130h]
  __int64 v121; // [rsp+190h] [rbp-128h] BYREF
  _QWORD v122[2]; // [rsp+198h] [rbp-120h] BYREF
  _QWORD v123[2]; // [rsp+1A8h] [rbp-110h] BYREF
  _QWORD v124[2]; // [rsp+1B8h] [rbp-100h] BYREF
  _QWORD v125[2]; // [rsp+1C8h] [rbp-F0h] BYREF
  _QWORD v126[2]; // [rsp+1D8h] [rbp-E0h] BYREF
  _QWORD v127[3]; // [rsp+1E8h] [rbp-D0h] BYREF
  __m128i v128; // [rsp+200h] [rbp-B8h]
  __m128i v129; // [rsp+210h] [rbp-A8h]
  __m128i v130; // [rsp+220h] [rbp-98h]
  __m128i v131; // [rsp+230h] [rbp-88h]
  __m128i v132; // [rsp+240h] [rbp-78h]
  __m128i v133[6]; // [rsp+250h] [rbp-68h] BYREF

  v93 = a1;
  v124[0] = a3;
  v124[1] = a4;
  v79 = 0;
  LOBYTE(v5) = 1;
  v86 = v5;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v98, a4, 0LL);
  LODWORD(v90) = a2;
  v89 = a5;
  if ( v98.m256i_i64[0] )
    alloc::raw_vec::handle_error(v98.m256i_i64[1], v98.m256i_i64[2]);
  v84 = *(_OWORD *)&v98.m256i_u64[1];
  v85 = 0LL;
  v125[0] = a3;
  v125[1] = a3 + a4;
  while ( (unsigned int)core::str::validations::next_code_point(v125) )
  {
    if ( (v10 ^ 0xD800) - 2048 >= 0x10F800 )
      goto LABEL_185;
    if ( v10 != 92 )
    {
      if ( v10 == 1114112 )
        break;
LABEL_9:
      v11 = 4LL - (v10 < (unsigned int)&unk_10000);
      if ( v10 < 0x800 )
        v11 = 2LL;
      if ( v10 < 0x80 )
        v11 = 1LL;
      switch ( v11 )
      {
        case 1uLL:
          LOBYTE(v79) = v10;
          break;
        case 2uLL:
          LOBYTE(v79) = (v10 >> 6) & 0x1F | 0xC0;
          BYTE1(v79) = v10 & 0x3F | 0x80;
          break;
        case 3uLL:
          LOBYTE(v79) = (v10 >> 12) & 0xF | 0xE0;
          BYTE1(v79) = (v10 >> 6) & 0x3F | 0x80;
          BYTE2(v79) = v10 & 0x3F | 0x80;
          break;
        case 4uLL:
          LOBYTE(v79) = (v10 >> 18) & 7 | 0xF0;
          BYTE1(v79) = (v10 >> 12) & 0x3F | 0x80;
          BYTE2(v79) = (v10 >> 6) & 0x3F | 0x80;
          HIBYTE(v79) = v10 & 0x3F | 0x80;
          break;
      }
      v16 = <alloc::boxed::Box<[T]> as alloc::boxed::BoxFromSlice<T>>::from_slice(&v79, v11);
      v18 = v17;
      v14 = v85;
      if ( v85 == (_QWORD)v84 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v84);
      v9 = (__int64 *)(*((_QWORD *)&v84 + 1) + 16 * v14);
      *v9 = v16;
      goto LABEL_4;
    }
    if ( !(unsigned int)core::str::validations::next_code_point(v125) )
      goto LABEL_42;
    if ( (v10 ^ 0xD800) - 2048 >= 0x10F800 )
LABEL_185:
      core::panicking::panic_nounwind(anon_81bf89628836cd0fc1bea2ebeb077a61_22_llvm_7473740467861460637, 57LL);
    if ( (int)v10 > 109 )
    {
      switch ( v10 )
      {
        case 0x6Eu:
          v19 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL, 1LL, 0LL);
          v13 = v19;
          if ( !v19 )
LABEL_190:
            alloc::alloc::handle_alloc_error(1LL, 1LL);
          *v19 = 10;
          v14 = v85;
          if ( v85 == (_QWORD)v84 )
LABEL_35:
            alloc::raw_vec::RawVec<T,A>::grow_one(&v84);
LABEL_36:
          v9 = (__int64 *)(*((_QWORD *)&v84 + 1) + 16 * v14);
          *v9 = (__int64)v13;
          v18 = 1LL;
          goto LABEL_4;
        case 0x74u:
          v12 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL, 1LL, 0LL);
          v13 = v12;
          if ( !v12 )
            goto LABEL_190;
          *v12 = 9;
          v14 = v85;
          if ( v85 == (_QWORD)v84 )
            goto LABEL_35;
          goto LABEL_36;
        case 0x110000u:
LABEL_42:
          v126[0] = v124;
          v126[1] = <&T as core::fmt::Display>::fmt;
          v98.m256i_i64[0] = (__int64)&off_102A10;
          v98.m256i_i64[1] = 1LL;
          v98.m256i_i64[2] = (__int64)v126;
          v98.m256i_i64[3] = 1LL;
          v99 = 0LL;
          alloc::fmt::format::format_inner(v127, &v98);
          v21 = v127[0];
          v22 = v127[1];
          v23 = v127[2];
          v24 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v25 = (_OWORD *)v24;
          if ( !v24 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          *(_QWORD *)v24 = v21;
          *(_QWORD *)(v24 + 8) = v22;
          *(_QWORD *)(v24 + 16) = v23;
          *(_DWORD *)(v24 + 24) = 1;
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<[u8]>>>(&v84);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v93);
          return v25;
      }
      goto LABEL_9;
    }
    if ( v10 != 48 )
    {
      if ( v10 == 92 )
      {
        v15 = (_BYTE *)alloc::alloc::Global::alloc_impl(1LL, 1LL, 1LL, 0LL);
        v13 = v15;
        if ( !v15 )
          goto LABEL_190;
        *v15 = 92;
        v14 = v85;
        if ( v85 == (_QWORD)v84 )
          goto LABEL_35;
        goto LABEL_36;
      }
      goto LABEL_9;
    }
    v20 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL, 0LL);
    if ( !v20 )
      alloc::alloc::handle_alloc_error(1LL, 0LL);
    v14 = v85;
    if ( v85 == (_QWORD)v84 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v84);
    v9 = (__int64 *)(*((_QWORD *)&v84 + 1) + 16 * v14);
    *v9 = v20;
    v18 = 0LL;
LABEL_4:
    v9[1] = v18;
    v85 = v14 + 1;
  }
  v117 = v84;
  v118 = v85;
  if ( (unsigned __int64)v84 > v85 )
  {
    v26 = alloc::raw_vec::RawVec<T,A>::shrink_unchecked(&v117);
    if ( v26 != 0x8000000000000001LL )
      alloc::raw_vec::handle_error(v26, v27);
  }
  if ( !*((_QWORD *)&v117 + 1) )
    core::panicking::panic_nounwind(anon_81bf89628836cd0fc1bea2ebeb077a61_16_llvm_7473740467861460637, 93LL);
  v94 = (_QWORD *)*((_QWORD *)&v117 + 1);
  v95 = v118;
  v88 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v98, v93[2], 0LL);
  if ( v98.m256i_i64[0] )
    alloc::raw_vec::handle_error(v98.m256i_i64[1], v98.m256i_i64[2]);
  v96 = *(_OWORD *)&v98.m256i_u64[1];
  v97 = 0LL;
  v28 = *v93;
  v29 = (__int64 *)v93[1];
  v30 = v93[2];
  v31 = (__int64)&v29[3 * v30];
  v105 = v29;
  v106 = v29;
  v107 = v28;
  v108 = v31;
  if ( v30 )
  {
    do
    {
      v106 = v29 + 3;
      v32 = *v29;
      if ( *v29 == 0x8000000000000000LL )
        break;
      v33 = (_BYTE *)v29[1];
      if ( !v33 || (v34 = v29[2], v34 < 0) )
        core::panicking::panic_nounwind(anon_901da3c1efb1e0e537937b7cd8ee0384_19_llvm_15071104316176699102, 162LL);
      if ( v34 == 1 && *v33 == 45 )
      {
        v35 = v88;
        v36 = (const __m128i *)&v88;
        if ( !v88 )
        {
          v36 = (const __m128i *)core::cell::once::OnceCell<T>::try_init(&v88);
          v35 = (__int64 *)v36->m128i_i64[0];
        }
        if ( !*v35 )
LABEL_189:
          core::panicking::panic_nounwind(anon_81bf89628836cd0fc1bea2ebeb077a61_23_llvm_7473740467861460637, 104LL);
        v37 = *v35 + 1;
        *v35 = v37;
        if ( !v37 )
          BUG();
        si128 = _mm_slli_si128(_mm_loadl_epi64(v36), 8);
      }
      else
      {
        v98.m256i_i64[0] = 0x1B600000000LL;
        v98.m256i_i16[6] = 0;
        v98.m256i_i32[2] = 1;
        std::fs::OpenOptions::_open(v119, &v98, v33);
        if ( v119[0] )
        {
          v98.m256i_i64[0] = 0x8000000000000000LL;
          v98.m256i_i64[3] = v120;
          v47 = 8LL;
          v48 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v25 = v48;
          if ( !v48 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v49 = *(_OWORD *)v98.m256i_i8;
          v48[1] = *(_OWORD *)&v98.m256i_u64[2];
          *v48 = v49;
          if ( v32 )
          {
            v47 = v32;
            _rust_dealloc(v33);
          }
          <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v105, v47);
          goto LABEL_163;
        }
        v31 = 0x2000LL;
        std::io::buffered::bufreader::BufReader<R>::with_capacity(v133, 0x2000LL, v119[1]);
        si128 = _mm_load_si128(v133);
        v128 = v133[1];
        v129 = v133[2];
      }
      v130 = si128;
      v132 = v129;
      v131 = v128;
      v39 = v97;
      if ( v97 == (_QWORD)v96 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v96);
      v40 = *((_QWORD *)&v96 + 1);
      v41 = 48 * v39;
      v42 = v130;
      v43 = v131;
      *(__m128i *)(*((_QWORD *)&v96 + 1) + v41 + 32) = v132;
      *(__m128i *)(v40 + v41 + 16) = v43;
      *(__m128i *)(v40 + v41) = v42;
      v97 = v39 + 1;
      if ( v32 )
      {
        v31 = v32;
        _rust_dealloc(v33);
      }
      v29 = v106;
    }
    while ( v106 != (__int64 *)v108 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v105, v31);
  v121 = std::io::stdio::stdout();
  v87 = std::io::stdio::Stdout::lock(&v121);
  v44 = v89;
  v80 = v89;
  v45 = v95;
  if ( v95 )
  {
    if ( v95 == 1 )
    {
      v46 = v94[1];
      if ( v46 )
      {
        *(_QWORD *)&v110 = *v94;
        *((_QWORD *)&v110 + 1) = v46;
        v45 = 1LL;
      }
      else
      {
        v45 = 0LL;
      }
    }
    else
    {
      v110 = *(_OWORD *)v94;
      v111 = v94;
      v112 = v95;
      v113 = v94;
      v114 = &v94[2 * v95];
      v115 = v94;
      v116 = v114;
      v45 = 2LL;
    }
  }
  v50 = v97;
  v109 = v45;
  v81 = 0LL;
  v82 = 1LL;
  v83 = 0LL;
  LODWORD(v86) = (unsigned __int8)v89;
  if ( (_BYTE)v90 )
  {
    v51 = (char **)*((_QWORD *)&v96 + 1);
    if ( *((_QWORD *)&v96 + 1) && (BYTE8(v96) & 7) == 0 && v97 <= 0x2AAAAAAAAAAAAAALL )
    {
      v52 = *((_QWORD *)&v96 + 1) + 48 * v97;
      v92 = &off_102A38;
      v91 = (char **)&unk_1E1CF;
      v100 = v52;
      while ( 1 )
      {
        if ( v51 == (char **)v52 )
          goto LABEL_177;
        if ( !v82 || v83 < 0 )
          goto LABEL_154;
        v90 = v51 + 6;
        v83 = 0LL;
        while ( 1 )
        {
          uu_paste::InputSource::read_until(v122, v51, (unsigned int)v86, &v81);
          v25 = (_OWORD *)v122[0];
          if ( v122[0] )
            goto LABEL_158;
          if ( !v122[1] )
            break;
          if ( !v82 || v83 < 0 )
            goto LABEL_187;
          v53 = v83 - 1;
          if ( v83 && *(_BYTE *)(v82 + v53) == v44 )
          {
            --v83;
            if ( v53 >= v81 )
              goto LABEL_189;
            if ( *(_BYTE *)(v82 + v53) != v44 )
            {
              v77 = 56LL;
              v91 = (char **)&unk_1E197;
              v92 = &off_102A20;
              goto LABEL_195;
            }
          }
          uu_paste::DelimiterState::write_delimiter(&v109, &v81);
        }
        v52 = v100;
        if ( (unsigned __int64)(v109 - 1) >= 2 )
        {
          v54 = v83;
        }
        else if ( *((_QWORD *)&v110 + 1) )
        {
          v54 = v83 - *((_QWORD *)&v110 + 1);
          if ( (unsigned __int64)v83 >= *((_QWORD *)&v110 + 1) )
          {
            v83 -= *((_QWORD *)&v110 + 1);
          }
          else
          {
            if ( v83 )
            {
              v77 = 33LL;
LABEL_195:
              core::panicking::panic(v91, v77, v92);
            }
            v54 = 0LL;
          }
        }
        else
        {
          v54 = v83;
        }
        if ( !v82 || v54 < 0 )
          goto LABEL_187;
        v55 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v87);
        if ( v55 )
          break;
        v56 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v87);
        v51 = v90;
        if ( v56 )
        {
          v57 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v56,
                  &off_1029E0);
LABEL_184:
          v25 = (_OWORD *)v57;
          goto LABEL_158;
        }
      }
      v57 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v55,
              &off_1029F8);
      goto LABEL_184;
    }
LABEL_199:
    core::panicking::panic_nounwind(aUnsafePrecondi_3, 166LL);
  }
  <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v101, 0LL, v97);
  if ( !v82 || v83 < 0 )
LABEL_154:
    core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
  v91 = &off_102A38;
  v104 = &unk_1E1CF;
  v90 = &off_102980;
  v92 = &off_1029C8;
  v100 = v50;
  while ( 1 )
  {
    v83 = 0LL;
    v58 = *((_QWORD *)&v96 + 1);
    if ( !*((_QWORD *)&v96 + 1) || (BYTE8(v96) & 7) != 0 || v97 > 0x2AAAAAAAAAAAAAALL )
      goto LABEL_199;
    v59 = 48 * v97;
    v60 = 0LL;
    v61 = 0LL;
    while ( v59 )
    {
      if ( !v102 || (v62 = v103, v103 < 0) )
        core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_2_llvm_809249241883912370, 162LL);
      if ( v103 <= v61 )
        goto LABEL_194;
      if ( (*(_BYTE *)(v102 + v61) & 1) != 0 )
      {
        if ( !++v60 )
          goto LABEL_191;
      }
      else
      {
        uu_paste::InputSource::read_until(v123, v58, (unsigned int)v86, &v81);
        v25 = (_OWORD *)v123[0];
        if ( v123[0] )
          goto LABEL_156;
        if ( v123[1] )
        {
          if ( !v82 || v83 < 0 )
            goto LABEL_187;
          v63 = v83 - 1;
          if ( v83 && *(_BYTE *)(v82 + v63) == (_BYTE)v89 )
          {
            --v83;
            if ( v63 >= v81 )
              goto LABEL_189;
            if ( *(_BYTE *)(v82 + v63) != (_BYTE)v89 )
            {
              v78 = 56LL;
              v104 = &unk_1E197;
              v91 = &off_102A20;
              goto LABEL_198;
            }
          }
        }
        else
        {
          if ( !v102 || (v62 = v103, v103 < 0) )
            core::panicking::panic_nounwind(anon_965c7e9797bf363381d1deac3dc9c421_8_llvm_809249241883912370, 166LL);
          if ( v103 <= v61 )
          {
            v90 = &off_102998;
LABEL_194:
            core::panicking::panic_bounds_check(v61, v62, v90);
          }
          *(_BYTE *)(v102 + v61) = 1;
          if ( !++v60 )
          {
            v92 = &off_1029B0;
LABEL_191:
            core::panicking::panic_const::panic_const_add_overflow(v92);
          }
        }
      }
      v58 += 48LL;
      v59 -= 48LL;
      ++v61;
      uu_paste::DelimiterState::write_delimiter(&v109, &v81);
    }
    if ( v60 == v100 )
    {
      if ( v101 )
        _rust_dealloc(v102);
LABEL_177:
      if ( v81 )
        _rust_dealloc(v82);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(&v87);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v96);
      core::ptr::drop_in_place<core::cell::once::OnceCell<alloc::rc::Rc<core::cell::RefCell<std::io::stdio::Stdin>>>>(&v88);
      v86 = 0LL;
      core::ptr::drop_in_place<alloc::boxed::Box<[alloc::boxed::Box<[u8]>]>>(&v94);
      return 0LL;
    }
    v64 = v109;
    if ( (unsigned __int64)(v109 - 1) >= 2 )
    {
      v65 = v83;
    }
    else if ( *((_QWORD *)&v110 + 1) )
    {
      v65 = v83 - *((_QWORD *)&v110 + 1);
      if ( (unsigned __int64)v83 >= *((_QWORD *)&v110 + 1) )
      {
        v83 -= *((_QWORD *)&v110 + 1);
      }
      else
      {
        if ( v83 )
        {
          v78 = 33LL;
LABEL_198:
          core::panicking::panic(v104, v78, v91);
        }
        v65 = 0LL;
      }
    }
    else
    {
      v65 = v83;
    }
    if ( !v82 || v65 < 0 )
LABEL_187:
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    v66 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v87);
    if ( v66 )
    {
      v76 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v66,
              &off_102968);
      goto LABEL_182;
    }
    v67 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v87);
    if ( v67 )
      break;
    if ( v64 == 2 )
    {
      v113 = v111;
      v114 = &v111[2 * v112];
      v115 = v111;
      v116 = v114;
    }
    if ( !v82 || v83 < 0 )
      goto LABEL_154;
  }
  v76 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          v67,
          &off_102950);
LABEL_182:
  v25 = (_OWORD *)v76;
LABEL_156:
  if ( v101 )
    _rust_dealloc(v102);
LABEL_158:
  if ( v81 )
    _rust_dealloc(v82);
  v68 = v87;
  v69 = (*(_DWORD *)(v87 + 12))-- == 1;
  if ( v69 )
  {
    v70 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v68, v70, 0LL);
    v71 = v87;
    if ( _InterlockedExchange((volatile __int32 *)(v87 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v71 + 8);
  }
LABEL_163:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_paste::InputSource>>(&v96);
  if ( v88 )
  {
    --*v88;
    v72 = v88;
    if ( !*v88 )
    {
      v69 = v88[1]-- == 1;
      if ( v69 )
        _rust_dealloc(v72);
    }
  }
  v73 = v95;
  if ( v95 )
  {
    v74 = v94 + 1;
    do
    {
      if ( *v74 )
        _rust_dealloc(*(v74 - 1));
      v74 += 2;
      --v73;
    }
    while ( v73 );
    if ( v95 )
      _rust_dealloc(v94);
  }
  return v25;
}
