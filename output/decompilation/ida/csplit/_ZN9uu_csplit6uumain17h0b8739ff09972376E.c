__int64 __fastcall uu_csplit::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int128 v6; // rax
  __int128 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+8h] [rbp-90h] BYREF
  __int64 v11; // [rsp+10h] [rbp-88h]
  const char *v12; // [rsp+18h] [rbp-80h] BYREF
  __int64 v13; // [rsp+20h] [rbp-78h]
  __int128 *v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  __int128 *v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+68h] [rbp-30h]
  __int128 v21; // [rsp+70h] [rbp-28h] BYREF
  __int64 v22; // [rsp+80h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v3 = uu_csplit::uumain::uumain(a1, a2);
  if ( !v3 )
    return uucore::mods::error::get_exit_code();
  v10 = v3;
  v11 = v4;
  *(_QWORD *)&v21 = &v10;
  *((_QWORD *)&v21 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v12 = asc_53400;
  v13 = 1LL;
  v16 = 0LL;
  v14 = &v21;
  v15 = 1LL;
  core::option::Option<T>::map_or_else(&v17, &v12);
  v21 = v17;
  v5 = v18;
  v22 = v18;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v17 + 1), v18, 1LL, 0LL) )
  {
    *(_QWORD *)&v6 = uucore::util_name();
    v17 = v6;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = (const char *)&unk_241D18;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
    *(_QWORD *)&v17 = &v21;
    *((_QWORD *)&v17 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = (const char *)&unk_241D38;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v17;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v11 + 96))(v10) )
  {
    *(_QWORD *)&v7 = uucore::execution_phrase();
    v17 = v7;
    v19 = &v17;
    v20 = <&T as core::fmt::Display>::fmt;
    v12 = (const char *)&off_241D58;
    v13 = 2LL;
    v16 = 0LL;
    v14 = (__int128 *)&v19;
    v15 = 1LL;
    std::io::stdio::_eprint(&v12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(v11 + 88))(v10);
  core::ptr::drop_in_place<alloc::string::String>(&v21, v5);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v10);
  return v8;
}