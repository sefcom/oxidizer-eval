__int64 __fastcall uu_env::apply_unset_env_vars(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  char **v17; // [rsp+0h] [rbp-D8h]
  _QWORD v18[2]; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-98h]
  __int64 v22; // [rsp+48h] [rbp-90h]
  __int64 v23; // [rsp+50h] [rbp-88h]
  _QWORD v24[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+70h] [rbp-68h] BYREF
  char v26; // [rsp+88h] [rbp-50h]
  __int128 v27; // [rsp+90h] [rbp-48h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 32) + 16LL * *(_QWORD *)(a1 + 40);
  v18[0] = *(_QWORD *)(a1 + 32);
  v18[1] = v1;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18);
  if ( !v2 )
    return 0LL;
  v7 = (__int64 *)v2;
  v17 = &off_148BC8;
  while ( 1 )
  {
    v8 = *v7;
    v9 = v7[1];
    v19[0] = 0x8000000000000000LL;
    v19[1] = v8;
    v19[2] = v9;
    if ( !v9 )
      break;
    LOBYTE(v10) = uu_env::native_int_str::NativeStr::contains((__int64)v19, (unsigned int *)&byte_17568);
    if ( (_BYTE)v10 )
    {
      v10 = (unsigned __int8)v10;
      goto LABEL_10;
    }
    LOBYTE(v10) = uu_env::native_int_str::NativeStr::contains((__int64)v19, (unsigned int *)&unk_17620);
    if ( (_BYTE)v10 )
    {
      v10 = (unsigned __int8)v10;
      v4 = &off_148BE0;
      v17 = &off_148BE0;
LABEL_10:
      if ( v10 == 2 )
        core::option::unwrap_failed(v17);
      break;
    }
    std::env::remove_var(v7);
    core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(v19);
    v7 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v18);
    if ( !v7 )
      return 0LL;
  }
  v25[0] = 1LL;
  v25[1] = v8;
  v25[2] = v9;
  v26 = 1;
  v24[0] = v25;
  v24[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v20 = &off_148BA8;
  *((_QWORD *)&v20 + 1) = 2LL;
  v23 = 0LL;
  v21 = v24;
  v22 = 1LL;
  core::option::Option<T>::map_or_else(&v27, &v20, v3, v4, v5, v6);
  LODWORD(v22) = 125;
  v20 = v27;
  v21 = v28;
  v16 = alloc::boxed::Box<T>::new(&v20, &v20, v12, v13, v14, v15);
  core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(v19);
  return v16;
}
