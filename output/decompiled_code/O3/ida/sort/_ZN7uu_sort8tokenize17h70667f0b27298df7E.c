void __fastcall uu_sort::tokenize(unsigned __int8 *a1, unsigned __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int8 *v5; // r14
  unsigned __int8 *v6; // r13
  char v7; // al
  __int64 v8; // r12
  unsigned __int8 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // dl
  unsigned __int8 *v13; // r15
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // esi
  __int64 v18; // r12
  unsigned int v19; // esi
  char v20; // cl
  char v21; // cl
  unsigned __int8 *v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  unsigned __int64 v25; // r9
  unsigned __int8 *v26; // rax
  __int64 v27; // rbp
  int v28; // ecx
  int v29; // esi
  int v30; // r8d
  int v31; // edi
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  int v39; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v40; // [rsp+10h] [rbp-38h]

  if ( a4[2] )
    core::panicking::panic(aAssertionFaile_14, 41LL, &off_192A40);
  v5 = a1;
  if ( a3 != 1114112 )
  {
    v38 = a2;
    v22 = &a1[a2];
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( a1 != &a1[a2] )
    {
      do
      {
        while ( 1 )
        {
          v26 = v5;
          v27 = v24;
          v28 = *v5;
          if ( (v28 & 0x80u) == 0 )
          {
            ++v5;
          }
          else
          {
            v29 = v28 & 0x1F;
            v30 = v5[1] & 0x3F;
            if ( (unsigned __int8)v28 <= 0xDFu )
            {
              v5 += 2;
              v28 = v30 | (v29 << 6);
            }
            else
            {
              v31 = (v30 << 6) | v5[2] & 0x3F;
              if ( (unsigned __int8)v28 < 0xF0u )
              {
                v5 += 3;
                v28 = (v29 << 12) | v31;
              }
              else
              {
                v5 += 4;
                v28 = ((v28 & 7) << 18) | (v31 << 6) | v26[3] & 0x3F;
              }
            }
          }
          v24 += v5 - v26;
          if ( v28 == a3 )
            break;
          if ( v5 == v22 )
            goto LABEL_50;
        }
        if ( v23 == *a4 )
        {
          v39 = a3;
          v40 = v25;
          alloc::raw_vec::RawVec<T,A>::grow_one(a4);
          v25 = v40;
          a3 = v39;
        }
        v32 = a4[1];
        v33 = 16 * v23;
        *(_QWORD *)(v32 + v33) = v25;
        *(_QWORD *)(v32 + v33 + 8) = v27;
        a4[2] = ++v23;
        v25 = v27 + 1;
      }
      while ( v5 != v22 );
    }
LABEL_50:
    if ( v25 < v38 )
    {
      if ( v23 == *a4 )
      {
        v34 = v25;
        alloc::raw_vec::RawVec<T,A>::grow_one(a4);
        v25 = v34;
      }
      v35 = a4[1];
      v36 = 16 * v23;
      *(_QWORD *)(v35 + v36) = v25;
      *(_QWORD *)(v35 + v36 + 8) = v38;
      a4[2] = v23 + 1;
    }
    return;
  }
  if ( !*a4 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a4);
  *(_OWORD *)a4[1] = 0LL;
  a4[2] = 1LL;
  if ( !a2 )
  {
    v8 = 1LL;
    goto LABEL_57;
  }
  v37 = a2;
  v6 = &a1[a2];
  v7 = 1;
  v8 = 1LL;
  v9 = 0LL;
  do
  {
    v13 = v5;
    v14 = *v5;
    if ( (v14 & 0x80u) != 0 )
    {
      v15 = v14 & 0x1F;
      v16 = v5[1] & 0x3F;
      if ( (unsigned __int8)v14 <= 0xDFu )
      {
        v5 += 2;
        v14 = v16 | (v15 << 6);
      }
      else
      {
        v17 = (v16 << 6) | v5[2] & 0x3F;
        if ( (unsigned __int8)v14 < 0xF0u )
        {
          v5 += 3;
          v14 = (v15 << 12) | v17;
        }
        else
        {
          v5 += 4;
          v14 = ((v14 & 7) << 18) | (v17 << 6) | v13[3] & 0x3F;
        }
      }
    }
    else
    {
      ++v5;
    }
    if ( v14 - 9 >= 5 && v14 != 32 )
    {
      if ( v14 < 0x80 )
      {
        v12 = 0;
        goto LABEL_8;
      }
      v19 = v14 >> 8;
      v12 = 0;
      if ( v14 >> 8 > 0x1F )
      {
        if ( v19 != 32 )
        {
          if ( v19 != 48 )
            goto LABEL_8;
          v20 = v14 == 12288;
LABEL_34:
          v12 = v20 != 0;
          if ( (v20 == 0) | v7 & 1 )
            goto LABEL_8;
          goto LABEL_18;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v14] >> 1;
      }
      else
      {
        if ( v19 )
        {
          if ( v19 != 22 )
            goto LABEL_8;
          v20 = v14 == 5760;
          goto LABEL_34;
        }
        v21 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v14];
      }
      v20 = v21 & 1;
      goto LABEL_34;
    }
    v12 = 1;
    if ( (v7 & 1) != 0 )
      goto LABEL_8;
LABEL_18:
    if ( !v8 )
      core::option::unwrap_failed(&off_192A70);
    *(_QWORD *)(16 * v8 + a4[1] - 8) = v9;
    v18 = a4[2];
    if ( v18 == *a4 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a4);
    v10 = a4[1];
    v11 = 16 * v18;
    *(_QWORD *)(v10 + v11) = v9;
    *(_QWORD *)(v10 + v11 + 8) = 0LL;
    v8 = v18 + 1;
    a4[2] = v8;
    v12 = 1;
LABEL_8:
    v9 = &v5[v9 - v13];
    v7 = v12;
  }
  while ( v5 != v6 );
  a2 = v37;
  if ( !v8 )
    core::option::unwrap_failed(&off_192A58);
LABEL_57:
  *(_QWORD *)(16 * v8 + a4[1] - 8) = a2;
}
