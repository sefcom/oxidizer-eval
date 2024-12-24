__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 i; // r13
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-4038h]
  _QWORD s[2054]; // [rsp+8h] [rbp-4030h] BYREF

  v11 = 0LL;
  memset(s, 0, 0x4000uLL);
  for ( i = 0LL; ; i += bytecount::count(v8, v9, 10LL) )
  {
    while ( 1 )
    {
      v3 = <std::io::stdio::StdinLock as std::io::Read>::read(a2, s, 0x4000LL);
      v5 = v4;
      if ( !v3 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v4) != 35 )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v11;
        *(_QWORD *)(a1 + 16) = i;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = v5;
        return a1;
      }
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v5);
    }
    if ( !v4 )
      break;
    v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v4, s, &off_132310);
    v11 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v6, v7 + v6);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, s, &off_1322F8);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = i;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
