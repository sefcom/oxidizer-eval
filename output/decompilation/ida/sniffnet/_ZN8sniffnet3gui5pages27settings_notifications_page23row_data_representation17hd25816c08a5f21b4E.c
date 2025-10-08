_OWORD *__fastcall sniffnet::gui::pages::settings_notifications_page::row_data_representation(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // bp
  __int64 label; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _OWORD *result; // rax
  char v19; // [rsp+Eh] [rbp-52Ah]
  char v20; // [rsp+Fh] [rbp-529h]
  __int64 v22; // [rsp+20h] [rbp-518h]
  _QWORD v23[2]; // [rsp+28h] [rbp-510h] BYREF
  __int16 v24; // [rsp+38h] [rbp-500h]
  char v25; // [rsp+3Ah] [rbp-4FEh]
  __int128 v26; // [rsp+40h] [rbp-4F8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-4E8h]
  __int128 v28; // [rsp+60h] [rbp-4D8h]
  __int128 v29; // [rsp+70h] [rbp-4C8h]
  __int128 v30; // [rsp+80h] [rbp-4B8h]
  _OWORD v31[4]; // [rsp+90h] [rbp-4A8h] BYREF
  _BYTE v32[24]; // [rsp+D8h] [rbp-460h] BYREF
  __int128 src; // [rsp+F0h] [rbp-448h] BYREF
  _OWORD *v34; // [rsp+100h] [rbp-438h]
  __int64 v35; // [rsp+108h] [rbp-430h]
  __int64 v36; // [rsp+110h] [rbp-428h]
  __int128 v37; // [rsp+118h] [rbp-420h]
  int v38; // [rsp+128h] [rbp-410h]
  __int16 v39; // [rsp+12Ch] [rbp-40Ch]
  __int128 v40; // [rsp+260h] [rbp-2D8h] BYREF
  __int64 v41; // [rsp+270h] [rbp-2C8h]
  unsigned __int8 v42; // [rsp+278h] [rbp-2C0h]
  char v43; // [rsp+279h] [rbp-2BFh]
  char v44; // [rsp+27Ah] [rbp-2BEh]
  char v45; // [rsp+280h] [rbp-2B8h]
  unsigned __int64 v46; // [rsp+368h] [rbp-1D0h]
  __int128 dest; // [rsp+390h] [rbp-1A8h] BYREF
  _OWORD *v48; // [rsp+3A0h] [rbp-198h]

  v37 = 0LL;
  v38 = 0;
  LOWORD(v35) = 2;
  LOWORD(v36) = 2;
  v39 = 0;
  *(_QWORD *)&src = 0LL;
  *((_QWORD *)&src + 1) = 8LL;
  v34 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::width(&dest, &src, 2LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&src, &dest, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(&dest, &src, 5LL);
  src = xmmword_26E870;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v40, &dest, &src, v7, v8, v9);
  *(_QWORD *)&v10 = sniffnet::translations::translations_2::data_representation_translation(a3);
  dest = v10;
  *(_QWORD *)&v31[0] = &dest;
  *((_QWORD *)&v31[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&src = &unk_2DFEF58;
  *((_QWORD *)&src + 1) = 2LL;
  v36 = 0LL;
  v34 = v31;
  v35 = 1LL;
  core::option::Option<T>::map_or_else(v32, 0LL, *((_QWORD *)&v10 + 1), &src);
  iced_core::widget::text::Text<Theme,Renderer>::new(&src, v32);
  iced_core::widget::text::Text<Theme,Renderer>::font(&dest, &src, a4);
  iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, &v40, &dest);
  v23[0] = 0LL;
  v23[1] = 3LL;
  v24 = 258;
  v25 = 0;
  v11 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v23);
  if ( v11 != 3 )
  {
    v12 = v11;
    v30 = *(_OWORD *)a2;
    v20 = *(_BYTE *)(a2 + 26);
    v19 = *(_BYTE *)(a2 + 25);
    v22 = *(_QWORD *)(a2 + 16);
    do
    {
      v31[3] = v29;
      v31[2] = v28;
      v31[1] = v27;
      v31[0] = v26;
      label = sniffnet::networking::types::data_representation::DataRepr::get_label(v12, (unsigned __int8)a3);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&src, label, v14);
      v48 = v34;
      dest = src;
      iced_core::widget::text::Text<Theme,Renderer>::new(&src, &dest);
      iced_core::widget::text::Text<Theme,Renderer>::size(&dest, &src, 14.3);
      iced_core::widget::text::Text<Theme,Renderer>::align_x(&src, &dest);
      iced_core::widget::text::Text<Theme,Renderer>::align_y(&dest, &src);
      iced_core::widget::text::Text<Theme,Renderer>::font(&v40, &dest, a4);
      iced_widget::button::Button<Message,Theme,Renderer>::new(&src, &v40);
      v40 = xmmword_26DF90;
      iced_widget::button::Button<Message,Theme,Renderer>::padding(&dest, &src);
      iced_widget::button::Button<Message,Theme,Renderer>::height(&src, &dest);
      iced_widget::button::Button<Message,Theme,Renderer>::class(&dest, &src, (a5 == (char)v12) | 4u);
      v40 = v30;
      v41 = v22;
      v42 = v12;
      v43 = v19;
      v44 = v20;
      v45 = 0;
      v46 = 0x8000000000000017LL;
      iced_widget::button::Button<Message,Theme,Renderer>::on_press(&src, &dest, &v40);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v26, v31, &src);
      v12 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v23);
    }
    while ( v12 != 3 );
  }
  v15 = v26;
  v16 = v27;
  v17 = v28;
  result = a1;
  a1[3] = v29;
  a1[2] = v17;
  a1[1] = v16;
  *a1 = v15;
  return result;
}