__int64 __fastcall uu_env::EnvAppData::make_error_no_such_file_or_dir(char a1, __int64 (__fastcall *a2)(), __int64 a3)
{
  __int64 (__fastcall *v4)(); // rdx
  __int64 (__fastcall *v5)(); // rdx
  void *v7; // [rsp+8h] [rbp-90h] BYREF
  __int64 v8; // [rsp+10h] [rbp-88h]
  char ***v9; // [rsp+18h] [rbp-80h]
  __int64 v10; // [rsp+20h] [rbp-78h]
  __int64 v11; // [rsp+28h] [rbp-70h]
  char ***v12; // [rsp+38h] [rbp-60h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-58h]
  char **v14; // [rsp+48h] [rbp-50h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  char v17; // [rsp+60h] [rbp-38h]

  v14 = (char **)uucore::util_name();
  v15 = v4;
  v12 = &v14;
  v13 = <&T as core::fmt::Display>::fmt;
  v7 = &unk_149138;
  v8 = 2LL;
  v11 = 0LL;
  v9 = (char ***)&v12;
  v10 = 1LL;
  std::io::stdio::_eprint(&v7);
  v14 = (char **)(&dword_0 + 1);
  v15 = a2;
  v16 = a3;
  v17 = 1;
  v12 = &v14;
  v13 = <os_display::Quoted as core::fmt::Display>::fmt;
  v7 = &unk_1491E8;
  v8 = 2LL;
  v11 = 0LL;
  v9 = (char ***)&v12;
  v10 = 1LL;
  std::io::stdio::_eprint(&v7);
  if ( !a1 )
  {
    v14 = (char **)uucore::util_name();
    v15 = v5;
    v12 = &v14;
    v13 = <&T as core::fmt::Display>::fmt;
    v7 = &unk_149138;
    v8 = 2LL;
    v11 = 0LL;
    v9 = (char ***)&v12;
    v10 = 1LL;
    std::io::stdio::_eprint(&v7);
    v14 = &off_149208;
    v15 = <&T as core::fmt::Display>::fmt;
    v7 = &unk_149218;
    v8 = 2LL;
    v11 = 0LL;
    v9 = &v14;
    v10 = 1LL;
    std::io::stdio::_eprint(&v7);
  }
  return uucore::mods::error::ExitCode::new(127LL);
}
