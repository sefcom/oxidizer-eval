unsigned __int64 __fastcall uu_shuf::NonrepeatingIterator::new(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 result; // rax

  v7 = *a2;
  v8 = a2[1];
  v9 = v8 - *a2;
  if ( v8 >= v7 )
  {
    if ( v7 || v8 != -1LL || (a2[2] & 1) != 0 )
      a4 = core::cmp::Ord::min(a4, ++v9);
  }
  else
  {
    a4 = 0LL;
  }
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a1, v9);
  result = a2[2];
  *(_QWORD *)(a1 + 80) = result;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  return result;
}