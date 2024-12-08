char __fastcall uu_rm::handle_writable_directory(__int64 (__fastcall *a1)(), __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(); // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(); // rdx
  char result; // al
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(); // rdx
  char **v15; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+10h] [rbp-98h]
  __int64 **v17; // [rsp+18h] [rbp-90h]
  __int128 v18; // [rsp+20h] [rbp-88h]
  __int64 **v19; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h]
  char v25; // [rsp+68h] [rbp-40h]
  _QWORD v26[7]; // [rsp+70h] [rbp-38h] BYREF

  if ( (a4 & 0x80u) != 0LL )
  {
    result = 1;
    if ( (_BYTE)a3 != 2 )
      return result;
    v22 = (__int64 *)uucore::util_name(a1, a2, a3, a4);
    v23 = v10;
    v19 = &v22;
    v20 = <&T as core::fmt::Display>::fmt;
    v15 = (char **)&unk_127D88;
    v16 = 2LL;
    v17 = (__int64 **)&v19;
    v18 = 1uLL;
    std::io::stdio::_eprint(&v15);
    v22 = (_QWORD *)(&dword_0 + 1);
    v23 = a1;
    v24 = a2;
    v25 = 1;
    v19 = &v22;
    v20 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &off_127FF0;
    v16 = 2LL;
    v17 = (__int64 **)&v19;
    v18 = 1uLL;
    std::io::stdio::_eprint(&v15);
    v15 = (char **)&off_127F20;
    v16 = 1LL;
    v17 = (__int64 **)&byte_8;
    v18 = 0LL;
    std::io::stdio::_eprint(&v15);
    v26[0] = &std::io::stdio::stderr::INSTANCE;
    v11 = <std::io::stdio::Stderr as std::io::Write>::flush(v26);
    if ( v11 )
    {
      v21 = v11;
      v22 = (__int64 *)uucore::util_name(v26, a2, v12, v13);
      v23 = v14;
      v19 = &v22;
      v20 = <&T as core::fmt::Display>::fmt;
      v15 = (char **)&unk_127D88;
      v16 = 2LL;
      v17 = (__int64 **)&v19;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      v22 = &v21;
      v23 = <std::io::error::Error as core::fmt::Display>::fmt;
      v15 = (char **)&unk_127F30;
      v16 = 2LL;
      v17 = &v22;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      std::process::exit(1);
    }
  }
  else
  {
    v22 = (__int64 *)uucore::util_name(a1, a2, a3, a4);
    v23 = v4;
    v19 = &v22;
    v20 = <&T as core::fmt::Display>::fmt;
    v15 = (char **)&unk_127D88;
    v16 = 2LL;
    v17 = (__int64 **)&v19;
    v18 = 1uLL;
    std::io::stdio::_eprint(&v15);
    v22 = (_QWORD *)(&dword_0 + 1);
    v23 = a1;
    v24 = a2;
    v25 = 1;
    v19 = &v22;
    v20 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &off_127FD0;
    v16 = 2LL;
    v17 = (__int64 **)&v19;
    v18 = 1uLL;
    std::io::stdio::_eprint(&v15);
    v15 = (char **)&off_127F20;
    v16 = 1LL;
    v17 = (__int64 **)&byte_8;
    v18 = 0LL;
    std::io::stdio::_eprint(&v15);
    v26[0] = &std::io::stdio::stderr::INSTANCE;
    v5 = <std::io::stdio::Stderr as std::io::Write>::flush(v26);
    if ( v5 )
    {
      v21 = v5;
      v22 = (__int64 *)uucore::util_name(v26, a2, v6, v7);
      v23 = v8;
      v19 = &v22;
      v20 = <&T as core::fmt::Display>::fmt;
      v15 = (char **)&unk_127D88;
      v16 = 2LL;
      v17 = (__int64 **)&v19;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      v22 = &v21;
      v23 = <std::io::error::Error as core::fmt::Display>::fmt;
      v15 = (char **)&unk_127F30;
      v16 = 2LL;
      v17 = &v22;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      std::process::exit(1);
    }
  }
  return uucore::read_yes();
}
