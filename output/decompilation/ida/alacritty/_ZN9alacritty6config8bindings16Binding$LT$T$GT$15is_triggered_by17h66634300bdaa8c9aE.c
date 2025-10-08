bool __fastcall alacritty::config::bindings::Binding<T>::is_triggered_by(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  char v6; // cl
  bool result; // al

  v6 = <winit::event::MouseButton as core::cmp::PartialEq>::eq(
         *(unsigned int *)(a1 + 48),
         *(unsigned __int16 *)(a1 + 50),
         a4,
         a5);
  result = 0;
  if ( v6 && *(_DWORD *)(a1 + 52) == a3 )
    return ((unsigned __int8)~a2 & *(_BYTE *)(a1 + 56)) == 0 && (a2 & *(_BYTE *)(a1 + 57)) == 0;
  return result;
}