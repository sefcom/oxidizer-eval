__int64 __fastcall uu_fold::uumain::uumain::{{closure}}(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v4; // [rsp+1Fh] [rbp-E9h] BYREF
  __int128 v5; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D8h]
  __int128 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h]
  _BYTE v9[48]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v10[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v11[32]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+D0h] [rbp-38h]
  __int128 v13; // [rsp+E8h] [rbp-20h]
  __int128 v14; // [rsp+F8h] [rbp-10h]

  v4 = a2;
  v2 = <alloc::string::String as core::ops::deref::Deref>::deref(a1);
  <str as os_display::native::Quotable>::quote(v11, v2);
  *(_QWORD *)&v14 = v11;
  *((_QWORD *)&v14 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v10[2] = v14;
  *(_QWORD *)&v13 = &v4;
  *((_QWORD *)&v13 + 1) = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
  v12 = v13;
  v10[0] = v14;
  v10[1] = v13;
  core::fmt::Arguments::new_v1(v9, &off_107858, v10);
  alloc::fmt::format(&v7, v9);
  v6 = v8;
  v5 = v7;
  return uucore::mods::error::USimpleError::new(1LL, &v5);
}
