__int64 __fastcall uu_touch::touch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // cc
  __int64 v11; // rcx
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rsi
  _QWORD *v26; // r12
  _QWORD *v27; // r13
  unsigned __int128 v28; // kr00_16
  int v29; // edi
  _BOOL4 v30; // edx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 result; // rax
  __int128 v35; // xmm0
  int v36; // r14d
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // esi
  __int128 v44; // xmm0
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  __int64 v47; // rcx
  __int128 v48; // xmm0
  int v50; // [rsp+8h] [rbp-120h]
  int v51; // [rsp+14h] [rbp-114h]
  __int64 v52; // [rsp+18h] [rbp-110h] BYREF
  _BYTE v53[40]; // [rsp+20h] [rbp-108h]
  __int64 v54; // [rsp+48h] [rbp-E0h]
  __int128 v55; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v56; // [rsp+60h] [rbp-C8h]
  __int64 v57; // [rsp+70h] [rbp-B8h]
  __int64 v58; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+88h] [rbp-A0h]
  __int64 v60; // [rsp+90h] [rbp-98h]
  __int64 v61; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v62[3]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v63[4]; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v64; // [rsp+D8h] [rbp-50h] BYREF
  __int128 v65[4]; // [rsp+E8h] [rbp-40h] BYREF

  v5 = a4;
  v7 = a2;
  v8 = *(_QWORD *)(a4 + 24);
  v9 = 0LL;
  v10 = v8 < (__int64)0x8000000000000002LL;
  v11 = v8 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v10 )
    v9 = v11;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v12 = *(_QWORD *)(v5 + 32);
      v13 = *(_DWORD *)(v5 + 40);
    }
    else
    {
      chrono::offset::local::Local::now(&v52);
      v12 = uu_touch::datetime_to_filetime((unsigned int *)&v52);
    }
    v14 = v12;
    v15 = v13;
  }
  else
  {
    v16 = *(_QWORD *)(v5 + 32);
    v17 = *(_QWORD *)(v5 + 40);
    uu_touch::stat(&v55, v16, v17, *(unsigned __int8 *)(v5 + 49) ^ 1u);
    if ( (v55 & 1) != 0 )
    {
      uu_touch::touch::{{closure}}(&v52, v16, v17, *((_QWORD *)&v55 + 1));
      v12 = *(_QWORD *)v53;
      v14 = *(_QWORD *)&v53[16];
      if ( v52 != 0x8000000000000004LL )
      {
        v45 = (__m128)*(unsigned __int64 *)&v53[8];
        v46 = (__m128)*(unsigned __int64 *)&v53[24];
        v47 = *(_QWORD *)&v53[32];
        result = a1;
        *(_QWORD *)a1 = v52;
        *(_QWORD *)(a1 + 8) = v12;
        _mm_storel_ps((double *)(a1 + 16), v45);
        *(_QWORD *)(a1 + 24) = v14;
        _mm_storel_ps((double *)(a1 + 32), v46);
        *(_QWORD *)(a1 + 40) = v47;
        return result;
      }
      v13 = *(_DWORD *)&v53[8];
      v15 = *(_DWORD *)&v53[24];
    }
    else
    {
      v12 = *((_QWORD *)&v55 + 1);
      v13 = v56;
      v14 = *((_QWORD *)&v56 + 1);
      v15 = v57;
    }
  }
  v50 = v15;
  v59 = 0x8000000000000000LL;
  if ( *(_QWORD *)v5 == 0x8000000000000000LL )
  {
    v51 = v13;
    v58 = v14;
LABEL_14:
    v62[0] = v7;
    v62[1] = v7 + 24 * a3;
    v62[2] = 0LL;
    v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v62);
    if ( !v19 )
    {
LABEL_30:
      result = a1;
      *(_QWORD *)a1 = 0x8000000000000004LL;
      return result;
    }
    v54 = v12;
    while ( 1 )
    {
      v20 = v5;
      v61 = v18;
      v21 = *v19;
      v22 = v59;
      if ( *v19 != v59 )
        goto LABEL_21;
      uu_touch::pathbuf_from_stdout(&v52);
      v23 = v52;
      v24 = *(_QWORD *)v53;
      v4 = *(_QWORD *)&v53[16];
      v19 = *(_QWORD **)&v53[8];
      if ( v52 != 0x8000000000000004LL )
      {
        result = a1;
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&v53[24];
        *(_QWORD *)a1 = v23;
        *(_QWORD *)(a1 + 8) = v24;
        *(_QWORD *)(a1 + 16) = v19;
        *(_QWORD *)(a1 + 24) = v4;
        return result;
      }
      v28 = *(_OWORD *)&v53[8];
      v25 = v28 >> 64;
      v26 = (_QWORD *)v28;
      v27 = *(_QWORD **)&v53[8];
      v22 = v59;
      if ( *(_QWORD *)v53 == v59 )
      {
LABEL_21:
        v26 = v19;
        v27 = v19;
        v19 = (_QWORD *)v19[1];
        v25 = v26[2];
        v24 = v22;
      }
      v29 = (int)v19;
      v30 = v21 == v22;
      v5 = v20;
      v31 = uu_touch::touch_file(v29, v25, v30, v20, v54, v51, v58, v50);
      if ( v31 )
      {
        v63[0] = v24;
        v63[1] = v27;
        v63[2] = v4;
        v63[3] = &v61;
        uu_touch::touch::{{closure}}(&v52, v63, v31, v32);
        v33 = v52;
        v55 = *(_OWORD *)v53;
        v56 = *(_OWORD *)&v53[16];
        v57 = *(_QWORD *)&v53[32];
        if ( v52 != 0x8000000000000004LL )
        {
          result = a1;
          *(_QWORD *)(a1 + 40) = v57;
          v35 = v55;
          *(_OWORD *)(a1 + 24) = v56;
          *(_OWORD *)(a1 + 8) = v35;
          *(_QWORD *)a1 = v33;
          return result;
        }
      }
      else
      {
        core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(v24, v26);
      }
      v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v62);
      if ( !v19 )
        goto LABEL_30;
    }
  }
  v36 = v13;
  uu_touch::filetime_to_datetime(&v55);
  if ( !(_DWORD)v55 )
  {
    result = a1;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v36;
    return result;
  }
  v54 = a3;
  v4 = v14;
  v64 = v55;
  v37 = *(_QWORD *)(v5 + 8);
  v38 = *(_QWORD *)(v5 + 16);
  uu_touch::parse_date(&v52, &v64, v37, v38);
  v39 = v52;
  v12 = *(_QWORD *)v53;
  v40 = *(_DWORD *)&v53[8];
  if ( v52 != 0x8000000000000004LL )
  {
    v44 = *(_OWORD *)&v53[12];
    result = a1;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v53[24];
    *(_OWORD *)(a1 + 20) = v44;
    *(_QWORD *)a1 = v39;
    *(_QWORD *)(a1 + 8) = v12;
    *(_DWORD *)(a1 + 16) = v40;
    return result;
  }
  v60 = a2;
  v51 = *(_DWORD *)&v53[8];
  uu_touch::filetime_to_datetime(&v55);
  if ( (_DWORD)v55 )
  {
    v65[0] = v55;
    uu_touch::parse_date(&v52, v65, v37, v38);
    v41 = v52;
    v42 = *(_QWORD *)v53;
    v43 = *(_DWORD *)&v53[8];
    if ( v52 == 0x8000000000000004LL )
    {
      v50 = *(_DWORD *)&v53[8];
      v58 = *(_QWORD *)v53;
      v7 = v60;
      a3 = v54;
      goto LABEL_14;
    }
    v48 = *(_OWORD *)&v53[12];
    result = a1;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v53[24];
    *(_OWORD *)(a1 + 20) = v48;
    *(_QWORD *)a1 = v41;
    *(_QWORD *)(a1 + 8) = v42;
    *(_DWORD *)(a1 + 16) = v43;
  }
  else
  {
    result = a1;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 16) = v50;
  }
  return result;
}