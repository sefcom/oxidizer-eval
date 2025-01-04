__int64 __fastcall uu_numfmt::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(); // rdx
  __int64 (__fastcall *v6)(); // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  __int128 *v11; // [rsp+10h] [rbp-98h] BYREF
  __int64 v12; // [rsp+18h] [rbp-90h]
  __int128 *v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int128 *v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+48h] [rbp-60h]
  __int128 **v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+58h] [rbp-50h]
  __int128 v20; // [rsp+60h] [rbp-48h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  __int128 v22; // [rsp+80h] [rbp-28h] BYREF
  __int64 v23; // [rsp+90h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_numfmt::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v9 = v3;
  v10 = v4;
  *(_QWORD *)&v20 = &v9;
  *((_QWORD *)&v20 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v11 = &xmmword_16000;
  v12 = 1LL;
  v15 = 0LL;
  v13 = &v20;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(&v22, &v11);
  v20 = v22;
  v21 = v23;
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v22 + 1)) )
  {
    v16 = (__int128 *)uucore::util_name();
    v17 = v5;
    v18 = &v16;
    v19 = <&T as core::fmt::Display>::fmt;
    v11 = (__int128 *)&unk_132A30;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v18;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
    v16 = &v20;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = (__int128 *)&unk_132968;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v16;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v10 + 104))(v9) )
  {
    v16 = (__int128 *)uucore::execution_phrase();
    v17 = v6;
    v18 = &v16;
    v19 = <&T as core::fmt::Display>::fmt;
    v11 = (__int128 *)&off_132A50;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v18;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(v10 + 96))(v9);
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v9, v10);
  return v7;
}
