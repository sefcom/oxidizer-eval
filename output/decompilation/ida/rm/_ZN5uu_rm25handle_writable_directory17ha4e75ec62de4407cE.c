char __fastcall uu_rm::handle_writable_directory(__int64 (__fastcall *a1)(), __int64 *a2, char a3, char a4, __int16 a5)
{
  unsigned __int8 v7; // cl
  char result; // al
  __int64 (__fastcall *v9)(); // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rdx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rdx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(); // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(); // rdx
  char **v20; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h]
  _QWORD **v22; // [rsp+18h] [rbp-90h]
  __int128 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+40h] [rbp-68h]
  _QWORD **v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+50h] [rbp-58h]
  _QWORD *v28; // [rsp+58h] [rbp-50h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+60h] [rbp-48h]
  __int64 *v30; // [rsp+68h] [rbp-40h]
  __int64 (__fastcall *v31)(); // [rsp+70h] [rbp-38h]

  if ( a3 != 2 && (a3 & 1) != 0
    || (std::io::stdio::stdin(),
        v7 = std::sys::io::is_terminal::isatty::is_terminal() ^ 1,
        result = 1,
        (v7 & (a4 == 3)) == 0) )
  {
    if ( (a5 & 0x100) != 0 )
    {
      if ( (a5 & 0x80u) != 0 )
      {
        result = 1;
        if ( a4 != 2 )
          return result;
        v28 = (_QWORD *)uucore::util_name(a1, a2);
        v29 = v16;
        v26 = &v28;
        v27 = <&T as core::fmt::Display>::fmt;
        v20 = (char **)&unk_EA4A0;
        v21 = 2LL;
        v22 = &v26;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v28 = (_QWORD *)(&dword_0 + 1);
        v29 = a1;
        v30 = a2;
        LOBYTE(v31) = 1;
        v26 = &v28;
        v27 = <os_display::Quoted as core::fmt::Display>::fmt;
        v20 = &off_EA730;
        v21 = 2LL;
        v22 = &v26;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v20 = (char **)&off_EA630;
        v21 = 1LL;
        v22 = (_QWORD **)&byte_8;
        v23 = 0LL;
        std::io::stdio::_eprint(&v20);
        v20 = (char **)&std::io::stdio::stderr::INSTANCE;
        v17 = <std::io::stdio::Stderr as std::io::Write>::flush(&v20);
        if ( !v17 )
          return uucore::read_yes();
        v11 = uu_rm::prompt_file::{{closure}}(v17);
        if ( !v11 )
          return uucore::read_yes();
      }
      else
      {
        v28 = (_QWORD *)uucore::util_name(a1, a2);
        v29 = v12;
        v26 = &v28;
        v27 = <&T as core::fmt::Display>::fmt;
        v20 = (char **)&unk_EA4A0;
        v21 = 2LL;
        v22 = &v26;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v28 = (_QWORD *)(&dword_0 + 1);
        v29 = a1;
        v30 = a2;
        LOBYTE(v31) = 1;
        v26 = &v28;
        v27 = <os_display::Quoted as core::fmt::Display>::fmt;
        v20 = &off_EA710;
        v21 = 2LL;
        v22 = &v26;
        v23 = 1uLL;
        std::io::stdio::_eprint(&v20);
        v20 = (char **)&off_EA630;
        v21 = 1LL;
        v22 = (_QWORD **)&byte_8;
        v23 = 0LL;
        std::io::stdio::_eprint(&v20);
        v20 = (char **)&std::io::stdio::stderr::INSTANCE;
        v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v20);
        if ( !v13 )
          return uucore::read_yes();
        v11 = uu_rm::prompt_file::{{closure}}(v13);
        if ( !v11 )
          return uucore::read_yes();
      }
    }
    else if ( (a5 & 0x80u) != 0 )
    {
      result = 1;
      if ( a4 != 2 )
        return result;
      v28 = (_QWORD *)uucore::util_name(a1, a2);
      v29 = v14;
      v26 = &v28;
      v27 = <&T as core::fmt::Display>::fmt;
      v20 = (char **)&unk_EA4A0;
      v21 = 2LL;
      v22 = &v26;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      v28 = (_QWORD *)(&dword_0 + 1);
      v29 = a1;
      v30 = a2;
      LOBYTE(v31) = 1;
      v26 = &v28;
      v27 = <os_display::Quoted as core::fmt::Display>::fmt;
      v20 = &off_EA6F0;
      v21 = 2LL;
      v22 = &v26;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      v20 = (char **)&off_EA630;
      v21 = 1LL;
      v22 = (_QWORD **)&byte_8;
      v23 = 0LL;
      std::io::stdio::_eprint(&v20);
      v20 = (char **)&std::io::stdio::stderr::INSTANCE;
      v15 = <std::io::stdio::Stderr as std::io::Write>::flush(&v20);
      if ( !v15 )
        return uucore::read_yes();
      v11 = uu_rm::prompt_file::{{closure}}(v15);
      if ( !v11 )
        return uucore::read_yes();
    }
    else
    {
      v28 = (_QWORD *)uucore::util_name(a1, a2);
      v29 = v9;
      v26 = &v28;
      v27 = <&T as core::fmt::Display>::fmt;
      v20 = (char **)&unk_EA4A0;
      v21 = 2LL;
      v22 = &v26;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      v28 = (_QWORD *)(&dword_0 + 1);
      v29 = a1;
      v30 = a2;
      LOBYTE(v31) = 1;
      v26 = &v28;
      v27 = <os_display::Quoted as core::fmt::Display>::fmt;
      v20 = &off_EA6F0;
      v21 = 2LL;
      v22 = &v26;
      v23 = 1uLL;
      std::io::stdio::_eprint(&v20);
      v20 = (char **)&off_EA630;
      v21 = 1LL;
      v22 = (_QWORD **)&byte_8;
      v23 = 0LL;
      std::io::stdio::_eprint(&v20);
      v20 = (char **)&std::io::stdio::stderr::INSTANCE;
      v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v20);
      if ( !v10 )
        return uucore::read_yes();
      v11 = uu_rm::prompt_file::{{closure}}(v10);
      if ( !v11 )
        return uucore::read_yes();
    }
    v24 = v11;
    v25 = &off_EA7A8;
    v18 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v11);
    uucore::mods::error::set_exit_code(v18);
    v26 = (_QWORD **)uucore::util_name(v18, a2);
    v27 = v19;
    v28 = &v26;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = &v24;
    v31 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    v20 = (char **)&unk_EA640;
    v21 = 3LL;
    v22 = &v28;
    v23 = 2uLL;
    std::io::stdio::_eprint(&v20);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v24, v25);
    return uucore::read_yes();
  }
  return result;
}