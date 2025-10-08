char __fastcall just::recipe::Recipe<D>::check_can_be_default_recipe(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  char result; // al

  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
         *(_QWORD *)(a2 + 80),
         *(_QWORD *)(a2 + 80) + 208LL * *(_QWORD *)(a2 + 88));
  if ( v2 )
  {
    v3 = v2;
    v4 = just::token::Token::lexeme(a2 + 144);
    *(_QWORD *)(a1 + 8) = v3;
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)(a1 + 24) = v5;
    result = 15;
  }
  else
  {
    result = 56;
  }
  *(_BYTE *)a1 = result;
  return result;
}