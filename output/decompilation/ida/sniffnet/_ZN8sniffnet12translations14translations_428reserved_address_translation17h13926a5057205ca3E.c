__int64 __fastcall sniffnet::translations::translations_4::reserved_address_translation(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  char **v4; // rax
  _QWORD *v6; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+10h] [rbp-48h]
  _QWORD v8[6]; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-10h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  switch ( a2 )
  {
    case 1:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00B80;
      break;
    case 2:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00C40;
      break;
    case 3:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00C80;
      break;
    case 5:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00CC0;
      break;
    case 6:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00BE0;
      break;
    case 7:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00C00;
      break;
    case 8:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00C20;
      break;
    case 9:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00CA0;
      break;
    case 11:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00BC0;
      break;
    case 14:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00D20;
      break;
    case 17:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00BA0;
      break;
    case 18:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00CE0;
      break;
    case 20:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00D00;
      break;
    case 21:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00C60;
      break;
    case 22:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00B60;
      break;
    default:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00B40;
      break;
  }
  v8[0] = v4;
  v8[1] = 2LL;
  v8[4] = 0LL;
  v8[2] = &v6;
  v8[3] = 1LL;
  return core::option::Option<T>::map_or_else(a1, 0LL, a3, v8);
}