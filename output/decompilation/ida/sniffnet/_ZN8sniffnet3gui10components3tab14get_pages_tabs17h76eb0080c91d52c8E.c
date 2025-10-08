_OWORD *__fastcall sniffnet::gui::components::tab::get_pages_tabs(
        _OWORD *a1,
        char a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // r12
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  _OWORD *result; // rax
  __int128 v16; // [rsp+10h] [rbp-278h] BYREF
  __int128 v17; // [rsp+20h] [rbp-268h]
  __int128 v18; // [rsp+30h] [rbp-258h]
  __int128 v19; // [rsp+40h] [rbp-248h]
  __int128 v20; // [rsp+50h] [rbp-238h] BYREF
  __int128 v21; // [rsp+60h] [rbp-228h]
  __int128 v22; // [rsp+70h] [rbp-218h]
  __int128 v23; // [rsp+80h] [rbp-208h]
  _OWORD *v24; // [rsp+90h] [rbp-1F8h]
  __int64 v25; // [rsp+98h] [rbp-1F0h]
  __int128 v26; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-1D8h]
  __int128 v28; // [rsp+C0h] [rbp-1C8h]
  __int128 v29; // [rsp+D0h] [rbp-1B8h]
  _QWORD v30[3]; // [rsp+E0h] [rbp-1A8h] BYREF
  __int16 v31; // [rsp+F8h] [rbp-190h]
  __int16 v32; // [rsp+100h] [rbp-188h]
  __int128 v33; // [rsp+108h] [rbp-180h]
  int v34; // [rsp+118h] [rbp-170h]
  __int16 v35; // [rsp+11Ch] [rbp-16Ch]

  v25 = a6;
  v24 = a1;
  v33 = 0LL;
  v34 = 0;
  v31 = 2;
  v32 = 2;
  v35 = 0;
  v30[0] = 0LL;
  v30[1] = 8LL;
  v30[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(&v16, v30, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(v30, &v16, 0LL);
  v9 = a4;
  v10 = a5;
  v11 = v25;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&v16, v30, 2LL);
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v20, &v16, 196608LL);
  v19 = v23;
  v18 = v22;
  v17 = v21;
  v16 = v20;
  sniffnet::gui::components::tab::new_page_tab((unsigned int)v30, 0, a2 == 0, v10, a3, v9, 0LL, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, &v16, v30);
  v23 = v29;
  v22 = v28;
  v21 = v27;
  v20 = v26;
  v19 = v29;
  v18 = v28;
  v17 = v27;
  v16 = v26;
  sniffnet::gui::components::tab::new_page_tab((unsigned int)v30, 1, a2 == 1, (unsigned __int8)v10, a3, v9, 0LL, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, &v16, v30);
  v23 = v29;
  v22 = v28;
  v21 = v27;
  v20 = v26;
  v19 = v29;
  v18 = v28;
  v17 = v27;
  v16 = v26;
  sniffnet::gui::components::tab::new_page_tab((unsigned int)v30, 2, a2 == 2, (unsigned __int8)v10, a3, v9, 1LL, v11);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, &v16, v30);
  v12 = v26;
  v13 = v27;
  v14 = v28;
  result = v24;
  v24[3] = v29;
  result[2] = v14;
  result[1] = v13;
  *result = v12;
  return result;
}