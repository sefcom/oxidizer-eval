__int64 __fastcall bat::input::Input::with_name(void *dest, const void *a2, __int64 a3, __int64 a4)
{
  _BYTE desta[192]; // [rsp+8h] [rbp-C0h] BYREF

  memcpy(desta, a2, 0xA0uLL);
  <&T as core::convert::AsRef<U>>::as_ref(a3, a4);
  return bat::input::Input::_with_name(dest, desta);
}