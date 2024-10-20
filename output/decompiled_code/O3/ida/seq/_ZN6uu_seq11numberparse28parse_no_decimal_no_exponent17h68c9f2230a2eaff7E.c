__int64 __fastcall uu_seq::numberparse::parse_no_decimal_no_exponent(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v4; // r15
  _BYTE *v5; // rax
  _BYTE *v6; // r12
  char *v7; // r15
  _BYTE *v8; // rcx
  __int64 v9; // rax
  char v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __m128i si128; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __m128i v19; // xmm6
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  _BYTE *v26; // r12
  bool v27; // al
  unsigned __int64 v28; // r12
  bool v29; // zf
  __m128i v31; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v32; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-B8h]
  __m128i v34; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v35; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-90h]
  _OWORD v37[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v38; // [rsp+70h] [rbp-68h]
  _QWORD v39[2]; // [rsp+78h] [rbp-60h] BYREF
  __int8 v40; // [rsp+88h] [rbp-50h]
  _QWORD v41[2]; // [rsp+90h] [rbp-48h] BYREF
  char v42; // [rsp+A0h] [rbp-38h]

  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(&v34);
  if ( v34.m128i_i64[0] == 0x8000000000000000LL )
  {
    if ( !a3 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0x8000000000000004LL;
LABEL_39:
      core::ptr::drop_in_place<core::result::Result<bigdecimal::BigDecimal,bigdecimal::ParseBigDecimalError>>(&v34);
      return a1;
    }
    if ( (a3 & 0x8000000000000000LL) != 0LL )
    {
      v4 = 0LL;
    }
    else
    {
      v4 = 1LL;
      v5 = (_BYTE *)_rust_alloc(a3, 1LL);
      if ( v5 )
      {
        v6 = v5;
        v7 = v5;
        memcpy(v5, a2, a3);
        v8 = v6;
        if ( a3 < 8 )
          goto LABEL_26;
        if ( a3 >= 0x20 )
        {
          v9 = a3 & 0x7FFFFFFFFFFFFFE0LL;
          v12 = 0LL;
          si128 = _mm_load_si128(xmmword_13050);
          v14 = _mm_load_si128((const __m128i *)&xmmword_12E60);
          v15 = _mm_load_si128((const __m128i *)&xmmword_131B0);
          do
          {
            v16 = _mm_loadu_si128((const __m128i *)&v7[v12]);
            v17 = _mm_loadu_si128((const __m128i *)&v7[v12 + 16]);
            v18 = _mm_add_epi8(v16, si128);
            v19 = _mm_add_epi8(v17, si128);
            *(__m128i *)&v7[v12] = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v18, v14), v18), v15), v16);
            *(__m128i *)&v7[v12 + 16] = _mm_or_si128(
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v19, v14), v19), v15),
                                          v17);
            v12 += 32LL;
          }
          while ( v9 != v12 );
          if ( v9 == a3 )
          {
LABEL_28:
            v27 = 0;
            switch ( a3 )
            {
              case 3uLL:
                v28 = 0x8000000000000000LL;
                if ( !(*(_WORD *)v7 ^ 0x6E69 | (unsigned __int8)v7[2] ^ 0x66) )
                  goto LABEL_42;
                v29 = (*(_WORD *)v7 ^ 0x616E | (unsigned __int8)v7[2] ^ 0x6E) == 0;
                goto LABEL_35;
              case 4uLL:
                if ( *(_DWORD *)v7 == 1718511917 )
                  goto LABEL_41;
                v29 = *(_DWORD *)v7 == 1851878957;
LABEL_35:
                v27 = v29;
                goto LABEL_38;
              case 8uLL:
                v28 = 0x8000000000000000LL;
                if ( *(_QWORD *)v7 == 0x7974696E69666E69LL )
                  goto LABEL_42;
                goto LABEL_37;
              case 9uLL:
                if ( !(*(_QWORD *)v7 ^ 0x74696E69666E692DLL | (unsigned __int8)v7[8] ^ 0x79LL) )
                {
LABEL_41:
                  v28 = 0x8000000000000001LL;
LABEL_42:
                  _rust_dealloc(v7, a3, 1LL);
                  *(_QWORD *)a1 = v28;
                  *(_OWORD *)(a1 + 40) = 0LL;
                  if ( v34.m128i_i64[1] >= (__int64)0x8000000000000004LL && v34.m128i_i64[1] )
                    _rust_dealloc(v35.m128i_i64[0], v34.m128i_i64[1], 1LL);
                  return a1;
                }
LABEL_37:
                v27 = 0;
LABEL_38:
                *(_BYTE *)(a1 + 8) = v27;
                *(_QWORD *)a1 = 0x8000000000000004LL;
                _rust_dealloc(v7, a3, 1LL);
                break;
              default:
                goto LABEL_38;
            }
            goto LABEL_39;
          }
          if ( (a3 & 0x18) == 0 )
          {
            v8 = &v6[v9];
            goto LABEL_26;
          }
        }
        else
        {
          v9 = 0LL;
        }
        v20 = a3 & 0x7FFFFFFFFFFFFFF8LL;
        v8 = &v6[a3 & 0x7FFFFFFFFFFFFFF8LL];
        v21 = _mm_load_si128((const __m128i *)&xmmword_130B0);
        v22 = _mm_load_si128((const __m128i *)&xmmword_13080);
        v23 = _mm_load_si128((const __m128i *)&xmmword_13170);
        do
        {
          v24 = _mm_loadl_epi64((const __m128i *)&v7[v9]);
          v25 = _mm_add_epi8(v24, v21);
          *(_QWORD *)&v7[v9] = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v25, v22), v25), v23), v24).m128i_u64[0];
          v9 += 8LL;
        }
        while ( v20 != v9 );
        if ( v20 == a3 )
          goto LABEL_28;
LABEL_26:
        v26 = &v6[a3];
        do
        {
          *v8 |= 32 * ((unsigned __int8)(*v8 - 65) < 0x1Au);
          ++v8;
        }
        while ( v8 != v26 );
        goto LABEL_28;
      }
    }
    alloc::raw_vec::handle_error(v4, a3);
  }
  v33 = v36;
  v32 = _mm_loadu_si128(&v35);
  v31 = _mm_loadu_si128(&v34);
  if ( !a3 || *a2 != 45 )
    goto LABEL_15;
  v37[1] = xmmword_170D0;
  v37[0] = _mm_loadu_si128((const __m128i *)&anon_9bfcc4441dc8fd90e2398af1e0d4f74b_0_llvm_8484012111238486492);
  v38 = 0LL;
  v40 = v32.m128i_i8[8];
  v39[0] = &v31;
  v39[1] = v33;
  v42 = 1;
  v41[0] = v37;
  v41[1] = 0LL;
  v10 = bigdecimal::impl_cmp::check_equality_bigdecimal_ref(v39, v41);
  if ( *(_QWORD *)&v37[0] )
    _rust_dealloc(*((_QWORD *)&v37[0] + 1), 8LL * *(_QWORD *)&v37[0], 8LL);
  if ( v10 )
  {
    *(_QWORD *)a1 = 0x8000000000000002LL;
    *(_QWORD *)(a1 + 40) = a3;
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( v31.m128i_i64[0] )
      _rust_dealloc(v31.m128i_i64[1], 8 * v31.m128i_i64[0], 8LL);
  }
  else
  {
LABEL_15:
    *(_QWORD *)(a1 + 32) = v33;
    v11 = _mm_load_si128(&v31);
    *(__m128i *)(a1 + 16) = _mm_load_si128(&v32);
    *(__m128i *)a1 = v11;
    *(_QWORD *)(a1 + 40) = a3;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return a1;
}
