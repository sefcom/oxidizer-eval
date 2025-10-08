__int64 __fastcall uu_shred::do_remove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int8 a6)
{
  unsigned __int8 v7; // bp
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 *v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+10h] [rbp-A8h]
  __int64 v14; // [rsp+18h] [rbp-A0h]
  void *v15; // [rsp+20h] [rbp-98h] BYREF
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 **v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+40h] [rbp-78h]
  __int64 v20; // [rsp+50h] [rbp-68h] BYREF
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h]
  char v23; // [rsp+68h] [rbp-50h]
  _QWORD v24[9]; // [rsp+70h] [rbp-48h] BYREF

  v7 = a5;
  v14 = a4;
  if ( a5 )
  {
    v20 = uucore::util_name();
    v21 = v9;
    v12 = &v20;
    v13 = <&T as core::fmt::Display>::fmt;
    v15 = &unk_F9F98;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v12;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    v20 = 0LL;
    v21 = a3;
    v22 = v14;
    v23 = 0;
    v12 = &v20;
    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &unk_FA2F0;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v12;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
  }
  if ( a6 == 1 )
  {
    std::path::Path::with_file_name(v24, a1, a2, a3, v14);
    if ( !__OFSUB__(0LL, v24[0]) )
      goto LABEL_5;
LABEL_8:
    if ( !v7 )
      return 0LL;
LABEL_9:
    v20 = uucore::util_name();
    v21 = v11;
    v12 = &v20;
    v13 = <&T as core::fmt::Display>::fmt;
    v15 = &unk_F9F98;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v12;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    v20 = 0LL;
    v21 = a3;
    v22 = v14;
    v23 = 0;
    v12 = &v20;
    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &unk_FA310;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v12;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    return 0LL;
  }
  uu_shred::wipe_name((__int64)v24, a1, a2, v7, a6);
  if ( __OFSUB__(0LL, v24[0]) )
    goto LABEL_8;
LABEL_5:
  result = std::fs::remove_file(v24);
  if ( (v7 & (result == 0)) != 0 )
    goto LABEL_9;
  return result;
}