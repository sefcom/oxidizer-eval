__int64 __fastcall alacritty::display::Display::make_not_current(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[80]; // [rsp+8h] [rbp-50h] BYREF

  result = <glutin::context::PossiblyCurrentContext as glutin::context::PossiblyCurrentGlContext>::is_current(a1 + 680);
  if ( (_BYTE)result )
  {
    <glutin::context::PossiblyCurrentContext as glutin::context::PossiblyCurrentGlContext>::make_not_current_in_place(
      v2,
      a1 + 680);
    return core::result::Result<T,E>::expect(
             v2,
             "failed to disable contextContext lost for window Recovered window  from gpu resetfailed to recreate context"
             ".failed to reativate context after reset.failed to recreate renderer after reseterror calling swap_buffers:"
             " Backward Search: ",
             25LL,
             &off_882538);
  }
  return result;
}