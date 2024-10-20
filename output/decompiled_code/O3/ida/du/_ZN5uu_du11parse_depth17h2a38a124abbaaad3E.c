__int64 *__fastcall uu_du::parse_depth(__int64 *a1, const void *a2, signed __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  void *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  char v15[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]

  if ( a2 )
  {
    core::num::<impl core::str::traits::FromStr for usize>::from_str(v15);
    if ( v15[0] )
    {
      if ( !a4 )
      {
        if ( !a3 )
        {
          v9 = &dword_0 + 1;
          goto LABEL_20;
        }
        if ( a3 >= 0 )
        {
          v7 = 1LL;
          v8 = _rust_alloc(a3, 1LL);
          if ( v8 )
          {
            v9 = (void *)v8;
LABEL_20:
            memcpy(v9, a2, a3);
            v13 = (_QWORD *)_rust_alloc(32LL, 8LL);
            if ( !v13 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
            *v13 = 0LL;
LABEL_22:
            v13[1] = a3;
            v13[2] = v9;
            v13[3] = a3;
            a1[1] = (__int64)v13;
            a1[2] = (__int64)&off_1349C0;
            v12 = 1LL;
            goto LABEL_23;
          }
LABEL_25:
          alloc::raw_vec::handle_error(v7, a3);
        }
LABEL_24:
        v7 = 0LL;
        goto LABEL_25;
      }
LABEL_10:
      if ( a3 )
      {
        if ( a3 < 0 )
          goto LABEL_24;
        v7 = 1LL;
        v11 = _rust_alloc(a3, 1LL);
        if ( !v11 )
          goto LABEL_25;
        v9 = (void *)v11;
      }
      else
      {
        v9 = &dword_0 + 1;
      }
      memcpy(v9, a2, a3);
      v13 = (_QWORD *)_rust_alloc(32LL, 8LL);
      if ( !v13 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      *v13 = 1LL;
      goto LABEL_22;
    }
    if ( a4 )
      goto LABEL_10;
    v4 = v16;
    v10 = 1LL;
  }
  else
  {
    v10 = 0LL;
  }
  a1[1] = v10;
  a1[2] = v4;
  v12 = 0LL;
LABEL_23:
  *a1 = v12;
  return a1;
}
