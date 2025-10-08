__int64 __fastcall uu_tsort::Graph::remove_edge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 inner_mut; // rax
  __int64 result; // rax

  inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 24, a2, a3);
  if ( !inner_mut )
    core::option::unwrap_failed(&off_EB2F8);
  uu_tsort::remove(inner_mut + 16, a4, a5);
  result = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 24, a4, a5);
  if ( !result )
    core::option::unwrap_failed(&off_EB310);
  --*(_QWORD *)(result + 40);
  return result;
}