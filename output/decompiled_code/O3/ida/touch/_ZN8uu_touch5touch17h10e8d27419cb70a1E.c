__int64 __fastcall uu_touch::touch(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // cc
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rbp
  __m128i *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // r14
  __int64 v18; // rax
  __m128i *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // rbp
  __int64 v29; // rax
  __int32 v30; // ecx
  __int64 v31; // rbp
  int v32; // r14d
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // xmm1_8
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v39; // [rsp+10h] [rbp-168h] BYREF
  __m128i v40; // [rsp+18h] [rbp-160h] BYREF
  __m128i *v41; // [rsp+28h] [rbp-150h] BYREF
  __m128i v42; // [rsp+30h] [rbp-148h] BYREF
  __m128i *v43; // [rsp+40h] [rbp-138h]
  __int64 v44; // [rsp+48h] [rbp-130h]
  __m128i v45; // [rsp+50h] [rbp-128h] BYREF
  __m128i v46; // [rsp+60h] [rbp-118h]
  __int64 v47; // [rsp+70h] [rbp-108h]
  __int64 v48; // [rsp+80h] [rbp-F8h]
  __int64 v49; // [rsp+88h] [rbp-F0h]
  __m128i v50; // [rsp+90h] [rbp-E8h] BYREF
  __m128i *v51; // [rsp+A0h] [rbp-D8h]
  __int64 v52; // [rsp+A8h] [rbp-D0h]
  __int64 v53; // [rsp+B0h] [rbp-C8h]
  __int64 v54; // [rsp+B8h] [rbp-C0h] BYREF
  __m128i v55; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i *v56; // [rsp+D0h] [rbp-A8h]
  __int64 *v57; // [rsp+D8h] [rbp-A0h]
  _QWORD v58[3]; // [rsp+E8h] [rbp-90h] BYREF
  __m128i v59; // [rsp+100h] [rbp-78h] BYREF
  __m128i *v60; // [rsp+110h] [rbp-68h]
  __int64 *v61; // [rsp+118h] [rbp-60h]
  __m128i v62; // [rsp+128h] [rbp-50h] BYREF
  _OWORD v63[4]; // [rsp+138h] [rbp-40h] BYREF

  v53 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a4 + 24);
  v7 = 0LL;
  v8 = v6 < (__int64)0x8000000000000002LL;
  v9 = v6 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 )
    v7 = v9;
  if ( v7 )
  {
    v43 = a2;
    if ( v7 == 1 )
    {
      v10 = *(_QWORD *)(a4 + 32);
      v11 = *(unsigned int *)(a4 + 40);
    }
    else
    {
      chrono::offset::local::Local::now(&v39);
      v15 = chrono::naive::date::NaiveDate::num_days_from_ce((unsigned int)v39);
      v11 = v40.m128i_u32[0];
      v10 = 86400LL * v15 + HIDWORD(v39) - 0xE77934880LL;
    }
    v13 = v10;
    v14 = (unsigned int)v11;
  }
  else
  {
    v12 = a2;
    a2 = *(__m128i **)(a4 + 32);
    uu_touch::stat(&v45, a2, *(_QWORD *)(a4 + 40), *(_BYTE *)(a4 + 49) == 0);
    if ( v45.m128i_i64[0] )
    {
      a2 = (__m128i *)(a4 + 24);
      uu_touch::touch::{{closure}}(&v39, a4 + 24, v45.m128i_i64[1]);
      v10 = v40.m128i_i64[0];
      v13 = (__int64)v41;
      v11 = v40.m128i_i64[1];
      v14 = v42.m128i_i64[0];
      if ( v39 != 0x8000000000000004LL )
      {
        v35 = v42.m128i_i64[0];
        v36 = v42.m128i_i64[1];
        *(_QWORD *)a1 = v39;
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)(a1 + 24) = v13;
        *(_QWORD *)(a1 + 32) = v35;
        *(_QWORD *)(a1 + 40) = v36;
        return v5;
      }
      v43 = v12;
    }
    else
    {
      v43 = v12;
      v10 = v45.m128i_i64[1];
      v11 = v46.m128i_u32[0];
      v13 = v46.m128i_i64[1];
      v14 = (unsigned int)v47;
    }
  }
  v49 = a4;
  v16 = *(_QWORD *)a4 == 0x8000000000000000LL;
  v44 = v14;
  v17 = v13;
  if ( v16 )
  {
    v48 = v11;
    goto LABEL_13;
  }
  uu_touch::filetime_to_datetime(&v45);
  if ( !v45.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 16) = v11;
    return v5;
  }
  v62 = _mm_loadu_si128(&v45);
  v28 = *(_QWORD *)(v49 + 8);
  uu_touch::parse_date(&v39, &v62, v28);
  v29 = v39;
  v10 = v40.m128i_i64[0];
  v30 = v40.m128i_i32[2];
  if ( v39 != 0x8000000000000004LL )
  {
    v34 = _mm_loadu_si128((const __m128i *)((char *)&v40.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v42);
    *(__m128i *)(a1 + 20) = v34;
    *(_QWORD *)a1 = v29;
    *(_QWORD *)(a1 + 8) = v10;
LABEL_37:
    *(_DWORD *)(a1 + 16) = v30;
    return v5;
  }
  v52 = v28;
  v48 = v40.m128i_u32[2];
  v31 = v17;
  v32 = v44;
  uu_touch::filetime_to_datetime(&v45);
  if ( !v45.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v31;
    *(_DWORD *)(a1 + 16) = v32;
    return v5;
  }
  v63[0] = _mm_loadu_si128(&v45);
  a2 = (__m128i *)v63;
  uu_touch::parse_date(&v39, v63, v52);
  v33 = v39;
  v17 = v40.m128i_i64[0];
  v30 = v40.m128i_i32[2];
  if ( v39 != 0x8000000000000004LL )
  {
    v37 = _mm_loadu_si128((const __m128i *)((char *)&v40.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v42);
    *(__m128i *)(a1 + 20) = v37;
    *(_QWORD *)a1 = v33;
    *(_QWORD *)(a1 + 8) = v17;
    goto LABEL_37;
  }
  v44 = v40.m128i_u32[2];
LABEL_13:
  v58[0] = v43;
  v58[1] = (char *)v43 + 24 * v53;
  v58[2] = 0LL;
  v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v58);
  if ( v19 )
  {
    while ( 1 )
    {
      v54 = v18;
      v20 = v19->m128i_i64[0];
      v21 = 0x8000000000000000LL;
      if ( v19->m128i_i64[0] == 0x8000000000000000LL )
      {
        uu_touch::pathbuf_from_stdout(&v39, a2, v19, 0x8000000000000000LL);
        v22 = v39;
        v21 = v40.m128i_i64[0];
        a2 = v41;
        v19 = (__m128i *)v40.m128i_i64[1];
        if ( v39 != 0x8000000000000004LL )
          break;
      }
      v50.m128i_i64[0] = v21;
      v50.m128i_i64[1] = (__int64)v19;
      v51 = a2;
      if ( v21 != 0x8000000000000000LL )
        v19 = &v50;
      a2 = (__m128i *)v19[1].m128i_i64[0];
      v23 = uu_touch::touch_file(v19->m128i_i64[1], (_DWORD)a2, v20 == 0x8000000000000000LL, v49, v10, v48, v17, v44);
      v56 = v51;
      v55 = _mm_loadu_si128(&v50);
      v57 = &v54;
      if ( v23 )
      {
        v60 = v56;
        v61 = v57;
        v59 = v55;
        a2 = &v59;
        uu_touch::touch::{{closure}}(&v39, &v59, v23, v24);
        v25 = v39;
        v26 = _mm_loadu_si128((const __m128i *)&v41);
        v45 = _mm_loadu_si128(&v40);
        v46 = v26;
        v47 = v42.m128i_i64[1];
        if ( v39 != 0x8000000000000004LL )
        {
          v5 = a1;
          *(_QWORD *)(a1 + 40) = v47;
          v27 = v45;
          *(__m128i *)(a1 + 24) = v46;
          *(__m128i *)(a1 + 8) = v27;
          *(_QWORD *)a1 = v25;
          return v5;
        }
      }
      else
      {
        core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(&v55, a2, &v54, v24);
      }
      v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v58);
      if ( !v19 )
        goto LABEL_29;
    }
    v5 = a1;
    *(__m128i *)(a1 + 32) = v42;
    *(_QWORD *)a1 = v22;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 16) = v19;
    *(_QWORD *)(a1 + 24) = a2;
  }
  else
  {
LABEL_29:
    v5 = a1;
    *(_QWORD *)a1 = 0x8000000000000004LL;
  }
  return v5;
}
