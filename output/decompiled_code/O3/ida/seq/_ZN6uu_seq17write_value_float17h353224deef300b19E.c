__int64 __fastcall uu_seq::write_value_float(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  void *v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-D0h]
  __int64 **v18; // [rsp+10h] [rbp-C8h]
  __int64 v19; // [rsp+18h] [rbp-C0h]
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-B0h]
  int v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-98h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+48h] [rbp-90h]
  __int64 v26; // [rsp+50h] [rbp-88h]
  __int64 v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+68h] [rbp-70h]
  _QWORD v30[6]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v31[56]; // [rsp+A0h] [rbp-38h] BYREF

  v23 = a2;
  if ( (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a2, &unk_23FF0)
    || (unsigned __int8)<uu_seq::extendedbigdecimal::ExtendedBigDecimal as core::cmp::PartialEq>::eq(a2, &unk_24018) )
  {
    v24 = &v23;
    v25 = <&T as core::fmt::Display>::fmt;
    v26 = a4;
    v27 = 0LL;
    v28 = a3;
    v29 = 0LL;
    v16 = &dword_0 + 1;
    v17 = 1LL;
    v18 = (__int64 **)(&dword_0 + 1);
    v19 = 2LL;
    v20 = 0LL;
    v21 = 32LL;
  }
  else
  {
    v24 = &v23;
    v25 = <&T as core::fmt::Display>::fmt;
    v26 = a4;
    v27 = 0LL;
    v28 = a3;
    v29 = 0LL;
    v16 = &dword_0 + 1;
    v17 = 1LL;
    v18 = (__int64 **)(&dword_0 + 1);
    v19 = 2LL;
    v20 = 0LL;
    v21 = 0x800000020LL;
  }
  LOBYTE(v22) = 1;
  v30[0] = &unk_17BC0;
  v30[1] = 1LL;
  v30[4] = &v16;
  v30[5] = 1LL;
  v30[2] = &v24;
  v30[3] = 3LL;
  core::option::Option<T>::map_or_else(v31, v30, v6, v7, v8, v9, v16, v17, v18, v19, v20, v21, v22);
  v24 = (__int64 *)v31;
  v25 = <alloc::string::String as core::fmt::Display>::fmt;
  v16 = &unk_17BC0;
  v17 = 1LL;
  v20 = 0LL;
  v18 = &v24;
  v19 = 1LL;
  v14 = ((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64))std::io::Write::write_fmt)(
          a1,
          &v16,
          v10,
          v11,
          v12,
          v13);
  core::ptr::drop_in_place<alloc::string::String>(v31);
  return v14;
}
