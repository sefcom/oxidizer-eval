__int64 __fastcall alacritty::cli::ParsedOptions::override_config_rc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-868h] BYREF
  _BYTE src[1056]; // [rsp+8h] [rbp-860h] BYREF
  _QWORD v6[2]; // [rsp+428h] [rbp-440h] BYREF
  _BYTE dest[1056]; // [rsp+438h] [rbp-430h] BYREF

  v2 = a2;
  v4 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    <alacritty::config::ui_config::UiConfig as core::clone::Clone>::clone(src, a2 + 16);
    alacritty::cli::ParsedOptions::override_config(a1, (__int64)src);
    memcpy(dest, src, sizeof(dest));
    v6[0] = 1LL;
    v6[1] = 1LL;
    v2 = alloc::boxed::Box<T>::new(v6);
    core::ptr::drop_in_place<alloc::rc::Rc<alacritty::config::ui_config::UiConfig>>(&v4);
  }
  return v2;
}