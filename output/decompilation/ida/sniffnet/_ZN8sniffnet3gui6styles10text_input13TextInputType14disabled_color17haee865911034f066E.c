__int64 __fastcall sniffnet::gui::styles::text_input::TextInputType::disabled_color(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // xmm0_4
  int v4; // [rsp+Ch] [rbp-8Ch]
  __int64 v5; // [rsp+10h] [rbp-88h]
  _BYTE v6[80]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+70h] [rbp-28h]
  char v9; // [rsp+84h] [rbp-14h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v6, a2);
  v4 = v8;
  v5 = v7;
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v6, a2);
  if ( v9 )
    v3 = 1045220557;
  else
    v3 = 1060320051;
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v3;
  return result;
}