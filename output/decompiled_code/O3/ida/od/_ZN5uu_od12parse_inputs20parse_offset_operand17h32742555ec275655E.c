        unsigned __int64 a5)
{
  unsigned __int64 v7; // rdx
  _WORD *v8; // rcx
  char v9; // di
  bool v10; // r10
  unsigned __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // r14
  const char *result; // rax
  __int64 v20; // rcx
  char **v21; // r8
  _BYTE v22[8]; // [rsp+8h] [rbp-20h] BYREF
  __int64 v23; // [rsp+10h] [rbp-18h]

  if ( !a3 )
  {
    v7 = 0LL;
LABEL_16:
    a5 = a3 - v7;
    v8 = &a2[v7];
    if ( a3 - v7 < 2 )
    {
      v9 = 0;
      goto LABEL_18;
    }
    if ( *v8 != 22576 )
    {
      v9 = 0;
LABEL_22:
      v11 = a5 - 1;
      goto LABEL_23;
    }
LABEL_26:
    v7 |= 2uLL;
    v13 = 16LL;
    v12 = 1LL;
    v14 = a3;
    goto LABEL_40;
  }
  if ( *a2 == 43 )
  {
    if ( a3 != 1 && (char)a2[1] < -64 )
    {
      v21 = &off_104A28;
      v7 = 1LL;
LABEL_57:
      core::str::slice_error_fail(a2, a3, v7, a3, v21);
    }
    v7 = 1LL;
    if ( a3 - 1 < 2 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0LL;
    if ( a3 < 2 )
      goto LABEL_10;
  }
  if ( *(_WORD *)&a2[v7] == 30768 )
    goto LABEL_26;
LABEL_10:
  if ( *a2 != 43 )
    goto LABEL_16;
  a5 = a3 - v7;
  if ( a3 <= v7 )
    goto LABEL_16;
  if ( (char)a2[v7] <= -65 )
  {
    v21 = &off_104A40;
    goto LABEL_57;
  }
  v8 = &a2[v7];
  v9 = 1;
  if ( a5 >= 2 )
  {
    v9 = 1;
    if ( *v8 == 22576 )
      goto LABEL_26;
    goto LABEL_22;
  }
LABEL_18:
  v10 = 0;
  if ( !a5 )
  {
    v12 = 1LL;
    goto LABEL_28;
  }
  v11 = 0LL;
LABEL_23:
  v10 = *((_BYTE *)v8 + v11) == 98;
  v12 = 1LL;
  if ( *((_BYTE *)v8 + v11) == 98 )
    v12 = 512LL;
LABEL_28:
  a5 = v10;
  v15 = a3 - v10;
  if ( v7 > v15 || v9 && *(char *)v8 <= -65 )
    goto LABEL_34;
  if ( !v15 )
    goto LABEL_36;
  if ( v15 >= a3 )
  {
    if ( !v10 )
      goto LABEL_36;
LABEL_34:
    core::str::slice_error_fail(a2, a3, v7, a3 - v10, &off_104A58);
  }
  if ( (char)a2[v15] <= -65 )
    goto LABEL_34;
LABEL_36:
  if ( v15 == v7 )
  {
    v13 = 8LL;
    v16 = 0LL;
  }
  else
  {
    v17 = *((_BYTE *)v8 + v15 + ~v7) == 46;
    v13 = (unsigned int)(2 * v17 + 8);
    v16 = -v17;
  }
  v14 = v15 + v16;
LABEL_40:
  if ( v14 < v7 )
    goto LABEL_49;
  if ( v7 )
  {
    if ( v7 >= a3 )
    {
      if ( v7 != a3 )
        goto LABEL_49;
    }
    else if ( (char)a2[v7] <= -65 )
    {
LABEL_49:
      core::str::slice_error_fail(a2, a3, v7, v14, &off_104A70);
    }
  }
  if ( v14 )
  {
    if ( v14 >= a3 )
    {
      if ( v14 != a3 )
        goto LABEL_49;
    }
    else if ( (char)a2[v14] <= -65 )
    {
      goto LABEL_49;
    }
  }
  core::num::<impl u64>::from_str_radix(v22, &a2[v7], v14 - v7, v13, a5);
  v18 = v23 * v12;
  result = 0LL;
  v20 = 12LL;
  if ( v22[0] )
    result = aParseFailed;
  else
    v20 = v18;
  a1[1] = (const char *)v20;
  *a1 = result;
  return result;
}
