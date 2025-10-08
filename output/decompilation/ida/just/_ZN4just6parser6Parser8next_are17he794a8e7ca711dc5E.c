bool __fastcall just::parser::Parser::next_are(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  _QWORD v8[2]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v9[64]; // [rsp+18h] [rbp-70h] BYREF
  char v10; // [rsp+58h] [rbp-30h]

  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(a1 + 7, *a2);
  v8[0] = just::parser::Parser::rest(a1);
  v8[1] = v4;
  v5 = 0LL;
  do
  {
    v6 = v5;
    if ( a3 == v5 )
      break;
    core::iter::traits::iterator::Iterator::try_fold(v9, v8);
    if ( v10 == 37 )
      break;
    v5 = v6 + 1;
  }
  while ( v10 == a2[v6] );
  return a3 == v6;
}