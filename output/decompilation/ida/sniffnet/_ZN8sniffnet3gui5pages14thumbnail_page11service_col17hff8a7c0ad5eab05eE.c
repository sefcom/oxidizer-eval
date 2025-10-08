__int64 __fastcall sniffnet::gui::pages::thumbnail_page::service_col(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rbx
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v18; // [rsp+8h] [rbp-1C0h]
  __int128 v19; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v20; // [rsp+20h] [rbp-1A8h]
  __int128 v21; // [rsp+30h] [rbp-198h]
  __int128 v22; // [rsp+40h] [rbp-188h]
  __int64 v23; // [rsp+50h] [rbp-178h]
  __int64 v24; // [rsp+58h] [rbp-170h]
  __int64 v25; // [rsp+60h] [rbp-168h] BYREF
  __int64 v26; // [rsp+68h] [rbp-160h]
  unsigned __int64 v27; // [rsp+70h] [rbp-158h]
  char v28[8]; // [rsp+78h] [rbp-150h] BYREF
  __int64 v29; // [rsp+80h] [rbp-148h]
  __int64 v30; // [rsp+88h] [rbp-140h]
  _QWORD v31[3]; // [rsp+90h] [rbp-138h] BYREF
  __int16 v32; // [rsp+A8h] [rbp-120h]
  __int16 v33; // [rsp+B0h] [rbp-118h]
  __int128 v34; // [rsp+B8h] [rbp-110h]
  __int64 v35; // [rsp+C8h] [rbp-100h]
  __int16 v36; // [rsp+D0h] [rbp-F8h]
  _OWORD v37[4]; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+130h] [rbp-98h]
  _OWORD v39[4]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v40; // [rsp+178h] [rbp-50h]

  v24 = a1;
  v34 = 0LL;
  v35 = 0x7F80000000000000LL;
  v32 = 2;
  v33 = 2;
  v36 = 0;
  v31[0] = 0LL;
  v31[1] = 8LL;
  v31[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::padding(v39, v31, 327680LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v31, v39, 3LL);
  iced_widget::column::Column<Message,Theme,Renderer>::width(&v19, v31, 0LL);
  sniffnet::report::get_report_entries::get_service_entries(&v25, a2, a3, a5);
  v8 = v27;
  v9 = core::cmp::Ord::min(v27, 4LL);
  v10 = 0LL;
  if ( v9 <= v8 )
    v10 = v9;
  v11 = 16LL;
  v18 = v26;
  if ( v9 <= v8 )
    v11 = v26;
  if ( v10 )
  {
    v12 = 112 * v10;
    do
    {
      v38 = v23;
      v37[3] = v22;
      v37[2] = v21;
      v37[1] = v20;
      v37[0] = v19;
      <T as alloc::string::SpecToString>::spec_to_string(v28, v11);
      sniffnet::gui::pages::thumbnail_page::clip_text(v39, v29, v30, 13LL);
      iced_core::widget::text::Text<Theme,Renderer>::new(v31, v39);
      iced_core::widget::text::Text<Theme,Renderer>::font(v39, v31, a4);
      iced_core::widget::text::Text<Theme,Renderer>::size(v31, v39, 14.3);
      iced_widget::column::Column<Message,Theme,Renderer>::push(v39, v37, v31);
      v11 += 112LL;
      v19 = v39[0];
      v20 = v39[1];
      v21 = v39[2];
      v22 = v39[3];
      v23 = v40;
      core::ptr::drop_in_place<alloc::string::String>(v28);
      v12 -= 112LL;
    }
    while ( v12 );
  }
  v13 = (_OWORD *)v24;
  *(_QWORD *)(v24 + 64) = v23;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  v13[3] = v22;
  v13[2] = v16;
  v13[1] = v15;
  *v13 = v14;
  return core::ptr::drop_in_place<alloc::vec::Vec<(sniffnet::networking::types::service::Service,sniffnet::networking::types::data_info::DataInfo)>>(
           v25,
           v18);
}