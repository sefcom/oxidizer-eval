        char *a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // r9
  char v8; // al
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  char *v11; // r12
  char v12; // r10
  char *v13; // r11
  char v14; // r11
  char v15; // r11
  char *v16; // r15
  unsigned int v17; // r13d
  int v18; // ebp
  int v19; // r11d
  int v20; // r14d
  unsigned int v21; // r11d
  char *v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // r9
  char *v25; // r11
  char *v26; // rbx
  char v27; // bl
  char v28; // r9
  char **v29; // rdx

  v5 = *(_QWORD *)a5;
  if ( a3 && v5 > a4 )
    return 3LL;
  v7 = *((_QWORD *)a5 + 1);
  if ( !v7 )
  {
    if ( !a3 )
      core::option::unwrap_failed(&off_192B88);
    v10 = v5 - 1;
    if ( v10 < a4 )
      return (*(_QWORD *)(a3 + 16 * v10 + 8) == 0LL) + 1LL;
    v29 = &off_192BA0;
LABEL_92:
    core::panicking::panic_bounds_check(v10, a4, v29);
  }
  if ( v5 == 1 )
  {
    v8 = 1;
    v9 = 0LL;
    if ( !a5[16] )
      goto LABEL_63;
    goto LABEL_19;
  }
  if ( !a3 )
    core::option::unwrap_failed(&off_192BB8);
  v10 = v5 - 1;
  if ( v10 >= a4 )
  {
    v29 = &off_192BD0;
    goto LABEL_92;
  }
  v9 = *(_QWORD *)(a3 + 16 * v10);
  if ( !a5[16] )
    goto LABEL_56;
  if ( !v9 )
  {
    v8 = 1;
    v9 = 0LL;
    goto LABEL_19;
  }
  if ( v9 >= a2 )
  {
    if ( v9 == a2 )
    {
      a5 = 0LL;
      v9 = a2;
      goto LABEL_55;
    }
LABEL_93:
    core::str::slice_error_fail(a1, a2, v9, a2, &off_192BE8);
  }
  if ( *(char *)(a1 + v9) <= -65 )
    goto LABEL_93;
  v8 = 0;
LABEL_19:
  v11 = (char *)(a1 + v9);
  v12 = 1;
  if ( a2 == v9 )
  {
    if ( !v8 )
      goto LABEL_49;
    goto LABEL_53;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v16 = v11;
    a5 = v13;
    v17 = (unsigned __int8)*v11;
    if ( (v17 & 0x80u) != 0 )
    {
      v18 = v17 & 0x1F;
      v19 = v11[1] & 0x3F;
      if ( (unsigned __int8)v17 <= 0xDFu )
      {
        v11 += 2;
        v17 = v19 | (v18 << 6);
      }
      else
      {
        v20 = (v19 << 6) | v11[2] & 0x3F;
        if ( (unsigned __int8)v17 < 0xF0u )
        {
          v11 += 3;
          v17 = (v18 << 12) | v20;
        }
        else
        {
          v11 += 4;
          v17 = ((v17 & 7) << 18) | (v20 << 6) | v16[3] & 0x3F;
        }
      }
    }
    else
    {
      ++v11;
    }
    if ( v17 - 9 < 5 || v17 == 32 )
      goto LABEL_26;
    if ( v17 < 0x80 )
      break;
    v21 = v17 >> 8;
    if ( v17 >> 8 <= 0x1F )
    {
      if ( v21 )
      {
        if ( v21 != 22 )
          break;
        v15 = v17 == 5760;
        goto LABEL_25;
      }
      v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17];
      goto LABEL_24;
    }
    if ( v21 == 32 )
    {
      v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v17] >> 1;
LABEL_24:
      v15 = v14 & 1;
      goto LABEL_25;
    }
    if ( v21 != 48 )
      break;
    v15 = v17 == 12288;
LABEL_25:
    if ( !v15 )
      break;
LABEL_26:
    v13 = &v11[a5 - v16];
    if ( v11 == (char *)(a1 + a2) )
      goto LABEL_48;
  }
  v12 = 0;
LABEL_48:
  v11 = (char *)(a1 + v9);
  if ( !v8 )
  {
LABEL_49:
    if ( a2 <= v9 )
    {
      if ( a2 != v9 )
LABEL_51:
        core::str::slice_error_fail(a1, a2, v9, a2, &off_192C00);
    }
    else if ( *v11 <= -65 )
    {
      goto LABEL_51;
    }
  }
LABEL_53:
  if ( v12 )
    a5 = (char *)(a2 - v9);
LABEL_55:
  v9 += (unsigned __int64)a5;
LABEL_56:
  if ( v9 )
  {
    if ( v9 < a2 )
    {
      if ( *(char *)(a1 + v9) > -65 )
      {
        v8 = 0;
        goto LABEL_63;
      }
LABEL_89:
      core::str::slice_error_fail(a1, a2, v9, a2, &off_192C18);
    }
    if ( v9 != a2 )
      goto LABEL_89;
    v8 = 0;
    v9 = a2;
  }
  else
  {
    v8 = 1;
    v9 = 0LL;
  }
LABEL_63:
  v22 = (char *)(a1 + a2);
  v23 = 0LL;
  v24 = v7 - 1;
  if ( v24 )
  {
    v25 = (char *)(a1 + v9);
    while ( v25 != v22 )
    {
      v27 = *v25;
      if ( *v25 >= 0 )
      {
        v26 = v25 + 1;
      }
      else if ( (unsigned __int8)v27 < 0xE0u )
      {
        v26 = v25 + 2;
      }
      else if ( (unsigned __int8)v27 < 0xF0u )
      {
        v26 = v25 + 3;
      }
      else
      {
        v26 = v25 + 4;
      }
      v23 += v26 - v25;
      v25 = v26;
      if ( !--v24 )
        goto LABEL_75;
    }
    goto LABEL_78;
  }
  v26 = (char *)(a1 + v9);
LABEL_75:
  if ( v26 == v22 )
  {
LABEL_78:
    v28 = 1;
    if ( v8 )
      goto LABEL_83;
LABEL_79:
    if ( a2 <= v9 )
    {
      if ( a2 == v9 )
        goto LABEL_83;
    }
    else if ( *(char *)(a1 + v9) > -65 )
    {
      goto LABEL_83;
    }
    core::str::slice_error_fail(a1, a2, v9, a2, &off_192C30);
  }
  v28 = 0;
  if ( !v8 )
    goto LABEL_79;
LABEL_83:
  if ( v28 )
    v23 = a2 - v9;
  return 3LL * (v9 + v23 >= a2);
}
