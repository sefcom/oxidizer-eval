__int64 __fastcall uu_sleep::sleep(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD *v8; // r14
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int8 v17; // cl
  __int64 v18; // rdx
  int v19; // edx
  bool v20; // cf
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rax
  char v31; // bl
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 result; // rax
  __int64 v35; // [rsp+0h] [rbp-258h]
  __int64 v36; // [rsp+10h] [rbp-248h]
  unsigned int v37; // [rsp+24h] [rbp-234h]
  _BYTE v38[7]; // [rsp+28h] [rbp-230h]
  __m128i v39; // [rsp+30h] [rbp-228h] BYREF
  __int64 v40; // [rsp+40h] [rbp-218h]
  __int64 v41; // [rsp+48h] [rbp-210h]
  __m128i v42; // [rsp+50h] [rbp-208h] BYREF
  __m128i v43; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v44; // [rsp+70h] [rbp-1E8h]
  __int128 *v45; // [rsp+80h] [rbp-1D8h]
  int v46; // [rsp+8Ch] [rbp-1CCh]
  __int128 v47; // [rsp+90h] [rbp-1C8h] BYREF
  __m128i v48; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-1A8h]
  __m128i v50; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v51; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-168h]
  __int128 v53; // [rsp+100h] [rbp-158h]
  __int128 v54; // [rsp+110h] [rbp-148h]
  __int128 v55; // [rsp+120h] [rbp-138h]
  __int128 v56; // [rsp+130h] [rbp-128h]
  __m128i v57; // [rsp+140h] [rbp-118h] BYREF
  __m128i v58; // [rsp+150h] [rbp-108h]
  __int128 v59; // [rsp+160h] [rbp-F8h]
  __int128 v60; // [rsp+170h] [rbp-E8h]
  __int128 v61; // [rsp+180h] [rbp-D8h]
  __int128 v62; // [rsp+190h] [rbp-C8h]
  __int128 v63; // [rsp+1A0h] [rbp-B8h]
  _QWORD *v64; // [rsp+1B8h] [rbp-A0h] BYREF
  _OWORD v65[4]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v66; // [rsp+200h] [rbp-58h] BYREF
  char v67; // [rsp+202h] [rbp-56h]
  int v68; // [rsp+203h] [rbp-55h]
  _WORD v69[4]; // [rsp+207h] [rbp-51h] BYREF
  __m128i v70; // [rsp+210h] [rbp-48h] BYREF
  __int64 v71; // [rsp+220h] [rbp-38h]

  v67 = 10;
  v66 = 2570;
  memset(v69, 10, 3);
  v68 = 100992003;
  v65[0] = anon_5dec83f50c76d4879e3148c598308dd5_6_llvm_15089742476728497238;
  v65[1] = xmmword_DF150;
  v65[2] = *(_OWORD *)&off_DF160;
  v65[3] = _mm_loadu_si128((const __m128i *)&xmmword_DF170);
  if ( !a2 )
  {
    v6 = 0LL;
    v37 = 0;
    goto LABEL_69;
  }
  v4 = a1;
  v5 = -a2;
  v6 = 0LL;
  LOBYTE(a4) = 1;
  v45 = &v47;
  v37 = 0;
  v7 = 0LL;
  v41 = a1;
LABEL_3:
  v46 = a4;
  v8 = (_QWORD *)(v4 + 16 * v7++);
  do
  {
    v64 = v8;
    v11 = v8[1];
    v12 = core::str::<impl str>::trim_matches(*v8, v11);
    *(_QWORD *)&v47 = v12;
    if ( !v13 )
      v12 = 0LL;
    *((_QWORD *)&v47 + 1) = v13;
    v48.m128i_i64[0] = 0LL;
    v48.m128i_i64[1] = v12;
    v49 = 0LL;
    fundu_core::parse::ReprParserTemplate::parse(
      (unsigned int)&v50,
      (unsigned int)&v47,
      (unsigned int)v65,
      (unsigned int)&v66,
      (unsigned int)&unk_DEF20,
      0,
      v35,
      0LL,
      v36);
    if ( v50.m128i_i32[0] == 2 )
    {
      v14 = v50.m128i_i64[1];
      v15 = v51.m128i_i64[0];
      v16 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
      v17 = v52;
      *(_DWORD *)v38 = *(_DWORD *)((char *)&v52 + 1);
      *(_DWORD *)&v38[3] = DWORD1(v52);
      v18 = *((_QWORD *)&v52 + 1);
    }
    else
    {
      v63 = v56;
      v62 = v55;
      v61 = v54;
      v16 = v50;
      v60 = v53;
      v59 = v52;
      v58 = v51;
      v57 = v50;
      v15 = fundu_core::parse::DurationRepr::parse(&v42, &v57);
      v14 = v42.m128i_i64[0];
      if ( v42.m128i_i64[0] == 8 )
      {
        v17 = v43.m128i_i8[8];
        v14 = 6LL;
        if ( (v43.m128i_i8[8] & 1) == 0 )
        {
          v15 = v42.m128i_i64[1];
          v16 = _mm_loadl_epi64(&v43);
          v18 = *(unsigned int *)((char *)&v43.m128i_u32[2] + 1);
          *(_DWORD *)v38 = *(__int32 *)((char *)&v43.m128i_i32[2] + 1);
          *(_DWORD *)&v38[3] = v43.m128i_i32[3];
          v14 = 8LL;
        }
      }
      else
      {
        v15 = v42.m128i_i64[1];
        v16 = _mm_loadl_epi64(&v43);
        v17 = v43.m128i_i8[8];
        *(_DWORD *)v38 = *(__int32 *)((char *)&v43.m128i_i32[2] + 1);
        *(_DWORD *)&v38[3] = v43.m128i_i32[3];
        v18 = v44;
      }
    }
    if ( v14 != 8 )
    {
      *(_QWORD *)&v47 = v14;
      *((_QWORD *)&v47 + 1) = v15;
      v48.m128i_i64[0] = v16.m128i_i64[0];
      v48.m128i_i8[8] = v17;
      v48.m128i_i32[3] = *(_DWORD *)&v38[3];
      *(__int32 *)((char *)&v48.m128i_i32[2] + 1) = *(_DWORD *)v38;
      v49 = v18;
      switch ( v14 )
      {
        case 0LL:
          v4 = v41;
          if ( v11 )
          {
            v23 = 30LL;
            v29 = _rust_alloc(30LL, 1LL);
            if ( !v29 )
              goto LABEL_70;
            *(_OWORD *)(v29 + 14) = unk_18D36;
            *(__m128i *)v29 = _mm_loadu_si128((const __m128i *)&unk_18D28);
            v39.m128i_i64[0] = 30LL;
            v39.m128i_i64[1] = v29;
            v40 = 30LL;
          }
          else
          {
            v23 = 15LL;
            v30 = (void *)_rust_alloc(15LL, 1LL);
            if ( !v30 )
LABEL_70:
              alloc::raw_vec::handle_error(1LL, v23);
            qmemcpy(v30, "Input was empty", 15);
            v39.m128i_i64[0] = 15LL;
            v39.m128i_i64[1] = (__int64)v30;
            v40 = 15LL;
          }
LABEL_48:
          v31 = 0;
LABEL_49:
          if ( uucore::UTIL_NAME != 2 )
            once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v50 = _mm_loadu_si128((const __m128i *)&xmmword_E3B08);
          v42.m128i_i64[0] = (__int64)&v50;
          v42.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v57.m128i_i64[0] = (__int64)&unk_DEF68;
          v57.m128i_i64[1] = 2LL;
          *(_QWORD *)&v59 = 0LL;
          v58.m128i_i64[0] = (__int64)&v42;
          v58.m128i_i64[1] = 1LL;
          std::io::stdio::_eprint(&v57);
          v50.m128i_i64[0] = (__int64)&v64;
          v50.m128i_i64[1] = (__int64)<&T as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&v39;
          v51.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v57.m128i_i64[0] = (__int64)&off_DEF88;
          v57.m128i_i64[1] = 3LL;
          *(_QWORD *)&v59 = 0LL;
          v58.m128i_i64[0] = (__int64)&v50;
          v58.m128i_i64[1] = 2LL;
          std::io::stdio::_eprint(&v57);
          if ( v39.m128i_i64[0] )
            _rust_dealloc(v39.m128i_i64[1], v39.m128i_i64[0], 1LL);
          if ( !v31 && ((unsigned int)v47 | 2) != 3 )
          {
            if ( (unsigned __int64)v47 > 6 || (v32 = 117LL, !_bittest64(&v32, v47)) )
            {
              if ( *((_QWORD *)&v47 + 1) )
                _rust_dealloc(v48.m128i_i64[0], *((_QWORD *)&v47 + 1), 1LL);
            }
          }
          a4 = 0;
          if ( !(v7 + v5) )
          {
LABEL_66:
            result = _rust_alloc(32LL, 8LL);
            if ( !result )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *(_QWORD *)result = 0LL;
            *(_QWORD *)(result + 8) = 1LL;
            *(_QWORD *)(result + 16) = 0LL;
            *(_DWORD *)(result + 24) = 1;
            return result;
          }
          break;
        case 1LL:
        case 3LL:
          v4 = v41;
          v43.m128i_i64[0] = v49;
          v42 = _mm_loadu_si128(&v48);
          v22 = v15 + 1;
          if ( !v22 )
            v22 = -1LL;
          v39.m128i_i64[0] = v22;
          v50.m128i_i64[0] = (__int64)&v42;
          v50.m128i_i64[1] = (__int64)<alloc::string::String as core::fmt::Display>::fmt;
          v51.m128i_i64[0] = (__int64)&v39;
          v51.m128i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v57.m128i_i64[0] = (__int64)&unk_DEF48;
          v57.m128i_i64[1] = 2LL;
          *(_QWORD *)&v59 = 0LL;
          v58.m128i_i64[0] = (__int64)&v50;
          v58.m128i_i64[1] = 2LL;
          alloc::fmt::format::format_inner(&v70, &v57);
          v39 = _mm_loadu_si128(&v70);
          v40 = v71;
          if ( v42.m128i_i64[0] )
            _rust_dealloc(v42.m128i_i64[1], v42.m128i_i64[0], 1LL);
          goto LABEL_48;
        case 4LL:
        case 5LL:
          v23 = 26LL;
          v24 = _rust_alloc(26LL, 1LL);
          v4 = v41;
          if ( !v24 )
            goto LABEL_70;
          *(_OWORD *)(v24 + 10) = unk_18D5D;
          *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)&unk_18D53);
          v39.m128i_i64[0] = 26LL;
          v39.m128i_i64[1] = v24;
          v40 = 26LL;
          goto LABEL_48;
        case 6LL:
          v23 = 19LL;
          v25 = _rust_alloc(19LL, 1LL);
          v4 = v41;
          if ( !v25 )
            goto LABEL_70;
          *(__m128i *)v25 = _mm_loadu_si128(&xmmword_18D6D);
          *(_DWORD *)(v25 + 15) = 1702259060;
          v39.m128i_i64[0] = 19LL;
          v39.m128i_i64[1] = v25;
          v40 = 19LL;
          goto LABEL_48;
        default:
          *(_QWORD *)&v52 = v49;
          v51 = v48;
          v50 = (__m128i)v47;
          v42.m128i_i64[0] = 0LL;
          v42.m128i_i64[1] = 1LL;
          v43.m128i_i64[0] = 0LL;
          *(_QWORD *)&v60 = 32LL;
          BYTE8(v60) = 3;
          v57.m128i_i64[0] = 0LL;
          v58.m128i_i64[0] = 0LL;
          *(_QWORD *)&v59 = &v42;
          *((_QWORD *)&v59 + 1) = &off_DED30;
          v26 = <fundu_core::error::ParseError as core::fmt::Display>::fmt(&v50, &v57);
          v4 = v41;
          if ( v26 )
            core::result::unwrap_failed(aADisplayImplem, 55LL, &v39, &unk_DED78, &off_DED60);
          v39 = _mm_loadu_si128(&v42);
          v40 = v43.m128i_i64[0];
          if ( v50.m128i_i64[0] > 6uLL )
          {
            v28 = 1LL;
          }
          else
          {
            v27 = 117LL;
            if ( _bittest64(&v27, v50.m128i_u64[0]) )
              goto LABEL_64;
            v28 = 2LL;
          }
          v33 = v50.m128i_i64[v28];
          if ( v33 )
            _rust_dealloc(v50.m128i_i64[v28 + 1], v33, 1LL);
LABEL_64:
          v31 = 1;
          goto LABEL_49;
      }
      goto LABEL_3;
    }
    v19 = _mm_cvtsi128_si32(v16);
    if ( v19 != 1000000000 )
    {
      if ( v15 )
      {
        if ( !v17 )
        {
LABEL_25:
          v9 = 1000000000;
          v20 = __CFADD__(v15, v6);
          v6 += v15;
          if ( !v20 )
          {
            v21 = v37 + v19;
            if ( v21 < 0x3B9ACA00 )
            {
LABEL_29:
              v9 = v21;
              goto LABEL_4;
            }
            if ( v6 != -1 )
            {
              v21 -= 1000000000;
              ++v6;
              goto LABEL_29;
            }
          }
LABEL_4:
          if ( v9 == 1000000000 )
          {
            v9 = 999999999;
            v6 = -1LL;
          }
          v37 = v9;
          goto LABEL_7;
        }
      }
      else
      {
        if ( !v19 )
        {
LABEL_24:
          v15 = 0LL;
          goto LABEL_25;
        }
        v15 = 0LL;
        if ( !v17 )
          goto LABEL_25;
      }
      v19 = 0;
      goto LABEL_24;
    }
LABEL_7:
    v10 = v5 + v7++ + 1;
    v8 += 2;
  }
  while ( v10 != 1 );
  if ( (v46 & 1) == 0 )
    goto LABEL_66;
LABEL_69:
  std::thread::sleep(v6, v37);
  return 0LL;
}
