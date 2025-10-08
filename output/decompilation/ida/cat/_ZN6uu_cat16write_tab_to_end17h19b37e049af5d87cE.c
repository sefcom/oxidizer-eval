__int64 __fastcall uu_cat::write_tab_to_end(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  char v15; // al
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-38h]

  v4 = a2;
  v5 = a1;
  v20 = a1;
  v21 = a1 + a2;
  if ( (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v20) & 1) != 0 )
  {
    v7 = v6;
    v8 = 0LL;
    v9 = a1;
    while ( 1 )
    {
      v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v7, v9, v4, &off_EACF0);
      v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v10, v11);
      core::result::Result<T,E>::unwrap(v12, &off_EAD08);
      if ( v7 >= v4 )
        core::panicking::panic_bounds_check(v7, v4, &off_EAD20);
      if ( *(_BYTE *)(v9 + v7) != 9 )
        return v7 + v8;
      v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, aI, 2LL);
      core::result::Result<T,E>::unwrap(v13, &off_EAD38);
      v5 = v7 + v9 + 1;
      v8 += v7 + 1;
      v14 = v4 + v9;
      v4 -= v7 + 1;
      v20 = v5;
      v21 = v14;
      v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v20);
      v7 = v16;
      v9 = v5;
      if ( (v15 & 1) == 0 )
        goto LABEL_8;
    }
  }
  else
  {
    v8 = 0LL;
LABEL_8:
    v17 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v5, v4);
    core::result::Result<T,E>::unwrap(v17, &off_EACD8);
    return v4 + v8;
  }
}