__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::is_modifier_key(__int64 a1)
{
  unsigned int v1; // ebx
  _BYTE v3[2]; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int16 v4; // [rsp+Ah] [rbp-1Eh]

  winit::keyboard::Key::as_ref(v3, a1);
  if ( v3[0] == 31 && v4 <= 0xDu )
    v1 = 0x2109u >> v4;
  else
    v1 = 0;
  core::ptr::drop_in_place<winit::keyboard::Key<&str>>(v3);
  LOBYTE(v1) = v1 & 1;
  return v1;
}