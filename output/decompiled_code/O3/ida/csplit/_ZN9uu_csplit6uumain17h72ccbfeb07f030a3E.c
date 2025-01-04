__int64 __fastcall uu_csplit::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(); // rdx
  __int64 (__fastcall *v7)(); // rdx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-A0h]
  char **v12; // [rsp+10h] [rbp-98h] BYREF
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

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_csplit::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v10 = v3;
  v11 = v4;
  *(_QWORD *)&v21 = &v10;
  *((_QWORD *)&v21 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v12 = (char **)&unk_65F80;
  v13 = 1LL;
  v16 = 0LL;
  v14 = &v21;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(&v23, &v12);
  v21 = v23;
  v5 = v24;
  v22 = v24;
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v23 + 1)) )
  {
    v17 = (__int128 *)uucore::util_name();
    v18 = v6;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = (char **)&unk_2DEC30;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    v17 = &v21;
    v18 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = (char **)&unk_2DEC50;
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
    v12 = &off_2DEC70;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(v11 + 96))(v10);
  core::ptr::drop_in_place<alloc::string::String>(&v21, v5);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v10, v11);
  return v8;
}
