__int64 __fastcall uu_join::State::new(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v12; // rax
  char v13; // dl
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+8h] [rbp-70h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  _BYTE v20[96]; // [rsp+18h] [rbp-60h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, asc_149A4, 1LL) )
  {
    v12 = std::io::stdio::Stdin::lock(a5);
    v14 = alloc::boxed::Box<T>::new(v12, v13 & 1);
    v15 = &off_1353C8;
LABEL_6:
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 8LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a4;
    *(_QWORD *)(a1 + 40) = v14;
    *(_QWORD *)(a1 + 48) = v15;
    *(_BYTE *)(a1 + 56) = a7;
    *(_QWORD *)(a1 + 64) = a6;
    *(_QWORD *)(a1 + 72) = 1LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_BYTE *)(a1 + 88) = a2;
    *(_BYTE *)(a1 + 89) = a8;
    *(_WORD *)(a1 + 90) = 0;
    return a1;
  }
  std::fs::File::open(v20, a3, a4);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v18,
    v20,
    a3,
    a4);
  if ( !v18 )
  {
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v20, 0x2000LL, (unsigned int)v19);
    v14 = alloc::boxed::Box<T>::new(v20);
    v15 = &off_135340;
    goto LABEL_6;
  }
  v16 = v19;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}
