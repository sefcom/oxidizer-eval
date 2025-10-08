__int64 __fastcall uu_cp::OverwriteMode::verify(__int64 a1, char a2, __int64 a3, char ***a4, char a5)
{
  __int64 (__fastcall *v9)(); // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // rax
  __int64 result; // rax
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall **v19)(); // rdx
  char yes; // bp
  char **v21; // [rsp+0h] [rbp-128h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+8h] [rbp-120h]
  char ***v23; // [rsp+10h] [rbp-118h]
  __int128 v24; // [rsp+18h] [rbp-110h]
  __int64 (__fastcall *v25)(); // [rsp+28h] [rbp-100h]
  char **v26; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+38h] [rbp-F0h]
  char ***v28; // [rsp+40h] [rbp-E8h]
  __int64 (__fastcall *v29)(); // [rsp+48h] [rbp-E0h]
  __int64 v30; // [rsp+50h] [rbp-D8h]
  _QWORD *v31; // [rsp+60h] [rbp-C8h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+68h] [rbp-C0h]
  char ***v33; // [rsp+70h] [rbp-B8h]
  char v34; // [rsp+78h] [rbp-B0h]
  __int64 v35; // [rsp+80h] [rbp-A8h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+88h] [rbp-A0h]
  __int128 v37; // [rsp+90h] [rbp-98h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-88h]
  __int128 v39; // [rsp+A8h] [rbp-80h]
  __int64 v40; // [rsp+B8h] [rbp-70h]
  __int128 v41; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-58h]
  __int128 v43; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-38h]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      uu_cp::file_mode_for_interactive_overwrite(&v37, a3);
      if ( (_QWORD)v37 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<(alloc::string::String,alloc::string::String)>>(&v37);
        v26 = (char **)uucore::util_name(&v37, a3);
        v27 = v9;
        *(_QWORD *)&v37 = &v26;
        *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
        v21 = (char **)&unk_15E700;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v23 = (char ***)&v37;
        v24 = 1uLL;
        std::io::stdio::_eprint(&v21);
        v26 = (char **)(&dword_0 + 1);
        v27 = (__int64 (__fastcall *)())a3;
        v28 = a4;
        LOBYTE(v29) = 1;
        *(_QWORD *)&v37 = &v26;
        *((_QWORD *)&v37 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v21 = &off_15EB78;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v23 = (char ***)&v37;
        v24 = 1uLL;
        std::io::stdio::_eprint(&v21);
        v21 = (char **)&off_15EB68;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v23 = (char ***)&byte_8;
        v24 = 0LL;
        std::io::stdio::_eprint(&v21);
        v21 = (char **)&std::io::stdio::stderr::INSTANCE;
        v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v21);
        if ( v10 )
        {
          v11 = uu_cp::OverwriteMode::verify::{{closure}}(v10);
          if ( v11 )
          {
            v31 = (_QWORD *)v11;
            v32 = &off_15EEC0;
            v12 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v11);
            uucore::mods::error::set_exit_code(v12);
            *(_QWORD *)&v13 = uucore::util_name(v12, a3);
            v37 = v13;
            v26 = (char **)&v37;
            v27 = <&T as core::fmt::Display>::fmt;
            v28 = (char ***)&v31;
            v29 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v21 = (char **)&unk_15E660;
            v22 = (__int64 (__fastcall *)())(&dword_0 + 3);
            v23 = &v26;
            v24 = 2uLL;
            std::io::stdio::_eprint(&v21);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v31,
              v32);
          }
        }
        result = uucore::read_yes();
        if ( (_BYTE)result )
        {
LABEL_8:
          *(_QWORD *)a1 = 0x800000000000000CLL;
          return result;
        }
      }
      else
      {
        v42 = v38;
        v41 = v37;
        v44 = v40;
        v43 = v39;
        v26 = (char **)uucore::util_name(&v37, a3);
        v27 = v15;
        v31 = &v26;
        v32 = (__int64 (__fastcall **)())<&T as core::fmt::Display>::fmt;
        v21 = (char **)&unk_15E700;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v23 = (char ***)&v31;
        v24 = 1uLL;
        std::io::stdio::_eprint(&v21);
        v31 = (_QWORD *)(&dword_0 + 1);
        v32 = (__int64 (__fastcall **)())a3;
        v33 = a4;
        v34 = 1;
        v21 = (char **)&v31;
        v22 = <os_display::Quoted as core::fmt::Display>::fmt;
        v23 = (char ***)&v41;
        *(_QWORD *)&v24 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v24 + 1) = &v43;
        v25 = <alloc::string::String as core::fmt::Display>::fmt;
        v26 = &off_15EB28;
        v27 = (__int64 (__fastcall *)())&byte_4;
        v30 = 0LL;
        v28 = &v21;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
        std::io::stdio::_eprint(&v26);
        v21 = (char **)&off_15EB68;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v23 = (char ***)&byte_8;
        v24 = 0LL;
        std::io::stdio::_eprint(&v21);
        v21 = (char **)&std::io::stdio::stderr::INSTANCE;
        v16 = <std::io::stdio::Stderr as std::io::Write>::flush(&v21);
        if ( v16 )
        {
          v17 = uu_cp::OverwriteMode::verify::{{closure}}(v16);
          if ( v17 )
          {
            v35 = v17;
            v36 = &off_15EEC0;
            v18 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v17);
            uucore::mods::error::set_exit_code(v18);
            v31 = (_QWORD *)uucore::util_name(v18, a3);
            v32 = v19;
            v26 = (char **)&v31;
            v27 = <&T as core::fmt::Display>::fmt;
            v28 = (char ***)&v35;
            v29 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v21 = (char **)&unk_15E660;
            v22 = (__int64 (__fastcall *)())(&dword_0 + 3);
            v23 = &v26;
            v24 = 2uLL;
            std::io::stdio::_eprint(&v21);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v35,
              v36);
          }
        }
        yes = uucore::read_yes();
        core::ptr::drop_in_place<alloc::string::String>(&v43);
        result = core::ptr::drop_in_place<alloc::string::String>(&v41);
        if ( yes )
          goto LABEL_8;
      }
      *(_QWORD *)a1 = 0x8000000000000007LL;
      *(_BYTE *)(a1 + 8) = 1;
    }
    else
    {
      if ( a5 )
      {
        v26 = (char **)(&dword_0 + 1);
        v27 = (__int64 (__fastcall *)())a3;
        v28 = a4;
        LOBYTE(v29) = 1;
        *(_QWORD *)&v37 = &v26;
        *((_QWORD *)&v37 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        v21 = &off_15EB08;
        v22 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v23 = (char ***)&v37;
        v24 = 1uLL;
        std::io::stdio::_print(&v21);
      }
      result = 0x8000000000000007LL;
      *(_QWORD *)a1 = 0x8000000000000007LL;
      *(_BYTE *)(a1 + 8) = 0;
    }
  }
  else
  {
    result = 0x800000000000000CLL;
    *(_QWORD *)a1 = 0x800000000000000CLL;
  }
  return result;
}