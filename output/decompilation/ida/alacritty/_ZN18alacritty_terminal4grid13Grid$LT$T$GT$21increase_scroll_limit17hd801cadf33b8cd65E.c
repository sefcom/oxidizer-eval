__int64 __fastcall alacritty_terminal::grid::Grid<T>::increase_scroll_limit(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  bool v4; // cf
  unsigned __int64 v5; // rcx
  __int64 result; // rax

  v2 = a1[5];
  v3 = 0LL;
  v4 = v2 < a1[19];
  v5 = v2 - a1[19];
  if ( !v4 )
    v3 = v5;
  result = core::cmp::Ord::min(a2, a1[21] - v3);
  if ( result )
    return alacritty_terminal::grid::storage::Storage<T>::initialize(a1, result, a1[18]);
  return result;
}