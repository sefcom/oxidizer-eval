__int64 __fastcall sniffnet::translations::translations_4::reading_from_pcap_translation(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdx
  char **v5; // rax
  _QWORD *v7; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+8h] [rbp-90h]
  _QWORD *v9; // [rsp+10h] [rbp-88h]
  __int64 (__fastcall *v10)(); // [rsp+18h] [rbp-80h]
  _QWORD v11[6]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+70h] [rbp-28h] BYREF

  v12[0] = a3;
  v12[1] = a4;
  v13[0] = sniffnet::translations::translations_3::file_name_translation(a2);
  v13[1] = v4;
  switch ( a2 )
  {
    case 1u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00DA0;
      break;
    case 2u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00DD0;
      break;
    case 3u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00E90;
      break;
    case 5u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00EF0;
      break;
    case 7u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00E30;
      break;
    case 8u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00F80;
      break;
    case 9u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00EC0;
      break;
    case 0xEu:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00FB0;
      break;
    case 0x11u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00E00;
      break;
    case 0x12u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00F20;
      break;
    case 0x14u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00F50;
      break;
    case 0x15u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00E60;
      break;
    case 0x16u:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = (char **)&off_2E00D70;
      break;
    default:
      v7 = v13;
      v8 = <&T as core::fmt::Display>::fmt;
      v9 = v12;
      v10 = <&T as core::fmt::Display>::fmt;
      v5 = &off_2E00D40;
      break;
  }
  v11[0] = v5;
  v11[1] = 3LL;
  v11[4] = 0LL;
  v11[2] = &v7;
  v11[3] = 2LL;
  core::option::Option<T>::map_or_else(v14, 0LL, v4, v11);
  return iced_core::widget::text::Text<Theme,Renderer>::new(a1, v14);
}