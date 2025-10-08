__int64 __fastcall uu_test::parser::Parser::next_token(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int128 v5; // [rsp+10h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v2 == 0x8000000000000001LL )
  {
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4, a2 + 48);
  }
  else
  {
    v5 = *(_OWORD *)(a2 + 32);
    v4 = v2;
  }
  return uu_test::parser::Symbol::new(a1, &v4);
}