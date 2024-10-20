__int64 __fastcall uu_wc::word_count_from_input(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  char v7; // dl
  __int8 v8; // dl
  char v9; // di
  char v10; // cl
  char v11; // si
  __m128i v12; // xmm0
  char v13; // r8
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // rdx
  char v22; // si
  char v23; // al
  char v24; // cl
  __m128i v25; // xmm0
  char v26; // di
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rdx
  volatile __int32 *v30; // r14
  volatile __int32 *v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // r14
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  int v36; // edi
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int128 v61; // xmm0
  char v62; // [rsp+3h] [rbp-145h] BYREF
  unsigned int v63; // [rsp+4h] [rbp-144h] BYREF
  __int64 v64; // [rsp+8h] [rbp-140h] BYREF
  __m128i v65; // [rsp+10h] [rbp-138h] BYREF
  __m128i v66; // [rsp+20h] [rbp-128h] BYREF
  int fd[4]; // [rsp+30h] [rbp-118h]
  __int64 v68; // [rsp+40h] [rbp-108h]
  int v69; // [rsp+48h] [rbp-100h]
  char v70; // [rsp+4Ch] [rbp-FCh]
  __m128i v71; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v72; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+70h] [rbp-D8h]
  _BYTE v74[40]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-A0h]
  __m128i v76; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v77; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v78; // [rsp+D0h] [rbp-78h] BYREF
  volatile __int32 *v79; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-60h]
  __int64 v81; // [rsp+F0h] [rbp-58h]
  __int64 v82; // [rsp+F8h] [rbp-50h]
  __int64 v83; // [rsp+100h] [rbp-48h] BYREF
  _DWORD v84[2]; // [rsp+108h] [rbp-40h] BYREF
  __int64 v85; // [rsp+110h] [rbp-38h]

  v4 = *a2;
  v5 = *a2 == 0x8000000000000001LL;
  v82 = a1;
  if ( v5 )
  {
    v83 = std::io::stdio::stdin();
    v6 = std::io::stdio::Stdin::lock(&v83);
    v79 = (volatile __int32 *)v6;
    v8 = v7 & 1;
    LOBYTE(v80) = v8;
    v9 = *(_BYTE *)(a3 + 26);
    v10 = *(_BYTE *)(a3 + 27);
    v11 = *(_BYTE *)(a3 + 28);
    v12 = _mm_and_si128(_mm_loadl_epi64((const __m128i *)(a3 + 24)), (__m128i)xmmword_16E50);
    v13 = _mm_cvtsi128_si32(_mm_cmpeq_epi8(v12, (__m128i)0LL));
    v14 = _mm_cmpeq_epi8(_mm_unpacklo_epi8(v12, v12), (__m128i)0LL);
    if ( (v13 & 1) != 0 )
    {
      if ( (_mm_extract_epi16(v14, 1) & 1) != 0 )
      {
        if ( (v9 & 1) == 0 )
        {
          if ( (v11 & 1) == 0 )
          {
            if ( (v10 & 1) == 0 )
              core::panicking::panic(aInternalErrorE_3, 40LL, &off_118BB0);
LABEL_100:
            v66 = 0LL;
            v65 = 0LL;
            *(_QWORD *)fd = 0LL;
            v76.m128i_i64[0] = v6;
            v76.m128i_i8[8] = v8;
            v77.m128i_i64[0] = 0LL;
            v77.m128i_i8[12] = 0;
            v77.m128i_i32[2] = 0;
            LOBYTE(v63) = 0;
            v64 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
              if ( v71.m128i_i64[0] == 2 )
                break;
              v29 = v72.m128i_i64[0];
              if ( v71.m128i_i64[0] )
              {
                if ( v71.m128i_i64[1] )
                {
                  if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                    core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                  v65.m128i_i64[0] += v72.m128i_i64[0];
                }
                else if ( v72.m128i_i64[0] )
                {
                  goto LABEL_171;
                }
              }
              else
              {
                uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
              }
            }
LABEL_173:
            *(_QWORD *)&v74[32] = *(_QWORD *)fd;
            v32 = _mm_load_si128(&v65);
            *(__m128i *)&v74[16] = _mm_load_si128(&v66);
            *(__m128i *)v74 = v32;
            v75 = 0LL;
            if ( (v76.m128i_i8[8] & 1) == 0 )
            {
LABEL_174:
              v33 = v76.m128i_i64[0];
              if ( (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
              {
                core::sync::atomic::atomic_store(v33 + 4, 1LL, 0LL);
              }
            }
LABEL_175:
            v31 = (volatile __int32 *)v76.m128i_i64[0];
            goto LABEL_176;
          }
LABEL_43:
          if ( (v10 & 1) != 0 )
          {
            v66 = 0LL;
            v65 = 0LL;
            *(_QWORD *)fd = 0LL;
            v76.m128i_i64[0] = v6;
            v76.m128i_i8[8] = v8;
            v77.m128i_i64[0] = 0LL;
            v77.m128i_i8[12] = 0;
            v77.m128i_i32[2] = 0;
            LOBYTE(v63) = 0;
            v64 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
              if ( v71.m128i_i64[0] == 2 )
                break;
              v29 = v72.m128i_i64[0];
              if ( v71.m128i_i64[0] )
              {
                if ( v71.m128i_i64[1] )
                {
                  if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                    core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                  v65.m128i_i64[0] += v72.m128i_i64[0];
                }
                else if ( v72.m128i_i64[0] )
                {
                  goto LABEL_171;
                }
              }
              else
              {
                uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], &v64, &v63);
              }
            }
          }
          else
          {
            v66 = 0LL;
            v65 = 0LL;
            *(_QWORD *)fd = 0LL;
            v76.m128i_i64[0] = v6;
            v76.m128i_i8[8] = v8;
            v77.m128i_i64[0] = 0LL;
            v77.m128i_i8[12] = 0;
            v77.m128i_i32[2] = 0;
            v64 = 0LL;
            while ( 1 )
            {
              uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
              if ( v71.m128i_i64[0] == 2 )
                break;
              v29 = v72.m128i_i64[0];
              if ( v71.m128i_i64[0] )
              {
                if ( v71.m128i_i64[1] )
                {
                  if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                    core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                  v65.m128i_i64[0] += v72.m128i_i64[0];
                }
                else if ( v72.m128i_i64[0] )
                {
                  goto LABEL_171;
                }
              }
              else
              {
                uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64);
              }
            }
          }
          goto LABEL_173;
        }
        if ( (v11 & 1) == 0 )
        {
          if ( (v10 & 1) == 0 )
          {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
            goto LABEL_59;
          }
LABEL_118:
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          LOBYTE(v63) = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              goto LABEL_173;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
            }
          }
        }
LABEL_72:
        if ( (v10 & 1) != 0 )
        {
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          LOBYTE(v63) = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              break;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
            }
          }
        }
        else
        {
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              break;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64);
            }
          }
        }
        goto LABEL_173;
      }
      if ( (v9 & 1) == 0 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( (v10 & 1) == 0 )
          {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
            goto LABEL_59;
          }
          goto LABEL_109;
        }
        goto LABEL_62;
      }
      if ( (v11 & 1) == 0 )
      {
        if ( (v10 & 1) == 0 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
          goto LABEL_59;
        }
LABEL_136:
        v66 = 0LL;
        v65 = 0LL;
        *(_QWORD *)fd = 0LL;
        v76.m128i_i64[0] = v6;
        v76.m128i_i8[8] = v8;
        v77.m128i_i64[0] = 0LL;
        v77.m128i_i8[12] = 0;
        v77.m128i_i32[2] = 0;
        LOBYTE(v63) = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
          if ( v71.m128i_i64[0] == 2 )
            goto LABEL_173;
          v29 = v72.m128i_i64[0];
          if ( v71.m128i_i64[0] )
          {
            if ( v71.m128i_i64[1] )
            {
              if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v65.m128i_i64[0] += v72.m128i_i64[0];
            }
            else if ( v72.m128i_i64[0] )
            {
              goto LABEL_171;
            }
          }
          else
          {
            uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
          }
        }
      }
LABEL_82:
      if ( (v10 & 1) != 0 )
      {
        v66 = 0LL;
        v65 = 0LL;
        *(_QWORD *)fd = 0LL;
        v76.m128i_i64[0] = v6;
        v76.m128i_i8[8] = v8;
        v77.m128i_i64[0] = 0LL;
        v77.m128i_i8[12] = 0;
        v77.m128i_i32[2] = 0;
        LOBYTE(v63) = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
          if ( v71.m128i_i64[0] == 2 )
            break;
          v29 = v72.m128i_i64[0];
          if ( v71.m128i_i64[0] )
          {
            if ( v71.m128i_i64[1] )
            {
              if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v65.m128i_i64[0] += v72.m128i_i64[0];
            }
            else if ( v72.m128i_i64[0] )
            {
LABEL_171:
              *(_QWORD *)&v74[32] = *(_QWORD *)fd;
              *(__m128i *)&v74[16] = v66;
              *(__m128i *)v74 = v65;
              v75 = v29;
              if ( (v76.m128i_i8[8] & 1) != 0 )
                goto LABEL_175;
              goto LABEL_174;
            }
          }
          else
          {
            uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
          }
        }
      }
      else
      {
        v66 = 0LL;
        v65 = 0LL;
        *(_QWORD *)fd = 0LL;
        v76.m128i_i64[0] = v6;
        v76.m128i_i8[8] = v8;
        v77.m128i_i64[0] = 0LL;
        v77.m128i_i8[12] = 0;
        v77.m128i_i32[2] = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
          if ( v71.m128i_i64[0] == 2 )
            break;
          v29 = v72.m128i_i64[0];
          if ( v71.m128i_i64[0] )
          {
            if ( v71.m128i_i64[1] )
            {
              if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v65.m128i_i64[0] += v72.m128i_i64[0];
            }
            else if ( v72.m128i_i64[0] )
            {
              goto LABEL_171;
            }
          }
          else
          {
            uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64);
          }
        }
      }
      goto LABEL_173;
    }
    if ( (_mm_extract_epi16(v14, 1) & 1) != 0 )
    {
      if ( (v9 & 1) != 0 )
      {
        if ( (v11 & 1) != 0 )
          goto LABEL_72;
        if ( (v10 & 1) != 0 )
          goto LABEL_118;
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
      }
      else
      {
        if ( (v11 & 1) != 0 )
          goto LABEL_43;
        if ( (v10 & 1) != 0 )
          goto LABEL_100;
        *(_QWORD *)v74 = uu_wc::count_fast::count_bytes_fast(&v79);
        memset(&v74[8], 0, 32);
        v75 = v21;
      }
    }
    else
    {
      if ( (v9 & 1) == 0 )
      {
        if ( (v11 & 1) == 0 )
        {
          if ( (v10 & 1) == 0 )
          {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
            goto LABEL_59;
          }
LABEL_109:
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          LOBYTE(v63) = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              goto LABEL_173;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
            }
          }
        }
LABEL_62:
        if ( (v10 & 1) != 0 )
        {
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          LOBYTE(v63) = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              break;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64, &v63);
            }
          }
        }
        else
        {
          v66 = 0LL;
          v65 = 0LL;
          *(_QWORD *)fd = 0LL;
          v76.m128i_i64[0] = v6;
          v76.m128i_i8[8] = v8;
          v77.m128i_i64[0] = 0LL;
          v77.m128i_i8[12] = 0;
          v77.m128i_i32[2] = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v71, &v76, 0.0);
            if ( v71.m128i_i64[0] == 2 )
              break;
            v29 = v72.m128i_i64[0];
            if ( v71.m128i_i64[0] )
            {
              if ( v71.m128i_i64[1] )
              {
                if ( __CFADD__(v65.m128i_i64[0], v72.m128i_i64[0]) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v65.m128i_i64[0] += v72.m128i_i64[0];
              }
              else if ( v72.m128i_i64[0] )
              {
                goto LABEL_171;
              }
            }
            else
            {
              uu_wc::process_chunk(&v65, v71.m128i_i64[1], v72.m128i_i64[0], (unsigned __int64 *)&v64);
            }
          }
        }
        goto LABEL_173;
      }
      if ( (v11 & 1) != 0 )
        goto LABEL_82;
      if ( (v10 & 1) != 0 )
        goto LABEL_136;
      uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v79);
    }
LABEL_59:
    if ( (v80 & 1) == 0 )
    {
      v30 = v79;
      if ( (core::sync::atomic::atomic_load(&std::panicking::panic_count::GLOBAL_PANIC_COUNT, 0LL) & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
      {
        core::sync::atomic::atomic_store(v30 + 1, 1LL, 0LL);
      }
    }
    v31 = v79;
LABEL_176:
    if ( _InterlockedExchange(v31, 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake();
    goto LABEL_311;
  }
  v65.m128i_i64[0] = 0x1B600000000LL;
  v65.m128i_i32[2] = 1;
  v65.m128i_i16[6] = 0;
  v15 = a2[1];
  v16 = a2[2];
  if ( v4 != 0x8000000000000000LL && (!v15 || v16 < 0) )
    core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
  std::fs::OpenOptions::_open(v84, &v65, v15, v16);
  if ( v84[0] )
  {
    v17 = 2LL;
    v18 = 8LL;
    v19 = v85;
    result = v82;
    goto LABEL_313;
  }
  v63 = v84[1];
  v22 = *(_BYTE *)(a3 + 26);
  v23 = *(_BYTE *)(a3 + 27);
  v24 = *(_BYTE *)(a3 + 28);
  v25 = _mm_and_si128(_mm_loadl_epi64((const __m128i *)(a3 + 24)), (__m128i)xmmword_16E50);
  v26 = _mm_cvtsi128_si32(_mm_cmpeq_epi8(v25, (__m128i)0LL));
  v27 = _mm_cmpeq_epi8(_mm_unpacklo_epi8(v25, v25), (__m128i)0LL);
  if ( (v26 & 1) != 0 )
  {
    if ( (_mm_extract_epi16(v27, 1) & 1) != 0 )
    {
      if ( (v22 & 1) == 0 )
      {
        if ( (v24 & 1) == 0 )
        {
          if ( (v23 & 1) == 0 )
            core::panicking::panic(aInternalErrorE_3, 40LL, &off_118BB0);
LABEL_231:
          v72 = 0LL;
          v71 = 0LL;
          v73 = 0LL;
          std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
          v43 = _mm_loadu_si128(&v76);
          v44 = _mm_loadu_si128(&v77);
          *(__m128i *)fd = _mm_loadu_si128(&v78);
          v66 = v44;
          v65 = v43;
          v68 = 0LL;
          v70 = 0;
          v69 = 0;
          v62 = 0;
          v64 = 0LL;
          while ( 1 )
          {
            uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
            if ( v79 == (int *)((char *)&dword_0 + 2) )
              break;
            if ( v79 )
            {
              if ( v80 )
              {
                if ( __CFADD__(v71.m128i_i64[0], v81) )
                  core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
                v71.m128i_i64[0] += v81;
              }
              else if ( v81 )
              {
                goto LABEL_303;
              }
            }
            else
            {
              uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
            }
          }
LABEL_308:
          *(_QWORD *)&v74[32] = v73;
          v60 = _mm_load_si128(&v71);
          *(__m128i *)&v74[16] = _mm_load_si128(&v72);
          *(__m128i *)v74 = v60;
          v75 = 0LL;
          <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v65);
          goto LABEL_309;
        }
        goto LABEL_184;
      }
      if ( (v24 & 1) == 0 )
      {
        if ( (v23 & 1) == 0 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
          goto LABEL_200;
        }
LABEL_250:
        v72 = 0LL;
        v71 = 0LL;
        v73 = 0LL;
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
        v47 = _mm_loadu_si128(&v76);
        v48 = _mm_loadu_si128(&v77);
        *(__m128i *)fd = _mm_loadu_si128(&v78);
        v66 = v48;
        v65 = v47;
        v68 = 0LL;
        v70 = 0;
        v69 = 0;
        v62 = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
          if ( v79 == (int *)((char *)&dword_0 + 2) )
            goto LABEL_308;
          if ( v79 )
          {
            if ( v80 )
            {
              if ( __CFADD__(v71.m128i_i64[0], v81) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v71.m128i_i64[0] += v81;
            }
            else if ( v81 )
            {
              goto LABEL_303;
            }
          }
          else
          {
            uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
          }
        }
      }
      goto LABEL_211;
    }
    if ( (v22 & 1) == 0 )
    {
      if ( (v24 & 1) == 0 )
      {
        if ( (v23 & 1) == 0 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
          goto LABEL_200;
        }
LABEL_241:
        v72 = 0LL;
        v71 = 0LL;
        v73 = 0LL;
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
        v45 = _mm_loadu_si128(&v76);
        v46 = _mm_loadu_si128(&v77);
        *(__m128i *)fd = _mm_loadu_si128(&v78);
        v66 = v46;
        v65 = v45;
        v68 = 0LL;
        v70 = 0;
        v69 = 0;
        v62 = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
          if ( v79 == (int *)((char *)&dword_0 + 2) )
            goto LABEL_308;
          if ( v79 )
          {
            if ( v80 )
            {
              if ( __CFADD__(v71.m128i_i64[0], v81) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v71.m128i_i64[0] += v81;
            }
            else if ( v81 )
            {
              goto LABEL_303;
            }
          }
          else
          {
            uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
          }
        }
      }
      goto LABEL_201;
    }
    if ( (v24 & 1) == 0 )
    {
      if ( (v23 & 1) == 0 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
        goto LABEL_200;
      }
LABEL_268:
      v72 = 0LL;
      v71 = 0LL;
      v73 = 0LL;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
      v51 = _mm_loadu_si128(&v76);
      v52 = _mm_loadu_si128(&v77);
      *(__m128i *)fd = _mm_loadu_si128(&v78);
      v66 = v52;
      v65 = v51;
      v68 = 0LL;
      v70 = 0;
      v69 = 0;
      v62 = 0;
      v64 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
        if ( v79 == (int *)((char *)&dword_0 + 2) )
          goto LABEL_308;
        if ( v79 )
        {
          if ( v80 )
          {
            if ( __CFADD__(v71.m128i_i64[0], v81) )
              core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
            v71.m128i_i64[0] += v81;
          }
          else if ( v81 )
          {
            goto LABEL_303;
          }
        }
        else
        {
          uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
        }
      }
    }
    goto LABEL_221;
  }
  if ( (_mm_extract_epi16(v27, 1) & 1) == 0 )
  {
    if ( (v22 & 1) == 0 )
    {
      if ( (v24 & 1) == 0 )
      {
        if ( (v23 & 1) == 0 )
        {
          uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
          goto LABEL_200;
        }
        goto LABEL_241;
      }
LABEL_201:
      if ( (v23 & 1) != 0 )
      {
        v72 = 0LL;
        v71 = 0LL;
        v73 = 0LL;
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
        v53 = _mm_loadu_si128(&v76);
        v54 = _mm_loadu_si128(&v77);
        *(__m128i *)fd = _mm_loadu_si128(&v78);
        v66 = v54;
        v65 = v53;
        v68 = 0LL;
        v70 = 0;
        v69 = 0;
        v62 = 0;
        v64 = 0LL;
        while ( 1 )
        {
          uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
          if ( v79 == (int *)((char *)&dword_0 + 2) )
            goto LABEL_308;
          if ( v79 )
          {
            if ( v80 )
            {
              if ( __CFADD__(v71.m128i_i64[0], v81) )
                core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
              v71.m128i_i64[0] += v81;
            }
            else if ( v81 )
            {
              goto LABEL_303;
            }
          }
          else
          {
            uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
          }
        }
      }
      v72 = 0LL;
      v71 = 0LL;
      v73 = 0LL;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
      v37 = _mm_loadu_si128(&v76);
      v38 = _mm_loadu_si128(&v77);
      *(__m128i *)fd = _mm_loadu_si128(&v78);
      v66 = v38;
      v65 = v37;
      v68 = 0LL;
      v70 = 0;
      v69 = 0;
      v64 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
        if ( v79 == (int *)((char *)&dword_0 + 2) )
          goto LABEL_306;
        if ( v79 )
        {
          if ( v80 )
          {
            if ( __CFADD__(v71.m128i_i64[0], v81) )
              core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
            v71.m128i_i64[0] += v81;
          }
          else if ( v81 )
          {
            goto LABEL_230;
          }
        }
        else
        {
          uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64);
        }
      }
    }
    if ( (v24 & 1) == 0 )
    {
      if ( (v23 & 1) == 0 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
        goto LABEL_200;
      }
      goto LABEL_268;
    }
LABEL_221:
    if ( (v23 & 1) != 0 )
    {
      v72 = 0LL;
      v71 = 0LL;
      v73 = 0LL;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
      v57 = _mm_loadu_si128(&v76);
      v58 = _mm_loadu_si128(&v77);
      *(__m128i *)fd = _mm_loadu_si128(&v78);
      v66 = v58;
      v65 = v57;
      v68 = 0LL;
      v70 = 0;
      v69 = 0;
      v62 = 0;
      v64 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
        if ( v79 == (int *)((char *)&dword_0 + 2) )
          goto LABEL_308;
        if ( v79 )
        {
          if ( v80 )
          {
            if ( __CFADD__(v71.m128i_i64[0], v81) )
              core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
            v71.m128i_i64[0] += v81;
          }
          else if ( v81 )
          {
LABEL_303:
            *(_QWORD *)&v74[32] = v73;
            *(__m128i *)&v74[16] = v72;
            *(__m128i *)v74 = v71;
            v75 = v81;
            <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v65);
            goto LABEL_309;
          }
        }
        else
        {
          uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
        }
      }
    }
    v72 = 0LL;
    v71 = 0LL;
    v73 = 0LL;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
    v41 = _mm_loadu_si128(&v76);
    v42 = _mm_loadu_si128(&v77);
    *(__m128i *)fd = _mm_loadu_si128(&v78);
    v66 = v42;
    v65 = v41;
    v68 = 0LL;
    v70 = 0;
    v69 = 0;
    v64 = 0LL;
    while ( 1 )
    {
      uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
      if ( v79 == (int *)((char *)&dword_0 + 2) )
        goto LABEL_306;
      if ( v79 )
      {
        if ( v80 )
        {
          if ( __CFADD__(v71.m128i_i64[0], v81) )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
          v71.m128i_i64[0] += v81;
        }
        else if ( v81 )
        {
LABEL_230:
          *(_QWORD *)&v74[32] = v73;
          *(__m128i *)&v74[16] = v72;
          *(__m128i *)v74 = v71;
          v75 = v81;
          <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v65);
          goto LABEL_309;
        }
      }
      else
      {
        uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64);
      }
    }
  }
  if ( (v22 & 1) != 0 )
  {
    if ( (v24 & 1) == 0 )
    {
      if ( (v23 & 1) == 0 )
      {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast(v74, &v63);
        goto LABEL_200;
      }
      goto LABEL_250;
    }
LABEL_211:
    if ( (v23 & 1) != 0 )
    {
      v72 = 0LL;
      v71 = 0LL;
      v73 = 0LL;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
      v55 = _mm_loadu_si128(&v76);
      v56 = _mm_loadu_si128(&v77);
      *(__m128i *)fd = _mm_loadu_si128(&v78);
      v66 = v56;
      v65 = v55;
      v68 = 0LL;
      v70 = 0;
      v69 = 0;
      v62 = 0;
      v64 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
        if ( v79 == (int *)((char *)&dword_0 + 2) )
          goto LABEL_308;
        if ( v79 )
        {
          if ( v80 )
          {
            if ( __CFADD__(v71.m128i_i64[0], v81) )
              core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
            v71.m128i_i64[0] += v81;
          }
          else if ( v81 )
          {
            goto LABEL_303;
          }
        }
        else
        {
          uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64, &v62);
        }
      }
    }
    v72 = 0LL;
    v71 = 0LL;
    v73 = 0LL;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
    v39 = _mm_loadu_si128(&v76);
    v40 = _mm_loadu_si128(&v77);
    *(__m128i *)fd = _mm_loadu_si128(&v78);
    v66 = v40;
    v65 = v39;
    v68 = 0LL;
    v70 = 0;
    v69 = 0;
    v64 = 0LL;
    while ( 1 )
    {
      uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
      if ( v79 == (int *)((char *)&dword_0 + 2) )
        goto LABEL_306;
      if ( v79 )
      {
        if ( v80 )
        {
          if ( __CFADD__(v71.m128i_i64[0], v81) )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
          v71.m128i_i64[0] += v81;
        }
        else if ( v81 )
        {
          goto LABEL_230;
        }
      }
      else
      {
        uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64);
      }
    }
  }
  if ( (v24 & 1) != 0 )
  {
LABEL_184:
    if ( (v23 & 1) != 0 )
    {
      v72 = 0LL;
      v71 = 0LL;
      v73 = 0LL;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
      v49 = _mm_loadu_si128(&v76);
      v50 = _mm_loadu_si128(&v77);
      *(__m128i *)fd = _mm_loadu_si128(&v78);
      v66 = v50;
      v65 = v49;
      v68 = 0LL;
      v70 = 0;
      v69 = 0;
      v62 = 0;
      v64 = 0LL;
      while ( 1 )
      {
        uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
        if ( v79 == (int *)((char *)&dword_0 + 2) )
          goto LABEL_308;
        if ( v79 )
        {
          if ( v80 )
          {
            if ( __CFADD__(v71.m128i_i64[0], v81) )
              core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
            v71.m128i_i64[0] += v81;
          }
          else if ( v81 )
          {
            goto LABEL_303;
          }
        }
        else
        {
          uu_wc::process_chunk(&v71, v80, v81, &v64, &v62);
        }
      }
    }
    v72 = 0LL;
    v71 = 0LL;
    v73 = 0LL;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v76, 0x2000LL);
    v34 = _mm_loadu_si128(&v76);
    v35 = _mm_loadu_si128(&v77);
    *(__m128i *)fd = _mm_loadu_si128(&v78);
    v66 = v35;
    v65 = v34;
    v68 = 0LL;
    v70 = 0;
    v69 = 0;
    v64 = 0LL;
    while ( 1 )
    {
      uu_wc::utf8::read::BufReadDecoder<B>::next_strict(&v79, &v65);
      if ( v79 == (int *)((char *)&dword_0 + 2) )
        break;
      if ( v79 )
      {
        if ( v80 )
        {
          if ( __CFADD__(v71.m128i_i64[0], v81) )
            core::panicking::panic_const::panic_const_add_overflow(&off_118C58);
          v71.m128i_i64[0] += v81;
        }
        else if ( v81 )
        {
          goto LABEL_230;
        }
      }
      else
      {
        uu_wc::process_chunk(&v71, v80, v81, (unsigned __int64 *)&v64);
      }
    }
LABEL_306:
    *(_QWORD *)&v74[32] = v73;
    v59 = _mm_load_si128(&v71);
    *(__m128i *)&v74[16] = _mm_load_si128(&v72);
    *(__m128i *)v74 = v59;
    v75 = 0LL;
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v65);
LABEL_309:
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[2]);
    v36 = fd[2];
    goto LABEL_310;
  }
  if ( (v23 & 1) != 0 )
    goto LABEL_231;
  *(_QWORD *)v74 = uu_wc::count_fast::count_bytes_fast(&v63);
  memset(&v74[8], 0, 32);
  v75 = v28;
LABEL_200:
  std::sys::pal::unix::fs::debug_assert_fd_is_open(v63);
  v36 = v63;
LABEL_310:
  close(v36);
LABEL_311:
  v19 = v75;
  result = v82;
  *(_QWORD *)(v82 + 40) = *(_QWORD *)&v74[32];
  v61 = *(_OWORD *)v74;
  *(_OWORD *)(result + 24) = *(_OWORD *)&v74[16];
  *(_OWORD *)(result + 8) = v61;
  if ( !v19 )
  {
    v17 = 0LL;
    goto LABEL_315;
  }
  v17 = 1LL;
  v18 = 48LL;
LABEL_313:
  *(_QWORD *)(result + v18) = v19;
LABEL_315:
  *(_QWORD *)result = v17;
  return result;
}
