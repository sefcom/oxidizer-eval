__int64 __fastcall firecracker::_::<impl core::fmt::Display for firecracker::SnapshotVersionError>::fmt(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char **v6; // rax
  _DWORD *v8; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+10h] [rbp-38h]
  _QWORD v11[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( *a1 == 6 )
  {
    v8 = a1 + 2;
    v9 = &v8;
    v10 = <&T as core::fmt::Display>::fmt;
    v6 = &off_3A4608;
  }
  else
  {
    v8 = a1;
    v9 = &v8;
    v10 = <&T as core::fmt::Display>::fmt;
    v6 = &off_3A4618;
  }
  v11[0] = v6;
  v11[1] = 1LL;
  v11[4] = 0LL;
  v11[2] = &v9;
  v11[3] = 1LL;
  return core::fmt::Formatter::write_fmt(a2, a3, v11, a4, a5, a6);
}