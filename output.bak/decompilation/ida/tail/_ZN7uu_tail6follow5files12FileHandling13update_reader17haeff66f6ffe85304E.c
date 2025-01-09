__int64 __fastcall uu_tail::follow::files::FileHandling::update_reader(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 mut; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  _DWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  _BYTE v11[72]; // [rsp+10h] [rbp-48h] BYREF

  mut = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
  std::fs::File::open(v9, a2, a3);
  if ( v9[0] )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v11, 0x2000LL, v9[1]);
  v6 = alloc::boxed::Box<T>::new(v11);
  v7 = *(_QWORD *)(mut + 200);
  v8 = *(_QWORD *)(mut + 208);
  *(_QWORD *)(mut + 200) = v6;
  *(_QWORD *)(mut + 208) = &off_1BC4C8;
  core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(v7, v8);
  return 0LL;
}
