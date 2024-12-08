__int64 __fastcall uu_sort::tokenize_with_separator(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  int v10; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v11[3]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = a3;
  v11[0] = a1;
  v11[1] = a2 + a1;
  v11[2] = 0LL;
  v12[0] = &v10;
  result = core::iter::traits::iterator::Iterator::try_fold(v11, v12);
  if ( !result )
  {
    v8 = 0LL;
    if ( !a2 )
      return result;
    return alloc::vec::Vec<T,A>::push(a4, v8, a2);
  }
  v7 = v6;
  v8 = 0LL;
  do
  {
    alloc::vec::Vec<T,A>::push(a4, v8, v7);
    v8 = v7 + 1;
    result = core::iter::traits::iterator::Iterator::try_fold(v11, v12);
    v7 = v9;
  }
  while ( result );
  if ( v8 < a2 )
    return alloc::vec::Vec<T,A>::push(a4, v8, a2);
  return result;
}
