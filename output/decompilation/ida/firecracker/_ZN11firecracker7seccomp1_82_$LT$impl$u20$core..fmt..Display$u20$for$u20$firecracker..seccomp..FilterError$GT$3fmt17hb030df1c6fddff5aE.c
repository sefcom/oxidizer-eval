__int64 __fastcall firecracker::seccomp::_::<impl core::fmt::Display for firecracker::seccomp::FilterError>::fmt(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  unsigned __int8 v8; // di
  __int64 v9; // rcx
  __int64 v10; // r8
  char **v11; // rax
  unsigned __int8 *v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+10h] [rbp-38h]
  _QWORD v16[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = *a1;
  v8 = v7 - 18;
  v9 = v7 - 17;
  v10 = 0LL;
  if ( v8 < 3u )
    v10 = v9;
  switch ( v10 )
  {
    case 0LL:
      v13 = a1;
      v14 = &v13;
      v15 = <&T as core::fmt::Display>::fmt;
      v11 = &off_3A43A8;
      break;
    case 1LL:
      v13 = a1 + 8;
      v14 = &v13;
      v15 = <&T as core::fmt::Display>::fmt;
      v11 = &off_3A43B8;
      break;
    case 2LL:
      v13 = a1 + 8;
      v14 = &v13;
      v15 = <&T as core::fmt::Display>::fmt;
      v11 = &off_3A43C8;
      break;
    case 3LL:
      v13 = a1 + 8;
      v14 = &v13;
      v15 = <&T as core::fmt::Display>::fmt;
      v11 = &off_3A43D8;
      break;
  }
  v16[0] = v11;
  v16[1] = 1LL;
  v16[4] = 0LL;
  v16[2] = &v14;
  v16[3] = 1LL;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, __int64, __int64, unsigned __int8 *, unsigned __int8 **, __int64 (__fastcall *)()))core::fmt::Formatter::write_fmt)(
           a2,
           a3,
           v16,
           v9,
           v10,
           a6,
           v13,
           v14,
           v15);
}