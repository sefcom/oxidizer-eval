__int64 __fastcall sniffnet::gui::components::footer::footer(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v13; // rax
  float v14; // xmm0_4
  __int64 v15; // [rsp+10h] [rbp-788h] BYREF
  __int64 v16; // [rsp+18h] [rbp-780h]
  __int64 v17; // [rsp+20h] [rbp-778h]
  __int16 v18; // [rsp+28h] [rbp-770h]
  __int16 v19; // [rsp+30h] [rbp-768h]
  __int128 v20; // [rsp+38h] [rbp-760h]
  __int64 v21; // [rsp+48h] [rbp-750h]
  __int16 v22; // [rsp+50h] [rbp-748h]
  unsigned __int64 v23; // [rsp+138h] [rbp-660h]
  __int128 v24; // [rsp+160h] [rbp-638h]
  unsigned __int64 v25; // [rsp+170h] [rbp-628h]
  void *v26; // [rsp+178h] [rbp-620h]
  __int64 v27; // [rsp+180h] [rbp-618h]
  int v28; // [rsp+188h] [rbp-610h]
  int v29; // [rsp+190h] [rbp-608h]
  int v30; // [rsp+198h] [rbp-600h]
  int v31; // [rsp+280h] [rbp-518h]
  __int16 v32; // [rsp+294h] [rbp-504h]
  _BYTE v33[64]; // [rsp+2A0h] [rbp-4F8h] BYREF
  _BYTE v34[264]; // [rsp+2E0h] [rbp-4B8h] BYREF
  unsigned __int64 v35; // [rsp+3E8h] [rbp-3B0h]
  _QWORD v36[3]; // [rsp+410h] [rbp-388h] BYREF
  __int16 v37; // [rsp+428h] [rbp-370h]
  __int16 v38; // [rsp+430h] [rbp-368h]
  __int128 v39; // [rsp+438h] [rbp-360h]
  int v40; // [rsp+448h] [rbp-350h]
  __int16 v41; // [rsp+44Ch] [rbp-34Ch]
  _BYTE v42[64]; // [rsp+6A0h] [rbp-F8h] BYREF
  _BYTE v43[72]; // [rsp+6E0h] [rbp-B8h] BYREF
  _BYTE v44[112]; // [rsp+728h] [rbp-70h] BYREF

  if ( a2 )
    return sniffnet::gui::components::footer::thumbnail_footer();
  sniffnet::gui::components::footer::get_release_details(&v15, a3, a5, a6, a7, a8);
  v13 = 0LL;
  if ( a9 == 1 )
  {
    v14 = 17.0;
  }
  else
  {
    LOBYTE(v13) = a9 == 2;
    v14 = flt_273DB0[v13];
  }
  v39 = 0LL;
  v40 = 0;
  v37 = 2;
  v38 = 2;
  v41 = 0;
  v36[0] = 0LL;
  v36[1] = 8LL;
  v36[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v34, v36, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::padding(v36, v34, 1310720LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v34, v36, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, v34, &v15);
  sniffnet::gui::components::footer::get_button_feedback(v34, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v15, v36, v34);
  sniffnet::gui::components::footer::get_button_wiki(v34, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, &v15, v34);
  sniffnet::gui::components::footer::get_button_github(v34, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v15, v36, v34);
  sniffnet::gui::components::footer::get_button_news(v34, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, &v15, v34);
  sniffnet::gui::components::footer::get_button_sponsor(&v15, a5);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v42, v36, &v15);
  v20 = 0LL;
  v21 = 0x7F80000000000000LL;
  v18 = 2;
  v19 = 2;
  v22 = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(v36, &v15, 0LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(v43, v36, 2LL);
  v20 = 0LL;
  LODWORD(v21) = 0;
  v18 = 2;
  v19 = 2;
  WORD2(v21) = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::height(v36, &v15);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v34, v36, 1LL);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, aMadeWith, 9LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v36, &v15, 14.3);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v15, v36, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v33, v34, &v15);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, asc_497919, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v36, &v15, v14);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v15, v36, a6);
  iced_core::widget::text::Text<Theme,Renderer>::width(v36, &v15, 25LL);
  iced_core::widget::text::Text<Theme,Renderer>::align_x(&v15, v36);
  iced_core::widget::text::Text<Theme,Renderer>::align_y(v36, &v15);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v34, v33, v36);
  iced_core::widget::text::Text<Theme,Renderer>::new(&v15, aBy_0, 3LL);
  iced_core::widget::text::Text<Theme,Renderer>::size(v36, &v15, 14.3);
  iced_core::widget::text::Text<Theme,Renderer>::font(&v15, v36, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v33, v34, &v15);
  v15 = 6LL;
  v23 = 0x800000000000003ALL;
  v24 = 0LL;
  v25 = 0x8000000000000000LL;
  v26 = &unk_2713C0;
  v27 = 16LL;
  v28 = 0;
  v29 = 2;
  v30 = 3;
  v31 = 0;
  v32 = 1;
  v34[0] = 8;
  v35 = 0x800000000000000BLL;
  iced_core::text::Span<Link,Font>::link(v36, &v15, v34);
  <iced_widget::text::rich::Rich<Link,Theme,Renderer> as core::iter::traits::collect::FromIterator<iced_core::text::Span<Link,<Renderer as iced_core::text::Renderer>::Font>>>::from_iter(
    &v15,
    v36);
  iced_widget::text::rich::Rich<Link,Theme,Renderer>::size(v36, &v15);
  iced_widget::text::rich::Rich<Link,Theme,Renderer>::font(&v15, v36, a6);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v36, v33, &v15);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v15, v43, v36);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v44, v42, &v15);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v15, v44);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v36, &v15, 45LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(&v15, v36);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v15, a4);
}