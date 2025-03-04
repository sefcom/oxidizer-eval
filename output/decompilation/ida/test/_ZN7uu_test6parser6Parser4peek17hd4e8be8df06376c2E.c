__int64 __fastcall uu_test::parser::Parser::peek(__int64 a1, __int64 a2)
{
  __int128 v3[3]; // [rsp+0h] [rbp-38h] BYREF

  core::option::Option<T>::get_or_insert_with(a2 + 24, a2 + 48);
  if ( *(_QWORD *)(a2 + 24) == 0x8000000000000000LL )
    *(_QWORD *)&v3[0] = 0x8000000000000000LL;
  else
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v3, a2 + 24);
  return uu_test::parser::Symbol::new(a1, v3);
}
