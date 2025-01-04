__int64 __fastcall uu_seq::write_value_float(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  void *v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-D0h]
  __int64 **v14; // [rsp+10h] [rbp-C8h]
  __int64 v15; // [rsp+18h] [rbp-C0h]
  __int64 v16; // [rsp+20h] [rbp-B8h]
  __int64 v17; // [rsp+28h] [rbp-B0h]
  int v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-90h]
  __int64 v22; // [rsp+50h] [rbp-88h]
  __int64 v23; // [rsp+58h] [rbp-80h]
  __int64 v24; // [rsp+60h] [rbp-78h]
  __int64 v25; // [rsp+68h] [rbp-70h]
  _QWORD v26[6]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v27[56]; // [rsp+A0h] [rbp-38h] BYREF

  v19 = a2;
  if ( (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a2, &unk_23B30)
    || (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a2, &unk_23B58) )
  {
    v20 = &v19;
    v21 = <&T as core::fmt::Display>::fmt;
    v22 = a4;
    v23 = 0LL;
    v24 = a3;
    v25 = 0LL;
    v12 = &dword_0 + 1;
    v13 = 1LL;
    v14 = (__int64 **)(&dword_0 + 1);
    v15 = 2LL;
    v16 = 0LL;
    v17 = 32LL;
  }
  else
  {
    v20 = &v19;
    v21 = <&T as core::fmt::Display>::fmt;
    v22 = a4;
    v23 = 0LL;
    v24 = a3;
    v25 = 0LL;
    v12 = &dword_0 + 1;
    v13 = 1LL;
    v14 = (__int64 **)(&dword_0 + 1);
    v15 = 2LL;
    v16 = 0LL;
    v17 = 0x800000020LL;
  }
  LOBYTE(v18) = 1;
  v26[0] = &unk_176C0;
  v26[1] = 1LL;
  v26[4] = &v12;
  v26[5] = 1LL;
  v26[2] = &v20;
  v26[3] = 3LL;
  core::option::Option<T>::map_or_else(v27, v26, v6, v7, v8, v9, v12, v13, v14, v15, v16, v17, v18);
  v20 = (__int64 *)v27;
  v21 = <alloc::string::String as core::fmt::Display>::fmt;
  v12 = &unk_176C0;
  v13 = 1LL;
  v16 = 0LL;
  v14 = &v20;
  v15 = 1LL;
  v10 = ((__int64 (__fastcall *)(__int64, void **))std::io::Write::write_fmt)(a1, &v12);
  core::ptr::drop_in_place<alloc::string::String>(v27);
  return v10;
}
