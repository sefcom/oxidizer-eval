__int64 __fastcall uu_sort::make_sort_mode_arg(__int64 a1, __int64 a2, __int64 a3, int a4, const void *a5, size_t a6)
{
  const void *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // bl
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 result; // rax
  __int16 v34; // [rsp+8h] [rbp-740h]
  unsigned __int8 v35; // [rsp+Ah] [rbp-73Eh]
  _BYTE src[588]; // [rsp+20h] [rbp-728h] BYREF
  _BYTE v39[3]; // [rsp+26Ch] [rbp-4DCh]
  unsigned __int8 v40; // [rsp+26Fh] [rbp-4D9h]
  __m128i v41[37]; // [rsp+270h] [rbp-4D8h] BYREF
  _OWORD dest[40]; // [rsp+4C0h] [rbp-288h] BYREF

  *(_OWORD *)&src[120] = 0LL;
  *(_OWORD *)&src[144] = 0LL;
  *(_OWORD *)&src[168] = 0LL;
  *(_OWORD *)&src[192] = 0LL;
  *(_OWORD *)&src[216] = 0LL;
  *(_OWORD *)&src[240] = 0LL;
  *(_OWORD *)&src[264] = 0LL;
  *(_OWORD *)&src[288] = 0LL;
  *(_OWORD *)&src[312] = 0LL;
  *(_OWORD *)&src[336] = 0LL;
  *(_OWORD *)&src[360] = 0LL;
  *(_OWORD *)&src[384] = 0LL;
  *(_OWORD *)&src[408] = 0LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[16] = 0LL;
  *(_QWORD *)&src[40] = 0LL;
  *(_QWORD *)&src[56] = 0LL;
  *(_QWORD *)&src[80] = 5LL;
  *(_QWORD *)&src[104] = 0LL;
  *(_QWORD *)&src[112] = 8LL;
  *(_QWORD *)&src[136] = 8LL;
  *(_QWORD *)&src[160] = 8LL;
  *(_QWORD *)&src[184] = 8LL;
  *(_QWORD *)&src[208] = 8LL;
  *(_QWORD *)&src[232] = 8LL;
  *(_QWORD *)&src[256] = 8LL;
  *(_QWORD *)&src[280] = 8LL;
  *(_QWORD *)&src[304] = 8LL;
  *(_QWORD *)&src[328] = 4LL;
  *(_QWORD *)&src[352] = 8LL;
  *(_QWORD *)&src[376] = 8LL;
  *(_QWORD *)&src[400] = 8LL;
  *(_QWORD *)&src[424] = 8LL;
  *(_QWORD *)&src[432] = 0LL;
  *(_QWORD *)&src[440] = 0x8000000000000000LL;
  *(_QWORD *)&src[464] = 0x8000000000000000LL;
  *(_QWORD *)&src[504] = 0x8000000000000001LL;
  *(_QWORD *)&src[528] = a2;
  *(_QWORD *)&src[536] = a3;
  *(_QWORD *)&src[544] = a2;
  *(_QWORD *)&src[552] = a3;
  *(_QWORD *)&src[560] = 0LL;
  *(_DWORD *)&src[576] = a4;
  *(_QWORD *)&src[580] = 1114112LL;
  *(_WORD *)v39 = 3337;
  v41[0].m128i_i64[0] = 0LL;
  v41[0].m128i_i64[1] = 1LL;
  v41[1].m128i_i64[0] = 0LL;
  if ( a6 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v41, 0LL, a6);
    v8 = a5;
    v9 = v41[1].m128i_i64[0];
    v11 = v41[0].m128i_i64[1];
    v10 = v41[0].m128i_i64[0];
  }
  else
  {
    v8 = a5;
    v11 = 1LL;
    v10 = 0LL;
    v9 = 0LL;
  }
  memcpy((void *)(v9 + v11), v8, a6);
  v41[1].m128i_i64[0] = a6 + v9;
  dest[0] = *(__m128i *)((char *)v41 + 8);
  if ( v10 != 0x8000000000000000LL )
    v41[0] = (__m128i)dest[0];
  *(_QWORD *)&src[440] = v10;
  *(__m128i *)&src[448] = _mm_load_si128(v41);
  memcpy(dest, src, 0x24CuLL);
  v34 = *(_WORD *)&v39[1];
  v35 = v40;
  v12 = a3;
  if ( a3 == 20
    && _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1F260),
           _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_1EE50))) == 0xFFFF )
  {
    v16 = 2;
  }
  else
  {
    memcpy(src, dest, sizeof(src));
    v39[0] = 2;
    v13 = *(_QWORD *)&src[120];
    if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
    v14 = *(_QWORD *)&src[112];
    v15 = 16 * v13;
    *(_QWORD *)(*(_QWORD *)&src[112] + v15) = aGeneralNumeric_1;
    *(_QWORD *)(v14 + v15 + 8) = 20LL;
    *(_QWORD *)&src[120] = v13 + 1;
    memcpy(v41, src, 0x24CuLL);
    v16 = v39[0];
    memcpy(dest, v41, 0x24CuLL);
    v34 = *(_WORD *)&v39[1];
    v35 = v40;
    if ( a3 == 18
      && _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)), unk_1F0E0),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_1EF30))) == 0xFFFF )
    {
      goto LABEL_18;
    }
  }
  memcpy(src, dest, sizeof(src));
  v39[0] = v16;
  *(_WORD *)&v39[1] = v34;
  v40 = v35;
  v17 = *(_QWORD *)&src[120];
  if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
  v18 = *(_QWORD *)&src[112];
  v19 = 16 * v17;
  *(_QWORD *)(*(_QWORD *)&src[112] + v19) = aHumanNumericSo_0;
  *(_QWORD *)(v18 + v19 + 8) = 18LL;
  *(_QWORD *)&src[120] = v17 + 1;
  memcpy(v41, src, 0x24CuLL);
  v16 = v39[0];
  memcpy(dest, v41, 0x24CuLL);
  v34 = *(_WORD *)&v39[1];
  v35 = v40;
  if ( a3 == 10 && !(*(_QWORD *)a2 ^ 0x6F732D68746E6F6DLL | *(unsigned __int16 *)(a2 + 8) ^ 0x7472LL) )
    goto LABEL_23;
LABEL_18:
  memcpy(src, dest, sizeof(src));
  v39[0] = v16;
  *(_WORD *)&v39[1] = v34;
  v40 = v35;
  v20 = *(_QWORD *)&src[120];
  if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
  v21 = *(_QWORD *)&src[112];
  v22 = 16 * v20;
  *(_QWORD *)(*(_QWORD *)&src[112] + v22) = aMonthSort_0;
  *(_QWORD *)(v21 + v22 + 8) = 10LL;
  *(_QWORD *)&src[120] = v20 + 1;
  memcpy(v41, src, 0x24CuLL);
  v16 = v39[0];
  memcpy(dest, v41, 0x24CuLL);
  v34 = *(_WORD *)&v39[1];
  v35 = v40;
  if ( a3 != 12 )
  {
LABEL_23:
    v23 = 0;
    goto LABEL_24;
  }
  v23 = 1;
  if ( !(*(_QWORD *)a2 ^ 0x2D636972656D756ELL | *(unsigned int *)(a2 + 8) ^ 0x74726F73LL) )
    goto LABEL_27;
LABEL_24:
  memcpy(src, dest, sizeof(src));
  v39[0] = v16;
  *(_WORD *)&v39[1] = v34;
  v40 = v35;
  v24 = *(_QWORD *)&src[120];
  if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
  v25 = *(_QWORD *)&src[112];
  v26 = 16 * v24;
  *(_QWORD *)(*(_QWORD *)&src[112] + v26) = aNumericSort_0;
  *(_QWORD *)(v25 + v26 + 8) = 12LL;
  *(_QWORD *)&src[120] = v24 + 1;
  memcpy(v41, src, 0x24CuLL);
  v16 = v39[0];
  memcpy(dest, v41, 0x24CuLL);
  v34 = *(_WORD *)&v39[1];
  v35 = v40;
  v12 = a3;
  if ( v23 )
  {
LABEL_27:
    if ( !(*(_QWORD *)a2 ^ 0x2D6E6F6973726576LL | *(unsigned int *)(a2 + 8) ^ 0x74726F73LL) )
      goto LABEL_31;
  }
  memcpy(src, dest, sizeof(src));
  v39[0] = v16;
  *(_WORD *)&v39[1] = v34;
  v40 = v35;
  v27 = *(_QWORD *)&src[120];
  if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
  v28 = *(_QWORD *)&src[112];
  v29 = 16 * v27;
  *(_QWORD *)(*(_QWORD *)&src[112] + v29) = aVersionSort_0;
  *(_QWORD *)(v28 + v29 + 8) = 12LL;
  *(_QWORD *)&src[120] = v27 + 1;
  memcpy(v41, src, 0x24CuLL);
  v16 = v39[0];
  memcpy(dest, v41, 0x24CuLL);
  v34 = *(_WORD *)&v39[1];
  v35 = v40;
LABEL_31:
  if ( v12 != 11 || *(_QWORD *)a2 ^ 0x732D6D6F646E6172LL | *(_QWORD *)(a2 + 3) ^ 0x74726F732D6D6F64LL )
  {
    memcpy(src, dest, sizeof(src));
    v39[0] = v16;
    *(_WORD *)&v39[1] = v34;
    v40 = v35;
    v30 = *(_QWORD *)&src[120];
    if ( *(_QWORD *)&src[120] == *(_QWORD *)&src[104] )
      alloc::raw_vec::RawVec<T,A>::grow_one(&src[104]);
    v31 = *(_QWORD *)&src[112];
    v32 = 16 * v30;
    *(_QWORD *)(*(_QWORD *)&src[112] + v32) = aRandomSort_0;
    *(_QWORD *)(v31 + v32 + 8) = 11LL;
    *(_QWORD *)&src[120] = v30 + 1;
    memcpy(v41, src, 0x24CuLL);
    v16 = v39[0];
    memcpy(dest, v41, 0x24CuLL);
    v34 = *(_WORD *)&v39[1];
    v35 = v40;
  }
  memcpy((void *)a1, dest, 0x24CuLL);
  *(_BYTE *)(a1 + 588) = v16;
  *(_WORD *)(a1 + 589) = v34;
  result = v35;
  *(_BYTE *)(a1 + 591) = v35;
  return result;
}
