__int64 __fastcall uu_rm::uumain(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(); // rdx
  __int64 (__fastcall *v12)(); // rdx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-A0h]
  char **v17; // [rsp+10h] [rbp-98h] BYREF
  __int64 v18; // [rsp+18h] [rbp-90h]
  __int128 *v19; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int128 *v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+48h] [rbp-60h]
  __int128 **v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-50h]
  __int128 v26; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp-38h]
  __int128 v28; // [rsp+80h] [rbp-28h] BYREF
  __int64 v29; // [rsp+90h] [rbp-18h]

  v2 = uucore::disable_rust_signal_handlers();
  core::result::Result<T,E>::expect(v2);
  v5 = uu_rm::uumain::uumain(a1, a2, v3, v4);
  if ( !v5 )
    return uucore::mods::error::get_exit_code();
  v15 = v5;
  v16 = v6;
  *(_QWORD *)&v26 = &v15;
  *((_QWORD *)&v26 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v17 = (char **)&unk_151F0;
  v18 = 1LL;
  v21 = 0LL;
  v19 = &v26;
  v20 = 1LL;
  core::option::Option<T>::map_or_else(&v28, &v17);
  v26 = v28;
  v7 = v29;
  v27 = v29;
  v8 = *((_QWORD *)&v28 + 1);
  if ( (unsigned __int8)<alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((_QWORD *)&v28 + 1)) )
  {
    v22 = (__int128 *)uucore::util_name(v8, v7, v9, v10);
    v23 = v11;
    v24 = &v22;
    v25 = <&T as core::fmt::Display>::fmt;
    v17 = (char **)&unk_1252D8;
    v18 = 2LL;
    v21 = 0LL;
    v19 = (__int128 *)&v24;
    v20 = 1LL;
    std::io::stdio::_eprint(&v17);
    v22 = &v26;
    v23 = <alloc::string::String as core::fmt::Display>::fmt;
    v17 = (char **)&unk_1252F8;
    v18 = 2LL;
    v21 = 0LL;
    v19 = (__int128 *)&v22;
    v20 = 1LL;
    std::io::stdio::_eprint(&v17);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v16 + 104))(v15) )
  {
    v22 = (__int128 *)uucore::execution_phrase();
    v23 = v12;
    v24 = &v22;
    v25 = <&T as core::fmt::Display>::fmt;
    v17 = &off_125318;
    v18 = 2LL;
    v21 = 0LL;
    v19 = (__int128 *)&v24;
    v20 = 1LL;
    std::io::stdio::_eprint(&v17);
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(v16 + 96))(v15);
  core::ptr::drop_in_place<alloc::string::String>(&v26);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v15, v16);
  return v13;
}
