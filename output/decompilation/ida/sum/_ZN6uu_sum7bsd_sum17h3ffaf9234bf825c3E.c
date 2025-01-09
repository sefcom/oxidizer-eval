__int64 __fastcall uu_sum::bsd_sum(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 (__fastcall *v3)(__int64, _QWORD *, __int64); // r14
  unsigned __int64 v4; // r13
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 *v9; // rax
  _QWORD v11[2]; // [rsp+18h] [rbp-1040h] BYREF
  _QWORD s[518]; // [rsp+28h] [rbp-1030h] BYREF

  v2 = 0;
  memset(s, 0, 0x1000uLL);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2 + 24);
  v4 = 0LL;
  for ( i = v3(a1, s, 4096LL); ; i = v3(a1, s, 4096LL) )
  {
    v7 = v6;
    if ( i || !v6 )
      break;
    v11[0] = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, s, &off_1123D8);
    v11[1] = v11[0] + v8;
    while ( 1 )
    {
      v9 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v11);
      if ( !v9 )
        break;
      LOWORD(v2) = __ROR2__(v2, 1);
      v2 += *v9;
    }
    v4 += v7;
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v7);
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(i, v6);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(a1, a2);
  return (v4 >> 10) - (((v4 & 0x3FF) == 0) - 1LL);
}
