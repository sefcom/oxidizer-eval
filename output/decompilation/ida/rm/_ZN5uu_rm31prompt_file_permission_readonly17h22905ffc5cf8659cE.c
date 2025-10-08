__int64 __fastcall uu_rm::prompt_file_permission_readonly(char ***a1, char ***a2, char a3, unsigned int yes)
{
  char is_terminal; // r13
  char ***p_dest; // rdi
  char ***v9; // rsi
  char **v10; // r14
  __int64 v11; // rbx
  bool v12; // al
  __int64 v13; // r13
  __int64 (__fastcall *v14)(); // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rdx
  __int64 (__fastcall *v20)(); // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(); // rdx
  __int64 v25; // [rsp+8h] [rbp-120h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+10h] [rbp-118h]
  _QWORD **v27; // [rsp+18h] [rbp-110h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+20h] [rbp-108h]
  _QWORD *v29; // [rsp+28h] [rbp-100h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+30h] [rbp-F8h]
  __int64 *v31; // [rsp+38h] [rbp-F0h]
  __int64 (__fastcall *v32)(); // [rsp+40h] [rbp-E8h]
  char **dest; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-D8h]
  _QWORD *v35; // [rsp+58h] [rbp-D0h]
  __int128 v36; // [rsp+60h] [rbp-C8h]
  __int64 v37; // [rsp+98h] [rbp-90h]

  if ( a3 == 2 || (is_terminal = 1, (a3 & 1) == 0) )
  {
    std::io::stdio::stdin();
    is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
  }
  p_dest = &dest;
  v9 = a1;
  std::fs::metadata(&dest);
  v10 = dest;
  v11 = v34;
  v12 = (_BYTE)yes == 3;
  LOBYTE(yes) = 1;
  if ( (((unsigned __int8)is_terminal ^ 1) & v12) == 0 )
  {
    if ( dest == (char **)((char *)&dword_0 + 2) )
      goto LABEL_8;
    v13 = v37;
    p_dest = a1;
    v9 = a2;
    if ( !uu_rm::is_writable() )
    {
      if ( !v13 )
      {
        v29 = (_QWORD *)uucore::util_name(a1, a2);
        v30 = v20;
        v27 = &v29;
        v28 = <&T as core::fmt::Display>::fmt;
        dest = (char **)&unk_EA4A0;
        v34 = 2LL;
        v35 = &v27;
        v36 = 1uLL;
        std::io::stdio::_eprint(&dest);
        v29 = (_QWORD *)(&dword_0 + 1);
        v30 = (__int64 (__fastcall *)())a1;
        v31 = (__int64 *)a2;
        LOBYTE(v32) = 1;
        v27 = &v29;
        v28 = <os_display::Quoted as core::fmt::Display>::fmt;
        dest = &off_EA6B0;
        v34 = 2LL;
        v35 = &v27;
        v36 = 1uLL;
        std::io::stdio::_eprint(&dest);
        dest = (char **)&off_EA630;
        v34 = 1LL;
        v35 = (_QWORD *)&byte_8;
        v36 = 0LL;
        std::io::stdio::_eprint(&dest);
        dest = (char **)&std::io::stdio::stderr::INSTANCE;
        v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
        if ( v21 )
        {
          v22 = uu_rm::prompt_file::{{closure}}(v21);
          if ( v22 )
          {
            v25 = v22;
            v26 = &off_EA7A8;
            v23 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v22);
            uucore::mods::error::set_exit_code(v23);
            v27 = (_QWORD **)uucore::util_name(v23, a2);
            v28 = v24;
            v29 = &v27;
            v30 = <&T as core::fmt::Display>::fmt;
            v31 = &v25;
            v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            dest = (char **)&unk_EA640;
            v34 = 3LL;
            v35 = &v29;
            v36 = 2uLL;
            std::io::stdio::_eprint(&dest);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v25,
              v26);
          }
        }
        goto LABEL_11;
      }
LABEL_8:
      v29 = (_QWORD *)uucore::util_name(p_dest, v9);
      v30 = v14;
      v27 = &v29;
      v28 = <&T as core::fmt::Display>::fmt;
      dest = (char **)&unk_EA4A0;
      v34 = 2LL;
      v35 = &v27;
      v36 = 1uLL;
      std::io::stdio::_eprint(&dest);
      v29 = (_QWORD *)(&dword_0 + 1);
      v30 = (__int64 (__fastcall *)())a1;
      v31 = (__int64 *)a2;
      LOBYTE(v32) = 1;
      v27 = &v29;
      v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      dest = &off_EA6D0;
      v34 = 2LL;
      v35 = &v27;
      v36 = 1uLL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&off_EA630;
      v34 = 1LL;
      v35 = (_QWORD *)&byte_8;
      v36 = 0LL;
      std::io::stdio::_eprint(&dest);
      dest = (char **)&std::io::stdio::stderr::INSTANCE;
      v15 = <std::io::stdio::Stderr as std::io::Write>::flush(&dest);
      if ( v15 )
      {
        v16 = uu_rm::prompt_file::{{closure}}(v15);
        if ( v16 )
        {
          v25 = v16;
          v26 = &off_EA7A8;
          v17 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v16);
          uucore::mods::error::set_exit_code(v17);
          v27 = (_QWORD **)uucore::util_name(v17, v9);
          v28 = v18;
          v29 = &v27;
          v30 = <&T as core::fmt::Display>::fmt;
          v31 = &v25;
          v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          dest = (char **)&unk_EA640;
          v34 = 3LL;
          v35 = &v29;
          v36 = 2uLL;
          std::io::stdio::_eprint(&dest);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v25, v26);
        }
      }
LABEL_11:
      yes = uucore::read_yes();
    }
  }
  core::ptr::drop_in_place<(bool,core::result::Result<std::fs::Metadata,std::io::error::Error>,uu_rm::InteractiveMode)>(
    v10,
    v11);
  return yes;
}