__int64 __fastcall alacritty::input::Processor<T,A>::touch(__int64 a1, __int64 a2)
{
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 60) - 2 < 2 )
    return alacritty::input::Processor<T,A>::on_touch_end();
  if ( *(_BYTE *)(a2 + 60) )
    return alacritty::input::Processor<T,A>::on_touch_motion();
  return alacritty::input::Processor<T,A>::on_touch_start(*(_QWORD *)(a1 + 32));
}