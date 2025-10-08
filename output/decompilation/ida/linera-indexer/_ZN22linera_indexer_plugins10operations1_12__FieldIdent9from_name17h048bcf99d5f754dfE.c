char __fastcall linera_indexer_plugins::operations::_::__FieldIdent::from_name(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  char result; // al
  char v4; // cl
  char v5; // cl

  v1 = a1[1];
  v2 = *a1 + 16LL;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aOperation_1, 9LL) )
    return 0;
  v4 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aOperations_1, 10LL);
  result = 1;
  if ( !v4 )
  {
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aCount_0, 5LL);
    result = 2;
    if ( !v5 )
      return 4 - <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aLast, 4LL);
  }
  return result;
}