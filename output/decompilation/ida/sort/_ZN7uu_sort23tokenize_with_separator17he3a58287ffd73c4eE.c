__int64 __fastcall uu_sort::tokenize_with_separator(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // [rsp+Ch] [rbp-5Ch] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-58h]
  _QWORD v13[3]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF

  v11 = a3;
  v13[0] = a1;
  v12 = a2;
  v13[1] = a2 + a1;
  v13[2] = 0LL;
  v14[0] = &v11;
  result = core::iter::traits::iterator::Iterator::try_fold(v13, v14);
  if ( (result & 1) == 0 )
  {
    v8 = 0LL;
    v10 = v12;
    if ( !v12 )
      return result;
    return alloc::vec::Vec<T,A>::push(a4, v8, v10, &off_18CFE8);
  }
  v7 = v6;
  v8 = 0LL;
  do
  {
    alloc::vec::Vec<T,A>::push(a4, v8, v7, &off_18D000);
    v8 = v7 + 1;
    result = core::iter::traits::iterator::Iterator::try_fold(v13, v14);
    v7 = v9;
  }
  while ( (result & 1) != 0 );
  v10 = v12;
  if ( v8 < v12 )
    return alloc::vec::Vec<T,A>::push(a4, v8, v10, &off_18CFE8);
  return result;
}