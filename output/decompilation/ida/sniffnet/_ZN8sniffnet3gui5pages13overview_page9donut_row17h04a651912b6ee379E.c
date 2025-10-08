__int64 __fastcall sniffnet::gui::pages::overview_page::donut_row(__int64 a1, char a2, __int128 *a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  int v9; // edx
  __int128 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // r13
  __int128 v14; // [rsp-20h] [rbp-228h]
  __int64 v15; // [rsp+0h] [rbp-208h] BYREF
  __int64 v16; // [rsp+8h] [rbp-200h]
  __int64 v17; // [rsp+10h] [rbp-1F8h]
  __int64 v18; // [rsp+18h] [rbp-1F0h]
  __int64 v19; // [rsp+20h] [rbp-1E8h]
  __int128 v20; // [rsp+28h] [rbp-1E0h]
  __int64 v21; // [rsp+38h] [rbp-1D0h]
  __int16 v22; // [rsp+40h] [rbp-1C8h]
  __int64 v23; // [rsp+70h] [rbp-198h]
  __int64 v24; // [rsp+78h] [rbp-190h]
  __int64 v25; // [rsp+80h] [rbp-188h]
  __int64 v26; // [rsp+88h] [rbp-180h]
  __int64 v27; // [rsp+90h] [rbp-178h]
  __int64 v28; // [rsp+98h] [rbp-170h]
  __int64 v29; // [rsp+A0h] [rbp-168h]
  __int64 v30; // [rsp+A8h] [rbp-160h]
  __int128 *v31; // [rsp+B0h] [rbp-158h]
  _WORD v32[44]; // [rsp+B8h] [rbp-150h] BYREF
  _WORD v33[32]; // [rsp+110h] [rbp-F8h] BYREF
  _BYTE v34[72]; // [rsp+150h] [rbp-B8h] BYREF
  _BYTE v35[112]; // [rsp+198h] [rbp-70h] BYREF

  v31 = a3;
  v25 = a1;
  v27 = a4;
  v4 = *(unsigned __int8 *)(a4 + 455);
  sniffnet::networking::types::info_traffic::InfoTraffic::get_thumbnail_data(
    &v15,
    a4 + 800,
    *(unsigned __int8 *)(a4 + 455));
  v5 = v15;
  v6 = v16;
  v7 = v18;
  v8 = v17;
  v30 = v20;
  v29 = v19;
  v20 = 0LL;
  v21 = 0x7F80000000000000LL;
  LOWORD(v18) = 2;
  LOWORD(v19) = 2;
  v22 = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v32, &v15, 5LL);
  LOWORD(v15) = 2;
  v28 = v5;
  v26 = v6;
  v9 = v6;
  v10 = v31;
  sniffnet::gui::pages::overview_page::donut_legend_entry(
    (unsigned int)v33,
    v5,
    v9,
    v4,
    (unsigned int)&v15,
    (_DWORD)v31,
    a2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v15, v32, v33);
  v32[0] = 3;
  v24 = v7;
  sniffnet::gui::pages::overview_page::donut_legend_entry(
    (unsigned int)v33,
    v8,
    v7,
    v4,
    (unsigned int)v32,
    (_DWORD)v10,
    a2);
  v23 = v8;
  iced_widget::column::Column<Message,Theme,Renderer>::push(v32, &v15, v33);
  v33[0] = 4;
  v11 = v29;
  v12 = v30;
  sniffnet::gui::pages::overview_page::donut_legend_entry(
    (unsigned int)&v15,
    v29,
    v30,
    v4,
    (unsigned int)v33,
    (_DWORD)v10,
    a2);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v34, v32, &v15);
  v20 = 0LL;
  LODWORD(v21) = 0;
  LOWORD(v18) = 2;
  LOWORD(v19) = 2;
  WORD2(v21) = 0;
  v15 = 0LL;
  v16 = 8LL;
  v17 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v32, &v15);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v33, v32, 20LL);
  *((_QWORD *)&v14 + 1) = v12;
  *(_QWORD *)&v14 = v11;
  sniffnet::chart::types::donut_chart::donut_chart(
    (__int64)&v15,
    v4,
    v28,
    v26,
    v23,
    v24,
    v14,
    v10,
    *(_BYTE *)(v27 + 2436));
  iced_widget::row::Row<Message,Theme,Renderer>::push(v32, v33, &v15);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v35, v32, v34);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v15, v35);
  iced_widget::container::Container<Message,Theme,Renderer>::height(v32, &v15, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::width(&v15, v32, 0LL);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v32, &v15);
  return iced_widget::container::Container<Message,Theme,Renderer>::align_y(v25, v32);
}