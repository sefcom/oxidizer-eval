__int64 __fastcall uu_sum::sysv_sum(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  char v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-1040h]
  _QWORD s[518]; // [rsp+18h] [rbp-1030h] BYREF

  v4 = 0;
  memset(s, 0, 0x1000uLL);
  v13 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a2, a3, s);
      v7 = v5;
      if ( (v6 & 1) == 0 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) != 35 )
      {
        v10 = (__int64 *)a1;
        *(_QWORD *)(a1 + 8) = v7;
        v11 = 1LL;
        goto LABEL_8;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v7);
    }
    if ( !v5 )
      break;
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, s, &off_E1168);
    v13 += v7;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v8, v8 + v9, v4);
  }
  v10 = (__int64 *)a1;
  *(_QWORD *)(a1 + 8) = (v13 >> 9) - (((v13 & 0x1FF) == 0) - 1LL);
  *(_WORD *)(a1 + 16) = v4 + HIWORD(v4) + ((unsigned int)((unsigned __int16)v4 + HIWORD(v4)) >> 16);
  v11 = 0LL;
LABEL_8:
  *v10 = v11;
  return core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(a2, a3);
}