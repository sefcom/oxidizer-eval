__int64 __fastcall sniffnet::gui::pages::settings_notifications_page::input_group_bytes(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned __int8 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD v24[3]; // [rsp+0h] [rbp-788h] BYREF
  _QWORD v25[8]; // [rsp+18h] [rbp-770h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-730h] BYREF
  _BYTE v27[64]; // [rsp+70h] [rbp-718h] BYREF
  void *dest; // [rsp+B0h] [rbp-6D8h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-6D0h]
  _QWORD *v30; // [rsp+C0h] [rbp-6C8h]
  __int64 v31; // [rsp+C8h] [rbp-6C0h]
  __int64 v32; // [rsp+D0h] [rbp-6B8h]
  __int128 v33; // [rsp+D8h] [rbp-6B0h]
  int v34; // [rsp+E8h] [rbp-6A0h]
  __int16 v35; // [rsp+ECh] [rbp-69Ch]
  _BYTE v36[64]; // [rsp+2D0h] [rbp-4B8h] BYREF
  _OWORD v37[34]; // [rsp+310h] [rbp-478h] BYREF
  _OWORD src[37]; // [rsp+530h] [rbp-258h] BYREF

  if ( *(_BYTE *)a2 )
    v6 = *(_QWORD *)(a2 + 8);
  else
    v6 = 0LL;
  v7 = *(unsigned __int8 *)(a2 + 26);
  v8 = qword_18E9EA8[v7];
  if ( (v8 | v6) >> 32 )
    v9 = v6 / v8;
  else
    v9 = (unsigned int)v6 / (unsigned int)v8;
  v10 = core::fmt::num::imp::<impl usize>::_fmt(v9, &dest, 20LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, v10, v11);
  sniffnet::networking::types::data_representation::ByteMultiple::get_char(&dest, (unsigned __int8)v7);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    v24,
    v29,
    (char *)v30 + v29);
  core::ptr::drop_in_place<alloc::string::String>(&dest);
  v33 = 0LL;
  v34 = 0;
  LOWORD(v31) = 2;
  LOWORD(v32) = 2;
  v35 = 0;
  dest = 0LL;
  v29 = 8LL;
  v30 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v37, &dest, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&dest, v37, 1LL);
  v37[0] = xmmword_26E870;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(v27, &dest, v37, v12, v13, v14);
  *(_QWORD *)&v15 = sniffnet::translations::translations::threshold_translation(a4);
  v37[0] = v15;
  v25[0] = v37;
  v25[1] = <&T as core::fmt::Display>::fmt;
  dest = &unk_2DFEF58;
  v29 = 2LL;
  v32 = 0LL;
  v30 = v25;
  v31 = 1LL;
  core::option::Option<T>::map_or_else(v26, 0LL, *((_QWORD *)&v15 + 1), &dest);
  iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v26);
  iced_core::widget::text::Text<Theme,Renderer>::font(v37, &dest, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v25, v27, v37);
  v16 = v24[1];
  v17 = v24[2];
  LODWORD(dest) = 0;
  v18 = core::char::methods::encode_utf8_raw(48LL, &dest, 4LL);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v16, v17, v18, v19) )
  {
    v17 = 0LL;
    v16 = 1LL;
  }
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::new(&dest, a0_4, 1LL, v16, v17);
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::on_input(v37, &dest);
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::padding(src, v37);
  v20 = a3[1];
  src[0] = *a3;
  src[1] = v20;
  iced_widget::text_input::TextInput<Message,Theme,Renderer>::width(&dest, src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v25, &dest);
  v21 = sniffnet::translations::translations::per_second_translation(a4);
  iced_core::widget::text::Text<Theme,Renderer>::new(&dest, v21, v22);
  iced_core::widget::text::Text<Theme,Renderer>::font(v37, &dest, a3);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(&dest, v37);
  iced_core::widget::text::Text<Theme,Renderer>::size(v37, &dest, 14.3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, v27, v37);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&dest, v36);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v37, &dest);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(a1, v37);
  return core::ptr::drop_in_place<alloc::string::String>(v24);
}