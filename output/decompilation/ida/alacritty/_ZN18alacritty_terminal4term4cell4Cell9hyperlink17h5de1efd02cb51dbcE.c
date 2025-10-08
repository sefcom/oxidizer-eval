__int64 __fastcall alacritty_terminal::term::cell::Cell::hyperlink(__int64 a1)
{
  volatile signed __int64 *v1; // rax

  if ( !a1 )
    return 0LL;
  v1 = *(volatile signed __int64 **)(a1 + 40);
  if ( !v1 )
    return 0LL;
  if ( _InterlockedIncrement64(v1) <= 0 )
    BUG();
  return *(_QWORD *)(a1 + 40);
}