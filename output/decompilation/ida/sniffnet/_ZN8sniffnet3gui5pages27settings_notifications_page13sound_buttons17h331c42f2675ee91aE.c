_OWORD *__fastcall sniffnet::gui::pages::settings_notifications_page::sound_buttons(
        _OWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  unsigned __int8 v13; // bl
  unsigned __int64 v14; // rcx
  char v15; // r14
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _OWORD *result; // rax
  char v20; // [rsp+8h] [rbp-530h]
  char v21; // [rsp+9h] [rbp-52Fh]
  char v22; // [rsp+Ah] [rbp-52Eh]
  unsigned __int8 v23; // [rsp+Bh] [rbp-52Dh]
  unsigned int v24; // [rsp+Ch] [rbp-52Ch]
  __int64 v25; // [rsp+18h] [rbp-520h]
  unsigned __int64 v26; // [rsp+20h] [rbp-518h]
  __int64 v27; // [rsp+28h] [rbp-510h]
  char v28; // [rsp+30h] [rbp-508h]
  _QWORD v29[2]; // [rsp+38h] [rbp-500h] BYREF
  int v30; // [rsp+48h] [rbp-4F0h]
  __int128 v31; // [rsp+50h] [rbp-4E8h] BYREF
  __int128 v32; // [rsp+60h] [rbp-4D8h]
  __int128 v33; // [rsp+70h] [rbp-4C8h]
  __int128 v34; // [rsp+80h] [rbp-4B8h]
  _OWORD v35[4]; // [rsp+90h] [rbp-4A8h] BYREF
  _BYTE v36[24]; // [rsp+D8h] [rbp-460h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-448h] BYREF
  __int64 v38; // [rsp+100h] [rbp-438h]
  char v39; // [rsp+108h] [rbp-430h]
  unsigned __int8 v40; // [rsp+109h] [rbp-42Fh]
  char v41; // [rsp+10Ah] [rbp-42Eh]
  bool v42; // [rsp+110h] [rbp-428h]
  unsigned __int64 v43; // [rsp+1F8h] [rbp-340h]
  __int128 src; // [rsp+220h] [rbp-318h] BYREF
  _OWORD *v45; // [rsp+230h] [rbp-308h]
  __int64 v46; // [rsp+238h] [rbp-300h]
  __int64 v47; // [rsp+240h] [rbp-2F8h]
  __int128 v48; // [rsp+248h] [rbp-2F0h]
  int v49; // [rsp+258h] [rbp-2E0h]
  __int16 v50; // [rsp+25Ch] [rbp-2DCh]
  _QWORD dest[53]; // [rsp+390h] [rbp-1A8h] BYREF

  v6 = *a2;
  v22 = BYTE1(a2[2 * (unsigned int)(*a2 != 2) + 1]);
  v48 = 0LL;
  v49 = 0;
  LOWORD(v46) = 2;
  LOWORD(v47) = 2;
  v50 = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  v45 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(dest, &src, 2LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&src, dest, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(dest, &src, 5LL);
  src = xmmword_26E870;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v37, dest, &src, v7, v8, v9);
  dest[0] = sniffnet::translations::translations::sound_translation(a4);
  dest[1] = v10;
  *(_QWORD *)&v35[0] = dest;
  *((_QWORD *)&v35[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &unk_2DFEF58;
  *((_QWORD *)&src + 1) = 2LL;
  v47 = 0LL;
  v45 = v35;
  v46 = 1LL;
  core::option::Option<T>::map_or_else(v36, 0LL, v10, &src);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v36);
  iced_core::widget::text::Text<Theme,Renderer>::font(dest, &src, a3);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v31, &v37, dest);
  v29[0] = 0LL;
  v29[1] = 4LL;
  v30 = 50462976;
  v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v29);
  if ( v11 != 4 )
  {
    v12 = a3;
    v13 = v11;
    v21 = *((_BYTE *)a2 + 24);
    v20 = *((_BYTE *)a2 + 26);
    v14 = a2[1];
    v27 = a2[2];
    v24 = (unsigned int)v14 >> 8;
    v28 = v14;
    v26 = v14 >> 16;
    v25 = a3;
    do
    {
      v15 = v13;
      if ( (_DWORD)v6 != 2 )
      {
        v23 = v13;
        v15 = v24;
      }
      v35[3] = v34;
      v35[2] = v33;
      v35[1] = v32;
      v35[0] = v31;
      sniffnet::notifications::types::sound::Sound::get_text(&src, v13, v12);
      iced_core::widget::text::Text<Theme,Renderer>::align_x(dest, &src);
      iced_core::widget::text::Text<Theme,Renderer>::align_y(&v37, dest);
      iced_widget::button::Button<Message,Theme,Renderer>::new(&src, &v37);
      v37 = xmmword_26DF90;
      iced_widget::button::Button<Message,Theme,Renderer>::padding(dest, &src);
      iced_widget::button::Button<Message,Theme,Renderer>::height(&src, dest);
      iced_widget::button::Button<Message,Theme,Renderer>::class(dest, &src, (v22 == (char)v13) | 4u);
      *(_QWORD *)&v37 = v6;
      BYTE8(v37) = v28;
      BYTE9(v37) = v15;
      HIWORD(v37) = WORD2(v26);
      *(_DWORD *)((char *)&v37 + 10) = v26;
      v38 = v27;
      v39 = v21;
      v40 = v23;
      v41 = v20;
      v42 = v13 != 3;
      v43 = 0x8000000000000017LL;
      iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, dest, &v37);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v31, v35, &src);
      v13 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v29);
      v12 = v25;
    }
    while ( v13 != 4 );
  }
  v16 = v31;
  v17 = v32;
  v18 = v33;
  result = a1;
  a1[3] = v34;
  a1[2] = v18;
  a1[1] = v17;
  *a1 = v16;
  return result;
}