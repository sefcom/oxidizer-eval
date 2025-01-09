// positive sp value has been detected, the output may be wrong!
_BOOL8 __fastcall uu_head::find_nth_line_from_end(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 i; // rbx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v18; // [rsp-EFF0h] [rbp-10060h]
  __int64 v19; // [rsp-EFE8h] [rbp-10058h]
  __int64 v20; // [rsp-EFE0h] [rbp-10050h]
  __int64 v21; // [rsp-EFD8h] [rbp-10048h]
  _QWORD v22[2]; // [rsp-EFD0h] [rbp-10040h] BYREF
  _QWORD v23[512]; // [rsp-EFC0h] [rbp-10030h] BYREF
  __int64 v24; // [rsp-DFC0h] [rbp-F030h] BYREF

  do
    v23[0] = 0LL;
  while ( v23 != (_QWORD *)((char *)&v24 - (char *)&unk_10000) );
  v4 = 1LL;
  v5 = <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL);
  i = v6;
  if ( !v5 )
  {
    v8 = 0LL;
    memset(v23, 0, (size_t)&unk_10000);
    v9 = ((__int64 (__fastcall *)(__int64))core::cmp::min_by)(i);
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD *))<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut)(
            v9,
            v23);
    v12 = v11;
    v21 = v10;
    v19 = v11 + v10;
    v13 = 0LL;
    v20 = i;
    v18 = v11;
    while ( 1 )
    {
      v14 = ((__int64 (__fastcall *)(__int64, __int64))core::cmp::min_by)(v12, i - v8);
      if ( <std::fs::File as std::io::Seek>::seek(a1, 2LL, -v14) )
        return 1;
      if ( ((__int64 (__fastcall *)(__int64, __int64, __int64))std::io::Read::read_exact)(a1, v21, v12) )
        return 1;
      v22[0] = v21;
      v22[1] = v19;
      v15 = (_BYTE *)((__int64 (__fastcall *)(_QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back)(v22);
      for ( i = v20;
            v15;
            v15 = (_BYTE *)((__int64 (__fastcall *)(_QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back)(v22) )
      {
        v13 += *v15 == a3;
        if ( v13 == a2 + 1 )
          return ((__int64 (__fastcall *)(__int64))std::io::Seek::rewind)(a1) != 0;
        ++v8;
      }
      v12 = v18;
      if ( v8 == v20 )
        return ((__int64 (__fastcall *)(__int64))std::io::Seek::rewind)(a1) != 0;
    }
  }
  return v4;
}
