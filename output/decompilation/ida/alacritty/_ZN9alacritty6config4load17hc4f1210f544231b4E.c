void *__fastcall alacritty::config::load(void *dest, _QWORD *a2)
{
  __int128 v3; // [rsp+8h] [rbp-890h] BYREF
  __int64 v4; // [rsp+18h] [rbp-880h]
  __int128 v5; // [rsp+20h] [rbp-878h]
  __int64 v6; // [rsp+30h] [rbp-868h]
  _BYTE desta[1056]; // [rsp+38h] [rbp-860h] BYREF
  _QWORD src[136]; // [rsp+458h] [rbp-440h] BYREF

  if ( __OFSUB__(0LL, a2[54]) )
    src[0] = 0x8000000000000000LL;
  else
    <&str as alloc::string::SpecToString>::spec_to_string(src, a2[55], a2[56]);
  core::option::Option<T>::or_else(desta, src);
  core::option::Option<T>::or_else(&v3, desta);
  if ( (_QWORD)v3 == 0x8000000000000000LL )
  {
    v6 = v4;
    v5 = v3;
  }
  else
  {
    alacritty::config::load::{{closure}}(src);
    v6 = v4;
    v5 = v3;
    if ( LODWORD(src[0]) != 6 )
    {
      memcpy(desta, src, sizeof(desta));
      core::ptr::drop_in_place<alacritty::config::load::{{closure}}>(&v3);
      goto LABEL_9;
    }
  }
  alacritty::config::load::{{closure}}(desta);
LABEL_9:
  alacritty::config::after_loading(desta, a2);
  return memcpy(dest, desta, 0x420uLL);
}