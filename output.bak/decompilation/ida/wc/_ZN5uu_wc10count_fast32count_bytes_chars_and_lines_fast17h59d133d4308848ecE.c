__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-4040h]
  _QWORD s[2054]; // [rsp+18h] [rbp-4030h] BYREF

  v12 = 0LL;
  memset(s, 0, 0x4000uLL);
  v2 = 0LL;
  for ( i = 0LL; ; i += bytecount::count(v9, v10, 10LL) )
  {
    while ( 1 )
    {
      v4 = <std::io::stdio::StdinLock as std::io::Read>::read(a2, s, 0x4000LL);
      v6 = v5;
      if ( !v4 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) != 35 )
      {
        result = a1;
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = v2;
        *(_QWORD *)(a1 + 16) = i;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = v6;
        return result;
      }
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v6);
    }
    if ( !v5 )
      break;
    v12 += v5;
    v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, s, &off_131300);
    v2 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v7, v8 + v7);
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, s, &off_1312E8);
  }
  result = a1;
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = i;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
