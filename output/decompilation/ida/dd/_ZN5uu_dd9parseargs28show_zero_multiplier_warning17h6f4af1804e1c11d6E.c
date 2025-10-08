__int64 uu_dd::parseargs::show_zero_multiplier_warning()
{
  const char *v0; // rdx
  void *v2; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-A0h]
  __int64 **v4; // [rsp+10h] [rbp-98h]
  __int64 v5; // [rsp+18h] [rbp-90h]
  __int64 v6; // [rsp+20h] [rbp-88h]
  __int64 *v7; // [rsp+30h] [rbp-78h] BYREF
  const char *v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  char v10; // [rsp+48h] [rbp-60h]
  __int64 v11; // [rsp+50h] [rbp-58h] BYREF
  const char *v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  char v14; // [rsp+68h] [rbp-40h]
  _QWORD v15[7]; // [rsp+70h] [rbp-38h] BYREF

  v11 = uucore::util_name();
  v12 = v0;
  v7 = &v11;
  v8 = (const char *)<&T as core::fmt::Display>::fmt;
  v2 = &unk_13D8F8;
  v3 = 2LL;
  v6 = 0LL;
  v4 = &v7;
  v5 = 1LL;
  std::io::stdio::_eprint(&v2);
  v7 = 0LL;
  v8 = a0x;
  v9 = 2LL;
  v10 = 1;
  v11 = 0LL;
  v12 = a00x;
  v13 = 3LL;
  v14 = 1;
  v15[0] = &v7;
  v15[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v15[2] = &v11;
  v15[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v2 = &unk_13D918;
  v3 = 3LL;
  v6 = 0LL;
  v4 = (__int64 **)v15;
  v5 = 2LL;
  return std::io::stdio::_eprint(&v2);
}