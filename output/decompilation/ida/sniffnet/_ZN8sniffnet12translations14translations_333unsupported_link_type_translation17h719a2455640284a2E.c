__int64 __fastcall sniffnet::translations::translations_3::unsupported_link_type_translation(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v10[6]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v11[6]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v12[40]; // [rsp+90h] [rbp-28h] BYREF

  v7[0] = a3;
  v7[1] = a4;
  v4 = qword_18EE558[a2];
  v8[0] = (char *)dword_18EE4FC + dword_18EE4FC[a2];
  v8[1] = v4;
  v9[0] = sniffnet::translations::translations::network_adapter_translation(a2);
  v9[1] = v5;
  v10[0] = v8;
  v10[1] = <&T as core::fmt::Display>::fmt;
  v10[2] = v9;
  v10[3] = <&T as core::fmt::Display>::fmt;
  v10[4] = v7;
  v10[5] = <&T as core::fmt::Display>::fmt;
  v11[0] = &unk_2E00B10;
  v11[1] = 3LL;
  v11[4] = 0LL;
  v11[2] = v10;
  v11[3] = 3LL;
  core::option::Option<T>::map_or_else(v12, 0LL, v5, v11);
  return iced_core::widget::text::Text<Theme,Renderer>::new(a1, v12);
}