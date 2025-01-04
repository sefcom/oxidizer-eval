        __int64 a6)
{
  __int64 (__fastcall *v9)(); // rdx
  __int64 v10; // rax
  char yes; // bp
  __int64 (__fastcall *v12)(); // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rdx
  __int64 (__fastcall *v15)(); // rdx
  char **v16; // [rsp+8h] [rbp-130h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+10h] [rbp-128h]
  char ***v18; // [rsp+18h] [rbp-120h]
  __int128 v19; // [rsp+20h] [rbp-118h]
  __int64 (__fastcall *v20)(); // [rsp+30h] [rbp-108h]
  char **v21; // [rsp+38h] [rbp-100h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+40h] [rbp-F8h]
  char ***v23; // [rsp+48h] [rbp-F0h]
  __int64 v24; // [rsp+50h] [rbp-E8h]
  __int64 v25; // [rsp+58h] [rbp-E0h]
  char ***v26; // [rsp+68h] [rbp-D0h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+70h] [rbp-C8h]
  char ***v28; // [rsp+78h] [rbp-C0h]
  char v29; // [rsp+80h] [rbp-B8h]
  __int64 v30; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-98h]
  __int128 v33; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-78h]
  __int128 v35; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-60h]
  __int128 v37; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-48h]
  _QWORD v39[7]; // [rsp+100h] [rbp-38h] BYREF

  if ( !(_BYTE)a2 )
  {
LABEL_13:
    *(_QWORD *)a1 = 13LL;
    return;
  }
  if ( (unsigned __int8)a2 == 1 )
  {
    uu_cp::file_mode_for_interactive_overwrite(&v33);
    if ( (_QWORD)v33 == 0x8000000000000000LL )
    {
      v21 = (char **)uucore::util_name(&v33, a3);
      v22 = v12;
      v26 = &v21;
      v27 = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_1B5CC8;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v18 = (char ***)&v26;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v21 = (char **)(&dword_0 + 1);
      v22 = a3;
      v23 = a4;
      LOBYTE(v24) = 1;
      v26 = &v21;
      v27 = <os_display::Quoted as core::fmt::Display>::fmt;
      v16 = &off_1B5E48;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v18 = (char ***)&v26;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v16 = (char **)&off_1B5E38;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v18 = (char ***)&byte_8;
      v19 = 0LL;
      std::io::stdio::_eprint(&v16);
      *(_QWORD *)&v37 = &std::io::stdio::stderr::INSTANCE;
      v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v37);
      if ( v13 )
      {
        *(_QWORD *)&v31 = v13;
        v21 = (char **)uucore::util_name(&v37, a3);
        v22 = v15;
        v26 = &v21;
        v27 = <&T as core::fmt::Display>::fmt;
        v16 = (char **)&unk_1B5CC8;
        v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v18 = (char ***)&v26;
        v19 = 1uLL;
        std::io::stdio::_eprint(&v16);
        v21 = (char **)&v31;
        v22 = <std::io::error::Error as core::fmt::Display>::fmt;
        v16 = (char **)&unk_1B5CE8;
        v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v18 = &v21;
        v19 = 1uLL;
        std::io::stdio::_eprint(&v16);
        std::process::exit(1);
      }
      yes = uucore::read_yes();
      if ( (_QWORD)v33 != 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        core::ptr::drop_in_place<alloc::string::String>(&v35);
      }
    }
    else
    {
      v38 = v34;
      v37 = v33;
      v32 = v36;
      v31 = v35;
      v21 = (char **)uucore::util_name(&v33, a3);
      v22 = v9;
      v26 = &v21;
      v27 = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_1B5CC8;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v18 = (char ***)&v26;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v26 = (char ***)(&dword_0 + 1);
      v27 = a3;
      v28 = a4;
      v29 = 1;
      v16 = (char **)&v26;
      v17 = <os_display::Quoted as core::fmt::Display>::fmt;
      v18 = (char ***)&v37;
      *(_QWORD *)&v19 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v19 + 1) = &v31;
      v20 = <alloc::string::String as core::fmt::Display>::fmt;
      v21 = &off_1B5DF8;
      v22 = (__int64 (__fastcall *)())&byte_4;
      v25 = 0LL;
      v23 = &v16;
      v24 = 3LL;
      std::io::stdio::_eprint(&v21);
      v16 = (char **)&off_1B5E38;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v18 = (char ***)&byte_8;
      v19 = 0LL;
      std::io::stdio::_eprint(&v16);
      v39[0] = &std::io::stdio::stderr::INSTANCE;
      v10 = <std::io::stdio::Stderr as std::io::Write>::flush(v39);
      if ( v10 )
      {
        v30 = v10;
        v21 = (char **)uucore::util_name(v39, a3);
        v22 = v14;
        v26 = &v21;
        v27 = <&T as core::fmt::Display>::fmt;
        v16 = (char **)&unk_1B5CC8;
        v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v18 = (char ***)&v26;
        v19 = 1uLL;
        std::io::stdio::_eprint(&v16);
        v21 = (char **)&v30;
        v22 = <std::io::error::Error as core::fmt::Display>::fmt;
        v16 = (char **)&unk_1B5CE8;
        v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v18 = &v21;
        v19 = 1uLL;
        std::io::stdio::_eprint(&v16);
        std::process::exit(1);
      }
      yes = uucore::read_yes();
      core::ptr::drop_in_place<alloc::string::String>(&v31);
      core::ptr::drop_in_place<alloc::string::String>(&v37);
    }
    if ( yes )
      goto LABEL_13;
    *(_QWORD *)a1 = 8LL;
    *(_BYTE *)(a1 + 8) = 1;
  }
  else
  {
    if ( (_BYTE)a5 )
    {
      v21 = (char **)(&dword_0 + 1);
      v22 = a3;
      v23 = a4;
      LOBYTE(v24) = 1;
      *(_QWORD *)&v33 = &v21;
      *((_QWORD *)&v33 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v16 = &off_1B5DD8;
      v17 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v18 = (char ***)&v33;
      v19 = 1uLL;
      std::io::stdio::_print(&v16, a2, a3, a4, a5, a6);
    }
    *(_QWORD *)a1 = 8LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
}
