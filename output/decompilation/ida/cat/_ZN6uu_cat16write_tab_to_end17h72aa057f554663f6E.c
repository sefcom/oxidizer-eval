unsigned __int64 __fastcall uu_cat::write_tab_to_end(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-38h]

  v4 = a2;
  v5 = a1;
  v19 = a1;
  v20 = a1 + a2;
  if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v19) )
  {
    v7 = v6;
    v18 = 0LL;
    while ( 1 )
    {
      v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v5, v4, &off_1187D8);
      v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v8, v9);
      core::result::Result<T,E>::unwrap(v10, &off_1187F0);
      if ( v7 >= v4 )
        core::panicking::panic_bounds_check(v7, v4, &off_118808);
      if ( *(_BYTE *)(v5 + v7) != 9 )
        return v7 + v18;
      v11 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, aI, 2LL);
      core::result::Result<T,E>::unwrap(v11, &off_118820);
      v12 = v5 + v7 + 1;
      v18 += v7 + 1;
      v13 = v4 + v5;
      v4 -= v7 + 1;
      v19 = v12;
      v20 = v13;
      v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v19);
      v7 = v15;
      v5 = v12;
      if ( !v14 )
        goto LABEL_8;
    }
  }
  else
  {
    v12 = a1;
LABEL_8:
    v16 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a3, v12, v4);
    core::result::Result<T,E>::unwrap(v16, &off_1187C0);
  }
  return v4;
}
