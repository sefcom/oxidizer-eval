        __int64 a5)
{
  void *v5; // rbp
  __int64 v6; // r12
  void *v7; // r15
  __int64 v9; // r11
  __int64 v10; // rax
  int v11; // ecx
  char v12; // r8
  char v13; // r9
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rax
  char i; // r13
  signed __int64 v18; // r14
  void *v19; // r12
  char *v20; // rbp
  size_t v21; // rbx
  char *v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 n; // [rsp+8h] [rbp-E0h]
  __int64 v30; // [rsp+18h] [rbp-D0h]
  __int64 v31; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+30h] [rbp-B8h]
  __int64 v33; // [rsp+38h] [rbp-B0h]
  char v34[8]; // [rsp+40h] [rbp-A8h] BYREF
  void *v35; // [rsp+48h] [rbp-A0h]
  __int64 v36; // [rsp+50h] [rbp-98h]
  void *v37; // [rsp+68h] [rbp-80h]
  __int64 v38; // [rsp+70h] [rbp-78h]
  __int64 v39; // [rsp+78h] [rbp-70h] BYREF
  void *s1; // [rsp+80h] [rbp-68h]
  size_t v41; // [rsp+88h] [rbp-60h]

  v9 = a2 + a3;
  while ( v9 != a2 )
  {
    v10 = v9;
    v11 = *(unsigned __int8 *)(v9 - 1);
    if ( (v11 & 0x80u) == 0 )
    {
      --v9;
      if ( v11 != 47 )
        goto LABEL_12;
    }
    else
    {
      v12 = *(_BYTE *)(v9 - 2);
      if ( v12 >= -64 )
      {
        v9 -= 2LL;
        v15 = v12 & 0x1F;
      }
      else
      {
        v13 = *(_BYTE *)(v9 - 3);
        if ( v13 >= -64 )
        {
          v9 -= 3LL;
          v14 = v13 & 0xF;
        }
        else
        {
          v9 -= 4LL;
          v14 = ((*(_BYTE *)(v10 - 4) & 7) << 6) | v13 & 0x3F;
        }
        v15 = (v14 << 6) | v12 & 0x3F;
      }
      if ( ((v15 << 6) | v11 & 0x3F) != 0x2F )
      {
LABEL_12:
        v16 = v10 - a2;
        if ( v16 )
          goto LABEL_14;
        break;
      }
    }
  }
  v16 = a3;
LABEL_14:
  std::sys::os_str::bytes::Slice::to_owned(&v31, a2, v16);
  v30 = v32;
  std::path::Path::components(&v39, v32, v33);
  n = a5;
  for ( i = 10; ; i = v34[0] )
  {
    <std::path::Components as core::iter::traits::iterator::Iterator>::next(v34, &v39);
    if ( v34[0] == 10 )
      break;
    v5 = v35;
    v6 = v36;
    v7 = v37;
    a5 = v38;
  }
  v18 = 0LL;
  if ( i == 10 )
  {
    v19 = &dword_0 + 1;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(i - 6) < 4u )
    v18 = (unsigned __int8)(i - 5);
  switch ( (char)v18 )
  {
    case 0:
      break;
    case 1:
      v7 = &unk_185E8;
      a5 = (unsigned __int8)v18;
      break;
    case 2:
      v7 = &unk_185E9;
      a5 = 1LL;
      break;
    case 3:
      v7 = &unk_185EA;
      a5 = 2LL;
      break;
    case 4:
      a5 = v6;
      v7 = v5;
      break;
  }
  std::sys::os_str::bytes::Slice::to_str(&v39, v7, a5);
  if ( v39 )
    core::option::unwrap_failed(&off_DBA30);
  v20 = (char *)s1;
  v21 = v41;
  if ( v41 != n || bcmp(s1, a4, n) )
  {
    v18 = v21 - n;
    if ( v21 >= n )
    {
      v23 = bcmp(a4, &v20[v18], n);
      v22 = 0LL;
      if ( !v23 )
        v22 = v20;
    }
    else
    {
      v22 = 0LL;
    }
    if ( v22 )
      v20 = v22;
    else
      v18 = v21;
    if ( !v18 )
    {
      v19 = &dword_0 + 1;
      goto LABEL_41;
    }
    if ( v18 >= 0 )
    {
      v24 = 1LL;
      v25 = _rust_alloc(v18, 1LL);
      if ( v25 )
      {
        v19 = (void *)v25;
LABEL_41:
        memcpy(v19, v20, v18);
        goto LABEL_42;
      }
LABEL_53:
      alloc::raw_vec::handle_error(v24, v18);
    }
LABEL_52:
    v24 = 0LL;
    goto LABEL_53;
  }
  if ( n )
  {
    if ( n < 0 )
      goto LABEL_52;
    v24 = 1LL;
    v27 = _rust_alloc(n, 1LL);
    if ( !v27 )
    {
      v18 = n;
      goto LABEL_53;
    }
    v19 = (void *)v27;
  }
  else
  {
    v19 = &dword_0 + 1;
  }
  memcpy(v19, v20, n);
  v18 = n;
LABEL_42:
  *a1 = v18;
  a1[1] = (signed __int64)v19;
  a1[2] = v18;
  if ( v31 )
    _rust_dealloc(v30, v31, 1LL);
  return a1;
}
