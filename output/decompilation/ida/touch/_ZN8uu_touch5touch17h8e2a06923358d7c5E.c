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
  unsigned int v13; // eax
  __m128i *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // edx
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
  __int64 v28; // r8
  unsigned int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm1
  const char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int32 v37; // ecx
  __m128i v38; // xmm0
  __int64 v39; // xmm1_8
  __int64 v40; // rcx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  unsigned int v44; // [rsp+0h] [rbp-168h]
  const char *v46; // [rsp+8h] [rbp-160h]
  __int64 v47; // [rsp+10h] [rbp-158h]
  __int64 v48; // [rsp+18h] [rbp-150h] BYREF
  __m128i v49; // [rsp+20h] [rbp-148h] BYREF
  __m128i *v50; // [rsp+30h] [rbp-138h] BYREF
  __m128i v51; // [rsp+38h] [rbp-130h] BYREF
  __m128i *v52; // [rsp+48h] [rbp-120h]
  __m128i v53; // [rsp+50h] [rbp-118h] BYREF
  __m128i v54; // [rsp+60h] [rbp-108h]
  __int64 v55; // [rsp+70h] [rbp-F8h]
  __m128i v56; // [rsp+80h] [rbp-E8h] BYREF
  __m128i *v57; // [rsp+90h] [rbp-D8h]
  __int64 v58; // [rsp+98h] [rbp-D0h]
  __int64 v59; // [rsp+A0h] [rbp-C8h]
  __int64 v60; // [rsp+A8h] [rbp-C0h] BYREF
  __m128i v61; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i *v62; // [rsp+C0h] [rbp-A8h]
  __int64 *v63; // [rsp+C8h] [rbp-A0h]
  _QWORD v64[3]; // [rsp+D8h] [rbp-90h] BYREF
  __m128i v65; // [rsp+F0h] [rbp-78h] BYREF
  __m128i *v66; // [rsp+100h] [rbp-68h]
  __int64 *v67; // [rsp+108h] [rbp-60h]
  __m128i v68; // [rsp+118h] [rbp-50h] BYREF
  _OWORD v69[4]; // [rsp+128h] [rbp-40h] BYREF

  v4 = a4;
  v59 = a3;
  v5 = a1;
  v6 = *(_QWORD *)(a4 + 24);
  v7 = 0LL;
  v8 = v6 < (__int64)0x8000000000000002LL;
  v9 = v6 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v8 )
    v7 = v9;
  v47 = v4;
  if ( v7 )
  {
    v52 = a2;
    if ( v7 == 1 )
    {
      v10 = *(_QWORD *)(v4 + 32);
      v11 = *(unsigned int *)(v4 + 40);
      v12 = v10;
      v13 = *(_DWORD *)(v4 + 40);
    }
    else
    {
      chrono::offset::local::Local::now(&v48);
      v16 = uu_touch::datetime_to_filetime((unsigned int *)&v48);
      v4 = v47;
      v10 = v16;
      v11 = v17;
      v12 = v16;
      v13 = v17;
    }
    v44 = v13;
  }
  else
  {
    v14 = a2;
    a2 = *(__m128i **)(v4 + 32);
    v15 = v4;
    uu_touch::stat((__int64)&v53, (__int64)a2, *(_QWORD *)(v4 + 40), *(_BYTE *)(v4 + 49) == 0);
    if ( v53.m128i_i64[0] )
    {
      a2 = (__m128i *)(v15 + 24);
      uu_touch::touch::{{closure}}(&v48, v15 + 24, v53.m128i_i64[1]);
      v10 = v49.m128i_i64[0];
      v12 = (__int64)v50;
      v11 = v49.m128i_i64[1];
      if ( v48 != 0x8000000000000004LL )
      {
        v39 = v51.m128i_i64[0];
        v40 = v51.m128i_i64[1];
        *(_QWORD *)a1 = v48;
        *(_QWORD *)(a1 + 8) = v10;
        *(_QWORD *)(a1 + 16) = v11;
        *(_QWORD *)(a1 + 24) = v12;
        *(_QWORD *)(a1 + 32) = v39;
        *(_QWORD *)(a1 + 40) = v40;
        return v5;
      }
      v52 = v14;
      v44 = v51.m128i_i32[0];
      v4 = v47;
    }
    else
    {
      v52 = v14;
      v10 = v53.m128i_i64[1];
      v11 = v54.m128i_u32[0];
      v44 = v55;
      v4 = v15;
      v12 = v54.m128i_i64[1];
    }
  }
  if ( *(_QWORD *)v4 == 0x8000000000000000LL )
    goto LABEL_12;
  uu_touch::filetime_to_datetime(&v53);
  if ( !v53.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
LABEL_30:
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 16) = v11;
    return v5;
  }
  v68 = _mm_loadu_si128(&v53);
  v34 = *(const char **)(v47 + 8);
  v46 = v34;
  v58 = *(_QWORD *)(v47 + 16);
  uu_touch::parse_date((__int64)&v48, (__int64)&v68, v34, v58);
  v35 = v48;
  v10 = v49.m128i_i64[0];
  v11 = v49.m128i_u32[2];
  if ( v48 != 0x8000000000000004LL )
  {
    v38 = _mm_loadu_si128((const __m128i *)((char *)&v49.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v51);
    *(__m128i *)(a1 + 20) = v38;
    *(_QWORD *)a1 = v35;
    goto LABEL_30;
  }
  uu_touch::filetime_to_datetime(&v53);
  if ( !v53.m128i_i32[0] )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v44;
    return v5;
  }
  v69[0] = _mm_loadu_si128(&v53);
  a2 = (__m128i *)v69;
  uu_touch::parse_date((__int64)&v48, (__int64)v69, v46, v58);
  v36 = v48;
  v12 = v49.m128i_i64[0];
  v37 = v49.m128i_i32[2];
  if ( v48 != 0x8000000000000004LL )
  {
    v42 = _mm_loadu_si128((const __m128i *)((char *)&v49.m128i_u64[1] + 4));
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(&v51);
    *(__m128i *)(a1 + 20) = v42;
    *(_QWORD *)a1 = v36;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v37;
    return v5;
  }
  v44 = v49.m128i_u32[2];
LABEL_12:
  v64[0] = v52;
  v64[1] = (char *)v52 + 24 * v59;
  v64[2] = 0LL;
  while ( 1 )
  {
    v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v64);
    if ( !v19 )
    {
      v5 = a1;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return v5;
    }
    v20 = v12;
    v21 = v11;
    v22 = v10;
    v60 = v18;
    v23 = v19->m128i_i64[0];
    v24 = 0x8000000000000000LL;
    if ( v19->m128i_i64[0] == 0x8000000000000000LL )
    {
      uu_touch::pathbuf_from_stdout(&v48);
      v25 = v48;
      v24 = v49.m128i_i64[0];
      a2 = v50;
      v19 = (__m128i *)v49.m128i_i64[1];
      if ( v48 != 0x8000000000000004LL )
        break;
    }
    v56.m128i_i64[0] = v24;
    v56.m128i_i64[1] = (__int64)v19;
    v57 = a2;
    if ( v24 != 0x8000000000000000LL )
      v19 = &v56;
    v26 = v19->m128i_i64[1];
    a2 = (__m128i *)v19[1].m128i_i64[0];
    v27 = v23 == 0x8000000000000000LL;
    v10 = v22;
    v28 = v22;
    v11 = v21;
    v29 = v21;
    v12 = v20;
    v30 = uu_touch::touch_file(v26, (__int64)a2, v27, v47, v28, v29, v20, v44);
    v62 = v57;
    v61 = _mm_loadu_si128(&v56);
    v63 = &v60;
    if ( v30 )
    {
      v66 = v62;
      v67 = v63;
      v65 = v61;
      a2 = &v65;
      uu_touch::touch::{{closure}}(&v48, &v65, v30, v31);
      v32 = v48;
      v33 = _mm_loadu_si128((const __m128i *)&v50);
      v53 = _mm_loadu_si128(&v49);
      v54 = v33;
      v55 = v51.m128i_i64[1];
      if ( v48 != 0x8000000000000004LL )
      {
        v5 = a1;
        *(_QWORD *)(a1 + 40) = v55;
        v41 = v53;
        *(__m128i *)(a1 + 24) = v54;
        *(__m128i *)(a1 + 8) = v41;
        *(_QWORD *)a1 = v32;
        return v5;
      }
    }
    else
    {
      core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(&v61, a2, &v60, v31);
    }
  }
  v5 = a1;
  *(__m128i *)(a1 + 32) = v51;
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 24) = a2;
  return v5;
}
