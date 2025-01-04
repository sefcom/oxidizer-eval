__int64 __fastcall uu_rm::prompt_descend(__int64 (__fastcall *a1)(), __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(); // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v9)(); // rdx
  char **v10; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-98h]
  __int64 **v12; // [rsp+18h] [rbp-90h]
  __int128 v13; // [rsp+20h] [rbp-88h]
  __int64 **v14; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+58h] [rbp-50h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  char v20; // [rsp+68h] [rbp-40h]
  _QWORD v21[7]; // [rsp+70h] [rbp-38h] BYREF

  v17 = (__int64 *)uucore::util_name(a1, a2, a3, a4);
  v18 = v4;
  v14 = &v17;
  v15 = <&T as core::fmt::Display>::fmt;
  v10 = (char **)&unk_127970;
  v11 = 2LL;
  v12 = (__int64 **)&v14;
  v13 = 1uLL;
  std::io::stdio::_eprint(&v10);
  v17 = (_QWORD *)(&dword_0 + 1);
  v18 = a1;
  v19 = a2;
  v20 = 1;
  v14 = &v17;
  v15 = <os_display::Quoted as core::fmt::Display>::fmt;
  v10 = &off_127BF8;
  v11 = 2LL;
  v12 = (__int64 **)&v14;
  v13 = 1uLL;
  std::io::stdio::_eprint(&v10);
  v10 = (char **)&off_127B08;
  v11 = 1LL;
  v12 = (__int64 **)&byte_8;
  v13 = 0LL;
  std::io::stdio::_eprint(&v10);
  v21[0] = &std::io::stdio::stderr::INSTANCE;
  v5 = <std::io::stdio::Stderr as std::io::Write>::flush(v21);
  if ( v5 )
  {
    v16 = v5;
    v17 = (__int64 *)uucore::util_name(v21, a2, v6, v7);
    v18 = v9;
    v14 = &v17;
    v15 = <&T as core::fmt::Display>::fmt;
    v10 = (char **)&unk_127970;
    v11 = 2LL;
    v12 = (__int64 **)&v14;
    v13 = 1uLL;
    std::io::stdio::_eprint(&v10);
    v17 = &v16;
    v18 = <std::io::error::Error as core::fmt::Display>::fmt;
    v10 = (char **)&unk_127B18;
    v11 = 2LL;
    v12 = &v17;
    v13 = 1uLL;
    std::io::stdio::_eprint(&v10);
    std::process::exit(1);
  }
  return uucore::read_yes();
}
