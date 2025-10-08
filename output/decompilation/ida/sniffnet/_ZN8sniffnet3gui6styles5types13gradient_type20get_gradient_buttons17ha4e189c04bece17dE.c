__int64 __fastcall sniffnet::gui::styles::types::gradient_type::get_gradient_buttons(
        void *dest,
        __int64 a2,
        char a3,
        float a4)
{
  int v5; // [rsp+8h] [rbp-1D0h]
  __m128 v6; // [rsp+10h] [rbp-1C8h]
  __int64 src; // [rsp+38h] [rbp-1A0h] BYREF
  int v8; // [rsp+40h] [rbp-198h]
  float v9; // [rsp+44h] [rbp-194h]
  int v10; // [rsp+50h] [rbp-188h]
  int v11; // [rsp+68h] [rbp-170h]
  int v12; // [rsp+80h] [rbp-158h]
  int v13; // [rsp+98h] [rbp-140h]
  int v14; // [rsp+B0h] [rbp-128h]
  int v15; // [rsp+C8h] [rbp-110h]
  int v16; // [rsp+E0h] [rbp-F8h]
  int v17; // [rsp+F8h] [rbp-E0h]
  _BYTE desta[220]; // [rsp+FCh] [rbp-DCh] BYREF

  v17 = 1075235812;
  LODWORD(src) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v6 = (__m128)*(unsigned __int64 *)(a2 + 16);
      v5 = *(_DWORD *)(a2 + 24);
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 24);
      v6 = (__m128)*(unsigned __int64 *)(a2 + 16);
    }
  }
  else
  {
    v6 = (__m128)*(unsigned __int64 *)(a2 + 16);
    v5 = *(_DWORD *)(a2 + 24);
  }
  iced_core::gradient::Linear::add_stop(desta, &src);
  _mm_storel_ps((double *)&src, v6);
  v8 = v5;
  v9 = a4;
  return iced_core::gradient::Linear::add_stop(dest, desta);
}