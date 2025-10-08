__int64 __fastcall uu_rm::prompt_descend(__int64 (__fastcall *a1)(), __int64 *a2)
{
  __int64 (__fastcall *v2)(); // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(); // rdx
  char **v8; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h]
  _QWORD **v10; // [rsp+18h] [rbp-90h]
  __int128 v11; // [rsp+20h] [rbp-88h]
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+40h] [rbp-68h]
  _QWORD **v14; // [rsp+48h] [rbp-60h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+50h] [rbp-58h]
  _QWORD *v16; // [rsp+58h] [rbp-50h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-48h]
  __int64 *v18; // [rsp+68h] [rbp-40h]
  __int64 (__fastcall *v19)(); // [rsp+70h] [rbp-38h]

  v16 = (_QWORD *)uucore::util_name(a1, a2);
  v17 = v2;
  v14 = &v16;
  v15 = <&T as core::fmt::Display>::fmt;
  v8 = (char **)&unk_EA4A0;
  v9 = 2LL;
  v10 = &v14;
  v11 = 1uLL;
  std::io::stdio::_eprint(&v8);
  v16 = (_QWORD *)(&dword_0 + 1);
  v17 = a1;
  v18 = a2;
  LOBYTE(v19) = 1;
  v14 = &v16;
  v15 = <os_display::Quoted as core::fmt::Display>::fmt;
  v8 = &off_EA768;
  v9 = 2LL;
  v10 = &v14;
  v11 = 1uLL;
  std::io::stdio::_eprint(&v8);
  v8 = (char **)&off_EA630;
  v9 = 1LL;
  v10 = (_QWORD **)&byte_8;
  v11 = 0LL;
  std::io::stdio::_eprint(&v8);
  v8 = (char **)&std::io::stdio::stderr::INSTANCE;
  v3 = <std::io::stdio::Stderr as std::io::Write>::flush(&v8);
  if ( v3 )
  {
    v4 = uu_rm::prompt_file::{{closure}}(v3);
    if ( v4 )
    {
      v12 = v4;
      v13 = &off_EA7A8;
      v5 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v4);
      uucore::mods::error::set_exit_code(v5);
      v14 = (_QWORD **)uucore::util_name(v5, a2);
      v15 = v6;
      v16 = &v14;
      v17 = <&T as core::fmt::Display>::fmt;
      v18 = &v12;
      v19 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v8 = (char **)&unk_EA640;
      v9 = 3LL;
      v10 = &v16;
      v11 = 2uLL;
      std::io::stdio::_eprint(&v8);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, v13);
    }
  }
  return uucore::read_yes();
}