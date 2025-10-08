__int64 __fastcall alacritty::config::installed_config(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[24]; // [rsp+0h] [rbp-138h] BYREF
  _QWORD v5[3]; // [rsp+18h] [rbp-120h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v8[28]; // [rsp+58h] [rbp-E0h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v5[0] = v6;
  v5[1] = <&T as core::fmt::Display>::fmt;
  v8[0] = &off_881F80;
  v8[1] = 1LL;
  v8[4] = 0LL;
  v8[2] = v5;
  v8[3] = 1LL;
  core::option::Option<T>::map_or_else(v4, 0LL, a3, v8);
  xdg::base_directories::BaseDirectories::with_env(v8);
  xdg::base_directories::BaseDirectories::find_config_file(v5, v8, v4);
  core::option::Option<T>::or_else(v7, v5, v4);
  core::option::Option<T>::or_else(a1, v7, v4);
  core::ptr::drop_in_place<xdg::base_directories::BaseDirectories>(v8);
  return core::ptr::drop_in_place<alloc::string::String>(v4);
}