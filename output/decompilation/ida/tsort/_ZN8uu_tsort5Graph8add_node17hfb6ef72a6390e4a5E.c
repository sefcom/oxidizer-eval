__int64 __fastcall uu_tsort::Graph::add_node(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __m256i v8; // [rsp+0h] [rbp-48h] BYREF
  __m256i v9; // [rsp+28h] [rbp-20h] BYREF

  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v9, a1 + 24, a2, a3);
  if ( v9.m256i_i64[0] )
  {
    v8 = v9;
    return ((__int64 (__fastcall *)(__m256i *, __int64, __int64, __int64, __int64, __int64))std::collections::hash::map::Entry<K,V>::or_default)(
             &v8,
             a1 + 24,
             v3,
             v4,
             v5,
             v6);
  }
  else
  {
    *(_OWORD *)&v8.m256i_u64[1] = *(_OWORD *)&v9.m256i_u64[1];
    v8.m256i_i64[0] = 0LL;
    return ((__int64 (__fastcall *)(__m256i *))std::collections::hash::map::Entry<K,V>::or_default)(&v8);
  }
}