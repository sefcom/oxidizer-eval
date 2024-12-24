char __fastcall uu_echo::parse_backslash_number(_QWORD *a1, char a2, char a3)
{
  char *v3; // rax
  char v4; // r14
  char v5; // dl
  char v6; // bp
  bool v7; // zf
  unsigned __int8 v8; // r13
  unsigned __int8 v9; // r15
  char *v10; // rax
  char v11; // dl
  char v12; // r14
  char v14; // [rsp+1h] [rbp-35h]
  char v15; // [rsp+2h] [rbp-34h]

  if ( a2 )
  {
    v3 = *(char **)core::option::Option<T>::get_or_insert_with(a1, a1 + 2);
    if ( !v3 )
      return 0;
    a3 = *v3;
    v4 = a2 != 1;
  }
  else
  {
    v4 = 0;
  }
  v15 = v4;
  if ( (uu_echo::Base::ascii_to_number(v4, a3) & 1) == 0 )
    return 0;
  v6 = v5;
  v7 = *a1 == 0LL;
  *a1 = 0LL;
  if ( v7 )
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1 + 2);
  v14 = 4 - (v4 == 0);
  v8 = (v4 == 0) | 2;
  v9 = 1;
  do
  {
    v9 = <u8 as core::iter::range::Step>::forward_unchecked(v9);
    v10 = *(char **)core::option::Option<T>::get_or_insert_with(a1, a1 + 2);
    if ( !v10 || (uu_echo::Base::ascii_to_number(v15, *v10) & 1) == 0 )
      break;
    v12 = v11;
    v7 = *a1 == 0LL;
    *a1 = 0LL;
    if ( v7 )
      <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1 + 2);
    v6 = v12 + (v6 << v14);
  }
  while ( v9 < v8 );
  return 1;
}
