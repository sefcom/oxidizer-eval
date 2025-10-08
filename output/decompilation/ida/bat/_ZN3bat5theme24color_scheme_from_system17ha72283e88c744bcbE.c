__int64 bat::theme::color_scheme_from_system()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char **v5; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-B0h]
  __int128 *v7; // [rsp+10h] [rbp-A8h]
  __int128 v8; // [rsp+18h] [rbp-A0h]
  __int128 v9; // [rsp+30h] [rbp-88h] BYREF
  __int128 *v10; // [rsp+40h] [rbp-78h]
  __int64 (__fastcall *v11)(); // [rsp+48h] [rbp-70h]
  __int128 v12; // [rsp+50h] [rbp-68h] BYREF
  __int128 *v13; // [rsp+60h] [rbp-58h]
  _QWORD v14[7]; // [rsp+68h] [rbp-50h] BYREF
  char v15; // [rsp+A0h] [rbp-18h]
  __int64 v16; // [rsp+A1h] [rbp-17h]

  v15 = 0;
  v14[6] = 0LL;
  v16 = 0x1500000006LL;
  v14[0] = 0x8000000000000000LL;
  v14[1] = aBatWarning_0;
  v14[2] = 13LL;
  v14[3] = 0x8000000000000002LL;
  v5 = &off_6CECF0;
  v6 = 1LL;
  v7 = (_OWORD *)&byte_8;
  v8 = 0LL;
  core::option::Option<T>::map_or_else(&v9, aThemeAutoSyste, 62LL, &v5);
  v12 = v9;
  v13 = v10;
  *(_QWORD *)&v9 = v14;
  *((_QWORD *)&v9 + 1) = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
  v10 = &v12;
  v11 = <alloc::string::String as core::fmt::Display>::fmt;
  v5 = (char **)&unk_6CE198;
  v6 = 3LL;
  v7 = &v9;
  v8 = 2uLL;
  ((void (__fastcall *)(char ***, const char *, __int64, __int64, __int64, __int64))std::io::stdio::_eprint)(
    &v5,
    aThemeAutoSyste,
    v0,
    v1,
    v2,
    v3);
  core::ptr::drop_in_place<alloc::string::String>(&v12);
  return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v14);
}