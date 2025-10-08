__int64 __fastcall sniffnet::gui::components::button::button_open_file(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  __int64 result; // rax
  _BYTE dest[368]; // [rsp+20h] [rbp-5B8h] BYREF
  __int128 v17; // [rsp+190h] [rbp-448h] BYREF
  __int64 v18; // [rsp+1A0h] [rbp-438h]
  __int64 v19; // [rsp+1A8h] [rbp-430h]
  unsigned __int8 v20; // [rsp+1B0h] [rbp-428h]
  unsigned __int64 v21; // [rsp+298h] [rbp-340h]
  _BYTE v22[368]; // [rsp+2C0h] [rbp-318h] BYREF
  _BYTE src[424]; // [rsp+430h] [rbp-1A8h] BYREF

  sniffnet::utils::types::icon::Icon::to_text(dest, 14LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v22, dest);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, v22);
  iced_core::widget::text::Text<Theme,Renderer>::size(v22, dest, 16.0);
  iced_widget::button::Button<Message,Theme,Renderer>::new(dest, v22);
  v9 = 0LL;
  iced_widget::button::Button<Message,Theme,Renderer>::padding(v22, dest);
  iced_widget::button::Button<Message,Theme,Renderer>::height(dest, v22);
  iced_widget::button::Button<Message,Theme,Renderer>::width(src, dest);
  if ( a6 )
  {
    memcpy(dest, src, sizeof(dest));
    v18 = *((_QWORD *)a2 + 2);
    v17 = *a2;
    v20 = a3;
    v19 = a7;
    v21 = 0x800000000000002CLL;
    iced_widget::button::Button<Message,Theme,Renderer>::on_press(v22, dest, &v17);
    v10 = sniffnet::utils::types::file_info::FileInfo::action_info(a3, a4);
    v9 = v11;
    memcpy(src, v22, 0x170uLL);
    v12 = 5;
  }
  else
  {
    v10 = 1LL;
    v12 = 3;
  }
  iced_core::widget::text::Text<Theme,Renderer>::new(dest, v10, v9);
  iced_core::widget::text::Text<Theme,Renderer>::font(v22, dest, a5);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(dest, src, v22, 3LL);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::gap(v22, dest, 5LL);
  result = iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(a1, v22, v12);
  if ( !a6 )
    return core::ptr::drop_in_place<alloc::string::String>(a2);
  return result;
}