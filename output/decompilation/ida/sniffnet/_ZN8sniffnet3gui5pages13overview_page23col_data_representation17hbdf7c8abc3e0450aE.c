__int64 __fastcall sniffnet::gui::pages::overview_page::col_data_representation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int128 v5; // rax
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  char v10; // [rsp+6h] [rbp-C92h] BYREF
  char v11; // [rsp+7h] [rbp-C91h] BYREF
  __int128 v12; // [rsp+8h] [rbp-C90h] BYREF
  __int128 v13; // [rsp+18h] [rbp-C80h]
  __int128 v14; // [rsp+28h] [rbp-C70h]
  __int128 v15; // [rsp+38h] [rbp-C60h]
  __int64 v16; // [rsp+48h] [rbp-C50h]
  _QWORD v17[3]; // [rsp+50h] [rbp-C48h] BYREF
  __int16 v18; // [rsp+68h] [rbp-C30h]
  __int16 v19; // [rsp+70h] [rbp-C28h]
  __int128 v20; // [rsp+78h] [rbp-C20h]
  int v21; // [rsp+88h] [rbp-C10h]
  __int16 v22; // [rsp+8Ch] [rbp-C0Ch]
  _BYTE v23[24]; // [rsp+98h] [rbp-C00h] BYREF
  _BYTE v24[64]; // [rsp+B0h] [rbp-BE8h] BYREF
  _QWORD src[138]; // [rsp+F0h] [rbp-BA8h] BYREF
  _OWORD dest[69]; // [rsp+540h] [rbp-758h] BYREF
  _BYTE v27[368]; // [rsp+990h] [rbp-308h] BYREF
  _BYTE v28[408]; // [rsp+B00h] [rbp-198h] BYREF

  v10 = a2;
  v11 = a4;
  *(_OWORD *)&src[5] = 0LL;
  src[7] = 0x7F80000000000000LL;
  LOWORD(src[3]) = 2;
  LOWORD(src[4]) = 2;
  LOWORD(src[8]) = 0;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(v17, src, 5LL);
  *(_QWORD *)&v5 = sniffnet::translations::translations_2::data_representation_translation(a2);
  dest[0] = v5;
  *(_QWORD *)&v12 = dest;
  *((_QWORD *)&v12 + 1) = <&T as core::fmt::Display>::fmt;
  src[0] = &unk_2DFEF58;
  src[1] = 2LL;
  src[4] = 0LL;
  src[2] = &v12;
  src[3] = 1LL;
  core::option::Option<T>::map_or_else(v23, 0LL, *((_QWORD *)&v5 + 1), src);
  iced_core::widget::text::Text<Theme,Renderer>::new(src, v23);
  iced_core::widget::text::Text<Theme,Renderer>::class(dest, src, 4LL);
  iced_core::widget::text::Text<Theme,Renderer>::font(src, dest, a3);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v12, v17, src);
  *(_QWORD *)&dest[0] = &v11;
  *((_QWORD *)&dest[0] + 1) = &v10;
  *(_QWORD *)&dest[1] = a3;
  core::array::drain::drain_array_with(src, dest);
  memcpy(dest, src, sizeof(dest));
  memcpy(src, dest, 0x170uLL);
  memcpy(v27, &dest[23], sizeof(v27));
  memcpy(v28, &dest[46], 0x170uLL);
  *(_QWORD *)&dest[4] = v16;
  dest[3] = v15;
  dest[2] = v14;
  dest[1] = v13;
  dest[0] = v12;
  v20 = 0LL;
  v21 = 0;
  v18 = 2;
  v19 = 2;
  v22 = 0;
  v17[0] = 0LL;
  v17[1] = 8LL;
  v17[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(v24, v17, 5LL);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v17, v24, src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v24, v17, v27);
  iced_widget::column::Column<Message,Theme,Renderer>::push(src, dest, v24);
  iced_widget::column::Column<Message,Theme,Renderer>::push(&v12, src, v28);
  result = v16;
  *(_QWORD *)(a1 + 64) = v16;
  v7 = v12;
  v8 = v13;
  v9 = v14;
  *(_OWORD *)(a1 + 48) = v15;
  *(_OWORD *)(a1 + 32) = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  return result;
}