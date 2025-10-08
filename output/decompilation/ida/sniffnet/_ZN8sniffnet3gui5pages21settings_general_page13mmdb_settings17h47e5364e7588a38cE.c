__int64 __fastcall sniffnet::gui::pages::settings_general_page::mmdb_settings(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v14; // rax
  __int128 v16; // [rsp-18h] [rbp-170h]
  _QWORD v19[3]; // [rsp+20h] [rbp-138h] BYREF
  __int16 v20; // [rsp+38h] [rbp-120h]
  __int16 v21; // [rsp+40h] [rbp-118h]
  __int128 v22; // [rsp+48h] [rbp-110h]
  __int64 v23; // [rsp+58h] [rbp-100h]
  __int16 v24; // [rsp+60h] [rbp-F8h]
  _BYTE v25[96]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v26[120]; // [rsp+E0h] [rbp-78h] BYREF

  v22 = 0LL;
  v23 = 0x7F80000000000000LL;
  v20 = 2;
  v21 = 2;
  v24 = 0;
  v19[0] = 0LL;
  v19[1] = 8LL;
  v19[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v25, v19, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v26, v25, 1LL);
  v12 = sniffnet::translations::translations_3::mmdb_files_translation(a3);
  iced_core::widget::text::Text<Theme,Renderer>::new(v19, v12, v13);
  iced_core::widget::text::Text<Theme,Renderer>::font(v25, v19, a4);
  iced_core::widget::text::Text<Theme,Renderer>::class(v19, v25, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v25, v19, 18.299999);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v19, v26, v25);
  *(_QWORD *)&v14 = sniffnet::translations::translations_2::country_translation(a3);
  sniffnet::gui::pages::settings_general_page::mmdb_selection_row(
    (unsigned int)v26,
    a2,
    a4,
    (unsigned int)sniffnet::gui::types::message::Message::CustomCountryDb,
    a5,
    a6,
    *(_QWORD *)(a9 + 16),
    v14,
    a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v25, v19, v26);
  *((_QWORD *)&v16 + 1) = 3LL;
  *(_QWORD *)&v16 = &unk_497D11;
  sniffnet::gui::pages::settings_general_page::mmdb_selection_row(
    (unsigned int)v19,
    (unsigned __int8)a2,
    a4,
    (unsigned int)sniffnet::gui::types::message::Message::CustomAsnDb,
    a7,
    a8,
    *(_QWORD *)(a10 + 16),
    v16,
    a3);
  return iced_widget::column::Column<Message,Theme,Renderer>::push(a1, v25, v19);
}