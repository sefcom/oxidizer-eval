__int64 __fastcall uu_env::apply_unset_env_vars(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  char v11; // al
  char v12; // al
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r15
  char **v17; // rdi
  __int128 v18; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v19; // [rsp+10h] [rbp-B8h]
  __int64 v20; // [rsp+18h] [rbp-B0h]
  __int64 v21; // [rsp+20h] [rbp-A8h]
  _QWORD v22[2]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-68h] BYREF
  char v25; // [rsp+78h] [rbp-50h]
  __int128 v26; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v27; // [rsp+90h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 )
    return 0LL;
  v7 = *(__int64 **)(a1 + 32);
  v8 = 16 * v6;
  while ( 1 )
  {
    v9 = *v7;
    v10 = v7[1];
    v23[0] = 0x8000000000000000LL;
    v23[1] = v9;
    v23[2] = v10;
    if ( !v10 )
      break;
    v11 = uu_env::native_int_str::NativeStr::contains((__int64)v23, (unsigned int *)&unk_1C740);
    if ( v11 == 2 )
    {
      v17 = &off_110C58;
      goto LABEL_14;
    }
    if ( (v11 & 1) != 0 )
      break;
    v12 = uu_env::native_int_str::NativeStr::contains((__int64)v23, (unsigned int *)&unk_1C7FC);
    if ( v12 == 2 )
    {
      v17 = &off_110C70;
LABEL_14:
      core::option::unwrap_failed(v17);
    }
    if ( (v12 & 1) != 0 )
      break;
    std::env::remove_var(v7);
    v7 += 2;
    core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(0x8000000000000000LL, v9);
    v8 -= 16LL;
    if ( !v8 )
      return 0LL;
  }
  v14 = *v7;
  v15 = v7[1];
  v24[0] = 1LL;
  v24[1] = v14;
  v24[2] = v15;
  v25 = 1;
  v22[0] = v24;
  v22[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *((_QWORD *)&v18 + 1) = 2LL;
  v21 = 0LL;
  v19 = v22;
  v20 = 1LL;
  core::option::Option<T>::map_or_else(&v26, &v18, a3, v15, a5, a6, &off_110C38);
  LODWORD(v20) = 125;
  v18 = v26;
  v19 = v27;
  v16 = alloc::boxed::Box<T>::new(&v18);
  core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(0x8000000000000000LL, v9);
  return v16;
}