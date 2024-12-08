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
  __int64 v18; // [rsp+0h] [rbp-D8h]
  __int64 v19; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-B8h]
  __int64 v23; // [rsp+28h] [rbp-B0h]
  __int128 v24; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-90h]
  __int64 v27; // [rsp+50h] [rbp-88h]
  _QWORD v28[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v29[3]; // [rsp+70h] [rbp-68h] BYREF
  char v30; // [rsp+88h] [rbp-50h]
  __int128 v31; // [rsp+90h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+A0h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 32) + 16LL * *(_QWORD *)(a1 + 40);
  v19 = *(_QWORD *)(a1 + 32);
  v20 = v1;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v19);
  if ( !v2 )
    return 0LL;
  v7 = (__int64 *)v2;
  v17 = &off_149368;
  while ( 1 )
  {
    v8 = *v7;
    v9 = v7[1];
    v21 = 0x8000000000000000LL;
    v22 = v8;
    v23 = v9;
    if ( !v9 )
      break;
    LOBYTE(v10) = uu_env::native_int_str::NativeStr::contains(&v21, &byte_1778C);
    if ( (_BYTE)v10 )
    {
      v10 = (unsigned __int8)v10;
      goto LABEL_10;
    }
    LOBYTE(v10) = uu_env::native_int_str::NativeStr::contains(&v21, &unk_17844);
    if ( (_BYTE)v10 )
    {
      v10 = (unsigned __int8)v10;
      v4 = &off_149380;
      v17 = &off_149380;
LABEL_10:
      if ( v10 == 2 )
        core::option::unwrap_failed(v17);
      break;
    }
    std::env::remove_var(v7);
    core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&v21);
    v7 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v19);
    if ( !v7 )
      return 0LL;
  }
  v29[0] = 1LL;
  v29[1] = v8;
  v29[2] = v9;
  v30 = 1;
  v28[0] = v29;
  v28[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v24 = &off_149398;
  *((_QWORD *)&v24 + 1) = 2LL;
  v27 = 0LL;
  v25 = v28;
  v26 = 1LL;
  core::option::Option<T>::map_or_else(&v31, &v24, v3, v4, v5, v6, v17, v19, v20, v21, v22);
  LODWORD(v26) = 125;
  v24 = v31;
  v25 = v32;
  v16 = alloc::boxed::Box<T>::new(&v24, &v24, v12, v13, v14, v15, v18, v19, v20, v21);
  core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&v21);
  return v16;
}
