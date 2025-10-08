bool __fastcall alacritty_terminal::selection::Selection::intersects_range(int a1, int a2)
{
  int v2; // ebx
  _DWORD v4[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = a2;
  v4[0] = 0;
  if ( a1 < a2 )
    v2 = a1;
  return *(_DWORD *)<core::ops::range::RangeTo<T> as core::ops::range::RangeBounds<T>>::end_bound(v4) - 1 >= v2;
}