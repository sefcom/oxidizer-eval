        size_t a5)
{
  size_t v5; // rbp
  size_t v8; // r14
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  size_t v12; // r12
  __int64 v13; // rax
  size_t v14; // rdx
  __int64 v15; // rax
  _BOOL8 v16; // rbx
  size_t v17; // rcx
  __int64 v18; // rax
  size_t v19; // rdx
  signed __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  void *v23; // r15
  __int64 result; // rax
  bool v25; // sf
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // r12
  __int64 v31; // rax
  void *v32; // r14
  unsigned __int64 v33; // kr00_8
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rax
  void *v37; // r13
  __int64 v38; // [rsp+10h] [rbp-118h]
  _BOOL8 v39; // [rsp+18h] [rbp-110h]
  void *v42; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-F0h]
  _QWORD *v44; // [rsp+40h] [rbp-E8h]
  __int64 v45; // [rsp+48h] [rbp-E0h]
  __int64 v46; // [rsp+50h] [rbp-D8h]
  _QWORD v47[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-B8h]
  __int64 v49; // [rsp+78h] [rbp-B0h]
  _QWORD v50[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v51[3]; // [rsp+90h] [rbp-98h] BYREF
  char v52; // [rsp+A8h] [rbp-80h]
  _QWORD v53[4]; // [rsp+B0h] [rbp-78h] BYREF
  __int16 v54; // [rsp+D0h] [rbp-58h]
  char v55; // [rsp+D2h] [rbp-56h]
  _QWORD v56[9]; // [rsp+E0h] [rbp-48h] BYREF

  v54 = 257;
  v55 = 0;
  v53[0] = 0LL;
  v53[2] = 0LL;
  v8 = 0LL;
  do
  {
    v9 = &a4[v8];
    if ( a5 - v8 > 0xF )
    {
      v11 = core::slice::memchr::memchr_aligned(99LL, v9, a5 - v8);
      if ( v11 != 1 )
        goto LABEL_64;
    }
    else
    {
      if ( a5 == v8 )
      {
LABEL_13:
        v38 = 0LL;
        goto LABEL_14;
      }
      v10 = 0LL;
      while ( v9[v10] != 99 )
      {
        if ( a5 - v8 == ++v10 )
          goto LABEL_13;
      }
    }
    v5 = v8 + v10;
    if ( v8 + v10 < a5 && a4[v5] == 99 )
    {
      v11 = 1LL;
      goto LABEL_64;
    }
    v8 += v10 + 1;
  }
  while ( v8 <= a5 );
  v11 = 0LL;
LABEL_64:
  v38 = v11;
LABEL_14:
  v12 = a5;
  do
  {
    v13 = core::slice::memchr::memrchr(119LL, a4, v12);
    if ( v13 != 1 )
    {
      v39 = v13 != 0;
      goto LABEL_23;
    }
    v12 = v14;
    if ( v14 < a5 && a4[v14] == 119 )
    {
      v15 = 1LL;
      goto LABEL_22;
    }
  }
  while ( v14 <= a5 );
  v15 = 0LL;
LABEL_22:
  v39 = v15;
LABEL_23:
  v16 = 0LL;
  v17 = a5;
  while ( 1 )
  {
    v18 = core::slice::memchr::memrchr(98LL, a4, v17);
    if ( v18 != 1 )
    {
      v16 = v18 != 0;
      if ( v38 )
        goto LABEL_30;
LABEL_36:
      if ( v39 )
      {
        if ( v16 )
        {
LABEL_38:
          v20 = a3;
          if ( a3 )
          {
            if ( a3 < 0 )
              goto LABEL_100;
            v21 = 1LL;
            v22 = _rust_alloc(a3, 1LL);
            if ( !v22 )
              goto LABEL_101;
            v23 = (void *)v22;
          }
          else
          {
            v23 = &dword_0 + 1;
          }
          memcpy(v23, a2, a3);
          result = (__int64)a1;
          *a1 = 7LL;
LABEL_44:
          *(_QWORD *)(result + 8) = v20;
          *(_QWORD *)(result + 16) = v23;
          *(_QWORD *)(result + 24) = v20;
          return result;
        }
        if ( v12 )
        {
          if ( v12 >= a5 )
          {
            if ( v12 != a5 )
LABEL_53:
              core::str::slice_error_fail(a4, a5, 0LL, v12, &off_115B10);
          }
          else if ( (char)a4[v12] <= -65 )
          {
            goto LABEL_53;
          }
        }
        core::num::<impl core::str::traits::FromStr for u64>::from_str(&v42, a4, v12);
        if ( (_BYTE)v42 )
        {
          v25 = (a5 & 0x8000000000000000LL) != 0LL;
          if ( !a5 )
            goto LABEL_77;
LABEL_74:
          if ( !v25 )
            goto LABEL_75;
          goto LABEL_69;
        }
        v26 = v43;
        v27 = 2LL;
LABEL_83:
        v33 = v26;
        result = v27 * v26;
        if ( is_mul_ok(v27, v33) )
        {
          a1[1] = result;
          *a1 = 14LL;
          return result;
        }
        v20 = a3;
        if ( !a3 )
        {
          v23 = &dword_0 + 1;
          goto LABEL_91;
        }
        if ( a3 >= 0 )
        {
          v21 = 1LL;
          v34 = _rust_alloc(a3, 1LL);
          if ( v34 )
          {
            v23 = (void *)v34;
LABEL_91:
            memcpy(v23, a2, a3);
            result = (__int64)a1;
            *a1 = 8LL;
            goto LABEL_44;
          }
LABEL_101:
          alloc::raw_vec::handle_error(v21, v20);
        }
LABEL_100:
        v21 = 0LL;
        goto LABEL_101;
      }
      if ( v16 )
      {
        if ( v17 )
        {
          if ( v17 >= a5 )
          {
            if ( v17 != a5 )
LABEL_49:
              core::str::slice_error_fail(a4, a5, 0LL, v17, &off_115B10);
          }
          else if ( (char)a4[v17] <= -65 )
          {
            goto LABEL_49;
          }
        }
        core::num::<impl core::str::traits::FromStr for u64>::from_str(&v42, a4, v17);
        if ( (_BYTE)v42 )
        {
          if ( !a5 )
            goto LABEL_77;
          if ( (a5 & 0x8000000000000000LL) == 0LL )
          {
LABEL_75:
            v30 = 1LL;
            v31 = _rust_alloc(a5, 1LL);
            if ( v31 )
            {
              v32 = (void *)v31;
              goto LABEL_78;
            }
LABEL_102:
            alloc::raw_vec::handle_error(v30, a5);
          }
LABEL_69:
          v30 = 0LL;
          goto LABEL_102;
        }
        v26 = v43;
        v27 = 512LL;
        goto LABEL_83;
      }
      uucore::parser::parse_size::Parser::parse(v47, v53, a4, a5);
      if ( v47[0] == 3LL )
      {
        if ( !v49 )
        {
          v26 = v48;
          goto LABEL_60;
        }
        v51[0] = 0LL;
        v51[1] = a4;
        v51[2] = a5;
        v52 = 1;
        v50[0] = v51;
        v50[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v42 = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
        v43 = 2LL;
        v46 = 0LL;
        v44 = v50;
        v45 = 1LL;
        alloc::fmt::format::format_inner(v56, &v42);
        v28 = v56[0];
        v29 = v56[1];
        goto LABEL_81;
      }
      v28 = v47[1];
      v29 = v48;
      if ( LODWORD(v47[0]) == 2 )
      {
LABEL_81:
        v26 = -1LL;
        v27 = 1LL;
        if ( v28 )
        {
          _rust_dealloc(v29, v28, 1LL);
          v26 = -1LL;
        }
        goto LABEL_83;
      }
      if ( a3 )
      {
        if ( a3 < 0 )
        {
          v35 = 0LL;
        }
        else
        {
          v35 = 1LL;
          v36 = _rust_alloc(a3, 1LL);
          if ( v36 )
          {
            v37 = (void *)v36;
            goto LABEL_98;
          }
        }
        alloc::raw_vec::handle_error(v35, a3);
      }
      v37 = &dword_0 + 1;
LABEL_98:
      memcpy(v37, a2, a3);
      result = (__int64)a1;
      *a1 = 13LL;
      a1[1] = a3;
      a1[2] = v37;
      a1[3] = a3;
      if ( v28 )
        return _rust_dealloc(v29, v28, 1LL);
      return result;
    }
    v17 = v19;
    if ( v19 < a5 && a4[v19] == 98 )
      break;
    if ( v19 > a5 )
      goto LABEL_29;
  }
  v16 = 1LL;
LABEL_29:
  if ( !v38 )
    goto LABEL_36;
LABEL_30:
  if ( v39 || v16 )
    goto LABEL_38;
  if ( v5 )
  {
    if ( v5 >= a5 )
    {
      if ( v5 != a5 )
LABEL_34:
        core::str::slice_error_fail(a4, a5, 0LL, v5, &off_115B10);
    }
    else if ( (char)a4[v5] <= -65 )
    {
      goto LABEL_34;
    }
  }
  core::num::<impl core::str::traits::FromStr for u64>::from_str(&v42, a4, v5);
  if ( !(_BYTE)v42 )
  {
    v26 = v43;
LABEL_60:
    v27 = 1LL;
    goto LABEL_83;
  }
  v25 = (a5 & 0x8000000000000000LL) != 0LL;
  if ( a5 )
    goto LABEL_74;
LABEL_77:
  v32 = &dword_0 + 1;
LABEL_78:
  memcpy(v32, a4, a5);
  result = (__int64)a1;
  *a1 = 7LL;
  a1[1] = a5;
  a1[2] = v32;
  a1[3] = a5;
  return result;
}
