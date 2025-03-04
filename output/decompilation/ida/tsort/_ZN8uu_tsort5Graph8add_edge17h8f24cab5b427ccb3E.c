__int64 __fastcall uu_tsort::Graph::add_edge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 inner_mut; // rax

  uu_tsort::Graph::add_node(a1, a2, a3);
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, a4, a5);
  if ( !(_BYTE)result )
  {
    uu_tsort::Graph::add_node(a1, a4, a5);
    inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, a2, a3);
    if ( !inner_mut )
      core::option::unwrap_failed(&off_1214E8);
    uu_tsort::Node::add_successor(inner_mut + 16, a4);
    result = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, a4, a5);
    if ( !result )
      core::option::unwrap_failed(&off_121500);
    ++*(_QWORD *)(result + 40);
  }
  return result;
}
