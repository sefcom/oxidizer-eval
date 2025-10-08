__int64 __fastcall sniffnet::gui::components::tab::get_settings_tabs(_OWORD *a1, char a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // [rsp+0h] [rbp-268h] BYREF
  __int128 v14; // [rsp+40h] [rbp-228h] BYREF
  __int128 v15; // [rsp+50h] [rbp-218h]
  __int128 v16; // [rsp+60h] [rbp-208h]
  __int128 v17; // [rsp+70h] [rbp-1F8h]
  __int128 v18; // [rsp+80h] [rbp-1E8h] BYREF
  __int128 v19; // [rsp+90h] [rbp-1D8h]
  __int128 v20; // [rsp+A0h] [rbp-1C8h]
  __int128 v21; // [rsp+B0h] [rbp-1B8h]
  _QWORD v22[3]; // [rsp+C0h] [rbp-1A8h] BYREF
  __int16 v23; // [rsp+D8h] [rbp-190h]
  __int16 v24; // [rsp+E0h] [rbp-188h]
  __int128 v25; // [rsp+E8h] [rbp-180h]
  int v26; // [rsp+F8h] [rbp-170h]
  __int16 v27; // [rsp+FCh] [rbp-16Ch]

  v25 = 0LL;
  v26 = 0;
  v23 = 2;
  v24 = 2;
  v27 = 0;
  v22[0] = 0LL;
  v22[1] = 8LL;
  v22[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(&v13, v22, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v22, &v13, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v13, v22, 2LL);
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v14, &v13, 196608LL);
  sniffnet::gui::components::tab::new_settings_tab(
    v22,
    0LL,
    a2 == 0,
    a4,
    a3,
    v6,
    v14,
    *((_QWORD *)&v14 + 1),
    v15,
    *((_QWORD *)&v15 + 1),
    v16,
    *((_QWORD *)&v16 + 1),
    v17,
    *((_QWORD *)&v17 + 1));
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v18, &v13, v22);
  v17 = v21;
  v16 = v20;
  v15 = v19;
  v14 = v18;
  sniffnet::gui::components::tab::new_settings_tab(
    v22,
    1LL,
    a2 == 1,
    (unsigned __int8)a4,
    a3,
    v7,
    v18,
    *((_QWORD *)&v18 + 1),
    v19,
    *((_QWORD *)&v19 + 1),
    v20,
    *((_QWORD *)&v20 + 1),
    v21,
    *((_QWORD *)&v21 + 1));
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v18, &v13, v22);
  v17 = v21;
  v16 = v20;
  v15 = v19;
  v14 = v18;
  sniffnet::gui::components::tab::new_settings_tab(
    v22,
    2LL,
    a2 == 2,
    (unsigned __int8)a4,
    a3,
    v8,
    v18,
    *((_QWORD *)&v18 + 1),
    v19,
    *((_QWORD *)&v19 + 1),
    v20,
    *((_QWORD *)&v20 + 1),
    v21,
    *((_QWORD *)&v21 + 1));
  result = iced_widget::row::Row<Message,Theme,Renderer>::push(&v18, &v13, v22);
  v10 = v18;
  v11 = v19;
  v12 = v20;
  a1[3] = v21;
  a1[2] = v12;
  a1[1] = v11;
  *a1 = v10;
  return result;
}