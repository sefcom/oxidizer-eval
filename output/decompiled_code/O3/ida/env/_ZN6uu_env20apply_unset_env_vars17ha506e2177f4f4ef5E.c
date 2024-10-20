__int64 __fastcall uu_env::apply_unset_env_vars(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // r14
  _QWORD *v3; // r13
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v15[3]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-80h] BYREF
  char v17; // [rsp+40h] [rbp-68h]
  _QWORD v18[12]; // [rsp+48h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD **)(a1 + 32);
  v3 = &v2[2 * v1];
  v4 = 0LL;
  while ( 1 )
  {
    v5 = *v2;
    v6 = v2[1];
    if ( !v6 )
      break;
    if ( v6 <= 0xF )
    {
      v7 = 0LL;
      while ( *(_BYTE *)(v5 + v7) )
      {
        if ( v6 == ++v7 )
        {
          v8 = 0LL;
          while ( *(_BYTE *)(v5 + v8) != 61 )
          {
            if ( v6 == ++v8 )
              goto LABEL_14;
          }
          goto LABEL_16;
        }
      }
      break;
    }
    if ( core::slice::memchr::memchr_aligned(0LL, *v2, v2[1]) == 1
      || core::slice::memchr::memchr_aligned(61LL, v5, v6) == 1 )
    {
      break;
    }
LABEL_14:
    std::env::remove_var(v2);
    v2 += 2;
    if ( v2 == v3 )
      return v4;
  }
LABEL_16:
  v16[0] = 1LL;
  v16[1] = v5;
  v16[2] = v6;
  v17 = 1;
  v14[0] = v16;
  v14[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v18[0] = &off_10C860;
  v18[1] = 2LL;
  v18[4] = 0LL;
  v18[2] = v14;
  v18[3] = 1LL;
  alloc::fmt::format::format_inner(v15, v18);
  v9 = v15[0];
  v10 = v15[1];
  v11 = v15[2];
  v12 = _rust_alloc(32LL, 8LL);
  if ( !v12 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v4 = v12;
  *(_QWORD *)v12 = v9;
  *(_QWORD *)(v12 + 8) = v10;
  *(_QWORD *)(v12 + 16) = v11;
  *(_DWORD *)(v12 + 24) = 125;
  return v4;
}
