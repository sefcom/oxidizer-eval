__int64 __fastcall alacritty_terminal::grid::Grid<T>::update_history(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v2 = a1[5];
  v3 = 0LL;
  if ( v2 >= a1[19] )
    v3 = v2 - a1[19];
  v4 = a2 - v3;
  if ( a2 < v3 )
  {
    a1[5] = v4 + v2;
    if ( a1[2] > v4 + v2 + 1000 )
      alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
  }
  result = core::cmp::Ord::min(a1[20], a2);
  a1[20] = result;
  a1[21] = a2;
  return result;
}