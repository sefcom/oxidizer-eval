__int64 __fastcall uu_cat::write_to_end(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char v12; // [rsp+0h] [rbp-22h] BYREF
  char v13[33]; // [rsp+1h] [rbp-21h] BYREF

  v4 = a2;
  v12 = 10;
  v13[0] = 13;
  if ( (memchr::arch::generic::memchr::search_slice_with_raw(a1, a2, &v12, v13) & 1) != 0 )
  {
    v6 = v5;
    v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v5, a1, a2, &off_EACA8);
    v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v7, v8);
    core::result::Result<T,E>::unwrap(v9, &off_EACC0);
    return v6;
  }
  else
  {
    v10 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
    core::result::Result<T,E>::unwrap(v10, &off_EAC90);
  }
  return v4;
}