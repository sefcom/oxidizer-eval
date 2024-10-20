        __int64 a5)
{
  char v5; // r15
  _QWORD *v9; // r12
  char v10; // r13
  __int64 i; // rax
  __int64 *v12; // r13
  __int64 v13; // rax
  char *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  size_t v17; // rsi
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  size_t v23; // r12
  const void *v24; // rsi
  _QWORD *v25; // r14
  __int64 v26; // r15
  void *v27; // r13
  char src; // [rsp+0h] [rbp-38h]

  v5 = a4;
  v9 = *(_QWORD **)a5;
  v10 = *(_BYTE *)(a5 + 8);
  if ( a4 )
  {
    i = uu_fmt::linebreak::write_newline(*(void **)a2, *(_QWORD *)(a2 + 8));
    if ( i )
      goto LABEL_26;
  }
  src = v10;
  v12 = *(__int64 **)(a2 + 32);
  v13 = *v12;
  if ( *v12 == v12[1] )
    goto LABEL_37;
  *v12 = v13 + 64;
  if ( !v13 )
    goto LABEL_37;
  v14 = *(char **)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 24);
  if ( v5 )
  {
    v16 = *(_QWORD *)(v13 + 32);
    if ( v16 )
    {
      if ( v15 <= v16 )
      {
        if ( v15 != v16 )
          goto LABEL_43;
      }
      else if ( v14[v16] < -64 )
      {
LABEL_43:
        core::str::slice_error_fail(v14, *(_QWORD *)(v13 + 24), v16, v15, &off_114390);
      }
    }
    v17 = v15 - v16;
    if ( v15 < v16 )
      goto LABEL_41;
    if ( !v14 )
    {
      v14 = 0LL;
      goto LABEL_43;
    }
    v14 += v16;
  }
  else
  {
    v17 = *(_QWORD *)(v13 + 24);
  }
  a3 = *(_BYTE *)(v13 + 57) & 1;
  if ( (_QWORD *)v13 == v9 )
  {
LABEL_22:
    if ( (src & 1) == 0 )
    {
      i = uu_fmt::linebreak::write_with_spaces(v14, v17);
      if ( !i )
      {
        v5 = 1;
LABEL_37:
        *(_BYTE *)(a1 + 1) = a3;
        *(_BYTE *)(a1 + 2) = v5;
        v19 = 0;
        goto LABEL_38;
      }
      goto LABEL_26;
    }
    i = uu_fmt::linebreak::write_newline(*(void **)a2, *(_QWORD *)(a2 + 8));
    if ( i )
      goto LABEL_26;
    v20 = v9[2];
    v21 = v9[3];
    v22 = v9[4];
    if ( v22 )
    {
      if ( v21 <= v22 )
      {
        if ( v21 != v22 )
          goto LABEL_44;
      }
      else if ( *(char *)(v20 + v22) < -64 )
      {
        goto LABEL_44;
      }
    }
    v23 = v21 - v22;
    if ( v21 >= v22 )
    {
      if ( v20 )
      {
        v24 = (const void *)(v22 + v20);
        v25 = *(_QWORD **)(a2 + 24);
        v26 = v25[2];
        if ( *v25 - v26 <= v23 )
        {
          i = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v25, v24, v21 - v22);
          if ( i )
            goto LABEL_26;
        }
        else
        {
          v27 = (void *)(v26 + v25[1]);
          core::intrinsics::copy_nonoverlapping::precondition_check(v24, v27, 1LL, 1LL, v23);
          memcpy(v27, v24, v23);
          v25[2] = v23 + v26;
        }
LABEL_36:
        v5 = 0;
        goto LABEL_37;
      }
LABEL_44:
      core::str::slice_error_fail(v20, v21, v22, v21, &off_1141B0);
    }
LABEL_41:
    core::panicking::panic_nounwind(anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496, 102LL);
  }
  for ( i = uu_fmt::linebreak::write_with_spaces(v14, v17); !i; i = uu_fmt::linebreak::write_with_spaces(v14, v17) )
  {
    v18 = *v12;
    if ( *v12 == v12[1] )
      goto LABEL_36;
    *v12 = v18 + 64;
    if ( !v18 )
      goto LABEL_36;
    v14 = *(char **)(v18 + 16);
    v17 = *(_QWORD *)(v18 + 24);
    a3 = *(_BYTE *)(v18 + 57) & 1;
    if ( (_QWORD *)v18 == v9 )
      goto LABEL_22;
  }
LABEL_26:
  *(_QWORD *)(a1 + 8) = i;
  v19 = 1;
LABEL_38:
  *(_BYTE *)a1 = v19;
  return a1;
}
