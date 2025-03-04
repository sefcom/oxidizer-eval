// attributes: thunk
__int64 __fastcall uu_tsort::Node::add_successor(__int64 a1, __int64 a2)
{
  return alloc::vec::Vec<T,A>::push(a1, a2);
}
