__int64 __fastcall uu_touch::touch(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // cc
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r14
  __int32 v13; // eax
  __m128i *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int32 v17; // edx
  __int64 v18; // rax
  __m128i *v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  _BOOL4 v27; // edx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rax
  __int32 v36; // ecx
  __m128i v37; // xmm0
  __int64 v38; // xmm1_8
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int32 v43; // [rsp+0h] [rbp-168h]
  __int64 v45; // [rsp+10h] [rbp-158h]
  __int64 v46; // [rsp+18h] [rbp-150h] BYREF
  __m128i v47; // [rsp+20h] [rbp-148h] BYREF
  __m128i *v48; // [rsp+30h] [rbp-138h] BYREF
  __m128i v49; // [rsp+38h] [rbp-130h] BYREF
  __m128i *v50; // [rsp+48h] [rbp-120h]
  __m128i v51; // [rsp+50h] [rbp-118h] BYREF
  __m128i v52; // [rsp+60h] [rbp-108h]
  __int64 v53; // [rsp+70h] [rbp-F8h]
  __m128i v54; // [rsp+80h] [rbp-E8h] BYREF
  __m128i *v55; // [rsp+90h] [rbp-D8h]
  __int64 v56; // [rsp+98h] [rbp-D0h]
  __int64 v57; // [rsp+A0h] [rbp-C8h]
  __int64 v58; // [rsp+A8h] [rbp-C0h] BYREF
  __m128i v59; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i *v60; // [rsp+C0h] [rbp-A8h]
  __int64 *v61; // [rsp+C8h] [rbp-A0h]
  _QWORD v62[3]; // [rsp+D8h] [rbp-90h] BYREF
  __m128i v63; // [rsp+F0h] [rbp-78h] BYREF
  __m128i *v64; // [rsp+100h] [rbp-68h]
  __int64 *v65; // [rsp+108h] [rbp-60h]
  __m128i v66; // [rsp+118h] [rbp-50h] BYREF
  _OWORD v67[4]; // [rsp+128h] [rbp-40h] BYREF

  v4 = a4;
  v57 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a4 + 24);
  v7 = 0LL;
  v8 = v6 < (__int64)0x8000000000000002LL;
  v9 = v6 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 )
    v7 = v9;
  v45 = v4;
  if ( v7 )
  {
    v50 = a2;
    if ( v7 == 1 )
    {
      v10 = *(_QWORD *)(v4 + 32);
      v11 = *(unsigned int *)(v4 + 40);
      v12 = v10;
      v13 = *(_DWORD *)(v4 + 40);
    }
    else
    {
      chrono::offset::local::Local::now(&v46);
      v16 = uu_touch::datetime_to_filetime((unsigned int *)&v46);
      v4 = v45;
      v10 = v16;
      v11 = v17;
      v12 = v16;
      v13 = v17;
    }
    v43 = v13;
  }
  else
  {
    v14 = a2;
    a2 = *(__m128i **)(v4 + 32);
    v15 = v4;
    uu_touch::stat(&v51, a2, *(_QWORD *)(v4 + 40), *(_BYTE *)(v4 + 49) == 0);
    if ( v51.m128i_i64[0] )
    {
      a2 = (__m128i *)(v15 + 24);
      uu_touch::touch::{{closure}}(&v46, v15 + 24, v51.m128i_i64[1]);
      v10 = v47.m128i_i64[0];
      v12 = (__int64)v48;
      v11 = v47.m128i_i64[1];
      if ( v46 != 0x8000000000000004LL )
      {
        v38 = v49.m128i_i64[0];
        v39 = v49.m128i_i64[1];
        *(_QWORD *)a1 = v46;
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)(a1 + 24) = v12;
        *(_QWORD *)(a1 + 32) = v38;
        *(_QWORD *)(a1 + 40) = v39;
        return v5;
      }
      v50 = v14;
      v43 = v49.m128i_i32[0];
      v4 = v45;
    }
    else
    {
      v50 = v14;
      v10 = v51.m128i_i64[1];
      v11 = v52.m128i_u32[0];
      v43 = v53;
      v4 = v15;
      v12 = v52.m128i_i64[1];
    }
  }
  if ( *(_QWORD *)v4 == 0x8000000000000000LL )
    goto LABEL_12;
  uu_touch::filetime_to_datetime(&v51);
  if ( !v51.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
LABEL_30:
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 16) = v11;
    return v5;
  }
  v66 = _mm_loadu_si128(&v51);
  v56 = *(_QWORD *)(v45 + 16);
  uu_touch::parse_date(&v46, &v66);
  v34 = v46;
  v10 = v47.m128i_i64[0];
  v11 = v47.m128i_u32[2];
  if ( v46 != 0x8000000000000004LL )
  {
    v37 = _mm_loadu_si128((const __m128i *)((char *)&v47.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v49);
    *(__m128i *)(a1 + 20) = v37;
    *(_QWORD *)a1 = v34;
    goto LABEL_30;
  }
  uu_touch::filetime_to_datetime(&v51);
  if ( !v51.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v43;
    return v5;
  }
  v67[0] = _mm_loadu_si128(&v51);
  a2 = (__m128i *)v67;
  uu_touch::parse_date(&v46, v67);
  v35 = v46;
  v12 = v47.m128i_i64[0];
  v36 = v47.m128i_i32[2];
  if ( v46 != 0x8000000000000004LL )
  {
    v41 = _mm_loadu_si128((const __m128i *)((char *)&v47.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v49);
    *(__m128i *)(a1 + 20) = v41;
    *(_QWORD *)a1 = v35;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v36;
    return v5;
  }
  v43 = v47.m128i_i32[2];
LABEL_12:
  v62[0] = v50;
  v62[1] = (char *)v50 + 24 * v57;
  v62[2] = 0LL;
  while ( 1 )
  {
    v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v62);
    if ( !v19 )
    {
      v5 = a1;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return v5;
    }
    v20 = v12;
    v21 = v11;
    v22 = v10;
    v58 = v18;
    v23 = v19->m128i_i64[0];
    v24 = 0x8000000000000000LL;
    if ( v19->m128i_i64[0] == 0x8000000000000000LL )
    {
      uu_touch::pathbuf_from_stdout(&v46, a2, v19, 0x8000000000000000LL);
      v25 = v46;
      v24 = v47.m128i_i64[0];
      a2 = v48;
      v19 = (__m128i *)v47.m128i_i64[1];
      if ( v46 != 0x8000000000000004LL )
        break;
    }
    v54.m128i_i64[0] = v24;
    v54.m128i_i64[1] = (__int64)v19;
    v55 = a2;
    if ( v24 != 0x8000000000000000LL )
      v19 = &v54;
    v26 = v19->m128i_i64[1];
    a2 = (__m128i *)v19[1].m128i_i64[0];
    v27 = v23 == 0x8000000000000000LL;
    v10 = v22;
    v28 = v22;
    v11 = v21;
    v29 = v21;
    v12 = v20;
    v30 = uu_touch::touch_file(v26, (_DWORD)a2, v27, v45, v28, v29, v20, v43);
    v60 = v55;
    v59 = _mm_loadu_si128(&v54);
    v61 = &v58;
    if ( v30 )
    {
      v64 = v60;
      v65 = v61;
      v63 = v59;
      a2 = &v63;
      uu_touch::touch::{{closure}}(&v46, &v63, v30, v31);
      v32 = v46;
      v33 = _mm_loadu_si128((const __m128i *)&v48);
      v51 = _mm_loadu_si128(&v47);
      v52 = v33;
      v53 = v49.m128i_i64[1];
      if ( v46 != 0x8000000000000004LL )
      {
        v5 = a1;
        *(_QWORD *)(a1 + 40) = v53;
        v40 = v51;
        *(__m128i *)(a1 + 24) = v52;
        *(__m128i *)(a1 + 8) = v40;
        *(_QWORD *)a1 = v32;
        return v5;
      }
    }
    else
    {
      core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(&v59, a2, &v58, v31);
    }
  }
  v5 = a1;
  *(__m128i *)(a1 + 32) = v49;
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 24) = a2;
  return v5;
}
