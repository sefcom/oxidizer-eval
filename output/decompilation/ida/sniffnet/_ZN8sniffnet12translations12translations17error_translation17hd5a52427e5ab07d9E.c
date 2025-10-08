__int64 __fastcall sniffnet::translations::translations::error_translation(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char **v4; // rax
  _QWORD *v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+10h] [rbp-68h]
  _QWORD v8[6]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+58h] [rbp-20h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  switch ( a2 )
  {
    case 0:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00400;
      break;
    case 1:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00420;
      break;
    case 2:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00430;
      break;
    case 3:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00440;
      break;
    case 4:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00450;
      break;
    case 5:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00460;
      break;
    case 6:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00470;
      break;
    case 7:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00480;
      break;
    case 8:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00490;
      break;
    case 9:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004A0;
      break;
    case 10:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004B0;
      break;
    case 11:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004E0;
      break;
    case 12:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004C0;
      break;
    case 13:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004D0;
      break;
    case 14:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E004F0;
      break;
    case 15:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00500;
      break;
    case 16:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00510;
      break;
    case 17:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00520;
      break;
    case 18:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00530;
      break;
    case 19:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00540;
      break;
    case 20:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00550;
      break;
    case 21:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = (char **)&off_2E00560;
      break;
    case 22:
      v6 = v9;
      v7 = <&T as core::fmt::Display>::fmt;
      v4 = &off_2E00410;
      break;
  }
  v8[0] = v4;
  v8[1] = 1LL;
  v8[4] = 0LL;
  v8[2] = &v6;
  v8[3] = 1LL;
  core::option::Option<T>::map_or_else(v10, 0LL, a3, v8);
  return iced_core::widget::text::Text<Theme,Renderer>::new(a1, v10);
}