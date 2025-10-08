__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 i; // [rsp+8h] [rbp-4040h]
  _QWORD s[2054]; // [rsp+18h] [rbp-4030h] BYREF

  v2 = 0LL;
  memset(s, 0, 0x4000uLL);
  for ( i = 0LL; ; i += bytecount::count(v9, v10, 10LL) )
  {
    while ( 1 )
    {
      v4 = <std::io::stdio::StdinLock as std::io::Read>::read(a2, s, 0x4000LL);
      v5 = v3;
      if ( (v4 & 1) == 0 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v3) != 35 )
      {
        result = a1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v2;
        *(_QWORD *)(a1 + 16) = i;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = v5;
        return result;
      }
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v4, v5);
    }
    if ( !v3 )
      break;
    v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           0LL,
           v3,
           s,
           0x4000LL,
           &off_F8F28);
    v8 = bytecount::num_chars(v6, v7);
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           0LL,
           v5,
           s,
           0x4000LL,
           &off_F8F40);
    v2 += v8;
  }
  result = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = i;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}