__int64 __fastcall fuel_core_version::write_version_to_file(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v11; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-98h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  _QWORD v17[6]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v18[11]; // [rsp+60h] [rbp-58h] BYREF

  v11 = a1[2];
  v12 = a1[3];
  v13 = a1[4];
  v17[0] = &v11;
  v17[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v17[2] = &v12;
  v17[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v17[4] = &v13;
  v17[5] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v18[0] = &off_12FB68;
  v18[1] = 4LL;
  v18[4] = 0LL;
  v18[2] = v17;
  v18[3] = 3LL;
  ((void (__fastcall *)(__int64 *, _QWORD *, __int64, __int64 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
    &v14,
    v18,
    a3,
    &v13,
    a5,
    a6,
    v11,
    v12);
  v6 = v14;
  v7 = v15;
  v8 = std::fs::write(a2, v15, v16);
  if ( v8 )
    v9 = eyre::error::<impl eyre::Report>::from_std(v8, &off_12FBA8);
  else
    v9 = 0LL;
  core::ptr::drop_in_place<alloc::string::String>(v6, v7);
  core::ptr::drop_in_place<semver::Version>(a1);
  return v9;
}