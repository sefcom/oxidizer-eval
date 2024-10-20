__int64 __fastcall uu_sort::get_leading_gen(__int64 a1, __int64 a2)
{
  unsigned __int8 *started; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r9
  __int64 v12; // rsi
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rdi
  char v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r8
  unsigned __int8 *v21; // r15
  __int64 v22; // r9
  __int64 v23; // rbp
  unsigned __int8 *v24; // r11
  __int64 v25; // r10
  unsigned __int64 v26; // rax
  __int64 v27; // r13
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r13d
  int v32; // r14d
  bool v33; // al
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  char *v38; // rax
  unsigned __int8 *v39; // rcx
  char v40; // dl
  char *v42; // rax
  unsigned __int8 *v43; // rcx
  char v44; // dl
  __int64 v45; // rcx
  char v46; // [rsp+8h] [rbp-80h]
  unsigned __int64 v47; // [rsp+10h] [rbp-78h] BYREF
  __int64 v48; // [rsp+18h] [rbp-70h]
  __int128 v49; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v50; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  __int64 v53; // [rsp+48h] [rbp-40h]
  __int64 v54; // [rsp+50h] [rbp-38h]

  started = (unsigned __int8 *)core::str::<impl str>::trim_start_matches();
  v5 = a2 - v4;
  if ( v4 <= 3 )
  {
    if ( v4 != 3 )
      goto LABEL_11;
    if ( !started )
    {
LABEL_94:
      v45 = 3LL;
      goto LABEL_96;
    }
  }
  else if ( (char)started[3] <= -65 )
  {
    goto LABEL_11;
  }
  if ( (*started | (unsigned __int8)(32 * ((unsigned __int8)(*started - 65) < 0x1Au))) == 105 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 == 2 )
        return v5;
      v7 = started[v6 + 1];
      v8 = byte_29D2A[++v6];
    }
    while ( (v7 | (unsigned __int8)(32 * ((unsigned __int8)(v7 - 65) < 0x1Au))) == (v8 | (unsigned __int8)(32 * ((unsigned __int8)(v8 - 65) < 0x1Au))) );
    if ( (unsigned __int64)(v6 - 1) >= 2 )
      return v5;
  }
LABEL_11:
  if ( v4 <= 4 )
  {
    if ( v4 != 4 )
      goto LABEL_21;
    if ( !started )
    {
      v45 = 4LL;
LABEL_96:
      core::str::slice_error_fail(0LL, v4, 0LL, v45, &off_192E40);
    }
  }
  else if ( (char)started[4] < -64 )
  {
    goto LABEL_21;
  }
  if ( (*started | (unsigned __int8)(32 * ((unsigned __int8)(*started - 65) < 0x1Au))) == 45 )
  {
    v9 = -1LL;
    do
    {
      if ( v9 == 2 )
        return v5;
      v10 = started[v9 + 2];
      v11 = byte_1EB74[v9 + 2];
      ++v9;
    }
    while ( (v10 | (unsigned __int8)(32 * ((unsigned __int8)(v10 - 65) < 0x1Au))) == (v11 | (unsigned __int8)(32 * ((unsigned __int8)(v11 - 65) < 0x1Au))) );
    if ( v9 > 2 )
      return v5;
  }
LABEL_21:
  if ( v4 > 3 )
  {
    if ( (char)started[3] < -64 )
      goto LABEL_31;
    goto LABEL_26;
  }
  if ( v4 != 3 )
    goto LABEL_31;
  if ( !started )
    goto LABEL_94;
LABEL_26:
  if ( (*started | (unsigned __int8)(32 * ((unsigned __int8)(*started - 65) < 0x1Au))) == 110 )
  {
    v12 = 0LL;
    do
    {
      if ( v12 == 2 )
        return v5;
      v13 = started[v12 + 1];
      v14 = byte_29D2D[++v12];
    }
    while ( (v13 | (unsigned __int8)(32 * ((unsigned __int8)(v13 - 65) < 0x1Au))) == (v14 | (unsigned __int8)(32 * ((unsigned __int8)(v14 - 65) < 0x1Au))) );
    if ( (unsigned __int64)(v12 - 1) > 1 )
      return v5;
  }
LABEL_31:
  v50 = started;
  v51 = &started[v4];
  v52 = 0LL;
  v47 = 0LL;
  v48 = 8LL;
  v49 = 0LL;
  v15 = itertools::peek_nth::PeekNth<I>::peek_nth(&v47, 0LL);
  v53 = v5;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 8);
    if ( v16 == 45 || v16 == 43 )
    {
      if ( *((_QWORD *)&v49 + 1) )
      {
        v17 = 0LL;
        if ( (__int64)v49 + 1 >= v47 )
          v17 = v47;
        *(_QWORD *)&v49 = v49 - v17 + 1;
        --*((_QWORD *)&v49 + 1);
      }
      else
      {
        v42 = (char *)v50;
        if ( v50 && v50 != v51 )
        {
          v43 = ++v50;
          v44 = *v42;
          if ( *v42 < 0 )
          {
            v43 = (unsigned __int8 *)(v42 + 2);
            v50 = (unsigned __int8 *)(v42 + 2);
            if ( (unsigned __int8)v44 >= 0xE0u )
            {
              v43 = (unsigned __int8 *)(v42 + 3);
              v50 = (unsigned __int8 *)(v42 + 3);
              if ( (unsigned __int8)v44 >= 0xF0u )
              {
                v43 = (unsigned __int8 *)(v42 + 4);
                v50 = (unsigned __int8 *)(v42 + 4);
              }
            }
          }
          v52 += v43 - (unsigned __int8 *)v42;
        }
      }
    }
  }
  v54 = a2;
  v46 = 1;
  v18 = 0;
LABEL_39:
  v19 = *((_QWORD *)&v49 + 1);
  v20 = v49;
  v21 = v50;
  v22 = v52;
LABEL_40:
  v23 = v22;
  v24 = v21;
  v25 = v20;
  while ( 1 )
  {
    if ( v19 )
    {
      v26 = 0LL;
      if ( v25 + 1 >= v47 )
        v26 = v47;
      v20 = v25 - v26 + 1;
      *(_QWORD *)&v49 = v20;
      *((_QWORD *)&v49 + 1) = --v19;
      v27 = v23;
      v28 = *(_DWORD *)(v48 + 16 * v25 + 8);
      v25 = v20;
      goto LABEL_44;
    }
    if ( !v24 || v24 == v51 )
      break;
    v21 = v24 + 1;
    v50 = v24 + 1;
    v29 = *v24;
    if ( (v29 & 0x80u) != 0 )
    {
      v30 = v29 & 0x1F;
      v21 = v24 + 2;
      v50 = v24 + 2;
      v31 = v24[1] & 0x3F;
      if ( (unsigned __int8)v29 <= 0xDFu )
      {
        v28 = v31 | (v30 << 6);
        goto LABEL_55;
      }
      v21 = v24 + 3;
      v50 = v24 + 3;
      v32 = (v31 << 6) | v24[2] & 0x3F;
      if ( (unsigned __int8)v29 < 0xF0u )
      {
        v28 = (v30 << 12) | v32;
        goto LABEL_55;
      }
      v21 = v24 + 4;
      v50 = v24 + 4;
      v29 = ((v29 & 7) << 18) | (v32 << 6) | v24[3] & 0x3F;
    }
    v28 = v29;
LABEL_55:
    v22 = v23 + v21 - v24;
    v52 = v22;
    v27 = v22;
    v24 = v21;
LABEL_44:
    v23 = v27;
    if ( (unsigned int)(v28 - 48) >= 0xA )
    {
      if ( v28 == 46 )
      {
        v33 = v18 == 0;
        v18 = 1;
        if ( (v33 & (unsigned __int8)v46) != 0 )
          goto LABEL_40;
LABEL_91:
        if ( v47 )
          _rust_dealloc(v48, 16 * v47, 8LL);
        return v53;
      }
      if ( v28 != 69 && v28 != 101 )
        goto LABEL_91;
      if ( (v46 & 1) == 0 )
        goto LABEL_91;
      v34 = itertools::peek_nth::PeekNth<I>::peek_nth(&v47, 0LL);
      if ( !v34 )
        goto LABEL_91;
      v35 = *(_DWORD *)(v34 + 8);
      if ( v35 != 45 && v35 != 43 )
      {
        v46 = 0;
        if ( (unsigned int)(v35 - 48) < 0xA )
          goto LABEL_39;
        goto LABEL_91;
      }
      v36 = itertools::peek_nth::PeekNth<I>::peek_nth(&v47, 2LL);
      if ( !v36 || (unsigned int)(*(_DWORD *)(v36 + 8) - 48) > 9 )
        goto LABEL_91;
      if ( *((_QWORD *)&v49 + 1) )
      {
        v46 = 0;
        v37 = 0LL;
        if ( (__int64)v49 + 1 >= v47 )
          v37 = v47;
        *(_QWORD *)&v49 = v49 - v37 + 1;
        --*((_QWORD *)&v49 + 1);
      }
      else
      {
        v38 = (char *)v50;
        v46 = 0;
        if ( v50 )
        {
          v46 = 0;
          if ( v50 != v51 )
          {
            v39 = ++v50;
            v40 = *v38;
            if ( *v38 < 0 )
            {
              v39 = (unsigned __int8 *)(v38 + 2);
              v50 = (unsigned __int8 *)(v38 + 2);
              if ( (unsigned __int8)v40 >= 0xE0u )
              {
                v39 = (unsigned __int8 *)(v38 + 3);
                v50 = (unsigned __int8 *)(v38 + 3);
                if ( (unsigned __int8)v40 >= 0xF0u )
                {
                  v39 = (unsigned __int8 *)(v38 + 4);
                  v50 = (unsigned __int8 *)(v38 + 4);
                }
              }
            }
            v52 += v39 - (unsigned __int8 *)v38;
            v46 = 0;
          }
        }
      }
      goto LABEL_39;
    }
  }
  if ( v47 )
    _rust_dealloc(v48, 16 * v47, 8LL);
  return v53;
}
