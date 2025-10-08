__int64 __fastcall sniffnet::gui::pages::settings_style_page::get_palette_rule(__int64 a1, __int128 *a2, __int128 *a3)
{
  __int64 v5; // [rsp+8h] [rbp-180h] BYREF
  __int64 v6; // [rsp+10h] [rbp-178h]
  __int64 v7; // [rsp+18h] [rbp-170h]
  __int16 v8; // [rsp+20h] [rbp-168h]
  int v9; // [rsp+22h] [rbp-166h]
  __int16 v10; // [rsp+26h] [rbp-162h]
  __int16 v11; // [rsp+28h] [rbp-160h]
  int v12; // [rsp+2Ah] [rbp-15Eh]
  __int16 v13; // [rsp+2Eh] [rbp-15Ah]
  __int128 v14; // [rsp+30h] [rbp-158h]
  int v15; // [rsp+40h] [rbp-148h]
  __int16 v16; // [rsp+44h] [rbp-144h]
  int v17; // [rsp+64h] [rbp-124h] BYREF
  __int128 v18; // [rsp+68h] [rbp-120h]
  int v19; // [rsp+7Ah] [rbp-10Eh]
  __int16 v20; // [rsp+7Eh] [rbp-10Ah]
  _QWORD v21[3]; // [rsp+80h] [rbp-108h] BYREF
  __int16 v22; // [rsp+98h] [rbp-F0h]
  __int16 v23; // [rsp+A0h] [rbp-E8h]
  __int128 v24; // [rsp+A8h] [rbp-E0h]
  int v25; // [rsp+B8h] [rbp-D0h]
  __int16 v26; // [rsp+BCh] [rbp-CCh]
  _BYTE v27[64]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v28[136]; // [rsp+100h] [rbp-88h] BYREF

  v24 = 0LL;
  v25 = 0;
  v22 = 2;
  v23 = 2;
  v26 = 0;
  v21[0] = 0LL;
  v21[1] = 8LL;
  v21[2] = 0LL;
  v14 = 0LL;
  v15 = 0;
  v8 = 2;
  v11 = 2;
  v16 = 0;
  v5 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(v28, &v5, 120LL);
  iced_widget::rule::Rule<Theme>::horizontal(&v5, 25LL);
  v18 = *a2;
  v17 = (int)&unk_190001;
  iced_widget::rule::Rule<Theme>::class(v27, &v5, &v17);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v5, v28, v27);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v21, &v5);
  v14 = 0LL;
  v15 = 0;
  v8 = 2;
  v11 = 2;
  v16 = 0;
  v5 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(v28, &v5, 80LL);
  iced_widget::rule::Rule<Theme>::horizontal(&v5, 25LL);
  v18 = a2[1];
  v17 = (int)&unk_190001;
  iced_widget::rule::Rule<Theme>::class(v21, &v5, &v17);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v5, v28, v21);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v21, v27, &v5);
  v14 = 0LL;
  v15 = 0;
  v8 = 2;
  v11 = 2;
  v16 = 0;
  v5 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(v28, &v5, 60LL);
  iced_widget::rule::Rule<Theme>::horizontal(&v5, 25LL);
  v18 = a2[2];
  v17 = (int)&unk_190001;
  iced_widget::rule::Rule<Theme>::class(v27, &v5, &v17);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v5, v28, v27);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v27, v21, &v5);
  v14 = 0LL;
  v15 = 0;
  v8 = 2;
  v9 = v19;
  v10 = v20;
  v11 = 2;
  v12 = v19;
  v13 = v20;
  v16 = 0;
  v5 = 0LL;
  v6 = 8LL;
  v7 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(v28, &v5, 40LL);
  iced_widget::rule::Rule<Theme>::horizontal(&v5, 25LL);
  v18 = *a3;
  v17 = (int)&unk_190001;
  iced_widget::rule::Rule<Theme>::class(v21, &v5, &v17);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v5, v28, v21);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v28, v27, &v5);
  iced_widget::container::Container<Message,Theme,Renderer>::new(&v5, v28);
  iced_widget::container::Container<Message,Theme,Renderer>::align_x(v28, &v5);
  iced_widget::container::Container<Message,Theme,Renderer>::align_y(&v5, v28);
  iced_widget::container::Container<Message,Theme,Renderer>::width(v28, &v5, 304.0);
  iced_widget::container::Container<Message,Theme,Renderer>::height(&v5, v28, 28.4);
  return iced_widget::container::Container<Message,Theme,Renderer>::class(a1, &v5, 8LL);
}