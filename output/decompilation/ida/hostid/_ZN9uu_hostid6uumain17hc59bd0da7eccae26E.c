__int64 __fastcall uu_hostid::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int128 v5; // rax
  __int128 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-98h] BYREF
  __int64 v10; // [rsp+8h] [rbp-90h]
  char **v11; // [rsp+10h] [rbp-88h] BYREF
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int128 *v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-28h]
  __int128 *v20; // [rsp+78h] [rbp-20h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+80h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_hostid::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v9 = v3;
  v10 = v4;
  *(_QWORD *)&v16 = &v9;
  *((_QWORD *)&v16 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v11 = (char **)&unk_16D50;
  v12 = 1LL;
  v15 = 0LL;
  v13 = &v16;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(&v18, &v11);
  v16 = v18;
  v17 = v19;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal() )
  {
    *(_QWORD *)&v5 = uucore::util_name();
    v18 = v5;
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v11 = (char **)&unk_D49D8;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v20;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
    *(_QWORD *)&v18 = &v16;
    *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = (char **)&unk_D49F8;
    v12 = 2LL;
    v15 = 0LL;
    v13 = &v18;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v10 + 96))(v9) )
  {
    *(_QWORD *)&v6 = uucore::execution_phrase();
    v18 = v6;
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v11 = &off_D4A18;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v20;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v10 + 88))(v9);
  core::ptr::drop_in_place<alloc::string::String>(v16, *((_QWORD *)&v16 + 1));
  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v9, v10);
  return v7;
}