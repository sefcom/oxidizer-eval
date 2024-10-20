__int64 uu_touch::uumain::uumain::{{closure}}()
{
  __int64 v0; // rdx
  __int128 v2; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v3; // [rsp+20h] [rbp-98h]
  __int128 v4; // [rsp+28h] [rbp-90h] BYREF
  __int64 v5; // [rsp+38h] [rbp-80h]
  _BYTE v6[48]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v7[2]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v8[2]; // [rsp+98h] [rbp-20h] BYREF
  __int128 v9; // [rsp+A8h] [rbp-10h]

  v8[0] = uucore::execution_phrase();
  v8[1] = v0;
  *(_QWORD *)&v9 = v8;
  *((_QWORD *)&v9 + 1) = <&T as core::fmt::Display>::fmt;
  v7[1] = v9;
  v7[0] = v9;
  core::fmt::Arguments::new_v1(v6, &off_2C7070, v7);
  alloc::fmt::format(&v4, v6);
  v3 = v5;
  v2 = v4;
  return uucore::mods::error::USimpleError::new(1LL, &v2);
}
