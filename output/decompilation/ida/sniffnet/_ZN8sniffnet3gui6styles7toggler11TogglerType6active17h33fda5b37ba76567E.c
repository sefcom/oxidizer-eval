__int64 __fastcall sniffnet::gui::styles::toggler::TogglerType::active(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // xmm0_4
  __m128 v6; // xmm1
  int v7; // xmm2_4
  __int128 v8; // [rsp+0h] [rbp-108h]
  __int128 v9; // [rsp+10h] [rbp-F8h]
  __int128 v10; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-D8h]
  _BYTE v12[64]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+C0h] [rbp-48h]
  int v14; // [rsp+C8h] [rbp-40h]
  int v15; // [rsp+CCh] [rbp-3Ch]
  int v16; // [rsp+E0h] [rbp-28h]

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(&v10, a2);
  result = sniffnet::gui::styles::types::style_type::StyleType::get_extension(v12, a2);
  if ( a3 )
  {
    v5 = v16;
    v6 = (__m128)(unsigned __int64)v11;
    v7 = DWORD2(v11);
    v8 = v10;
    v9 = v11;
  }
  else
  {
    v6 = (__m128)v13;
    v7 = v14;
    v5 = v15;
    v8 = v10;
    v9 = 0LL;
  }
  _mm_storel_ps((double *)a1, v6);
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = v5;
  _mm_storel_ps((double *)(a1 + 16), v6);
  *(_DWORD *)(a1 + 24) = v7;
  *(_DWORD *)(a1 + 28) = v5;
  *(_OWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 64) = 0x4000000040000000LL;
  *(_OWORD *)(a1 + 48) = v9;
  return result;
}