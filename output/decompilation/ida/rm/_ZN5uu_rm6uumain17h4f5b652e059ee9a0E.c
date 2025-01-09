__int64 __fastcall uu_rm::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(); // rdx
  __int64 (__fastcall *v10)(); // rdx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-A0h]
  char **v15; // [rsp+10h] [rbp-98h] BYREF
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int128 *v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int128 *v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-60h]
  __int128 **v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-50h]
  __int128 v24; // [rsp+60h] [rbp-48h] BYREF
  __int64 v25; // [rsp+70h] [rbp-38h]
  __int128 v26; // [rsp+80h] [rbp-28h] BYREF
  __int64 v27; // [rsp+90h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_rm::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v13 = v3;
  v14 = v4;
  *(_QWORD *)&v24 = &v13;
  *((_QWORD *)&v24 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v15 = (char **)&unk_15190;
  v16 = 1LL;
  v19 = 0LL;
  v17 = &v24;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(&v26, &v15);
  v24 = v26;
  v5 = v27;
  v25 = v27;
  v6 = *((_QWORD *)&v26 + 1);
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v26 + 1)) )
  {
    v20 = (__int128 *)uucore::util_name(v6, v5, v7, v8);
    v21 = v9;
    v22 = &v20;
    v23 = <&T as core::fmt::Display>::fmt;
    v15 = (char **)&unk_124EC8;
    v16 = 2LL;
    v19 = 0LL;
    v17 = (__int128 *)&v22;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
    v20 = &v24;
    v21 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = (char **)&unk_124EE8;
    v16 = 2LL;
    v19 = 0LL;
    v17 = (__int128 *)&v20;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v14 + 104))(v13) )
  {
    v20 = (__int128 *)uucore::execution_phrase();
    v21 = v10;
    v22 = &v20;
    v23 = <&T as core::fmt::Display>::fmt;
    v15 = &off_124F08;
    v16 = 2LL;
    v19 = 0LL;
    v17 = (__int128 *)&v22;
    v18 = 1LL;
    std::io::stdio::_eprint(&v15);
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(v14 + 96))(v13);
  core::ptr::drop_in_place<alloc::string::String>(&v24);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v13, v14);
  return v11;
}
