unsigned __int64 __fastcall sniffnet::gui::styles::button::ButtonType::disabled(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  char v5; // cl
  __m128 v6; // xmm2
  int v7; // ebp
  __int32 v8; // xmm0_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm2_4
  int v11; // xmm3_4
  int v12; // [rsp+Ch] [rbp-28Ch]
  unsigned int v13; // [rsp+10h] [rbp-288h]
  unsigned int v14; // [rsp+20h] [rbp-278h]
  char v15[16]; // [rsp+30h] [rbp-268h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-258h]
  unsigned int v17; // [rsp+48h] [rbp-250h]
  __int64 v18; // [rsp+70h] [rbp-228h]
  int v19; // [rsp+78h] [rbp-220h]
  __int64 v20; // [rsp+80h] [rbp-218h]
  int v21; // [rsp+88h] [rbp-210h]
  char v22[64]; // [rsp+90h] [rbp-208h] BYREF
  __m128 v23; // [rsp+D0h] [rbp-1C8h]
  unsigned int v24; // [rsp+F0h] [rbp-1A8h]
  int v25; // [rsp+104h] [rbp-194h] BYREF
  __m128 v26; // [rsp+108h] [rbp-190h]
  _BYTE src[176]; // [rsp+118h] [rbp-180h] BYREF
  _BYTE dest[176]; // [rsp+1C8h] [rbp-D0h] BYREF

  sniffnet::gui::styles::types::style_type::StyleType::get_palette(v15, a3);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v22, a3);
  result = (unsigned int)(a2 - 3);
  v5 = 9;
  if ( (unsigned __int8)(a2 - 3) < 0xDu )
    v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 == 9 )
    {
      if ( (unsigned __int8)(a2 - 3) < 0xDu )
      {
        v6 = v23;
        v7 = 2;
        v14 = v24;
      }
      else
      {
        v14 = v24;
        if ( (_BYTE)a2 == 2 )
        {
          v6 = _mm_movelh_ps((__m128)v16, _mm_unpacklo_ps((__m128)v17, (__m128)v24));
          v7 = 2;
        }
        else
        {
          sniffnet::gui::styles::types::gradient_type::get_gradient_buttons(&v25);
          v7 = v25;
          memcpy(dest, src, sizeof(dest));
          v6 = v26;
        }
      }
      v13 = v17;
      v12 = v19;
      *(_DWORD *)a1 = v7;
      *(__m128 *)(a1 + 4) = v6;
      result = (unsigned __int64)memcpy((void *)(a1 + 20), dest, 0xB0uLL);
      *(_QWORD *)(a1 + 196) = v18;
      *(_DWORD *)(a1 + 204) = v12;
      *(_DWORD *)(a1 + 208) = 1056964608;
      *(_QWORD *)(a1 + 212) = v16;
      *(_DWORD *)(a1 + 220) = v13;
      *(_DWORD *)(a1 + 224) = v14;
      *(_OWORD *)(a1 + 228) = xmmword_2710C0;
      *(_DWORD *)(a1 + 244) = 0x40000000;
      *(_OWORD *)(a1 + 260) = 0LL;
      *(_OWORD *)(a1 + 248) = 0LL;
    }
    else
    {
      return (unsigned __int64)sniffnet::gui::styles::button::ButtonType::active(a1, a2, a3);
    }
  }
  else
  {
    v8 = v23.m128_i32[2];
    v9 = v24;
    v10 = v17;
    v11 = v21;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 4) = v23.m128_u64[0];
    *(_DWORD *)(a1 + 12) = v8;
    *(_DWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 196) = v20;
    *(_DWORD *)(a1 + 204) = v11;
    *(_DWORD *)(a1 + 208) = v9;
    *(_QWORD *)(a1 + 212) = v16;
    *(_DWORD *)(a1 + 220) = v10;
    *(_DWORD *)(a1 + 224) = v9;
    *(_OWORD *)(a1 + 228) = xmmword_271660;
    *(_DWORD *)(a1 + 244) = 0x40000000;
    *(_OWORD *)(a1 + 248) = 0LL;
    *(_OWORD *)(a1 + 260) = 0LL;
  }
  return result;
}