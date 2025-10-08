__int64 __fastcall sniffnet::gui::styles::text::TextType::highlighted_subtitle_with_desc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-1C8h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-1B8h] BYREF
  char **v11; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1A0h]
  _QWORD **v13; // [rsp+30h] [rbp-198h]
  __int64 v14; // [rsp+38h] [rbp-190h]
  __int64 v15; // [rsp+40h] [rbp-188h]
  _QWORD v16[3]; // [rsp+80h] [rbp-148h] BYREF
  __int16 v17; // [rsp+98h] [rbp-130h]
  __int16 v18; // [rsp+A0h] [rbp-128h]
  __int128 v19; // [rsp+A8h] [rbp-120h]
  __int64 v20; // [rsp+B8h] [rbp-110h]
  __int16 v21; // [rsp+C0h] [rbp-108h]
  _BYTE v22[24]; // [rsp+C8h] [rbp-100h] BYREF
  _BYTE v23[24]; // [rsp+E0h] [rbp-E8h] BYREF
  _QWORD *v24; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+100h] [rbp-C8h]
  _BYTE v26[112]; // [rsp+158h] [rbp-70h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v10[0] = a4;
  v10[1] = a5;
  v19 = 0LL;
  v20 = 0x7F80000000000000LL;
  v17 = 2;
  v18 = 2;
  v21 = 0;
  v16[0] = 0LL;
  v16[1] = 8LL;
  v16[2] = 0LL;
  v24 = v9;
  v25 = <&T as core::fmt::Display>::fmt;
  v11 = (char **)&unk_2DFEF58;
  v12 = 2LL;
  v15 = 0LL;
  v13 = &v24;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(v22, 0LL, a3, &v11);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v11, v22);
  iced_core::widget::text::Text<Theme,Renderer>::class(&v24, &v11, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v11, &v24, a6);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v26, v16, &v11);
  v24 = v10;
  v25 = <&T as core::fmt::Display>::fmt;
  v11 = &off_2DFF0A8;
  v12 = 1LL;
  v15 = 0LL;
  v13 = &v24;
  v14 = 1LL;
  core::option::Option<T>::map_or_else(v23, 0LL, v7, &v11);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v11, v23);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v24, &v11, a6);
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, v26, &v24);
}