__int64 __fastcall uu_nl::SectionDelimiter::parse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rdx
  char v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  bool v16; // zf
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  char v23; // r10
  __int64 i; // r10
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // r9d
  int v30; // r8d
  __int64 v31; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-D8h]
  __int64 v35; // [rsp+8h] [rbp-D0h]
  __int64 v36; // [rsp+10h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-90h]
  __int64 v39; // [rsp+58h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-78h]
  unsigned __int64 v41; // [rsp+68h] [rbp-70h]
  unsigned __int64 v42; // [rsp+78h] [rbp-60h]
  __int64 v43; // [rsp+88h] [rbp-50h]
  unsigned __int64 v44; // [rsp+90h] [rbp-48h]
  __int64 v45; // [rsp+98h] [rbp-40h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-38h]

  LOBYTE(v4) = 3;
  if ( !a2 || !a4 )
    return (unsigned int)v4;
  core::str::pattern::StrSearcher::new(&v37, a1, a2, a3, a4);
  v6 = v38;
  v7 = v39;
  if ( !v37 )
  {
    if ( (v39 & 0xFF0000) != 0 )
      return (unsigned int)v4;
    for ( i = 0LL; ; ++i )
    {
      if ( v6 )
      {
        if ( v6 >= v44 )
        {
          if ( v6 != v44 )
            goto LABEL_91;
        }
        else if ( *(char *)(v43 + v6) < -64 )
        {
          goto LABEL_91;
        }
      }
      if ( v6 == v44 )
      {
        if ( !v7 )
        {
          v35 = i;
          v34 = a2;
          v36 = a4;
          goto LABEL_77;
        }
        v7 ^= 1u;
      }
      else
      {
        v25 = *(unsigned __int8 *)(v43 + v6);
        if ( (v25 & 0x80u) != 0 )
        {
          v28 = v25 & 0x1F;
          v29 = *(_BYTE *)(v43 + v6 + 1) & 0x3F;
          if ( (unsigned __int8)v25 < 0xE0u )
          {
            v25 = v29 | (v28 << 6);
            if ( v7 )
            {
LABEL_45:
              v26 = v6;
LABEL_46:
              v7 ^= 1u;
              goto LABEL_47;
            }
          }
          else
          {
            v30 = (v29 << 6) | *(_BYTE *)(v43 + v6 + 2) & 0x3F;
            if ( (unsigned __int8)v25 < 0xF0u )
            {
              v25 = (v28 << 12) | v30;
              if ( v7 )
                goto LABEL_45;
            }
            else
            {
              v25 = ((v25 & 7) << 18) | (v30 << 6) | *(_BYTE *)(v43 + v6 + 3) & 0x3F;
              if ( v7 )
                goto LABEL_45;
            }
          }
        }
        else if ( v7 )
        {
          goto LABEL_45;
        }
        v27 = 1LL;
        if ( v25 >= 0x80 )
        {
          v27 = 2LL;
          if ( v25 >= 0x800 )
            v27 = 4LL - (v25 < (unsigned int)&stru_10000);
        }
        v26 = v6 + v27;
        if ( v26 )
        {
          if ( v26 >= v44 )
          {
            if ( v26 != v44 )
            {
LABEL_90:
              v6 = v26;
LABEL_91:
              core::str::slice_error_fail(v43, v44, v6, v44, &off_26E688);
            }
          }
          else if ( *(char *)(v43 + v26) < -64 )
          {
            goto LABEL_90;
          }
        }
        if ( v26 != v44 )
        {
          v7 = 1;
          goto LABEL_46;
        }
        v7 = 0;
      }
      v26 = v44;
LABEL_47:
      v6 = v26;
    }
  }
  v8 = v41;
  v9 = v46 - 1;
  v10 = v46 - 1 + v41;
  if ( v10 < v44 )
  {
    v34 = a2;
    v36 = a4;
    v4 = v40;
    v11 = v42;
    v35 = 0LL;
    while ( v11 != -1LL )
    {
      while ( !_bittest64(&v4, *(unsigned __int8 *)(v43 + v10)) )
      {
        v8 += v46;
        v11 = 0LL;
LABEL_11:
        v10 = v8 + v9;
        if ( v8 + v9 >= v44 )
          goto LABEL_77;
      }
      v12 = v9;
      v13 = v11;
      if ( v38 > v11 )
        v13 = v38;
      v14 = v13;
      while ( v14 < v46 )
      {
        if ( v8 + v14 >= v44 )
          goto LABEL_87;
        v15 = v14 + 1;
        v16 = *(_BYTE *)(v45 + v14) == *(_BYTE *)(v43 + v8 + v14);
        ++v14;
        if ( !v16 )
        {
          v8 = v15 + v8 - v38;
          v11 = 0LL;
          v9 = v12;
          v4 = v40;
          goto LABEL_11;
        }
      }
      v17 = v38;
      v9 = v12;
      v4 = v40;
      while ( v11 < v17 )
      {
        if ( --v17 >= v46 )
LABEL_85:
          core::panicking::panic_bounds_check(v17, v46, &off_26E640);
        v18 = v17 + v8;
        if ( v17 + v8 >= v44 )
LABEL_84:
          core::panicking::panic_bounds_check(v18, v44, &off_26E658);
        if ( *(_BYTE *)(v45 + v17) != *(_BYTE *)(v43 + v18) )
        {
          v8 += v39;
          v11 = v46 - v39;
          goto LABEL_11;
        }
      }
      v11 = 0LL;
LABEL_7:
      v8 += v46;
      ++v35;
      v10 = v8 + v9;
      if ( v8 + v9 >= v44 )
        goto LABEL_77;
    }
    do
    {
      if ( !_bittest64(&v4, *(unsigned __int8 *)(v43 + v10)) )
      {
        v19 = v46 + v8;
        goto LABEL_27;
      }
      v21 = 0LL;
      v22 = v8;
      while ( v38 + v21 < v46 )
      {
        if ( v38 + v22 >= v44 )
        {
          v13 = v38;
LABEL_87:
          v33 = v13 + v8;
          if ( v44 > v33 )
            v33 = v44;
          core::panicking::panic_bounds_check(v33, v44, &off_26E670);
        }
        v23 = *(_BYTE *)(v38 + v45 + v21);
        v20 = v22 + 1;
        ++v21;
        v16 = v23 == *(_BYTE *)(v43 + v38 + v22++);
        if ( !v16 )
          goto LABEL_28;
      }
      v17 = v38 - 1;
      do
      {
        if ( v17 == -1LL )
        {
          v11 = -1LL;
          goto LABEL_7;
        }
        if ( v38 - 1 >= v46 )
          goto LABEL_85;
        v18 = v8 + v17;
        if ( v8 + v17 >= v44 )
          goto LABEL_84;
        v16 = *(_BYTE *)(v45 + v17) == *(_BYTE *)(v43 + v8 + v17);
        --v17;
      }
      while ( v16 );
      v19 = v39 + v8;
LABEL_27:
      v20 = v19;
LABEL_28:
      v10 = v9 + v20;
      v8 = v20;
    }
    while ( v9 + v20 < v44 );
LABEL_77:
    v31 = v35 * v36;
    if ( v35 == 1 )
    {
      LOBYTE(v4) = (v31 == v34) ^ 3;
    }
    else if ( v35 == 2 )
    {
      LOBYTE(v4) = (2 * (v31 != v34)) | 1;
    }
    else
    {
      LOBYTE(v4) = 3;
      if ( v35 == 3 )
        LODWORD(v4) = 3 * (v31 != v34);
    }
  }
  return (unsigned int)v4;
}
