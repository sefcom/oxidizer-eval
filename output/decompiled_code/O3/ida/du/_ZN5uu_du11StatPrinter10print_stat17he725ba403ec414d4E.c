__int64 __fastcall uu_du::StatPrinter::print_stat(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  char v5; // al
  __int128 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+18h] [rbp-D0h]
  __int128 v12; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-B0h]
  __int64 v14; // [rsp+48h] [rbp-A0h]
  _QWORD v15[3]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v16[24]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v17[64]; // [rsp+A8h] [rbp-40h] BYREF

  v5 = *(_BYTE *)(a1 + 76);
  if ( v5 == 3 )
  {
    uu_du::StatPrinter::convert_size((__int64)&v10, a1, a3);
    v15[0] = &v10;
    v15[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &unk_184100;
    *((_QWORD *)&v12 + 1) = 2LL;
    v14 = 0LL;
    *(_QWORD *)&v13 = v15;
    *((_QWORD *)&v13 + 1) = 1LL;
    std::io::stdio::_print(&v12);
    v6 = &v10;
LABEL_5:
    core::ptr::drop_in_place<alloc::string::String>(v6);
    v8 = uucore::mods::display::print_verbatim(a2 + 8);
    core::result::Result<T,E>::unwrap(v8);
    *(_QWORD *)&v10 = a1 + 77;
    *((_QWORD *)&v10 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &xmmword_EE80;
    *((_QWORD *)&v12 + 1) = 1LL;
    v14 = 0LL;
    *(_QWORD *)&v13 = &v10;
    *((_QWORD *)&v13 + 1) = 1LL;
    std::io::stdio::_print(&v12);
    return 0LL;
  }
  uu_du::get_time_secs((__int64)&v10, v5, a2);
  if ( (_QWORD)v10 == 5LL )
  {
    v7 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
           0LL,
           0LL,
           *((_QWORD *)&v10 + 1),
           0LL);
    <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(
      v17,
      v7);
    v10 = *(_OWORD *)(a1 + 56);
    v11 = 8uLL;
    chrono::datetime::DateTime<Tz>::format_with_items(&v12, v17, &v10);
    <T as alloc::string::ToString>::to_string(v16, &v12);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v12);
    uu_du::StatPrinter::convert_size((__int64)v15, a1, a3);
    *(_QWORD *)&v10 = v15;
    *((_QWORD *)&v10 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = v16;
    *((_QWORD *)&v11 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v12 = &unk_1840D0;
    *((_QWORD *)&v12 + 1) = 3LL;
    v14 = 0LL;
    *(_QWORD *)&v13 = &v10;
    *((_QWORD *)&v13 + 1) = 2LL;
    std::io::stdio::_print(&v12);
    core::ptr::drop_in_place<alloc::string::String>(v15);
    v6 = (__int128 *)v16;
    goto LABEL_5;
  }
  v13 = v11;
  v12 = v10;
  return alloc::boxed::Box<T>::new(&v12);
}
