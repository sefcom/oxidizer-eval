__int64 __fastcall uu_cat::write_to_end(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = a2;
  v12[0] = a1;
  v12[1] = a1 + a2;
  if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(v12) )
  {
    v6 = v5;
    v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, a1, a2, &off_118790);
    v9 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v7, v8);
    core::result::Result<T,E>::unwrap(v9, &off_1187A8);
    return v6;
  }
  else
  {
    v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, a1, a2);
    core::result::Result<T,E>::unwrap(v10, &off_118778);
  }
  return v4;
}
