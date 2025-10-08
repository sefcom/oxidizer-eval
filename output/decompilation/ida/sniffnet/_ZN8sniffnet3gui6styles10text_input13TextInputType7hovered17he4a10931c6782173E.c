__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::hovered(__int64 a1, char a2, __int64 a3)
{
  __int128 v4; // xmm0
  int v5; // xmm0_4
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-FCh]
  __int128 v8; // [rsp+10h] [rbp-F8h]
  _BYTE v9[16]; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-D8h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  int v12; // [rsp+78h] [rbp-90h]
  _BYTE v13[64]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v14; // [rsp+C0h] [rbp-48h]
  char v15; // [rsp+ECh] [rbp-1Ch]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v9, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v13, a3);
  if ( (a2 & 1) != 0 )
    v4 = 0LL;
  else
    v4 = v14;
  v8 = v4;
  *(_OWORD *)(a1 + 196) = v10;
  if ( v15 )
    v5 = 1045220557;
  else
    v5 = 1060320051;
  v7 = v12;
  sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 248, a3);
  sniffnet::gui::styles::text_input::TextInputType::value_color((_OWORD *)(a1 + 264), a3);
  result = sniffnet::gui::styles::text_input::TextInputType::selection_color(a1 + 280, a3);
  *(_DWORD *)a1 = 2;
  *(_OWORD *)(a1 + 4) = v8;
  *(_OWORD *)(a1 + 212) = xmmword_26E510;
  *(_DWORD *)(a1 + 228) = 0x40000000;
  *(_QWORD *)(a1 + 232) = v11;
  *(_DWORD *)(a1 + 240) = v7;
  *(_DWORD *)(a1 + 244) = v5;
  return result;
}