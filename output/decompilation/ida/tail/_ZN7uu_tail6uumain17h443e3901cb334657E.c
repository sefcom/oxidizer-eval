__int64 __fastcall uu_tail::uumain(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(); // rdx
  __int64 (__fastcall *v7)(); // rdx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-A0h]
  __int128 *v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+18h] [rbp-90h]
  __int128 *v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int64 v16; // [rsp+30h] [rbp-78h]
  __int128 *v17; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-60h]
  __int128 **v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+58h] [rbp-50h]
  __int128 v21; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]
  __int128 v23; // [rsp+80h] [rbp-28h] BYREF
  __int64 v24; // [rsp+90h] [rbp-18h]

  v1 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v1);
  v2 = uu_tail::uumain::uumain();
  if ( !v2 )
    return uucore::mods::error::get_exit_code(a1);
  v10 = v2;
  v11 = v3;
  *(_QWORD *)&v21 = &v10;
  *((_QWORD *)&v21 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v12 = &xmmword_1F5B0;
  v13 = 1LL;
  v16 = 0LL;
  v14 = &v21;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(&v23, &v12);
  v21 = v23;
  v4 = v24;
  v22 = v24;
  v5 = *((_QWORD *)&v23 + 1);
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v23 + 1)) )
  {
    v17 = (__int128 *)uucore::util_name(v5, v4);
    v18 = v6;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = (__int128 *)&unk_1B8558;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    v17 = &v21;
    v18 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = (__int128 *)&unk_1B8578;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v17;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v11 + 104))(v10) )
  {
    v17 = (__int128 *)uucore::execution_phrase();
    v18 = v7;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = (__int128 *)&off_1B8598;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(v11 + 96))(v10);
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v10, v11);
  return v8;
}
