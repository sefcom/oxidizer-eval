__int64 __fastcall uu_test::parser::Parser::peek(__int64 *a1, _QWORD *a2)
{
  __int64 v3[5]; // [rsp+0h] [rbp-28h] BYREF

  core::option::Option<T>::get_or_insert_with(a2 + 3, a2 + 6);
  if ( __OFSUB__(0LL, a2[3]) )
    v3[0] = 0x8000000000000000LL;
  else
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v3, a2[4], a2[5]);
  return uu_test::parser::Symbol::new(a1, v3);
}