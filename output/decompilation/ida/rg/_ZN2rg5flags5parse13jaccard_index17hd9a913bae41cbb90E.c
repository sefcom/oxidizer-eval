double __fastcall rg::flags::parse::jaccard_index(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  double v3; // xmm0_8
  unsigned __int64 v4; // rbx
  double v5; // xmm0_8
  double v7; // [rsp+8h] [rbp-C0h]
  _BYTE v8[184]; // [rsp+10h] [rbp-B8h] BYREF

  alloc::collections::btree::set::BTreeSet<T,A>::union(v8, a1, a2);
  v2 = core::iter::traits::iterator::Iterator::fold(v8);
  if ( HIDWORD(v2) )
  {
    core::result::Result<T,E>::expect(1LL, &off_3EB698);
    v3 = 0.0;
  }
  else
  {
    core::result::Result<T,E>::expect(0LL, &off_3EB698);
    v3 = (double)(int)v2;
  }
  v7 = v3;
  alloc::collections::btree::set::BTreeSet<T,A>::intersection(v8, a1, a2);
  v4 = core::iter::traits::iterator::Iterator::fold(v8);
  if ( HIDWORD(v4) )
  {
    core::result::Result<T,E>::expect(1LL, &off_3EB6B0);
    v5 = 0.0;
  }
  else
  {
    core::result::Result<T,E>::expect(0LL, &off_3EB6B0);
    v5 = (double)(int)v4;
  }
  return v5 / v7;
}