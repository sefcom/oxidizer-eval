char __fastcall linera_indexer::indexer::_::__FieldIdent::from_name(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14

  v1 = a1[1];
  v2 = *a1 + 16LL;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aPlugins_0, 7LL) )
    return 0;
  else
    return 2 - <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v1, aState_3, 5LL);
}