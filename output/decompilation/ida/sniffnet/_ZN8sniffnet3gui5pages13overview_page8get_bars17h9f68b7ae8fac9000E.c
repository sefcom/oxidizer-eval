__int64 __fastcall sniffnet::gui::pages::overview_page::get_bars(__int64 a1, int a2, int a3)
{
  int v4; // ebp
  __int64 v6; // [rsp+8h] [rbp-150h] BYREF
  __int64 v7; // [rsp+10h] [rbp-148h]
  __int64 v8; // [rsp+18h] [rbp-140h]
  __int16 v9; // [rsp+20h] [rbp-138h]
  int v10; // [rsp+22h] [rbp-136h]
  __int16 v11; // [rsp+26h] [rbp-132h]
  __int16 v12; // [rsp+28h] [rbp-130h]
  int v13; // [rsp+2Ah] [rbp-12Eh]
  __int16 v14; // [rsp+2Eh] [rbp-12Ah]
  __int128 v15; // [rsp+30h] [rbp-128h]
  int v16; // [rsp+40h] [rbp-118h]
  __int16 v17; // [rsp+44h] [rbp-114h]
  int v18; // [rsp+4Ah] [rbp-10Eh]
  __int16 v19; // [rsp+4Eh] [rbp-10Ah]
  _QWORD v20[3]; // [rsp+50h] [rbp-108h] BYREF
  __int16 v21; // [rsp+68h] [rbp-F0h]
  int v22; // [rsp+6Ah] [rbp-EEh]
  __int16 v23; // [rsp+6Eh] [rbp-EAh]
  __int16 v24; // [rsp+70h] [rbp-E8h]
  int v25; // [rsp+72h] [rbp-E6h]
  __int16 v26; // [rsp+76h] [rbp-E2h]
  __int128 v27; // [rsp+78h] [rbp-E0h]
  int v28; // [rsp+88h] [rbp-D0h]
  char v29; // [rsp+8Ch] [rbp-CCh]
  char v30; // [rsp+8Dh] [rbp-CBh]
  _QWORD v31[3]; // [rsp+90h] [rbp-C8h] BYREF
  __int16 v32; // [rsp+A8h] [rbp-B0h]
  __int16 v33; // [rsp+B0h] [rbp-A8h]
  __int128 v34; // [rsp+B8h] [rbp-A0h]
  int v35; // [rsp+C8h] [rbp-90h]
  __int16 v36; // [rsp+CCh] [rbp-8Ch]
  _WORD v37[10]; // [rsp+D4h] [rbp-84h] BYREF
  _BYTE v38[112]; // [rsp+E8h] [rbp-70h] BYREF

  v34 = 0LL;
  v35 = 0;
  v32 = 2;
  v33 = 2;
  v36 = 0;
  v31[0] = 0LL;
  v31[1] = 8LL;
  v31[2] = 0LL;
  v15 = 0LL;
  v16 = 0;
  v9 = 2;
  v12 = 2;
  v17 = 0;
  v6 = 0LL;
  v7 = 8LL;
  v8 = 0LL;
  if ( (_WORD)a2 )
  {
    iced_widget::row::Row<Message,Theme,Renderer>::width(v20, &v6, (unsigned int)(a2 << 16) + 1LL);
    iced_widget::rule::Rule<Theme>::horizontal(&v6, 1LL);
    v37[0] = 2;
    iced_widget::rule::Rule<Theme>::class(v38, &v6, v37);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v6, v20, v38);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(v38, v31, &v6);
  v15 = 0LL;
  v16 = 0;
  v9 = 2;
  v12 = 2;
  v17 = 0;
  v6 = 0LL;
  v7 = 8LL;
  v8 = 0LL;
  if ( (_WORD)a3 )
  {
    iced_widget::row::Row<Message,Theme,Renderer>::width(v20, &v6, (unsigned int)(a3 << 16) + 1LL);
    iced_widget::rule::Rule<Theme>::horizontal(&v6, 1LL);
    v37[0] = 3;
    iced_widget::rule::Rule<Theme>::class(v31, &v6, v37);
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v6, v20, v31);
  }
  iced_widget::row::Row<Message,Theme,Renderer>::push(v31, v38, &v6);
  v4 = a2 + a3;
  if ( (unsigned __int16)v4 >= 0x64u )
  {
    v27 = 0LL;
    v28 = 0;
    v21 = 2;
    v22 = v18;
    v23 = v19;
    v24 = 2;
    v25 = v18;
    v26 = v19;
    v30 = 0;
    v29 = 0;
    v20[0] = 0LL;
    v20[1] = 8LL;
    v20[2] = 0LL;
  }
  else
  {
    v15 = 0LL;
    v16 = 0;
    v9 = 2;
    v10 = v18;
    v11 = v19;
    v12 = 2;
    v13 = v18;
    v14 = v19;
    v17 = 0;
    v6 = 0LL;
    v7 = 8LL;
    v8 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::width(v20, &v6, (unsigned int)((100 - v4) << 16) + 1LL);
  }
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v31, v20);
}