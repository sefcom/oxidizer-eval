__int64 __fastcall uu_du::StatPrinter::print_stat(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v4; // al
  __int128 *v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v11; // [rsp+18h] [rbp-E0h]
  char v12; // [rsp+28h] [rbp-D0h]
  __int128 v13; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+40h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-A8h]
  _QWORD v16[3]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v17[24]; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE v18[64]; // [rsp+B8h] [rbp-40h] BYREF

  v4 = *(_BYTE *)(a1 + 76);
  if ( v4 == 3 )
  {
    uu_du::StatPrinter::convert_size((__int64)&v10, a1, a3);
    v16[0] = &v10;
    v16[1] = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &unk_145E90;
    *((_QWORD *)&v13 + 1) = 2LL;
    v15 = 0LL;
    *(_QWORD *)&v14 = v16;
    *((_QWORD *)&v14 + 1) = 1LL;
    std::io::stdio::_print(&v13);
    v5 = &v10;
LABEL_5:
    core::ptr::drop_in_place<alloc::string::String>(v5);
    v8 = uucore::mods::display::print_verbatim(a2 + 64);
    core::result::Result<T,E>::unwrap(v8);
    *(_QWORD *)&v10 = a1 + 77;
    *((_QWORD *)&v10 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &unk_1D7A0;
    *((_QWORD *)&v13 + 1) = 1LL;
    v15 = 0LL;
    *(_QWORD *)&v14 = &v10;
    *((_QWORD *)&v14 + 1) = 1LL;
    std::io::stdio::_print(&v13);
    return 0LL;
  }
  uu_du::get_time_secs(&v10, v4, a2);
  if ( (_QWORD)v10 == 5LL )
  {
    v7 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(
           0LL,
           0LL,
           *((_QWORD *)&v10 + 1),
           0LL);
    <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(
      v18,
      v7);
    v10 = *(_OWORD *)(a1 + 56);
    v11 = 8uLL;
    v12 = 0;
    chrono::datetime::DateTime<Tz>::format_with_items(&v13, v18, &v10);
    <T as alloc::string::SpecToString>::spec_to_string(v17, &v13);
    core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v13);
    uu_du::StatPrinter::convert_size((__int64)v16, a1, a3);
    *(_QWORD *)&v10 = v16;
    *((_QWORD *)&v10 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = v17;
    *((_QWORD *)&v11 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v13 = &unk_145E60;
    *((_QWORD *)&v13 + 1) = 3LL;
    v15 = 0LL;
    *(_QWORD *)&v14 = &v10;
    *((_QWORD *)&v14 + 1) = 2LL;
    std::io::stdio::_print(&v13);
    core::ptr::drop_in_place<alloc::string::String>(v16);
    v5 = (__int128 *)v17;
    goto LABEL_5;
  }
  v14 = v11;
  v13 = v10;
  return alloc::boxed::Box<T>::new(&v13);
}