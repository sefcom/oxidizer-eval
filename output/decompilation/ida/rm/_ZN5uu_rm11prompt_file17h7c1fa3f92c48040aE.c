__int64 __fastcall uu_rm::prompt_file(__int64 (__fastcall *a1)(), __int64 *a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int yes; // ebp
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall **v14)(); // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v18; // rbp
  __int64 (__fastcall *v19)(); // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(); // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(); // rdx
  char ****v26; // [rsp+0h] [rbp-158h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+8h] [rbp-150h]
  char **v28; // [rsp+10h] [rbp-148h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+18h] [rbp-140h]
  char ****v30; // [rsp+20h] [rbp-138h]
  __int128 v31; // [rsp+28h] [rbp-130h]
  char ***v32; // [rsp+40h] [rbp-118h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+48h] [rbp-110h]
  __int64 *v34; // [rsp+50h] [rbp-108h]
  __int64 (__fastcall *v35)(); // [rsp+58h] [rbp-100h]
  char **v36; // [rsp+60h] [rbp-F8h]
  __int64 v37; // [rsp+68h] [rbp-F0h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+70h] [rbp-E8h]
  char **dest; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-D8h]
  char ***v41; // [rsp+88h] [rbp-D0h]
  __int128 v42; // [rsp+90h] [rbp-C8h]
  int v43; // [rsp+B0h] [rbp-A8h]
  __int64 v44; // [rsp+C8h] [rbp-90h]

  v8 = a4;
  LOBYTE(yes) = 1;
  if ( a4 == 2 )
  {
    std::fs::symlink_metadata(&dest);
    v9 = 2LL;
    v36 = dest;
    if ( dest != (char **)((char *)&dword_0 + 2) )
    {
      if ( (v43 & 0xF000) == 0xA000 )
      {
        v32 = (char ***)uucore::util_name(2LL, a1);
        v33 = v10;
        v26 = &v32;
        v27 = (__int64 (__fastcall **)())<&T as core::fmt::Display>::fmt;
        v28 = (char **)&unk_EA4A0;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v30 = (char ****)&v26;
        v31 = 1uLL;
        std::io::stdio::_eprint(&v28);
        v32 = (char ***)(&dword_0 + 1);
        v33 = a1;
        v34 = a2;
        LOBYTE(v35) = 1;
        v26 = &v32;
        v27 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
        v28 = &off_EA610;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v30 = (char ****)&v26;
        v31 = 1uLL;
        std::io::stdio::_eprint(&v28);
        v28 = (char **)&off_EA630;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v30 = (char ****)&byte_8;
        v31 = 0LL;
        std::io::stdio::_eprint(&v28);
        v28 = (char **)&std::io::stdio::stderr::INSTANCE;
        v11 = <std::io::stdio::Stderr as std::io::Write>::flush(&v28);
        if ( v11 )
        {
          v12 = uu_rm::prompt_file::{{closure}}(v11);
          if ( v12 )
          {
            v37 = v12;
            v38 = &off_EA7A8;
            v13 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v12);
            uucore::mods::error::set_exit_code(v13);
            v26 = (char ****)uucore::util_name(v13, a1);
            v27 = v14;
            v32 = (char ***)&v26;
            v33 = <&T as core::fmt::Display>::fmt;
            v34 = &v37;
            v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v28 = (char **)&unk_EA640;
            v29 = (__int64 (__fastcall *)())(&dword_0 + 3);
            v30 = &v32;
            v31 = 2uLL;
            std::io::stdio::_eprint(&v28);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v37,
              v38);
          }
        }
        yes = uucore::read_yes();
        v15 = v40;
        v16 = (__int64)v36;
        goto LABEL_14;
      }
      v9 = (__int64)v36;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v9, v40);
  }
  else if ( !a4 )
  {
    return yes;
  }
  std::fs::metadata(&dest);
  if ( dest == (char **)((char *)&dword_0 + 2) )
  {
    v15 = v40;
    v16 = 2LL;
LABEL_14:
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v16, v15);
    return yes;
  }
  v18 = v44;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v40);
  if ( a4 == 2 && uu_rm::is_writable() )
  {
    if ( v18 )
    {
      v28 = (char **)uucore::util_name(a1, a2);
      v29 = v19;
      v32 = &v28;
      v33 = <&T as core::fmt::Display>::fmt;
      dest = (char **)&unk_EA4A0;
      v40 = 2LL;
      v41 = (char ***)&v32;
      v42 = 1uLL;
      std::io::stdio::_eprint(&dest);
      v28 = (char **)(&dword_0 + 1);
      v29 = a1;
      v30 = (char ****)a2;
      LOBYTE(v31) = 1;
      v32 = &v28;
      v33 = <os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_EA690;
      v40 = 2LL;
      v41 = (char ***)&v32;
      v42 = 1uLL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&off_EA630;
      v40 = 1LL;
      v41 = (char ***)&byte_8;
      v42 = 0LL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&std::io::stdio::stderr::INSTANCE;
      v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
      if ( !v20 )
        return (unsigned int)uucore::read_yes();
      v21 = uu_rm::prompt_file::{{closure}}(v20);
      if ( !v21 )
        return (unsigned int)uucore::read_yes();
    }
    else
    {
      v28 = (char **)uucore::util_name(a1, a2);
      v29 = v22;
      v32 = &v28;
      v33 = <&T as core::fmt::Display>::fmt;
      dest = (char **)&unk_EA4A0;
      v40 = 2LL;
      v41 = (char ***)&v32;
      v42 = 1uLL;
      std::io::stdio::_eprint(&dest);
      v28 = (char **)(&dword_0 + 1);
      v29 = a1;
      v30 = (char ****)a2;
      LOBYTE(v31) = 1;
      v32 = &v28;
      v33 = <os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_EA670;
      v40 = 2LL;
      v41 = (char ***)&v32;
      v42 = 1uLL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&off_EA630;
      v40 = 1LL;
      v41 = (char ***)&byte_8;
      v42 = 0LL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&std::io::stdio::stderr::INSTANCE;
      v23 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
      if ( !v23 )
        return (unsigned int)uucore::read_yes();
      v21 = uu_rm::prompt_file::{{closure}}(v23);
      if ( !v21 )
        return (unsigned int)uucore::read_yes();
    }
    v26 = (char ****)v21;
    v27 = &off_EA7A8;
    v24 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v21);
    uucore::mods::error::set_exit_code(v24);
    v32 = (char ***)uucore::util_name(v24, a2);
    v33 = v25;
    v28 = (char **)&v32;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = (char ****)&v26;
    *(_QWORD *)&v31 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
    dest = (char **)&unk_EA640;
    v40 = 3LL;
    v41 = &v28;
    v42 = 2uLL;
    std::io::stdio::_eprint(&dest);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v26, v27);
    return (unsigned int)uucore::read_yes();
  }
  return uu_rm::prompt_file_permission_readonly(a1, a2, a3, v8);
}