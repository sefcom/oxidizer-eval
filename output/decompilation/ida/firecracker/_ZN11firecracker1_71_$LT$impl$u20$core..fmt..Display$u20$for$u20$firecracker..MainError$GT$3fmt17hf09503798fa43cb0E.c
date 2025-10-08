__int64 __fastcall firecracker::_::<impl core::fmt::Display for firecracker::MainError>::fmt(
        _DWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char **v6; // rax
  char **v7; // rax
  _DWORD *v9; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+10h] [rbp-38h]
  char **v12; // [rsp+18h] [rbp-30h] BYREF
  __int64 v13; // [rsp+20h] [rbp-28h]
  _QWORD *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]

  switch ( *a1 )
  {
    case 0:
      v9 = a1 + 1;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A44E8;
      goto LABEL_14;
    case 1:
      v9 = a1 + 1;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A44F8;
      goto LABEL_14;
    case 2:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v7 = &off_3A4508;
      goto LABEL_6;
    case 3:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4528;
      goto LABEL_14;
    case 4:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v7 = &off_3A4538;
LABEL_6:
      v12 = v7;
      v13 = 2LL;
      goto LABEL_15;
    case 5:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4558;
      goto LABEL_14;
    case 6:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4568;
      goto LABEL_14;
    case 7:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4578;
      goto LABEL_14;
    case 8:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4588;
      goto LABEL_14;
    case 9:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A4598;
      goto LABEL_14;
    case 0xA:
      v9 = a1 + 2;
      v10 = &v9;
      v11 = <&T as core::fmt::Display>::fmt;
      v6 = &off_3A45A8;
LABEL_14:
      v12 = v6;
      v13 = 1LL;
LABEL_15:
      v16 = 0LL;
      v14 = &v10;
      v15 = 1LL;
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, char ***, __int64, __int64, __int64, _DWORD *, _QWORD *, __int64 (__fastcall *)()))core::fmt::Formatter::write_fmt)(
               *a2,
               a2[1],
               &v12,
               a4,
               a5,
               a6,
               v9,
               v10,
               v11);
  }
}