__int64 __fastcall sniffnet::gui::styles::svg::SvgType::appearance(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-78h]
  _BYTE v5[80]; // [rsp+10h] [rbp-68h] BYREF
  __int128 v6; // [rsp+60h] [rbp-18h]

  result = 0LL;
  if ( (a2 & 1) == 0 )
  {
    sniffnet::gui::styles::types::style_type::StyleType::get_palette(v5, a3);
    v4 = v6;
    result = 1LL;
  }
  *(_DWORD *)a1 = result;
  *(_OWORD *)(a1 + 4) = v4;
  return result;
}