        signed __int64 a5)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v8; // r15
  char v9; // r9
  char v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned __int8 *v13; // rax
  unsigned __int64 v14; // rcx
  char v15; // r15
  signed __int64 *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  void *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-68h]
  unsigned __int8 *v22; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int8 *v23; // [rsp+10h] [rbp-58h]
  signed __int64 *v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]

  v6 = a4;
  if ( !a2 )
  {
    if ( a5 )
    {
      if ( a5 < 0 )
      {
        v17 = 0LL;
      }
      else
      {
        v16 = a1;
        v17 = 1LL;
        v18 = _rust_alloc(a5, 1LL);
        if ( v18 )
        {
          v19 = (void *)v18;
LABEL_25:
          memcpy(v19, v6, a5);
          *v16 = a5;
          v16[1] = (signed __int64)v19;
          v16[2] = a5;
          return;
        }
      }
      alloc::raw_vec::handle_error(v17, a5);
    }
    v16 = a1;
    v19 = &dword_0 + 1;
    goto LABEL_25;
  }
  v8 = &a4[a5];
  v22 = a4;
  v23 = &a4[a5];
  if ( a3 )
  {
    v9 = 1;
    v10 = 0;
    v11 = 0x100003600LL;
    v12 = 0LL;
    while ( 1 )
    {
      if ( v6 == v8 )
      {
LABEL_19:
        *a1 = 0LL;
        a1[1] = 1LL;
        a1[2] = 0LL;
        v20 = v21;
        if ( (v10 & 1) == 0 )
          return;
        goto LABEL_20;
      }
      ++v12;
      v13 = v6;
      while ( 1 )
      {
        v14 = *v13;
        if ( v14 > 0x20 || !_bittest64(&v11, v14) )
          break;
        if ( ++v13 == v8 )
        {
          v22 = v8;
          goto LABEL_19;
        }
      }
      v15 = v9;
      v24 = a1;
      v22 = v13 + 1;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v25, &v22, 0LL);
      if ( !((v21 == 0) | v15 & 1) )
        _rust_dealloc(v6, v21, 1LL);
      v21 = v25;
      v6 = v26;
      a1 = v24;
      if ( !v27 )
        break;
      v8 = &v26[v27];
      v22 = v26;
      v23 = &v26[v27];
      v10 = 1;
      v9 = 0;
      if ( v12 == a3 )
        goto LABEL_22;
    }
    *v24 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
    v20 = v21;
    if ( v21 )
      goto LABEL_21;
  }
  else
  {
LABEL_22:
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v6, v8);
    v20 = v21;
    if ( a3 )
    {
LABEL_20:
      if ( v20 )
LABEL_21:
        _rust_dealloc(v6, v20, 1LL);
    }
  }
}
