char bat::app::is_truecolor_terminal()
{
  char v0; // al
  _BYTE v2[8]; // [rsp+8h] [rbp-20h] BYREF
  __int64 v3; // [rsp+10h] [rbp-18h] BYREF
  __int64 v4; // [rsp+18h] [rbp-10h]

  std::env::var(v2, aColorterm, 9LL);
  if ( (v2[0] & 1) == 0 )
    return bat::app::is_truecolor_terminal::{{closure}}(&v3) & 1;
  v0 = v4;
  if ( v3 != 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<core::result::Result<bool,std::env::VarError>>(v3, v4);
    v0 = 0;
  }
  return v0 & 1;
}