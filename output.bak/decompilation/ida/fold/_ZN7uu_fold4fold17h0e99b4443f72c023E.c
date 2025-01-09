void *__fastcall uu_fold::fold(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  char v11; // r13
  __int64 (__fastcall **v12)(); // rcx
  __int64 *v13; // rdx
  void *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r12
  __int64 (__fastcall **v17)(); // rcx
  __int64 *v18; // rdx
  int v20; // [rsp+Ch] [rbp-ACh] BYREF
  __int64 v21; // [rsp+10h] [rbp-A8h] BYREF
  void *v22; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+20h] [rbp-98h]
  unsigned __int64 v24; // [rsp+28h] [rbp-90h]
  _QWORD v25[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v27[13]; // [rsp+50h] [rbp-68h] BYREF

  v25[0] = a1;
  v25[1] = a1 + 24 * a2;
  v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
  if ( !v8 )
    return 0LL;
  v24 = a5;
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD *)(v8 + 16);
      v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, asc_1D16B, 1LL);
      if ( v11 )
      {
        v21 = std::io::stdio::stdin();
        v12 = (__int64 (__fastcall **)())&unk_11A900;
        v13 = &v21;
      }
      else
      {
        std::fs::File::open(v26, v9, v10);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v22,
          v26,
          v9,
          v10);
        v14 = v22;
        if ( v22 )
          return v14;
        v20 = v23;
        v12 = &off_11A8A8;
        v13 = (__int64 *)&v20;
        a5 = v24;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v27, 0x2000LL, v13, v12);
      v14 = uu_fold::fold_file_bytewise(v27, a4, a5);
      if ( v14 )
        break;
      if ( !v11 )
        core::ptr::drop_in_place<std::fs::File>(&v20);
      v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
      if ( !v8 )
        return 0LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v8 + 8);
      v16 = *(_QWORD *)(v8 + 16);
      v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, asc_1D16B, 1LL);
      if ( v11 )
      {
        v21 = std::io::stdio::stdin();
        v17 = (__int64 (__fastcall **)())&unk_11A900;
        v18 = &v21;
      }
      else
      {
        std::fs::File::open(v26, v15, v16);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v22,
          v26,
          v15,
          v16);
        v14 = v22;
        if ( v22 )
          return v14;
        v20 = v23;
        v17 = &off_11A8A8;
        v18 = (__int64 *)&v20;
        a5 = v24;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v27, 0x2000LL, v18, v17);
      v14 = uu_fold::fold_file(v27, a4, a5);
      if ( v14 )
        break;
      if ( !v11 )
        core::ptr::drop_in_place<std::fs::File>(&v20);
      v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v25);
      if ( !v8 )
        return 0LL;
    }
  }
  if ( !v11 )
    core::ptr::drop_in_place<std::fs::File>(&v20);
  return v14;
}
