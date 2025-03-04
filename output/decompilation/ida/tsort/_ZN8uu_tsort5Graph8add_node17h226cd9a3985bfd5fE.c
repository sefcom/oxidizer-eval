__int64 __fastcall uu_tsort::Graph::add_node(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  __int128 v5; // [rsp+10h] [rbp-48h]
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h]
  __int128 v9; // [rsp+48h] [rbp-10h]

  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v7, a1, a2, a3);
  v5 = v8;
  v6 = v9;
  v4 = v7;
  return std::collections::hash::map::Entry<K,V>::or_insert_with(&v4);
}
