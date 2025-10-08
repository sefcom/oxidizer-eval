__int64 __fastcall just::recipe_resolver::RecipeResolver::resolve_variable(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int128 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-90h] BYREF
  __int128 v13; // [rsp+20h] [rbp-88h]

  *(_QWORD *)&v8 = just::token::Token::lexeme(a3);
  v11 = v8;
  result = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a2, a2[1], v8, *((_QWORD *)&v8 + 1));
  if ( result
    || (v12 = a4,
        *(_QWORD *)&v13 = a4 + 208 * a5,
        result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v12, &v11),
        (_BYTE)result)
    || (v10 = just::constants::constants(),
        (result = hashbrown::map::HashMap<K,V,S,A>::get_inner(v10, v11, *((_QWORD *)&v11 + 1))) != 0) )
  {
    *(_BYTE *)(a1 + 72) = 37;
  }
  else
  {
    v13 = v11;
    v12 = 0x8000000000000034LL;
    return just::token::Token::error(a1, a3, &v12);
  }
  return result;
}