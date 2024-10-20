        __int64 a9)
{
  __int64 v9; // r13
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int64 v13; // rax
  bool v14; // cf
  __int64 v15; // rax
  char v16; // bl
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  char v19; // bp
  __int64 (__fastcall *v20)(); // rdx
  __int64 v21; // r13
  signed __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int128 v28; // xmm0
  unsigned __int64 v29; // r12
  int v30; // ebx
  __int128 v31; // xmm0
  __m128d v32; // xmm1
  __int128 v33; // xmm2
  __int64 v34; // rsi
  __int64 v35; // rbx
  void *v36; // r13
  void *v37; // r14
  size_t v38; // r12
  const void *v39; // rbx
  _BYTE *v40; // r12
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // r15
  __int128 *v43; // r13
  const void *v44; // rax
  size_t v45; // rdx
  const void *v46; // rbx
  size_t v47; // r12
  const void *v48; // rax
  size_t v49; // rdx
  const void *v50; // r14
  size_t v51; // rbx
  size_t v52; // r12
  void *v53; // r12
  void **v54; // rsi
  char *v55; // r13
  char v56; // bl
  void ***v57; // rsi
  char *v58; // rax
  const void *v59; // rbx
  __int64 (__fastcall *v60)(); // r12
  char v61; // r12
  __int64 v62; // rcx
  signed __int64 v63; // rcx
  signed __int64 v64; // rcx
  signed __int64 v65; // rcx
  __int64 v66; // rbx
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v71; // rbx
  __int64 v72; // rax
  char **v73; // rdi
  char v74; // [rsp+6h] [rbp-3B2h]
  char v75; // [rsp+7h] [rbp-3B1h]
  __int64 v76; // [rsp+10h] [rbp-3A8h] BYREF
  _DWORD v77[2]; // [rsp+18h] [rbp-3A0h]
  __int128 v78; // [rsp+20h] [rbp-398h] BYREF
  void *dest[2]; // [rsp+30h] [rbp-388h] BYREF
  __int128 *v80; // [rsp+40h] [rbp-378h]
  __int64 v81; // [rsp+48h] [rbp-370h] BYREF
  __int64 (__fastcall *v82)(); // [rsp+50h] [rbp-368h]
  __int64 v83; // [rsp+58h] [rbp-360h]
  char v84; // [rsp+60h] [rbp-358h]
  _BYTE v85[7]; // [rsp+61h] [rbp-357h]
  __int64 v86; // [rsp+68h] [rbp-350h]
  __int64 v87; // [rsp+70h] [rbp-348h]
  __int64 v88; // [rsp+78h] [rbp-340h]
  __int64 v89; // [rsp+80h] [rbp-338h]
  char v90; // [rsp+88h] [rbp-330h]
  void ***v91; // [rsp+98h] [rbp-320h]
  void **v92; // [rsp+A0h] [rbp-318h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+A8h] [rbp-310h]
  void **v94; // [rsp+B0h] [rbp-308h]
  __int64 (__fastcall *v95)(); // [rsp+B8h] [rbp-300h]
  __int128 *v96; // [rsp+C0h] [rbp-2F8h]
  __int64 v97; // [rsp+C8h] [rbp-2F0h]
  __int128 v98; // [rsp+D0h] [rbp-2E8h]
  __int128 v99; // [rsp+E0h] [rbp-2D8h] BYREF
  signed __int64 v100; // [rsp+F0h] [rbp-2C8h] BYREF
  _BYTE v101[7]; // [rsp+F9h] [rbp-2BFh]
  void *src[2]; // [rsp+100h] [rbp-2B8h] BYREF
  size_t n; // [rsp+110h] [rbp-2A8h] BYREF
  void ***v104; // [rsp+118h] [rbp-2A0h]
  __int128 v105; // [rsp+120h] [rbp-298h] BYREF
  __int128 v106; // [rsp+130h] [rbp-288h] BYREF
  __int128 *v107; // [rsp+140h] [rbp-278h]
  void *s2[2]; // [rsp+148h] [rbp-270h] BYREF
  __int64 v109; // [rsp+158h] [rbp-260h] BYREF
  __int128 *v110; // [rsp+160h] [rbp-258h]
  __int64 v111; // [rsp+168h] [rbp-250h]
  __int128 v112; // [rsp+170h] [rbp-248h] BYREF
  __int128 v113; // [rsp+180h] [rbp-238h]
  __int128 *v114; // [rsp+190h] [rbp-228h]
  void **v115; // [rsp+1A0h] [rbp-218h] BYREF
  __int64 (__fastcall *v116)(); // [rsp+1A8h] [rbp-210h]
  __int64 v117; // [rsp+1B0h] [rbp-208h]
  __int64 v118; // [rsp+1B8h] [rbp-200h]
  __int64 v119; // [rsp+1C0h] [rbp-1F8h]
  __int64 v120; // [rsp+1C8h] [rbp-1F0h]
  __int128 v121; // [rsp+1D0h] [rbp-1E8h] BYREF
  size_t v122[2]; // [rsp+1E0h] [rbp-1D8h] BYREF
  __int64 v123; // [rsp+1F0h] [rbp-1C8h]
  __int128 *v124; // [rsp+1F8h] [rbp-1C0h]
  void **v125; // [rsp+200h] [rbp-1B8h]
  __int64 (__fastcall *v126)(); // [rsp+208h] [rbp-1B0h]
  __int64 v127; // [rsp+210h] [rbp-1A8h]
  __int64 (__fastcall *v128)(); // [rsp+218h] [rbp-1A0h]
  __int128 v129; // [rsp+220h] [rbp-198h] BYREF
  size_t v130; // [rsp+230h] [rbp-188h]
  void *v131[2]; // [rsp+240h] [rbp-178h] BYREF
  __int128 v132; // [rsp+250h] [rbp-168h] BYREF
  __int64 v133; // [rsp+260h] [rbp-158h]
  __int128 v134; // [rsp+270h] [rbp-148h]
  __int128 v135; // [rsp+280h] [rbp-138h]
  __int128 *v136; // [rsp+290h] [rbp-128h]
  __int64 v137; // [rsp+298h] [rbp-120h]
  __int128 v138; // [rsp+2A0h] [rbp-118h] BYREF
  __int128 v139; // [rsp+2B0h] [rbp-108h] BYREF
  __int64 v140; // [rsp+2C0h] [rbp-F8h]
  void **v141; // [rsp+2D0h] [rbp-E8h]
  unsigned __int64 v142; // [rsp+2D8h] [rbp-E0h]
  __int64 v143; // [rsp+2E0h] [rbp-D8h] BYREF
  _QWORD v144[2]; // [rsp+2E8h] [rbp-D0h] BYREF
  _QWORD v145[2]; // [rsp+2F8h] [rbp-C0h] BYREF
  _QWORD v146[2]; // [rsp+308h] [rbp-B0h] BYREF
  _QWORD v147[2]; // [rsp+318h] [rbp-A0h] BYREF
  _QWORD v148[6]; // [rsp+328h] [rbp-90h] BYREF
  _QWORD v149[12]; // [rsp+358h] [rbp-60h] BYREF

  v144[0] = a3;
  v144[1] = a4;
  v145[0] = a5;
  v145[1] = a6;
  v143 = std::io::stdio::stdout();
  v76 = std::io::stdio::Stdout::lock(&v143);
  v107 = (__int128 *)*((_QWORD *)a1 + 4);
  v10 = *a1;
  v106 = a1[1];
  v105 = v10;
  v11 = *(__int128 *)((char *)a1 + 56);
  *(_OWORD *)v131 = *(__int128 *)((char *)a1 + 40);
  v132 = v11;
  v133 = *((_QWORD *)a1 + 9);
  v12 = a1[6];
  v138 = a1[5];
  v139 = v12;
  v140 = *((_QWORD *)a1 + 14);
  v137 = a2;
  if ( a7 )
  {
    if ( a2 )
    {
      v13 = a2 + 1;
      if ( a2 == -1 )
      {
        v73 = &off_1343C0;
LABEL_188:
        core::panicking::panic_const::panic_const_add_overflow(v73, a2);
      }
      v14 = __CFADD__(a8, v13);
      v15 = a8 + v13;
      if ( v14 )
      {
        v73 = &off_1343D8;
        goto LABEL_188;
      }
    }
    else
    {
      v15 = a8;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v123 = v15;
  v141 = dest;
  v91 = &v92;
  v104 = &v115;
  v110 = &v129;
  v16 = 0;
  while ( 1 )
  {
    *(_OWORD *)dest = xmmword_1E170;
    v78 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
    v80 = 0LL;
    v18 = <uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialOrd>::partial_cmp(v131, &v78);
    v111 = v9;
    if ( v18 >= 2u )
    {
      v19 = -1;
      if ( (__int64)v78 > (__int64)0x8000000000000003LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v91, &v78);
        v20 = v93;
        if ( v93 )
LABEL_17:
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(dest, v92, v20, v94);
      }
    }
    else
    {
      v19 = 1;
      if ( (__int64)v78 > (__int64)0x8000000000000003LL )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(v91, &v78);
        v20 = v93;
        if ( v93 )
          goto LABEL_17;
      }
    }
    if ( (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialOrd>::partial_cmp(
                            &v105,
                            &v138) == v19 )
      break;
    if ( (v16 & 1) != 0 )
    {
      v146[0] = v144;
      v146[1] = <&T as core::fmt::Display>::fmt;
      v148[0] = anon_c4c4bebbd6dc8fc037a3b36a3713dba0_16_llvm_5692066984011975658;
      v148[1] = 1LL;
      v148[4] = 0LL;
      v148[2] = v146;
      v148[3] = 1LL;
      v21 = std::io::Write::write_fmt(&v76, v148);
      if ( v21 )
        goto LABEL_154;
    }
    v22 = 0x8000000000000000LL;
    if ( *(_QWORD *)a9 == 0x8000000000000000LL )
    {
      s2[0] = &v105;
      v115 = s2;
      v116 = <&T as core::fmt::Display>::fmt;
      v117 = v137;
      v118 = 0LL;
      v119 = v123;
      v120 = 0LL;
      *(_QWORD *)&v78 = 1LL;
      *((_QWORD *)&v78 + 1) = 1LL;
      dest[0] = &dword_0 + 1;
      dest[1] = &dword_0 + 2;
      v80 = 0LL;
      if ( (__int64)v105 >= (__int64)0x8000000000000002LL )
        v81 = 0x800000020LL;
      else
        v81 = 32LL;
      LOBYTE(v82) = 1;
      v92 = (void **)anon_c4c4bebbd6dc8fc037a3b36a3713dba0_16_llvm_5692066984011975658;
      v93 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v94 = (void **)v104;
      v95 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v96 = &v78;
      v97 = 1LL;
      alloc::fmt::format::format_inner(v110, v91);
      v122[0] = *((_QWORD *)v110 + 2);
      v121 = *v110;
      src[0] = &v121;
      src[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v92 = (void **)anon_c4c4bebbd6dc8fc037a3b36a3713dba0_16_llvm_5692066984011975658;
      v93 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v96 = 0LL;
      v94 = src;
      v95 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v21 = std::io::Write::write_fmt(&v76, v91);
      alloc::raw_vec::RawVec<T,A>::current_memory(&v112, &v121);
      if ( *((_QWORD *)&v112 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v122, v112, *((_QWORD *)&v112 + 1), v113);
    }
    else
    {
      v23 = v105 - 0x7FFFFFFFFFFFFFFFLL;
      if ( (__int64)v105 >= (__int64)0x8000000000000004LL )
        v23 = 0LL;
      v98 = 0x7FF0000000000000uLL;
      switch ( v23 )
      {
        case 0LL:
          v24 = num_bigint::biguint::convert::high_bits_to_u64(&v105);
          v25 = num_bigint::biguint::BigUint::bits(&v105);
          if ( v24 )
          {
            _BitScanReverse64(&v26, v24);
            v27 = v26 ^ 0x3F;
          }
          else
          {
            v27 = 64LL;
          }
          v14 = v25 < 64 - v27;
          v29 = v25 - (64 - v27);
          if ( v14 )
            core::panicking::panic_const::panic_const_sub_overflow(&anon_a476675cf8b2544e3ecdad75c8fda0aa_10_llvm_14546134393192550300);
          v30 = (int)v107;
          if ( v107 == (__int128 *)0x8000000000000000LL )
            core::panicking::panic_const::panic_const_neg_overflow(&anon_5b98a4a8b99d5ff8b16d892f8ab7b060_6_llvm_2998297538797175895);
          v31 = 0x4000000000000000uLL;
          _powidf2((unsigned int)v29, 2.0);
          v32 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v24, (__m128i)xmmword_193B0), (__m128d)xmmword_192F0);
          v33 = 0x7FF0000000000000uLL;
          if ( v29 < 0x401 )
          {
            *(double *)&v31 = 2.0 * (_mm_unpackhi_pd(v32, v32).m128d_f64[0] + v32.m128d_f64[0]);
            v33 = v31;
          }
          if ( !BYTE8(v106) )
          {
            *(double *)&v33 = -*(double *)&v33;
            *((double *)&v33 + 1) = -*((double *)&v33 + 1);
          }
          v98 = v33;
          v28 = 0x4024000000000000uLL;
          *(double *)&v28 = _powidf2((unsigned int)-v30, 10.0) * *(double *)&v33;
          goto LABEL_43;
        case 1LL:
          goto LABEL_44;
        case 2LL:
          v28 = 0xFFF0000000000000LL;
          goto LABEL_43;
        case 3LL:
          v28 = 0x8000000000000000LL;
          goto LABEL_43;
        case 4LL:
          v28 = 0x7FF8000000000000uLL;
LABEL_43:
          v98 = v28;
LABEL_44:
          if ( !*(_QWORD *)(a9 + 8) || *(__int64 *)(a9 + 16) < 0 )
            goto LABEL_178;
          v21 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v76);
          if ( v21 )
            goto LABEL_154;
          if ( fabs(*(double *)&v98) >= INFINITY )
          {
            uucore::features::format::num_format::format_float_non_finite(&v99, *(_BYTE *)(a9 + 67) & 1);
          }
          else
          {
            v34 = *(_QWORD *)(a9 + 56);
            switch ( *(_BYTE *)(a9 + 64) )
            {
              case 0:
                uucore::features::format::num_format::format_float_decimal(
                  &v99,
                  v34,
                  *(_BYTE *)(a9 + 68) & 1,
                  *(double *)&v98);
                break;
              case 1:
                uucore::features::format::num_format::format_float_scientific(
                  &v99,
                  v34,
                  *(_BYTE *)(a9 + 67) & 1,
                  *(_BYTE *)(a9 + 68) & 1,
                  *(double *)&v98);
                break;
              case 2:
                uucore::features::format::num_format::format_float_shortest(
                  &v99,
                  v34,
                  *(_BYTE *)(a9 + 67) & 1,
                  *(_BYTE *)(a9 + 68) & 1,
                  *(double *)&v98);
                break;
              case 3:
                uucore::features::format::num_format::format_float_hexadecimal(
                  &v99,
                  v34,
                  *(_BYTE *)(a9 + 67) & 1,
                  *(_BYTE *)(a9 + 68) & 1,
                  *(double *)&v98);
                break;
            }
          }
          if ( *(double *)&v98 >= 0.0 )
          {
            v37 = (void *)*((_QWORD *)&v99 + 1);
            v36 = (void *)v99;
            v38 = v100;
          }
          else
          {
            v35 = *((_QWORD *)&v99 + 1);
            if ( !*((_QWORD *)&v99 + 1) || v100 < 0 )
LABEL_180:
              core::panicking::panic_nounwind(aUnsafePrecondi_9, 162LL);
            if ( (unsigned __int64)v100 <= 1 )
            {
              if ( v100 != 1 )
LABEL_181:
                core::str::slice_error_fail(*((_QWORD *)&v99 + 1), v100, 1LL);
            }
            else if ( *(char *)(*((_QWORD *)&v99 + 1) + 1LL) <= -65 )
            {
              goto LABEL_181;
            }
            v38 = v100 - 1;
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v78, v100 - 1, 0LL);
            v36 = (void *)*((_QWORD *)&v78 + 1);
            if ( (_QWORD)v78 )
LABEL_179:
              alloc::raw_vec::handle_error(v36, *v141);
            v39 = (const void *)(v35 + 1);
            v37 = dest[0];
            core::intrinsics::copy_nonoverlapping::precondition_check(v39, dest[0], 1LL, 1LL, v38);
            memcpy(v37, v39, v38);
            alloc::raw_vec::RawVec<T,A>::current_memory(&v78, &v99);
            if ( *((_QWORD *)&v78 + 1) )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v100, v78, *((_QWORD *)&v78 + 1), dest[0]);
          }
          *(_QWORD *)&v99 = v36;
          *((_QWORD *)&v99 + 1) = v37;
          v100 = v38;
          v142 = 0x8000000000000000LL;
          if ( *(double *)&v98 >= 0.0 )
          {
            v36 = (void *)*(unsigned __int8 *)(a9 + 65);
            if ( *(_BYTE *)(a9 + 65) )
            {
              if ( (_DWORD)v36 == 1 )
              {
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v78, 1LL, 0LL);
                v36 = (void *)*((_QWORD *)&v78 + 1);
                if ( (_QWORD)v78 )
                  goto LABEL_179;
                v40 = dest[0];
                v41 = 1LL;
                core::intrinsics::copy_nonoverlapping::precondition_check(&asc_2670E[1], dest[0], 1LL, 1LL, 1LL);
                *v40 = 43;
              }
              else
              {
                alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v78, 1LL, 0LL);
                v36 = (void *)*((_QWORD *)&v78 + 1);
                if ( (_QWORD)v78 )
                  goto LABEL_179;
                v40 = dest[0];
                v41 = 1LL;
                core::intrinsics::copy_nonoverlapping::precondition_check(&asc_2670E[2], dest[0], 1LL, 1LL, 1LL);
                *v40 = 32;
              }
            }
            else
            {
              v40 = (_BYTE *)(&dword_0 + 1);
              v41 = *(unsigned __int8 *)(a9 + 65);
            }
          }
          else
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v78, 1LL, 0LL);
            v36 = (void *)*((_QWORD *)&v78 + 1);
            if ( (_QWORD)v78 )
              goto LABEL_179;
            v40 = dest[0];
            v41 = 1LL;
            core::intrinsics::copy_nonoverlapping::precondition_check(asc_2670E, dest[0], 1LL, 1LL, 1LL);
            *v40 = 45;
          }
          s2[0] = v36;
          s2[1] = v40;
          v109 = v41;
          *(_OWORD *)src = v99;
          n = v100;
          v42 = *(_QWORD *)(a9 + 48);
          v43 = 0LL;
          if ( v42 >= v41 )
            v43 = (__int128 *)(v42 - v41);
          if ( !*(_BYTE *)(a9 + 66) )
          {
            v92 = s2;
            v93 = <alloc::string::String as core::fmt::Display>::fmt;
            v94 = src;
            v95 = <alloc::string::String as core::fmt::Display>::fmt;
            v96 = v43;
            v97 = 0LL;
            *(_QWORD *)&v78 = 2LL;
            dest[0] = &dword_0 + 2;
            v80 = 0LL;
            v81 = 32LL;
            LOBYTE(v82) = 3;
            v83 = 2LL;
            v86 = 1LL;
            v87 = 2LL;
            v88 = 1LL;
            v89 = 32LL;
            v90 = 0;
LABEL_95:
            v115 = (void **)"\x01";
            v57 = v104;
            v104[1] = (void **)(&dword_0 + 2);
            v57[4] = (void **)&v78;
            v57[5] = (void **)(&dword_0 + 2);
            v57[2] = (void **)v91;
            v57[3] = (void **)(&dword_0 + 3);
            v21 = std::io::Write::write_fmt(&v76, v57);
            v56 = 0;
            goto LABEL_96;
          }
          if ( *(_BYTE *)(a9 + 66) != 1 )
          {
            v92 = s2;
            v93 = <alloc::string::String as core::fmt::Display>::fmt;
            v94 = src;
            v95 = <alloc::string::String as core::fmt::Display>::fmt;
            v96 = v43;
            v97 = 0LL;
            *(_QWORD *)&v78 = 2LL;
            dest[0] = &dword_0 + 2;
            v80 = 0LL;
            v81 = 32LL;
            LOBYTE(v82) = 3;
            v83 = 2LL;
            v86 = 1LL;
            v87 = 2LL;
            v88 = 1LL;
            v89 = 48LL;
LABEL_94:
            v90 = 1;
            goto LABEL_95;
          }
          LODWORD(v78) = 0;
          v44 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v78, 4LL);
          if ( v45 > v41 || bcmp(v44, v40, v45) )
          {
            v46 = s2[1];
            if ( !s2[1] )
              goto LABEL_180;
            v47 = v109;
            if ( v109 < 0 )
              goto LABEL_180;
            LODWORD(v78) = 0;
            v48 = (const void *)core::char::methods::encode_utf8_raw(43LL, &v78, 4LL);
            if ( v49 > v47 || bcmp(v48, v46, v49) )
              goto LABEL_93;
          }
          if ( v41 >= v42 )
          {
LABEL_93:
            v92 = s2;
            v93 = <alloc::string::String as core::fmt::Display>::fmt;
            v94 = src;
            v95 = <alloc::string::String as core::fmt::Display>::fmt;
            v96 = v43;
            v97 = 0LL;
            *(_QWORD *)&v78 = 2LL;
            dest[0] = &dword_0 + 2;
            v80 = 0LL;
            v81 = 32LL;
            LOBYTE(v82) = 3;
            v83 = 2LL;
            v86 = 1LL;
            v87 = 2LL;
            v88 = 1LL;
            v89 = 32LL;
            goto LABEL_94;
          }
          v130 = v109;
          v129 = *(_OWORD *)s2;
          v50 = src[1];
          if ( !src[1] )
            goto LABEL_180;
          v51 = n;
          if ( (n & 0x8000000000000000LL) != 0LL )
            goto LABEL_180;
          v52 = v130;
          if ( (unsigned __int64)v129 - v130 < n )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v110, v130, n);
            v52 = v130;
          }
          v53 = (void *)(*((_QWORD *)&v129 + 1) + v52);
          core::intrinsics::copy_nonoverlapping::precondition_check(v50, v53, 1LL, 1LL, v51);
          memcpy(v53, v50, v51);
          v130 += v51;
          v121 = v129;
          v122[0] = v130;
          v54 = src;
          alloc::raw_vec::RawVec<T,A>::current_memory(&v78, src);
          if ( *((_QWORD *)&v78 + 1) )
          {
            v54 = (void **)v78;
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v78, *((_QWORD *)&v78 + 1), dest[0]);
          }
          *(_OWORD *)src = v121;
          n = v122[0];
          v55 = (char *)v43 + 1;
          if ( !v55 )
            core::panicking::panic_const::panic_const_add_overflow(&off_1341A8, v54);
          v115 = src;
          v116 = <alloc::string::String as core::fmt::Display>::fmt;
          v117 = (__int64)v55;
          v118 = 0LL;
          *(_QWORD *)&v78 = 2LL;
          dest[0] = &dword_0 + 1;
          dest[1] = &dword_0 + 1;
          v80 = 0LL;
          v81 = 32LL;
          LOBYTE(v82) = 1;
          v92 = (void **)anon_c4c4bebbd6dc8fc037a3b36a3713dba0_16_llvm_5692066984011975658;
          v93 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v96 = &v78;
          v97 = 1LL;
          v94 = (void **)v104;
          v95 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v21 = std::io::Write::write_fmt(&v76, v91);
          v56 = 1;
LABEL_96:
          alloc::raw_vec::RawVec<T,A>::current_memory(&v112, src);
          v22 = v142;
          if ( *((_QWORD *)&v112 + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v112, *((_QWORD *)&v112 + 1), v113);
          if ( !v56 )
          {
            alloc::raw_vec::RawVec<T,A>::current_memory(&v112, s2);
            if ( *((_QWORD *)&v112 + 1) )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v109, v112, *((_QWORD *)&v112 + 1), v113);
          }
          if ( v21 )
            goto LABEL_154;
          if ( !*(_QWORD *)(a9 + 32) || *(__int64 *)(a9 + 40) < 0 )
LABEL_178:
            core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
          v21 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v76);
          break;
      }
    }
    if ( v21 )
      goto LABEL_154;
    v136 = v107;
    v135 = v106;
    v134 = v105;
    v58 = (char *)v131[0] - 0x7FFFFFFFFFFFFFFFLL;
    if ( (__int64)v131[0] >= (__int64)0x8000000000000004LL )
      v58 = 0LL;
    switch ( (unsigned __int64)v58 )
    {
      case 0uLL:
        v59 = v131[1];
        if ( !v131[1] || ((__int64)v131[1] & 7) != 0 || (v9 = v132, (unsigned __int64)v132 >> 60) )
          core::panicking::panic_nounwind(anon_3192fd2b3cdbb0a05347a2be3e369164_2_llvm_3898926832826071515, 162LL);
        v75 = BYTE8(v132);
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v78, v132, 0LL);
        v22 = *((_QWORD *)&v78 + 1);
        if ( (_QWORD)v78 )
          alloc::raw_vec::handle_error(*((_QWORD *)&v78 + 1), dest[0]);
        v60 = (__int64 (__fastcall *)())dest[0];
        core::intrinsics::copy_nonoverlapping::precondition_check(v59, dest[0], 8LL, 8LL, v9);
        v128 = v60;
        memcpy(v60, v59, 8 * v9);
        v127 = v133;
        goto LABEL_118;
      case 1uLL:
        goto LABEL_117;
      case 2uLL:
        v22 = 0x8000000000000001LL;
        goto LABEL_117;
      case 3uLL:
        v22 = 0x8000000000000002LL;
        goto LABEL_117;
      case 4uLL:
        v22 = 0x8000000000000003LL;
LABEL_117:
        v9 = v111;
LABEL_118:
        v80 = v136;
        *(_OWORD *)dest = v135;
        v78 = v134;
        v81 = v22;
        v82 = v128;
        v83 = v9;
        v84 = v75;
        *(_DWORD *)&v85[3] = *(_DWORD *)&v101[3];
        *(_DWORD *)v85 = *(_DWORD *)v101;
        v86 = v127;
        v61 = 0;
        v62 = v134 - 0x7FFFFFFFFFFFFFFFLL;
        if ( (__int64)v134 >= (__int64)0x8000000000000004LL )
          v62 = 0LL;
        switch ( v62 )
        {
          case 0LL:
            v61 = 0;
            v63 = v22 - 0x7FFFFFFFFFFFFFFFLL;
            if ( v22 >= (__int64)0x8000000000000004LL )
              v63 = 0LL;
            switch ( v63 )
            {
              case 0LL:
                v114 = v136;
                v113 = v135;
                v112 = v134;
                v115 = (void **)v22;
                v116 = v128;
                v117 = v9;
                LOBYTE(v118) = v75;
                HIDWORD(v118) = *(_DWORD *)&v101[3];
                *(_DWORD *)((char *)&v118 + 1) = *(_DWORD *)v101;
                v119 = v127;
                bigdecimal::arithmetic::addition::add_bigdecimals(v91, &v112, v104);
                v17 = (unsigned __int64)v92;
                v126 = v93;
                v125 = v94;
                v74 = (char)v95;
                v77[0] = *(_DWORD *)((char *)&v95 + 1);
                *(_DWORD *)((char *)v77 + 3) = HIDWORD(v95);
                v124 = v96;
                break;
              case 1LL:
                goto LABEL_131;
              case 2LL:
                v17 = 0x8000000000000001LL;
                v61 = 0;
                if ( (__int64)v134 < (__int64)0x8000000000000004LL )
                  goto LABEL_143;
                goto LABEL_140;
              case 3LL:
                v126 = (__int64 (__fastcall *)())*((_QWORD *)&v134 + 1);
                v17 = v134;
                v125 = (void **)v135;
                v74 = BYTE8(v135);
                v77[0] = *(_DWORD *)((char *)&v135 + 9);
                *(_DWORD *)((char *)v77 + 3) = HIDWORD(v135);
                v124 = v136;
                goto LABEL_144;
              case 4LL:
                goto LABEL_138;
            }
            goto LABEL_10;
          case 1LL:
            v61 = 0;
            v64 = v22 - 0x7FFFFFFFFFFFFFFFLL;
            if ( v22 >= (__int64)0x8000000000000004LL )
              v64 = 0LL;
            switch ( v64 )
            {
              case 0LL:
              case 1LL:
              case 3LL:
LABEL_131:
                v17 = 0x8000000000000000LL;
                if ( (__int64)v134 >= (__int64)0x8000000000000004LL )
                  goto LABEL_140;
                break;
              case 2LL:
              case 4LL:
                goto LABEL_138;
            }
            goto LABEL_143;
          case 2LL:
            v61 = 0;
            v65 = v22 - 0x7FFFFFFFFFFFFFFFLL;
            if ( v22 >= (__int64)0x8000000000000004LL )
              v65 = 0LL;
            switch ( v65 )
            {
              case 0LL:
              case 2LL:
              case 3LL:
                v17 = 0x8000000000000001LL;
                if ( (__int64)v134 >= (__int64)0x8000000000000004LL )
                  goto LABEL_140;
                break;
              case 1LL:
              case 4LL:
LABEL_138:
                v61 = 0;
                goto LABEL_139;
            }
            goto LABEL_143;
          case 3LL:
            *(_DWORD *)((char *)v77 + 3) = *(_DWORD *)&v101[3];
            v77[0] = *(_DWORD *)v101;
            v61 = 1;
            v124 = (__int128 *)v127;
            v74 = v75;
            v17 = v22;
            v126 = v128;
            v125 = (void **)v9;
            if ( (__int64)v134 < (__int64)0x8000000000000004LL )
              goto LABEL_143;
            goto LABEL_140;
          case 4LL:
LABEL_139:
            v17 = 0x8000000000000003LL;
            if ( (__int64)v134 >= (__int64)0x8000000000000004LL )
            {
LABEL_140:
              alloc::raw_vec::RawVec<T,A>::current_memory(&v112, &v78);
              if ( *((_QWORD *)&v112 + 1) )
                <alloc::alloc::Global as core::alloc::Allocator>::deallocate(dest, v112, *((_QWORD *)&v112 + 1), v113);
              v22 = v81;
            }
LABEL_143:
            if ( !v61 )
            {
LABEL_144:
              if ( v22 >= (__int64)0x8000000000000004LL )
              {
                alloc::raw_vec::RawVec<T,A>::current_memory(&v112, &v81);
                if ( *((_QWORD *)&v112 + 1) )
                  JUMPOUT(0xA9AE2LL);
              }
            }
LABEL_10:
            *(_QWORD *)&v105 = v17;
            *((_QWORD *)&v105 + 1) = v126;
            *(_QWORD *)&v106 = v125;
            BYTE8(v106) = v74;
            HIDWORD(v106) = *(_DWORD *)((char *)v77 + 3);
            *(_DWORD *)((char *)&v106 + 9) = v77[0];
            v107 = v124;
            v16 = 1;
            break;
        }
        break;
    }
  }
  if ( (v16 & 1) != 0 )
  {
    v147[0] = v145;
    v147[1] = <&T as core::fmt::Display>::fmt;
    v149[0] = anon_c4c4bebbd6dc8fc037a3b36a3713dba0_16_llvm_5692066984011975658;
    v149[1] = 1LL;
    v149[4] = 0LL;
    v149[2] = v147;
    v149[3] = 1LL;
    v21 = std::io::Write::write_fmt(&v76, v149);
    if ( v21 )
      goto LABEL_154;
  }
  v21 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v76);
  if ( v21 )
  {
LABEL_154:
    if ( (__int64)v105 > (__int64)0x8000000000000003LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v78, &v105);
      if ( *((_QWORD *)&v78 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v106, v78, *((_QWORD *)&v78 + 1), dest[0]);
    }
    if ( (__int64)v138 > (__int64)0x8000000000000003LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v78, &v138);
      if ( *((_QWORD *)&v78 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v139, v78, *((_QWORD *)&v78 + 1), dest[0]);
    }
    if ( (__int64)v131[0] > (__int64)0x8000000000000003LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v78, v131);
      if ( *((_QWORD *)&v78 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v132, v78, *((_QWORD *)&v78 + 1), dest[0]);
    }
    v66 = v76;
    v67 = (*(_DWORD *)(v76 + 12))-- == 1;
    if ( !v67 )
      return v21;
    v68 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v66, v68, 0LL);
    v69 = v76;
    if ( _InterlockedExchange((volatile __int32 *)(v76 + 8), 0) != 2 )
      return v21;
LABEL_177:
    std::sys::sync::mutex::futex::Mutex::wake(v69 + 8);
    return v21;
  }
  if ( (__int64)v105 > (__int64)0x8000000000000003LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v78, &v105);
    if ( *((_QWORD *)&v78 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v106, v78, *((_QWORD *)&v78 + 1), dest[0]);
  }
  if ( (__int64)v138 > (__int64)0x8000000000000003LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v78, &v138);
    if ( *((_QWORD *)&v78 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v139, v78, *((_QWORD *)&v78 + 1), dest[0]);
  }
  if ( (__int64)v131[0] > (__int64)0x8000000000000003LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v78, v131);
    if ( *((_QWORD *)&v78 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v132, v78, *((_QWORD *)&v78 + 1), dest[0]);
  }
  v71 = v76;
  v21 = 0LL;
  v67 = (*(_DWORD *)(v76 + 12))-- == 1;
  if ( v67 )
  {
    v72 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v71, v72, 0LL);
    v69 = v76;
    if ( _InterlockedExchange((volatile __int32 *)(v76 + 8), 0) == 2 )
      goto LABEL_177;
  }
  return v21;
}
