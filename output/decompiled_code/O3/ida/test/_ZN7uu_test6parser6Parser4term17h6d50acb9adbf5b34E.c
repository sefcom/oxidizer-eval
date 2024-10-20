__int64 __fastcall uu_test::parser::Parser::term(_OWORD *a1, __int64 a2)
{
  void *v2; // r12
  _OWORD *v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  signed __int64 *v8; // r15
  signed __int64 v9; // r15
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  const void *v19; // rsi
  signed __int64 v20; // r12
  __int64 v21; // rax
  void *v22; // rbp
  const void *v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r12
  signed __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rbp
  _QWORD *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  _QWORD *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rsi
  signed __int64 v42; // r12
  const void *v43; // rbp
  void *v44; // rax
  __int64 v45; // r13
  _QWORD *v46; // r15
  __int64 v47; // rbx
  __int64 v48; // r12
  char v49; // bl
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdi
  _QWORD *v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rsi
  __int128 v58; // xmm0
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rbp
  __int64 v62; // rax
  __int64 v63; // rsi
  _QWORD *v64; // r12
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  unsigned __int64 v68; // r12
  _QWORD *v69; // r13
  __int64 v70; // rsi
  __int64 v71; // r12
  __int64 v72; // rax
  __int64 v73; // rax
  __int128 v74; // xmm0
  const char *v75; // rsi
  __int128 v76; // xmm0
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int128 v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rsi
  const void *v87; // [rsp+8h] [rbp-230h]
  __int64 v88; // [rsp+8h] [rbp-230h]
  char v89; // [rsp+8h] [rbp-230h]
  __int64 v90; // [rsp+8h] [rbp-230h]
  _BYTE v91[56]; // [rsp+10h] [rbp-228h] BYREF
  _OWORD *v92; // [rsp+50h] [rbp-1E8h]
  __int64 v93; // [rsp+58h] [rbp-1E0h]
  __m256i v94; // [rsp+60h] [rbp-1D8h] BYREF
  __int128 v95; // [rsp+90h] [rbp-1A8h]
  __int64 v96; // [rsp+A0h] [rbp-198h]
  __int128 v97; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-178h]
  _BYTE v99[24]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v100; // [rsp+E8h] [rbp-150h]
  char *v101; // [rsp+F0h] [rbp-148h] BYREF
  __int128 v102; // [rsp+F8h] [rbp-140h]
  __int64 v103; // [rsp+108h] [rbp-130h]
  __int64 v104; // [rsp+118h] [rbp-120h] BYREF
  __int128 v105; // [rsp+120h] [rbp-118h]
  __int64 v106; // [rsp+130h] [rbp-108h]
  __int64 v107; // [rsp+140h] [rbp-F8h]
  _BYTE v108[24]; // [rsp+148h] [rbp-F0h] BYREF
  _BYTE v109[40]; // [rsp+170h] [rbp-C8h] BYREF
  __int128 v110; // [rsp+198h] [rbp-A0h]
  __int64 v111; // [rsp+1A8h] [rbp-90h]
  __int64 v112; // [rsp+1B8h] [rbp-80h]
  __int64 v113; // [rsp+1C0h] [rbp-78h]
  __int64 v114; // [rsp+1C8h] [rbp-70h] BYREF
  __int64 *v115; // [rsp+1D0h] [rbp-68h]
  __int64 v116; // [rsp+1D8h] [rbp-60h]
  _OWORD v117[2]; // [rsp+1E0h] [rbp-58h] BYREF
  __int64 v118; // [rsp+200h] [rbp-38h]

  v4 = a1;
  v5 = 0x8000000000000000LL;
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v6 == 0x8000000000000001LL )
  {
    v7 = *(_QWORD *)(a2 + 56);
    if ( v7 == *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)v109 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v7 + 24;
      *(_QWORD *)&v109[16] = *(_QWORD *)(v7 + 16);
      *(_OWORD *)v109 = *(_OWORD *)v7;
    }
  }
  else
  {
    *(_OWORD *)&v109[8] = *(_OWORD *)(a2 + 32);
    *(_QWORD *)v109 = v6;
  }
  uu_test::parser::Symbol::new((__int64 *)v117, (__int64 *)v109);
  v8 = (signed __int64 *)(a2 + 24);
  switch ( *(_QWORD *)&v117[0] )
  {
    case 0LL:
      <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(v91, a2 + 48);
      v9 = *v8;
      if ( v9 == 0x8000000000000000LL )
      {
        v9 = 0x8000000000000000LL;
LABEL_77:
        v110 = *(_OWORD *)&v91[16];
        *(_OWORD *)&v109[24] = *(_OWORD *)v91;
        *(_QWORD *)&v109[8] = v2;
        *(_QWORD *)&v109[16] = v9;
        *(_QWORD *)v109 = v9;
        v111 = 3LL;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v114, v109);
        v46 = v115;
        v47 = v116;
        switch ( v116 )
        {
          case 0LL:
            std::sys::os_str::bytes::Slice::to_owned(v99, asc_193AB, 1LL);
            *(_QWORD *)&v91[24] = *(_QWORD *)&v99[16];
            *(_OWORD *)&v91[8] = *(_OWORD *)v99;
            *(_QWORD *)v91 = 3LL;
            uu_test::parser::Parser::literal(&v101, a2, v91);
            v48 = (__int64)v101;
            if ( v101 == &byte_7 )
            {
              v92 = v4;
              v49 = 1;
              v48 = 7LL;
              goto LABEL_133;
            }
            v96 = v103;
            v95 = v102;
            goto LABEL_144;
          case 1LL:
            *(_QWORD *)v99 = v115;
            v101 = v99;
            *(_QWORD *)&v102 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v91 = &unk_FF60;
            *(_QWORD *)&v91[8] = 1LL;
            *(_QWORD *)&v91[32] = 0LL;
            *(_QWORD *)&v91[16] = &v101;
            *(_QWORD *)&v91[24] = 1LL;
            alloc::fmt::format::format_inner(&v97, v91);
            v92 = v4;
            v95 = v97;
            v96 = v98;
            v48 = 3LL;
            v89 = 0;
            goto LABEL_127;
          case 2LL:
            v50 = *v115;
            v51 = v115[5];
            if ( *v115 != 4 || v51 != 3 )
            {
              if ( v51 == 3 )
                goto LABEL_116;
              goto LABEL_120;
            }
            if ( v115[8] == 1 && *(_BYTE *)v115[7] == 41 )
              goto LABEL_109;
            goto LABEL_116;
          case 3LL:
            v50 = *v115;
            if ( *v115 == 4 )
            {
              if ( *((_DWORD *)v115 + 10) == 3 && v115[8] == 1 && *(_BYTE *)v115[7] == 41 )
              {
LABEL_109:
                *(_QWORD *)v91 = 0LL;
                uu_test::parser::Symbol::into_literal((__int64)&v101, (__int64)v91);
                uu_test::parser::Parser::literal(v99, a2, &v101);
                if ( *(_QWORD *)v99 != 7LL )
                {
                  v90 = *(_QWORD *)v99;
                  v96 = v100;
                  v58 = *(_OWORD *)&v99[8];
LABEL_138:
                  v95 = v58;
                  v64 = v46;
                  do
                  {
                    if ( (unsigned __int64)(*v46 - 2LL) <= 3 )
                    {
                      v65 = *(_QWORD *)&asc_102C0[8 * *v46 - 16];
                      v66 = *(_QWORD *)((char *)v46 + v65);
                      if ( v66 )
                        _rust_dealloc(*(_QWORD *)((char *)v46 + v65 + 8), v66, 1LL);
                    }
                    v46 += 5;
                    --v47;
                  }
                  while ( v47 );
                  v46 = v64;
                  v48 = v90;
LABEL_144:
                  if ( v114 )
                    _rust_dealloc(v46, 40 * v114, 8LL);
                  goto LABEL_146;
                }
LABEL_126:
                v92 = v4;
                v48 = 7LL;
                v89 = 1;
LABEL_127:
                v61 = v46;
                do
                {
                  if ( (unsigned __int64)(*v46 - 2LL) <= 3 )
                  {
                    v62 = *(_QWORD *)&asc_102C0[8 * *v46 - 16];
                    v63 = *(_QWORD *)((char *)v46 + v62);
                    if ( v63 )
                      _rust_dealloc(*(_QWORD *)((char *)v46 + v62 + 8), v63, 1LL);
                  }
                  v46 += 5;
                  --v47;
                }
                while ( v47 );
                v46 = v61;
                v49 = v89;
LABEL_133:
                result = v114;
                if ( v114 )
                  result = _rust_dealloc(v46, 40 * v114, 8LL);
                v4 = v92;
                if ( v49 )
                {
LABEL_188:
                  *(_QWORD *)v4 = 7LL;
                  return result;
                }
LABEL_146:
                result = v96;
                *((_QWORD *)v4 + 3) = v96;
                *(_OWORD *)((char *)v4 + 8) = v95;
                *(_QWORD *)v4 = v48;
                return result;
              }
            }
            else if ( (_DWORD)v50 == 5 && *((_DWORD *)v115 + 20) == 3 && v115[13] == 1 && *(_BYTE *)v115[12] == 41 )
            {
              uu_test::parser::Parser::next_token(v94.m256i_i64, a2);
              uu_test::parser::Parser::uop(a2, &v94);
              uu_test::parser::Parser::expect((__int64)v91, a2);
              goto LABEL_125;
            }
            v59 = v115[5];
            if ( v59 == 3 )
            {
LABEL_116:
              if ( v115[8] == 1 && *(_BYTE *)v115[7] == 41 )
              {
                uu_test::parser::Parser::next_token((__int64 *)v108, a2);
                uu_test::parser::Parser::literal(v91, a2, v108);
                v60 = *(_QWORD *)v91;
                if ( *(_QWORD *)v91 == 7LL )
                  goto LABEL_124;
                goto LABEL_137;
              }
            }
            else if ( (_DWORD)v59 == 4 )
            {
              if ( (_DWORD)v50 == 4 )
              {
                uu_test::parser::Parser::next_token(&v104, a2);
                uu_test::parser::Parser::literal(v91, a2, &v104);
                v60 = *(_QWORD *)v91;
                if ( *(_QWORD *)v91 == 7LL )
                  goto LABEL_124;
                goto LABEL_137;
              }
LABEL_123:
              uu_test::parser::Parser::expr((__int64)v91, a2);
              v60 = *(_QWORD *)v91;
              if ( *(_QWORD *)v91 == 7LL )
              {
LABEL_124:
                uu_test::parser::Parser::expect((__int64)v91, a2);
LABEL_125:
                v60 = *(_QWORD *)v91;
                if ( *(_QWORD *)v91 == 7LL )
                  goto LABEL_126;
              }
LABEL_137:
              v90 = v60;
              v96 = *(_QWORD *)&v91[24];
              v58 = *(_OWORD *)&v91[8];
              goto LABEL_138;
            }
LABEL_120:
            if ( (_DWORD)v50 != 4 )
              goto LABEL_123;
            std::sys::os_str::bytes::Slice::to_owned(v99, asc_193AB, 1LL);
            *(_QWORD *)&v91[24] = *(_QWORD *)&v99[16];
            *(_OWORD *)&v91[8] = *(_OWORD *)v99;
            *(_QWORD *)v91 = 3LL;
            uu_test::parser::Parser::literal(&v101, a2, v91);
            if ( v101 != &byte_7 )
            {
              v90 = (__int64)v101;
              v96 = v103;
              v58 = v102;
              goto LABEL_138;
            }
            goto LABEL_126;
          default:
            goto LABEL_123;
        }
      }
      if ( v9 == 0x8000000000000001LL )
        goto LABEL_77;
      v23 = *(const void **)(a2 + 32);
      v9 = *(_QWORD *)(a2 + 40);
      if ( v9 )
      {
        if ( v9 < 0 )
        {
          v24 = 0LL;
        }
        else
        {
          v24 = 1LL;
          v25 = _rust_alloc(*(_QWORD *)(a2 + 40), 1LL);
          if ( v25 )
          {
            v2 = (void *)v25;
            v4 = a1;
LABEL_76:
            memcpy(v2, v23, v9);
            goto LABEL_77;
          }
        }
        alloc::raw_vec::handle_error(v24, v9);
      }
      v2 = &dword_0 + 1;
      goto LABEL_76;
    case 1LL:
      v11 = *v8;
      v12 = 0x8000000000000001LL;
      if ( *v8 == 0x8000000000000001LL )
      {
        v13 = *(_QWORD *)(a2 + 56);
        v11 = 0x8000000000000000LL;
        if ( v13 != *(_QWORD *)(a2 + 72) )
        {
          *(_QWORD *)(a2 + 56) = v13 + 24;
          v11 = *(_QWORD *)v13;
          *(_OWORD *)v91 = *(_OWORD *)(v13 + 8);
        }
        *(_QWORD *)(a2 + 24) = v11;
        *(_OWORD *)(a2 + 32) = *(_OWORD *)v91;
      }
      v92 = a1;
      if ( v11 != 0x8000000000000000LL )
      {
        v19 = *(const void **)(a2 + 32);
        v20 = *(_QWORD *)(a2 + 40);
        if ( v20 )
        {
          v87 = *(const void **)(a2 + 32);
          if ( v20 < 0 )
          {
            v93 = 0LL;
          }
          else
          {
            v93 = 1LL;
            v21 = _rust_alloc(v20, 1LL);
            if ( v21 )
            {
              v22 = (void *)v21;
              v19 = v87;
LABEL_33:
              memcpy(v22, v19, v20);
              *(_QWORD *)v91 = v20;
              *(_QWORD *)&v91[8] = v22;
              *(_QWORD *)&v91[16] = v20;
              v4 = v92;
              goto LABEL_34;
            }
          }
          alloc::raw_vec::handle_error(v93, v20);
        }
        v22 = &dword_0 + 1;
        goto LABEL_33;
      }
      *(_QWORD *)v91 = 0x8000000000000000LL;
LABEL_34:
      uu_test::parser::Symbol::new((__int64 *)&v101, (__int64 *)v91);
      v26 = (__int64)v101;
      if ( v101 == (_BYTE *)&dword_0 + 2 || (_DWORD)v101 == 4 )
      {
        <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(&v94, a2 + 48);
        v27 = *v8;
        v28 = *v8 == 0x8000000000000000LL;
        v93 = v26;
        if ( v28 )
        {
          *(__m256i *)&v91[24] = v94;
          *(_QWORD *)v91 = 0x8000000000000001LL;
LABEL_70:
          v94.m256i_i64[0] = 0x8000000000000000LL;
          goto LABEL_153;
        }
        if ( v27 == 0x8000000000000001LL )
        {
          *(_OWORD *)&v91[40] = *(_OWORD *)&v94.m256i_u64[2];
          *(_QWORD *)&v91[24] = v94.m256i_i64[0];
          *(_QWORD *)v91 = 0x8000000000000001LL;
          v113 = v94.m256i_i64[3];
          v29 = v94.m256i_i64[3] != v94.m256i_i64[1];
          v107 = v94.m256i_i64[1];
          v112 = v94.m256i_i64[1] + 24 * v29;
          *(_QWORD *)&v91[32] = v112;
          if ( v94.m256i_i64[3] != v94.m256i_i64[1] )
          {
            v30 = (_QWORD *)(v107 + 8);
            do
            {
              v31 = *(v30 - 1);
              if ( v31 )
                _rust_dealloc(*v30, v31, 1LL);
              v30 += 3;
              --v29;
            }
            while ( v29 );
          }
          if ( v113 != v107 && v112 != v113 )
          {
            *(_QWORD *)&v91[32] = v112 + 24;
            *(_OWORD *)v94.m256i_i8 = *(_OWORD *)v112;
            v94.m256i_i64[2] = *(_QWORD *)(v112 + 16);
            goto LABEL_153;
          }
          goto LABEL_70;
        }
        v42 = *(_QWORD *)(a2 + 40);
        if ( v42 )
        {
          if ( v42 < 0 )
          {
            v88 = 0LL;
          }
          else
          {
            v43 = *(const void **)(a2 + 32);
            v88 = 1LL;
            v44 = (void *)_rust_alloc(v42, 1LL);
            if ( v44 )
            {
              v45 = (__int64)v44;
              memcpy(v44, v43, v42);
              *(__m256i *)&v91[24] = v94;
              *(_QWORD *)&v91[8] = v45;
              *(_QWORD *)&v91[16] = v42;
              goto LABEL_148;
            }
          }
          alloc::raw_vec::handle_error(v88, v42);
        }
        *(__m256i *)&v91[24] = v94;
        *(_QWORD *)&v91[8] = 1LL;
        *(_QWORD *)&v91[16] = 0LL;
        v45 = 1LL;
LABEL_148:
        *(_QWORD *)v91 = 0x8000000000000001LL;
        v67 = *(_QWORD *)&v91[32];
        if ( *(_QWORD *)&v91[32] == *(_QWORD *)&v91[48] )
        {
          v94.m256i_i64[0] = 0x8000000000000000LL;
        }
        else
        {
          *(_QWORD *)&v91[32] += 24LL;
          *(_OWORD *)v94.m256i_i8 = *(_OWORD *)v67;
          v94.m256i_i64[2] = *(_QWORD *)(v67 + 16);
        }
        if ( v42 )
          _rust_dealloc(v45, v42, 1LL);
LABEL_153:
        uu_test::parser::Symbol::new((__int64 *)v108, v94.m256i_i64);
        if ( *(_QWORD *)&v91[48] != *(_QWORD *)&v91[32] )
        {
          v68 = (*(_QWORD *)&v91[48] - *(_QWORD *)&v91[32]) / 0x18uLL;
          v69 = (_QWORD *)(*(_QWORD *)&v91[32] + 8LL);
          do
          {
            v70 = *(v69 - 1);
            if ( v70 )
              _rust_dealloc(*v69, v70, 1LL);
            v69 += 3;
            --v68;
          }
          while ( v68 );
        }
        if ( *(_QWORD *)&v91[40] )
          _rust_dealloc(*(_QWORD *)&v91[24], 24LL * *(_QWORD *)&v91[40], 8LL);
        v71 = *(_QWORD *)v108;
        v4 = v92;
        if ( (*(_DWORD *)v108 | 2) == 6 )
        {
          v72 = *v8;
          *v8 = 0x8000000000000001LL;
          if ( v72 == 0x8000000000000001LL )
          {
            v73 = *(_QWORD *)(a2 + 56);
            if ( v73 == *(_QWORD *)(a2 + 72) )
            {
              v94.m256i_i64[0] = 0x8000000000000000LL;
            }
            else
            {
              *(_QWORD *)(a2 + 56) = v73 + 24;
              v94.m256i_i64[2] = *(_QWORD *)(v73 + 16);
              *(_OWORD *)v94.m256i_i8 = *(_OWORD *)v73;
            }
          }
          else
          {
            *(_OWORD *)&v94.m256i_u64[1] = *(_OWORD *)(a2 + 32);
            v94.m256i_i64[0] = v72;
          }
          uu_test::parser::Symbol::new((__int64 *)v91, v94.m256i_i64);
          switch ( *(_QWORD *)v91 )
          {
            case 0LL:
              v75 = asc_193AB;
              goto LABEL_174;
            case 1LL:
              v75 = asc_193AC;
LABEL_174:
              std::sys::os_str::bytes::Slice::to_owned(&v94, v75, 1LL);
              goto LABEL_175;
            case 2LL:
            case 3LL:
              v94.m256i_i64[2] = *(_QWORD *)&v91[24];
              *(_OWORD *)v94.m256i_i8 = *(_OWORD *)&v91[8];
LABEL_175:
              v106 = v94.m256i_i64[2];
              v76 = *(_OWORD *)v94.m256i_i8;
              break;
            case 4LL:
            case 5LL:
              v106 = *(_QWORD *)&v91[32];
              v76 = *(_OWORD *)&v91[16];
              break;
            case 6LL:
              uu_test::parser::Symbol::into_literal::panic_cold_explicit();
          }
          v105 = v76;
          v104 = 3LL;
          uu_test::parser::Parser::literal(v91, a2, &v104);
          v34 = *(_QWORD *)v91;
          if ( *(_QWORD *)v91 == 7LL )
          {
            *(_QWORD *)v91 = 1LL;
            v77 = *(_QWORD *)(a2 + 16);
            if ( v77 == *(_QWORD *)a2 )
              alloc::raw_vec::RawVec<T,A>::grow_one(a2);
            v78 = *(_QWORD *)(a2 + 8);
            v79 = 5 * v77;
            *(_QWORD *)(v78 + 8 * v79 + 32) = *(_QWORD *)&v91[32];
            v80 = *(_OWORD *)v91;
            *(_OWORD *)(v78 + 8 * v79 + 16) = *(_OWORD *)&v91[16];
            *(_OWORD *)(v78 + 8 * v79) = v80;
            *(_QWORD *)(a2 + 16) = v77 + 1;
LABEL_181:
            if ( (unsigned __int64)(v71 - 2) <= 3 )
            {
              v81 = *(_QWORD *)&asc_102C0[8 * v71 - 16];
              v52 = *(_QWORD *)&v108[v81];
              if ( v52 )
              {
                v54 = *(_QWORD *)&v108[v81 + 8];
                v53 = 1LL;
                goto LABEL_184;
              }
            }
LABEL_185:
            result = v93 - 2;
            if ( (unsigned __int64)(v93 - 2) <= 3 )
            {
              result = *(_QWORD *)&asc_102C0[8 * v93 - 16];
              v82 = *(__int64 *)((char *)&v101 + result);
              if ( v82 )
                result = _rust_dealloc(*(_QWORD *)((char *)&v102 + result), v82, 1LL);
            }
            goto LABEL_188;
          }
        }
        else
        {
          std::sys::os_str::bytes::Slice::to_owned(v99, asc_193AC, 1LL);
          *(_QWORD *)&v91[24] = *(_QWORD *)&v99[16];
          *(_OWORD *)&v91[8] = *(_OWORD *)v99;
          *(_QWORD *)v91 = 3LL;
          uu_test::parser::Parser::literal(&v94, a2, v91);
          v34 = v94.m256i_i64[0];
          if ( v94.m256i_i64[0] != 7 )
          {
            v98 = v94.m256i_i64[3];
            v74 = *(_OWORD *)&v94.m256i_u64[1];
            goto LABEL_190;
          }
          uu_test::parser::Parser::maybe_boolop(v91, a2);
          v34 = *(_QWORD *)v91;
          if ( *(_QWORD *)v91 == 7LL )
            goto LABEL_181;
        }
        v98 = *(_QWORD *)&v91[24];
        v74 = *(_OWORD *)&v91[8];
LABEL_190:
        v97 = v74;
        if ( (unsigned __int64)(v71 - 2) <= 3 )
        {
          v83 = *(_QWORD *)&asc_102C0[8 * v71 - 16];
          v84 = *(_QWORD *)&v108[v83];
          if ( v84 )
            _rust_dealloc(*(_QWORD *)&v108[v83 + 8], v84, 1LL);
        }
        v26 = v93;
        goto LABEL_194;
      }
      if ( (_DWORD)v101 == 6 )
      {
        std::sys::os_str::bytes::Slice::to_owned(v108, asc_193AC, 1LL);
        *(_QWORD *)&v91[24] = *(_QWORD *)&v108[16];
        *(_OWORD *)&v91[8] = *(_OWORD *)v108;
        *(_QWORD *)v91 = 3LL;
        v14 = *(_QWORD *)(a2 + 16);
        if ( v14 == *(_QWORD *)a2 )
          alloc::raw_vec::RawVec<T,A>::grow_one(a2);
        result = *(_QWORD *)(a2 + 8);
        v15 = 5 * v14;
        *(_QWORD *)(result + 40 * v14 + 32) = *(_QWORD *)&v91[32];
        v16 = *(_OWORD *)v91;
        v17 = *(_OWORD *)&v91[16];
LABEL_20:
        *(_OWORD *)(result + 8 * v15 + 16) = v17;
        *(_OWORD *)(result + 8 * v15) = v16;
        *(_QWORD *)(a2 + 16) = v14 + 1;
        goto LABEL_188;
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::clone::Clone>::clone(v91, a2 + 48);
      if ( *v8 != 0x8000000000000001LL )
      {
        if ( *v8 != 0x8000000000000000LL )
        {
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v108, a2 + 24);
          v5 = *(_QWORD *)v108;
        }
        *(_OWORD *)v99 = *(_OWORD *)&v108[8];
        v12 = v5;
      }
      v110 = *(_OWORD *)&v91[16];
      *(_OWORD *)&v109[24] = *(_OWORD *)v91;
      *(_OWORD *)&v109[8] = *(_OWORD *)v99;
      *(_QWORD *)v109 = v12;
      v111 = 4LL;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v94, v109);
      v32 = v94.m256i_i64[2];
      v33 = v94.m256i_i64[1];
      if ( v94.m256i_i64[2] == 3
        && *(_DWORD *)v94.m256i_i64[1] == 3
        && *(_DWORD *)(v94.m256i_i64[1] + 40) == 2
        && *(_DWORD *)(v94.m256i_i64[1] + 80) == 3 )
      {
        uu_test::parser::Parser::expr((__int64)v91, a2);
        v34 = *(_QWORD *)v91;
        if ( *(_QWORD *)v91 == 7LL )
        {
          *(_QWORD *)v91 = 1LL;
          alloc::vec::Vec<T,A>::push(a2, v91);
          v93 = v26;
          goto LABEL_61;
        }
        v98 = *(_QWORD *)&v91[24];
        v97 = *(_OWORD *)&v91[8];
      }
      else
      {
        uu_test::parser::Parser::term(v91, a2);
        v34 = *(_QWORD *)v91;
        if ( *(_QWORD *)v91 == 7LL )
        {
          v93 = v26;
          *(_QWORD *)v91 = 1LL;
          v35 = *(_QWORD *)(a2 + 16);
          if ( v35 == *(_QWORD *)a2 )
            alloc::raw_vec::RawVec<T,A>::grow_one(a2);
          v36 = *(_QWORD *)(a2 + 8);
          v37 = 5 * v35;
          *(_QWORD *)(v36 + 8 * v37 + 32) = *(_QWORD *)&v91[32];
          v38 = *(_OWORD *)v91;
          *(_OWORD *)(v36 + 8 * v37 + 16) = *(_OWORD *)&v91[16];
          *(_OWORD *)(v36 + 8 * v37) = v38;
          *(_QWORD *)(a2 + 16) = v35 + 1;
          if ( !v32 )
          {
LABEL_92:
            if ( v94.m256i_i64[0] )
            {
              v52 = 40 * v94.m256i_i64[0];
              v53 = 8LL;
              v54 = v33;
LABEL_184:
              _rust_dealloc(v54, v52, v53);
              goto LABEL_185;
            }
            goto LABEL_185;
          }
LABEL_61:
          v39 = (_QWORD *)v33;
          do
          {
            if ( (unsigned __int64)(*v39 - 2LL) <= 3 )
            {
              v40 = *(_QWORD *)&asc_102C0[8 * *v39 - 16];
              v41 = *(_QWORD *)((char *)v39 + v40);
              if ( v41 )
                _rust_dealloc(*(_QWORD *)((char *)v39 + v40 + 8), v41, 1LL);
            }
            v39 += 5;
            --v32;
          }
          while ( v32 );
          goto LABEL_92;
        }
        v98 = *(_QWORD *)&v91[24];
        v97 = *(_OWORD *)&v91[8];
        if ( !v32 )
          goto LABEL_104;
      }
      v93 = v26;
      v55 = (_QWORD *)v33;
      do
      {
        if ( (unsigned __int64)(*v55 - 2LL) <= 3 )
        {
          v56 = *(_QWORD *)&asc_102C0[8 * *v55 - 16];
          v57 = *(_QWORD *)((char *)v55 + v56);
          if ( v57 )
            _rust_dealloc(*(_QWORD *)((char *)v55 + v56 + 8), v57, 1LL);
        }
        v55 += 5;
        --v32;
      }
      while ( v32 );
      v4 = v92;
      v26 = v93;
LABEL_104:
      if ( v94.m256i_i64[0] )
        _rust_dealloc(v33, 40 * v94.m256i_i64[0], 8LL);
LABEL_194:
      if ( (unsigned __int64)(v26 - 2) <= 3 )
      {
        v85 = *(_QWORD *)&asc_102C0[8 * v26 - 16];
        v86 = *(__int64 *)((char *)&v101 + v85);
        if ( v86 )
          _rust_dealloc(*(_QWORD *)((char *)&v102 + v85), v86, 1LL);
      }
      result = v98;
      *((_QWORD *)v4 + 3) = v98;
      *(_OWORD *)((char *)v4 + 8) = v97;
      *(_QWORD *)v4 = v34;
      return result;
    case 5LL:
      result = uu_test::parser::Parser::uop(a2, v117);
      goto LABEL_188;
    case 6LL:
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 == *(_QWORD *)a2 )
        alloc::raw_vec::RawVec<T,A>::grow_one(a2);
      result = *(_QWORD *)(a2 + 8);
      v15 = 5 * v14;
      *(_QWORD *)(result + 40 * v14 + 32) = v118;
      v16 = v117[0];
      v17 = v117[1];
      goto LABEL_20;
    default:
      result = uu_test::parser::Parser::literal(v109, a2, v117);
      if ( *(_DWORD *)v109 == 7 )
        goto LABEL_188;
      v18 = *(_OWORD *)v109;
      a1[1] = *(_OWORD *)&v109[16];
      *a1 = v18;
      return result;
  }
}
