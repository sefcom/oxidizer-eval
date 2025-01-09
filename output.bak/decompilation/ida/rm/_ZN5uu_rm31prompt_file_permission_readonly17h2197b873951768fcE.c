__int64 __fastcall uu_rm::prompt_file_permission_readonly(__int64 (__fastcall *a1)(), __int64 a2)
{
  unsigned int yes; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(); // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(); // rdx
  __int64 (__fastcall *v15)(); // rdx
  char **v16; // [rsp+8h] [rbp-150h] BYREF
  __int64 v17; // [rsp+10h] [rbp-148h]
  __int64 **v18; // [rsp+18h] [rbp-140h]
  __int128 v19; // [rsp+20h] [rbp-138h]
  __int64 **v20; // [rsp+38h] [rbp-120h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+40h] [rbp-118h]
  __int64 v22; // [rsp+48h] [rbp-110h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-108h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+58h] [rbp-100h]
  __int64 v25; // [rsp+60h] [rbp-F8h]
  char v26; // [rsp+68h] [rbp-F0h]
  void *v27; // [rsp+70h] [rbp-E8h] BYREF
  _DWORD v28[14]; // [rsp+78h] [rbp-E0h] BYREF
  char v29; // [rsp+B0h] [rbp-A8h]
  __int64 v30; // [rsp+C8h] [rbp-90h]

  std::fs::metadata(v28, a1, a2);
  if ( v28[0] == 2 )
    goto LABEL_2;
  LOBYTE(yes) = 1;
  if ( (v29 & 0x92) != 0 )
    goto LABEL_5;
  if ( v30 )
  {
LABEL_2:
    v23 = (__int64 *)uucore::util_name(v28, a1, v3, v4);
    v24 = v5;
    v20 = &v23;
    v21 = <&T as core::fmt::Display>::fmt;
    v16 = (char **)&unk_127970;
    v17 = 2LL;
    v18 = (__int64 **)&v20;
    v19 = 1uLL;
    std::io::stdio::_eprint(&v16);
    v23 = (_QWORD *)(&dword_0 + 1);
    v24 = a1;
    v25 = a2;
    v26 = 1;
    v20 = &v23;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    v16 = &off_127B98;
    v17 = 2LL;
    v18 = (__int64 **)&v20;
    v19 = 1uLL;
    std::io::stdio::_eprint(&v16);
    v16 = (char **)&off_127B08;
    v17 = 1LL;
    v18 = (__int64 **)&byte_8;
    v19 = 0LL;
    std::io::stdio::_eprint(&v16);
    v27 = &std::io::stdio::stderr::INSTANCE;
    v6 = <std::io::stdio::Stderr as std::io::Write>::flush(&v27);
    if ( v6 )
    {
      v22 = v6;
      v23 = (__int64 *)uucore::util_name(&v27, a1, v7, v8);
      v24 = v15;
      v20 = &v23;
      v21 = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_127970;
      v17 = 2LL;
      v18 = (__int64 **)&v20;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v23 = &v22;
      v24 = <std::io::error::Error as core::fmt::Display>::fmt;
      v16 = (char **)&unk_127B18;
      v17 = 2LL;
      v18 = &v23;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      std::process::exit(1);
    }
  }
  else
  {
    v23 = (__int64 *)uucore::util_name(v28, a1, v3, v4);
    v24 = v10;
    v20 = &v23;
    v21 = <&T as core::fmt::Display>::fmt;
    v16 = (char **)&unk_127970;
    v17 = 2LL;
    v18 = (__int64 **)&v20;
    v19 = 1uLL;
    std::io::stdio::_eprint(&v16);
    v23 = (_QWORD *)(&dword_0 + 1);
    v24 = a1;
    v25 = a2;
    v26 = 1;
    v20 = &v23;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    v16 = &off_127B78;
    v17 = 2LL;
    v18 = (__int64 **)&v20;
    v19 = 1uLL;
    std::io::stdio::_eprint(&v16);
    v16 = (char **)&off_127B08;
    v17 = 1LL;
    v18 = (__int64 **)&byte_8;
    v19 = 0LL;
    std::io::stdio::_eprint(&v16);
    v27 = &std::io::stdio::stderr::INSTANCE;
    v11 = <std::io::stdio::Stderr as std::io::Write>::flush(&v27);
    if ( v11 )
    {
      v22 = v11;
      v23 = (__int64 *)uucore::util_name(&v27, a1, v12, v13);
      v24 = v14;
      v20 = &v23;
      v21 = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_127970;
      v17 = 2LL;
      v18 = (__int64 **)&v20;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v23 = &v22;
      v24 = <std::io::error::Error as core::fmt::Display>::fmt;
      v16 = (char **)&unk_127B18;
      v17 = 2LL;
      v18 = &v23;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      std::process::exit(1);
    }
  }
  yes = uucore::read_yes();
LABEL_5:
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v28);
  return yes;
}
