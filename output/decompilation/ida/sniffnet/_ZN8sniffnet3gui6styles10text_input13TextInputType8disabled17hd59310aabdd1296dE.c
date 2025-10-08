__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::disabled(__int64 a1, char a2, __int64 a3)
{
  int v4; // xmm0_4
  __int64 result; // rax
  int v6; // [rsp+10h] [rbp-108h]
  int v7; // [rsp+14h] [rbp-104h]
  int v8; // [rsp+18h] [rbp-100h]
  int v9; // [rsp+1Ch] [rbp-FCh]
  __m128 v10; // [rsp+20h] [rbp-F8h]
  _BYTE v11[64]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-A8h]
  int v13; // [rsp+78h] [rbp-A0h]
  int v14; // [rsp+94h] [rbp-84h]
  int v15; // [rsp+98h] [rbp-80h]
  char v16; // [rsp+9Ch] [rbp-7Ch]
  _BYTE v17[80]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v18; // [rsp+F0h] [rbp-28h]
  int v19; // [rsp+F8h] [rbp-20h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v17, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v11, a3);
  if ( (a2 & 1) == 0 )
  {
    v7 = v15;
    v10 = (__m128)v12;
    v6 = v13;
    v8 = v14;
    if ( v16 )
      goto LABEL_3;
LABEL_5:
    v4 = 1060320051;
    goto LABEL_6;
  }
  v10 = 0LL;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  if ( !v16 )
    goto LABEL_5;
LABEL_3:
  v4 = 1045220557;
LABEL_6:
  v9 = v19;
  sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 248, a3);
  sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 264, a3);
  result = sniffnet::gui::styles::text_input::TextInputType::disabled_color(a1 + 280, a3);
  *(_DWORD *)a1 = 2;
  _mm_storel_ps((double *)(a1 + 4), v10);
  *(_DWORD *)(a1 + 12) = v6;
  *(_DWORD *)(a1 + 16) = v7;
  _mm_storel_ps((double *)(a1 + 196), v10);
  *(_DWORD *)(a1 + 204) = v6;
  *(_DWORD *)(a1 + 208) = v8;
  *(_OWORD *)(a1 + 212) = xmmword_26E510;
  *(_DWORD *)(a1 + 228) = 0x40000000;
  *(_QWORD *)(a1 + 232) = v18;
  *(_DWORD *)(a1 + 240) = v9;
  *(_DWORD *)(a1 + 244) = v4;
  return result;
}