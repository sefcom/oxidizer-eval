__int64 __fastcall just::table::Table<V>::pop(_QWORD *dest, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  _QWORD v7[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v5 = v3;
  if ( v3 )
    v5 = a2[2];
  v7[0] = v3 != 0;
  v7[1] = 0LL;
  v7[2] = v3;
  v7[3] = v4;
  v7[4] = v7[0];
  v7[5] = 0LL;
  v7[6] = v3;
  v7[7] = v4;
  v7[8] = v5;
  if ( ((__int64 (__fastcall *)(_QWORD *))<alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next)(v7) )
    return alloc::collections::btree::map::BTreeMap<K,V,A>::remove(dest);
  result = 0x8000000000000000LL;
  *dest = 0x8000000000000000LL;
  return result;
}