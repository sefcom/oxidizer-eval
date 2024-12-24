__int64 __fastcall uu_factor::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(); // rdx
  __int64 (__fastcall *v8)(); // rdx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-A0h]
  char **v13; // [rsp+10h] [rbp-98h] BYREF
  __int64 v14; // [rsp+18h] [rbp-90h]
  __int128 *v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int128 *v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+48h] [rbp-60h]
  __int128 **v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-50h]
  __int128 v22; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp-38h]
  __int128 v24; // [rsp+80h] [rbp-28h] BYREF
  __int64 v25; // [rsp+90h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_factor::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v11 = v3;
  v12 = v4;
  *(_QWORD *)&v22 = &v11;
  *((_QWORD *)&v22 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v13 = (char **)&unk_19A10;
  v14 = 1LL;
  v17 = 0LL;
  v15 = &v22;
  v16 = 1LL;
  core::option::Option<T>::map_or_else(&v24, &v13);
  v22 = v24;
  v5 = v25;
  v23 = v25;
  v6 = *((_QWORD *)&v24 + 1);
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v24 + 1)) )
  {
    v18 = (__int128 *)uucore::util_name(v6, v5);
    v19 = v7;
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v13 = (char **)&unk_18AD68;
    v14 = 2LL;
    v17 = 0LL;
    v15 = (__int128 *)&v20;
    v16 = 1LL;
    std::io::stdio::_eprint(&v13);
    v18 = &v22;
    v19 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = (char **)&unk_18AD88;
    v14 = 2LL;
    v17 = 0LL;
    v15 = (__int128 *)&v18;
    v16 = 1LL;
    std::io::stdio::_eprint(&v13);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v12 + 104))(v11) )
  {
    v18 = (__int128 *)uucore::execution_phrase();
    v19 = v8;
    v20 = &v18;
    v21 = <&T as core::fmt::Display>::fmt;
    v13 = &off_18ADA8;
    v14 = 2LL;
    v17 = 0LL;
    v15 = (__int128 *)&v20;
    v16 = 1LL;
    std::io::stdio::_eprint(&v13);
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(v12 + 96))(v11);
  core::ptr::drop_in_place<alloc::string::String>(&v22);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v11, v12);
  return v9;
}
