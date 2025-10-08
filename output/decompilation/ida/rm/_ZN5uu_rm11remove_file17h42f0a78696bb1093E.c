char __fastcall uu_rm::remove_file(__int64 (__fastcall *a1)(), _QWORD *a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(); // rdx
  __int64 (__fastcall *v9)(); // rbx
  __int64 (__fastcall *v11)(); // rdx
  char **v12; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-A0h]
  __int64 **v14; // [rsp+10h] [rbp-98h]
  __int64 v15; // [rsp+18h] [rbp-90h]
  __int64 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+38h] [rbp-70h]
  _QWORD *v19; // [rsp+40h] [rbp-68h]
  char v20; // [rsp+48h] [rbp-60h]
  __int64 *v21; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+58h] [rbp-50h]
  _QWORD *v23; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall *v24)(); // [rsp+68h] [rbp-40h]
  _QWORD v25[7]; // [rsp+70h] [rbp-38h] BYREF

  if ( !(unsigned __int8)uu_rm::prompt_file(a1, a2, (unsigned __int8)a3[6], (unsigned __int8)a3[7]) )
    return 0;
  v5 = std::fs::remove_file(a1, a2);
  if ( !v5 )
  {
    if ( a3[5] == 1 )
    {
      uu_rm::normalize(&v21, a1, a2);
      v9 = v22;
      v17 = 1LL;
      v18 = v22;
      v19 = v23;
      v20 = 1;
      v25[0] = &v17;
      v25[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v12 = &off_EA5C0;
      v13 = 2LL;
      v16 = 0LL;
      v14 = (__int64 **)v25;
      v15 = 1LL;
      std::io::stdio::_print(&v12);
      core::ptr::drop_in_place<std::path::PathBuf>(v21, v9);
    }
    return 0;
  }
  v6 = v5;
  v25[0] = v5;
  v7 = v5;
  if ( (unsigned __int8)std::io::error::Error::kind(v5) == 1 )
  {
    v17 = uucore::util_name(v7, a2);
    v18 = v8;
    v21 = &v17;
    v22 = <&T as core::fmt::Display>::fmt;
    v12 = (char **)&unk_EA4A0;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v21;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    v17 = 1LL;
    v18 = a1;
    v19 = a2;
    v20 = 1;
    v21 = &v17;
    v22 = <os_display::Quoted as core::fmt::Display>::fmt;
    v12 = &off_EA500;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v21;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  else
  {
    v17 = uucore::util_name(v7, a2);
    v18 = v11;
    v21 = &v17;
    v22 = <&T as core::fmt::Display>::fmt;
    v12 = (char **)&unk_EA4A0;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v21;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    v17 = 1LL;
    v18 = a1;
    v19 = a2;
    v20 = 1;
    v21 = &v17;
    v22 = <os_display::Quoted as core::fmt::Display>::fmt;
    v23 = v25;
    v24 = <std::io::error::Error as core::fmt::Display>::fmt;
    v12 = &off_EA5E0;
    v13 = 3LL;
    v16 = 0LL;
    v14 = &v21;
    v15 = 2LL;
    std::io::stdio::_eprint(&v12);
    v6 = v25[0];
  }
  core::ptr::drop_in_place<std::io::error::Error>(v6);
  return 1;
}