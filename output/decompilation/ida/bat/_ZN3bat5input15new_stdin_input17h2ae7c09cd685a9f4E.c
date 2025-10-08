__int64 __fastcall bat::input::new_stdin_input(void *dest)
{
  _BYTE v2[192]; // [rsp+8h] [rbp-C0h] BYREF

  bat::input::Input::stdin(v2);
  return bat::input::named(dest);
}