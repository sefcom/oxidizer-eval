__int64 __fastcall alacritty_terminal::grid::Grid<T>::decrease_scroll_limit(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  bool v8; // cf
  unsigned __int64 v9; // r15

  v2 = a1[5];
  v3 = a1[19];
  v4 = 0LL;
  if ( v2 >= v3 )
    v4 = v2 - v3;
  result = core::cmp::Ord::min(a2, v4);
  if ( result )
  {
    v6 = v2 - core::cmp::Ord::min(result, v4);
    a1[5] = v6;
    if ( a1[2] > v6 + 1000 )
    {
      alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
      v6 = a1[5];
      v3 = a1[19];
    }
    v7 = 0LL;
    v8 = v6 < v3;
    v9 = v6 - v3;
    if ( !v8 )
      v7 = v9;
    result = core::cmp::Ord::min(a1[20], v7);
    a1[20] = result;
  }
  return result;
}