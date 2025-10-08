__int64 __fastcall uu_tsort::Graph::find_next_node(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  for ( result = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a2);
        !result;
        result = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a2) )
  {
    uu_tsort::Graph::find_and_break_cycle(a1, a2);
  }
  return result;
}