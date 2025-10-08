__int64 __fastcall firecracker::api_server_adapter::_::<impl core::fmt::Display for firecracker::api_server_adapter::ApiServerError>::fmt(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  char **v7; // rax
  char **v8; // rax
  _BYTE *v10; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+10h] [rbp-38h]
  char **v13; // [rsp+18h] [rbp-30h] BYREF
  __int64 v14; // [rsp+20h] [rbp-28h]
  _QWORD *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v6 = 4LL;
  if ( (unsigned __int8)(*a1 - 28) < 4u )
    v6 = (unsigned __int8)(*a1 - 28);
  switch ( (char)v6 )
  {
    case 0:
      v10 = a1 + 8;
      v11 = &v10;
      v12 = <&T as core::fmt::Display>::fmt;
      v7 = &off_3A4338;
      goto LABEL_7;
    case 1:
      v10 = a1 + 1;
      v11 = &v10;
      v12 = <&T as core::fmt::Debug>::fmt;
      v8 = &off_3A4358;
      goto LABEL_10;
    case 2:
      v10 = a1 + 8;
      v11 = &v10;
      v12 = <&T as core::fmt::Display>::fmt;
      v7 = &off_3A4368;
LABEL_7:
      v13 = v7;
      v14 = 2LL;
      goto LABEL_11;
    case 3:
      v10 = a1 + 8;
      v11 = &v10;
      v12 = <&T as core::fmt::Display>::fmt;
      v8 = &off_3A4388;
      goto LABEL_10;
    case 4:
      v10 = a1;
      v11 = &v10;
      v12 = <&T as core::fmt::Display>::fmt;
      v8 = &off_3A4398;
LABEL_10:
      v13 = v8;
      v14 = 1LL;
LABEL_11:
      v17 = 0LL;
      v15 = &v11;
      v16 = 1LL;
      return ((__int64 (__fastcall *)(__int64, __int64, char ***, __int64, __int64, __int64, _BYTE *, _QWORD *, __int64 (__fastcall *)()))core::fmt::Formatter::write_fmt)(
               a2,
               a3,
               &v13,
               v6,
               a5,
               a6,
               v10,
               v11,
               v12);
  }
}