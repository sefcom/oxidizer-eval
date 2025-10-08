__int64 __fastcall uu_fold::fold(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // r15
  __int64 (__fastcall **v11)(); // rdx
  __int64 *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 (__fastcall **v18)(); // rdx
  __int64 *v19; // rsi
  int v21; // [rsp+Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+10h] [rbp-A8h]
  __int64 v23; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  __int64 v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  _BYTE v28[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v29[104]; // [rsp+50h] [rbp-68h] BYREF

  v27 = a5;
  if ( !a2 )
    return 0LL;
  v5 = a1;
  v26 = a1;
  if ( a3 )
  {
    v22 = 24 * a2;
    v6 = a4;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + v7 + 8);
      v9 = *(_QWORD *)(v5 + v7 + 16);
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, asc_19422, 1LL);
      if ( v10 )
      {
        v23 = std::io::stdio::stdin();
        v11 = (__int64 (__fastcall **)())&unk_E6B38;
        v12 = &v23;
      }
      else
      {
        std::fs::File::open(v28, v8, v9);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v24,
          v28,
          v8,
          v9);
        v13 = v24;
        if ( v24 )
          return v13;
        v21 = v25;
        v11 = &off_E6AE0;
        v12 = (__int64 *)&v21;
        v5 = v26;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v29, v12, v11);
      v13 = uu_fold::fold_file_bytewise(v29, v6, v27);
      if ( v13 )
        break;
      if ( !v10 )
        core::ptr::drop_in_place<std::fs::File>(&v21);
      v7 += 24LL;
      if ( v22 == v7 )
        return 0LL;
    }
  }
  else
  {
    v14 = 24 * a2;
    LODWORD(v22) = a4;
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v5 + v15 + 8);
      v17 = *(_QWORD *)(v5 + v15 + 16);
      v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, asc_19422, 1LL);
      if ( v10 )
      {
        v23 = std::io::stdio::stdin();
        v18 = (__int64 (__fastcall **)())&unk_E6B38;
        v19 = &v23;
      }
      else
      {
        std::fs::File::open(v28, v16, v17);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v24,
          v28,
          v16,
          v17);
        v13 = v24;
        if ( v24 )
          return v13;
        v21 = v25;
        v18 = &off_E6AE0;
        v19 = (__int64 *)&v21;
        v5 = v26;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v29, v19, v18);
      v13 = uu_fold::fold_file(v29, (unsigned int)v22, v27);
      if ( v13 )
        break;
      if ( !v10 )
        core::ptr::drop_in_place<std::fs::File>(&v21);
      v15 += 24LL;
      if ( v14 == v15 )
        return 0LL;
    }
  }
  if ( !v10 )
    core::ptr::drop_in_place<std::fs::File>(&v21);
  return v13;
}