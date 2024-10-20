_BYTE *__fastcall uu_tail::parse::parse_obsolete(_BYTE *a1, __int64 a2)
{
  __int64 v3; // r10
  unsigned __int8 *v4; // r11
  int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // r14
  int v13; // ecx
  int v14; // r9d
  int v15; // r8d
  int v16; // edi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r13
  unsigned __int8 *v19; // r12
  unsigned __int64 v20; // rsi
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rbp
  unsigned __int8 *v23; // r13
  int v24; // r9d
  unsigned __int8 *v25; // r10
  unsigned __int8 *v26; // rax
  bool v27; // cl
  bool v28; // zf
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  int v31; // r12d
  __int64 v32; // rax
  unsigned __int8 *v33; // rbp
  int v34; // eax
  int v35; // edx
  int v36; // edi
  int v37; // esi
  unsigned __int64 v38; // rdx
  bool v39; // si
  char v40; // di
  unsigned __int8 *v41; // rsi
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // esi
  char v49; // [rsp+Ch] [rbp-5Ch]
  __int64 v50; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v51; // [rsp+18h] [rbp-50h]
  __int64 v52; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v53; // [rsp+28h] [rbp-40h]
  __int64 v54; // [rsp+30h] [rbp-38h]

  std::sys::os_str::bytes::Slice::to_str(&v52, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v52 )
  {
    *a1 = 3;
    a1[10] = 2;
    return a1;
  }
  v3 = v54;
  if ( !v54 || (v4 = v53, v5 = *v53, v5 != 43) && v5 != 45 )
  {
LABEL_81:
    a1[10] = 3;
    return a1;
  }
  v6 = v54 - 1;
  v7 = v53 + 1;
  v8 = &v53[v54];
  v9 = 0LL;
  v10 = v53 + 1;
  while ( v10 != v8 )
  {
    v12 = v9;
    v13 = *v10;
    if ( (v13 & 0x80u) == 0 )
    {
      v11 = v10 + 1;
    }
    else
    {
      v14 = v13 & 0x1F;
      v15 = v10[1] & 0x3F;
      if ( (unsigned __int8)v13 <= 0xDFu )
      {
        v11 = v10 + 2;
        v13 = v15 | (v14 << 6);
      }
      else
      {
        v16 = (v15 << 6) | v10[2] & 0x3F;
        if ( (unsigned __int8)v13 < 0xF0u )
        {
          v11 = v10 + 3;
          v13 = (v14 << 12) | v16;
        }
        else
        {
          v11 = v10 + 4;
          v13 = ((v13 & 7) << 18) | (v16 << 6) | v10[3] & 0x3F;
        }
      }
    }
    v9 = &v11[v12 - v10];
    v10 = v11;
    if ( (unsigned int)(v13 - 48) >= 0xA )
      goto LABEL_17;
  }
  v12 = (unsigned __int8 *)(v54 - 1);
LABEL_17:
  if ( v12 )
  {
    v51 = v53;
    v50 = v54;
    if ( v6 <= (unsigned __int64)v12 )
    {
      if ( (unsigned __int8 *)v6 != v12 )
LABEL_20:
        core::str::slice_error_fail(v53 + 1, v6, 0LL, v12, &off_15C340);
    }
    else if ( (char)v12[(_QWORD)v7] <= -65 )
    {
      goto LABEL_20;
    }
    v18 = v54 - 1;
    core::num::<impl core::str::traits::FromStr for u64>::from_str(&v52, v53 + 1, v12);
    if ( (_BYTE)v52 )
    {
      *a1 = 0;
      a1[10] = 2;
      return a1;
    }
    v17 = (unsigned __int64)v53;
    v6 = v18;
    if ( v18 <= (unsigned __int64)v12 )
    {
      v3 = v50;
      v4 = v51;
      if ( (unsigned __int8 *)v18 != v12 )
LABEL_27:
        core::str::slice_error_fail(v7, v18, v12, v18, &off_15C358);
    }
    else
    {
      v3 = v50;
      v4 = v51;
      if ( (char)v12[(_QWORD)v7] <= -65 )
        goto LABEL_27;
    }
  }
  else
  {
    v17 = 10LL;
  }
  v49 = v5;
  v19 = &v7[(_QWORD)v12];
  v20 = v6 - (_QWORD)v12;
  if ( !v20 )
  {
    v22 = 0LL;
    v24 = 108;
    goto LABEL_40;
  }
  v21 = *v19;
  v22 = v20 - 1;
  v23 = v19 + 1;
  if ( *v19 == 98 )
  {
    v29 = v17;
    v24 = 98;
    goto LABEL_44;
  }
  v24 = v21;
  if ( v21 == 99 )
  {
    v29 = v17;
LABEL_44:
    if ( v22 > 0xF )
    {
      v31 = v24;
      v32 = core::slice::memchr::memchr_aligned(102LL, v23, v22);
      v24 = v31;
      v27 = v32 == 1;
      v19 = v23;
      v17 = v29;
      goto LABEL_51;
    }
    v17 = v29;
    if ( v22 )
    {
      v30 = 1LL;
      do
      {
        v27 = v23[v30 - 1] == 102;
        if ( v23[v30 - 1] == 102 )
          break;
        v28 = v22 == v30++;
      }
      while ( !v28 );
      v19 = v23;
LABEL_51:
      v33 = &v19[v22];
      do
      {
        if ( v19 == v33 )
        {
LABEL_62:
          if ( v24 != 98 )
            goto LABEL_83;
          v38 = 512LL;
          v39 = 0;
          v40 = v49;
          goto LABEL_84;
        }
        v34 = *v19;
        if ( (v34 & 0x80u) == 0 )
        {
          ++v19;
        }
        else
        {
          v35 = v34 & 0x1F;
          v36 = v19[1] & 0x3F;
          if ( (unsigned __int8)v34 <= 0xDFu )
          {
            v19 += 2;
            v34 = v36 | (v35 << 6);
          }
          else
          {
            v37 = (v36 << 6) | v19[2] & 0x3F;
            if ( (unsigned __int8)v34 < 0xF0u )
            {
              v19 += 3;
              v34 = (v35 << 12) | v37;
            }
            else
            {
              v34 = ((v34 & 7) << 18) | (v37 << 6) | v19[3] & 0x3F;
              if ( v34 == 1114112 )
                goto LABEL_62;
              v19 += 4;
            }
          }
        }
      }
      while ( v34 == 102 );
LABEL_78:
      if ( v49 == 45 && v12 )
      {
        *a1 = 2;
        a1[10] = 2;
        return a1;
      }
      goto LABEL_81;
    }
    v22 = 0LL;
    v19 = v23;
LABEL_40:
    v27 = 0;
    goto LABEL_51;
  }
  if ( v21 != 108 )
  {
    v29 = v17;
    v24 = 108;
    v22 = v20;
    v23 = v19;
    goto LABEL_44;
  }
  if ( v20 > 0x10 )
  {
    v41 = v19 + 1;
    v42 = v17;
    v43 = core::slice::memchr::memchr_aligned(102LL, v41, v22);
    v17 = v42;
    v27 = v43 == 1;
  }
  else if ( v20 == 1 )
  {
    v27 = 0;
  }
  else
  {
    v25 = (unsigned __int8 *)(v3 - 3);
    v26 = v12;
    do
    {
      v27 = v26[(_QWORD)v4 + 2] == 102;
      if ( v26[(_QWORD)v4 + 2] == 102 )
        break;
      v28 = v25 == v26++;
    }
    while ( !v28 );
  }
  v24 = 108;
  while ( v23 != v8 )
  {
    v44 = *v23;
    if ( (v44 & 0x80u) == 0 )
    {
      ++v23;
    }
    else
    {
      v45 = v44 & 0x1F;
      v46 = v23[1] & 0x3F;
      if ( (unsigned __int8)v44 <= 0xDFu )
      {
        v23 += 2;
        v44 = v46 | (v45 << 6);
      }
      else
      {
        v47 = (v46 << 6) | v23[2] & 0x3F;
        if ( (unsigned __int8)v44 < 0xF0u )
        {
          v23 += 3;
          v44 = (v45 << 12) | v47;
        }
        else
        {
          v44 = ((v44 & 7) << 18) | (v47 << 6) | v23[3] & 0x3F;
          if ( v44 == 1114112 )
            break;
          v23 += 4;
        }
      }
    }
    if ( v44 != 102 )
      goto LABEL_78;
  }
LABEL_83:
  v40 = v49;
  v39 = v24 == 108;
  v38 = 1LL;
LABEL_84:
  if ( is_mul_ok(v38, v17) )
  {
    *(_QWORD *)a1 = v38 * v17;
    a1[8] = v40 != 45;
    a1[9] = v39;
    a1[10] = v27;
  }
  else
  {
    *a1 = 1;
    a1[10] = 2;
  }
  return a1;
}
