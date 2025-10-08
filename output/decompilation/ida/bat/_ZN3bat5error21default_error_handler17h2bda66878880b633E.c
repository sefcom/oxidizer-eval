__int64 __fastcall bat::error::default_error_handler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+8h] [rbp-C0h] BYREF
  void *v5; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+18h] [rbp-B0h] BYREF
  unsigned __int64 *v7; // [rsp+20h] [rbp-A8h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+28h] [rbp-A0h]
  __int64 *v9; // [rsp+30h] [rbp-98h]
  __int64 (__fastcall *v10)(); // [rsp+38h] [rbp-90h]
  unsigned __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  const char *v12; // [rsp+48h] [rbp-80h]
  __int64 v13; // [rsp+50h] [rbp-78h]
  unsigned __int64 v14; // [rsp+58h] [rbp-70h]
  __int64 v15; // [rsp+70h] [rbp-58h]
  char v16; // [rsp+78h] [rbp-50h]
  __int64 v17; // [rsp+79h] [rbp-4Fh]
  __int64 v18; // [rsp+88h] [rbp-40h] BYREF
  void *v19; // [rsp+90h] [rbp-38h] BYREF
  __int64 v20; // [rsp+98h] [rbp-30h]
  unsigned __int64 **v21; // [rsp+A0h] [rbp-28h]
  __int64 v22; // [rsp+A8h] [rbp-20h]
  __int64 v23; // [rsp+B0h] [rbp-18h]

  v6 = a1;
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 6 )
    {
      v16 = 0;
      v15 = 0LL;
      v17 = 0x1500000002LL;
      v11 = 0x8000000000000000LL;
      v12 = aBatError;
      v13 = 11LL;
      v14 = 0x8000000000000002LL;
      v7 = &v11;
      v8 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
      v9 = &v6;
      v10 = <&T as core::fmt::Display>::fmt;
      v19 = &unk_6CE428;
      v20 = 3LL;
      v23 = 0LL;
      v21 = &v7;
      v22 = 2LL;
      v5 = (void *)(*(__int64 (__fastcall **)(__int64, void **))(a3 + 72))(a2, &v19);
      if ( v5 )
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v5);
      return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v11);
    }
  }
  else if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)(a1 + 8)) == 11 )
  {
    std::process::exit(0);
  }
  v5 = &std::io::stdio::stderr::INSTANCE;
  v4 = std::io::stdio::Stdout::lock(&v5);
  v16 = 0;
  v15 = 0LL;
  v17 = 0x1500000002LL;
  v11 = 0x8000000000000000LL;
  v12 = aBatError;
  v13 = 11LL;
  v14 = 0x8000000000000002LL;
  v7 = &v11;
  v8 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
  v9 = &v6;
  v10 = <&T as core::fmt::Display>::fmt;
  v19 = &unk_6CE198;
  v20 = 3LL;
  v23 = 0LL;
  v21 = &v7;
  v22 = 2LL;
  v18 = std::io::Write::write_fmt(&v4, &v19);
  if ( v18 )
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v18);
  core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v11);
  return core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v4);
}