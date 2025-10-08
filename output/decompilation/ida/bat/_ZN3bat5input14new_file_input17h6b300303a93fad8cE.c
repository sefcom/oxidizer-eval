__int64 __fastcall bat::input::new_file_input(void *dest)
{
  _BYTE v2[208]; // [rsp+8h] [rbp-D0h] BYREF

  bat::input::Input::ordinary_file(v2);
  return bat::input::named(dest);
}