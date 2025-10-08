__int64 __fastcall sniffnet::gui::styles::toggler::TogglerType::hovered(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __m128 v5; // xmm0
  __int128 v6; // [rsp+0h] [rbp-118h]
  __int128 v7; // [rsp+10h] [rbp-108h]
  __int128 v8; // [rsp+20h] [rbp-F8h]
  __int128 v9; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v10; // [rsp+40h] [rbp-D8h]
  _BYTE v11[64]; // [rsp+90h] [rbp-88h] BYREF
  __m128 v12; // [rsp+D0h] [rbp-48h]
  unsigned int v13; // [rsp+F0h] [rbp-28h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v9, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v11, a2);
  if ( a3 )
  {
    v6 = v10;
    v5 = _mm_movelh_ps((__m128)(unsigned __int64)v10, _mm_unpacklo_ps((__m128)DWORD2(v10), (__m128)v13));
    v7 = v9;
    v8 = v10;
  }
  else
  {
    v5 = v12;
    v6 = v10;
    v7 = v9;
    v8 = 0LL;
  }
  *(__m128 *)a1 = v5;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 64) = 0x4000000040000000LL;
  *(_OWORD *)(a1 + 48) = v8;
  return result;
}