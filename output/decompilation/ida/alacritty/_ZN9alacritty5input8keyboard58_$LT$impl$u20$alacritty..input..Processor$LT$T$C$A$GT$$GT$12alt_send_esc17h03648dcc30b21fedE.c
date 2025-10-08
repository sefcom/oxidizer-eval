__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::alt_send_esc(
        unsigned int *a1,
        __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx

  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(a1);
  v8 = *a1;
  if ( a2 )
  {
    if ( (v8 & 0x100) != 0 )
      LOBYTE(v8) = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a4, a4 + a5) == 1;
    else
      return 0;
  }
  else
  {
    if ( a3 > 0x2Au || (v9 = 0x4000201C000LL, !_bittest64(&v9, a3)) )
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(a1);
    return (v8 >> 8) & 1;
  }
  return v8;
}