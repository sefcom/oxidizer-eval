// positive sp value has been detected, the output may be wrong!
_BOOL8 __fastcall uu_head::find_nth_line_from_end(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r14
  _BYTE *i; // rax
  __int64 v18; // [rsp-EFF0h] [rbp-10050h]
  _QWORD v19[2]; // [rsp-EFE0h] [rbp-10040h] BYREF
  _QWORD v20[512]; // [rsp-EFD0h] [rbp-10030h] BYREF
  __int64 v21; // [rsp-DFD0h] [rbp-F030h] BYREF

  do
    v20[0] = 0LL;
  while ( v20 != (_QWORD *)((char *)&v21 - (char *)&unk_10000) );
  v4 = 1LL;
  if ( (((__int64 (__fastcall *)(__int64, __int64, _QWORD))<std::fs::File as std::io::Seek>::seek)(a1, 1LL, 0LL) & 1) == 0 )
  {
    v6 = 0LL;
    v7 = v5;
    memset(v20, 0, (size_t)&unk_10000);
    v8 = 0LL;
    v18 = v7;
    while ( 1 )
    {
      v9 = v7 - v8;
      v10 = core::cmp::Ord::min(v9, &unk_10000);
      v11 = v9 - v10;
      v12 = ((__int64 (__fastcall *)(__int64, _QWORD *, void *, char **))<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut)(
              v10,
              v20,
              &unk_10000,
              &off_F7CE8);
      v14 = v13;
      if ( (((__int64 (__fastcall *)(__int64, _QWORD, __int64))<std::fs::File as std::io::Seek>::seek)(a1, 0LL, v11) & 1) != 0 )
        return 1;
      if ( ((__int64 (__fastcall *)(__int64, __int64, __int64))std::io::Read::read_exact)(a1, v12, v14) )
        return 1;
      v19[0] = v12;
      v19[1] = v14 + v12;
      for ( i = (_BYTE *)((__int64 (__fastcall *)(_QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back)(v19);
            i;
            i = (_BYTE *)((__int64 (__fastcall *)(_QWORD *))<core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back)(v19) )
      {
        v6 += *i == a3;
        if ( v6 == a2 + 1 )
          return ((__int64 (__fastcall *)(__int64))std::io::Seek::rewind)(a1) != 0;
        ++v8;
      }
      v7 = v18;
      if ( v8 == v18 )
        return ((__int64 (__fastcall *)(__int64))std::io::Seek::rewind)(a1) != 0;
    }
  }
  return v4;
}