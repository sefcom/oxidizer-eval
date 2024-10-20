_OWORD *__fastcall uu_env::apply_ignore_signal(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // r15
  _OWORD *v4; // rbx
  __int64 v5; // rbp
  int v6; // r14d
  _OWORD *v7; // rax
  __int128 v8; // xmm0
  int *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  int v15; // [rsp+4h] [rbp-B4h] BYREF
  __int128 v16; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+18h] [rbp-A0h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  _QWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v20; // [rsp+48h] [rbp-70h] BYREF
  __int128 v21; // [rsp+58h] [rbp-60h]
  _QWORD v22[10]; // [rsp+68h] [rbp-50h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = 8 * v1;
  v4 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v2 + v5);
    if ( (unsigned int)(v6 - 1) >= 0x1F )
      break;
    if ( signal(v6, (__sighandler_t)((char *)&dword_0 + 1)) == (__sighandler_t)-1LL )
    {
      v9 = _errno_location();
      v10 = nix::errno::consts::from_i32((unsigned int)*v9);
      v15 = v6;
      v19[0] = nix::errno::desc(v10);
      v19[1] = v11;
      v22[0] = &v15;
      v22[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v22[2] = v19;
      v22[3] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v16 = &off_10C8E0;
      *((_QWORD *)&v16 + 1) = 2LL;
      v18 = 0LL;
      *(_QWORD *)&v17 = v22;
      *((_QWORD *)&v17 + 1) = 2LL;
      alloc::fmt::format::format_inner(&v20, &v16);
      DWORD2(v21) = 125;
      v12 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v12 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v4 = v12;
      v13 = v20;
      v12[1] = v21;
      *v12 = v13;
      return v4;
    }
    v5 += 8LL;
    if ( v3 == v5 )
      return v4;
  }
  *(_QWORD *)&v16 = 0x8000000000000000LL;
  *((_QWORD *)&v17 + 1) = 0x1600000002LL;
  v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v7 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v4 = v7;
  v8 = v16;
  v7[1] = v17;
  *v7 = v8;
  return v4;
}
