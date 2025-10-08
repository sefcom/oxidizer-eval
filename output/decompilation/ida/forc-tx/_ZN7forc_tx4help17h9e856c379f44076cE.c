__int64 forc_tx::help()
{
  __int64 v0; // rdx
  _QWORD v2[5]; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v3; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v4; // [rsp+40h] [rbp-78h]
  __int64 v5; // [rsp+48h] [rbp-70h]
  __int64 v6; // [rsp+50h] [rbp-68h]
  _QWORD v7[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v8[4]; // [rsp+78h] [rbp-40h] BYREF
  __int128 v9; // [rsp+98h] [rbp-20h] BYREF
  _QWORD *v10; // [rsp+A8h] [rbp-10h]

  v2[3] = 0LL;
  v2[4] = 0x1300000003LL;
  v2[0] = 0x8000000000000000LL;
  v2[1] = aExamples;
  v2[2] = 9LL;
  v7[0] = forc_tx::examples();
  v7[1] = v0;
  v8[0] = v2;
  v8[1] = <ansiterm::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
  v8[2] = v7;
  v8[3] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v3 = &unk_1D12F8;
  *((_QWORD *)&v3 + 1) = 2LL;
  v6 = 0LL;
  v4 = v8;
  v5 = 2LL;
  core::option::Option<T>::map_or_else(&v9, 0LL, v0, &v3);
  core::ptr::drop_in_place<ansiterm::display::ANSIGenericString<str>>(v2);
  v4 = v10;
  v3 = v9;
  return alloc::vec::Vec<T,A>::into_boxed_slice(&v3);
}