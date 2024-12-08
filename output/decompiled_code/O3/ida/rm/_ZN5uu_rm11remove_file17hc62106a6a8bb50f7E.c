char __fastcall uu_rm::remove_file(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  char **v17; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-A0h]
  __int64 **v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+38h] [rbp-70h]
  char v24; // [rsp+48h] [rbp-60h]
  __int64 *v25; // [rsp+50h] [rbp-58h] BYREF
  __int128 v26; // [rsp+58h] [rbp-50h]
  __int64 (__fastcall *v27)(); // [rsp+68h] [rbp-40h]
  _QWORD v28[7]; // [rsp+70h] [rbp-38h] BYREF

  if ( !(unsigned __int8)uu_rm::prompt_file(a1, a2, a4) )
    return 0;
  v6 = std::fs::remove_file(a1, a2);
  if ( !v6 )
  {
    if ( a3 )
    {
      uu_rm::normalize(&v25, a1, a2);
      v22 = 1LL;
      v23 = v26;
      v24 = 1;
      v28[0] = &v22;
      v28[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v17 = &off_127EE0;
      v18 = 2LL;
      v21 = 0LL;
      v19 = (__int64 **)v28;
      v20 = 1LL;
      ((void (__fastcall *)(char ***, __int64, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v17,
        a1,
        v11,
        v12,
        v13,
        v14);
      core::ptr::drop_in_place<std::path::PathBuf>(&v25);
    }
    return 0;
  }
  v28[0] = v6;
  v7 = v6;
  if ( (unsigned __int8)std::io::error::Error::kind(v6) == 1 )
  {
    v22 = uucore::util_name(v7, a2, v8, v9);
    *(_QWORD *)&v23 = v10;
    v25 = &v22;
    *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
    v17 = (char **)&unk_127D88;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v25;
    v20 = 1LL;
    std::io::stdio::_eprint(&v17);
    v22 = 1LL;
    *(_QWORD *)&v23 = a1;
    *((_QWORD *)&v23 + 1) = a2;
    v24 = 1;
    v25 = &v22;
    *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
    v17 = &off_127DC8;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v25;
    v20 = 1LL;
  }
  else
  {
    v22 = uucore::util_name(v7, a2, v8, v9);
    *(_QWORD *)&v23 = v16;
    v25 = &v22;
    *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
    v17 = (char **)&unk_127D88;
    v18 = 2LL;
    v21 = 0LL;
    v19 = &v25;
    v20 = 1LL;
    std::io::stdio::_eprint(&v17);
    v22 = 1LL;
    *(_QWORD *)&v23 = a1;
    *((_QWORD *)&v23 + 1) = a2;
    v24 = 1;
    v25 = &v22;
    *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
    *((_QWORD *)&v26 + 1) = v28;
    v27 = <std::io::error::Error as core::fmt::Display>::fmt;
    v17 = &off_127DE8;
    v18 = 3LL;
    v21 = 0LL;
    v19 = &v25;
    v20 = 2LL;
  }
  std::io::stdio::_eprint(&v17);
  core::ptr::drop_in_place<std::io::error::Error>(v28);
  return 1;
}
