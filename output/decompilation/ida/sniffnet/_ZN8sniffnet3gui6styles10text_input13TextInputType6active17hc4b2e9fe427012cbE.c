__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::active(__int64 a1, char a2, __int64 a3)
{
  int v4; // xmm0_4
  __int64 result; // rax
  int v6; // [rsp+4h] [rbp-114h]
  int v7; // [rsp+8h] [rbp-110h]
  int v8; // [rsp+Ch] [rbp-10Ch]
  __m128 v9; // [rsp+10h] [rbp-108h]
  __int128 v10; // [rsp+20h] [rbp-F8h]
  _BYTE v11[64]; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v12; // [rsp+70h] [rbp-A8h]
  int v13; // [rsp+94h] [rbp-84h]
  char v14; // [rsp+9Ch] [rbp-7Ch]
  _BYTE v15[80]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+F0h] [rbp-28h]
  int v17; // [rsp+F8h] [rbp-20h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v15, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v11, a3);
  if ( (a2 & 1) == 0 )
  {
    v7 = v13;
    v9 = (__m128)(unsigned __int64)v12;
    v6 = DWORD2(v12);
    v10 = v12;
    if ( v14 )
      goto LABEL_3;
LABEL_5:
    v4 = 1060320051;
    goto LABEL_6;
  }
  v9 = 0LL;
  v10 = 0LL;
  v7 = 0;
  v6 = 0;
  if ( !v14 )
    goto LABEL_5;
LABEL_3:
  v4 = 1045220557;
LABEL_6:
  v8 = v17;
  sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 248, a3);
  sniffnet::gui::styles::text_input::TextInputType::value_color(a1 + 264, a3);
  result = sniffnet::gui::styles::text_input::TextInputType::selection_color(a1 + 280, a3);
  *(_DWORD *)a1 = 2;
  _mm_storel_ps((double *)(a1 + 4), v9);
  *(_DWORD *)(a1 + 12) = v6;
  *(_DWORD *)(a1 + 16) = v7;
  *(_OWORD *)(a1 + 196) = v10;
  *(_OWORD *)(a1 + 212) = xmmword_26E510;
  *(_DWORD *)(a1 + 228) = 0x40000000;
  *(_QWORD *)(a1 + 232) = v16;
  *(_DWORD *)(a1 + 240) = v8;
  *(_DWORD *)(a1 + 244) = v4;
  return result;
}