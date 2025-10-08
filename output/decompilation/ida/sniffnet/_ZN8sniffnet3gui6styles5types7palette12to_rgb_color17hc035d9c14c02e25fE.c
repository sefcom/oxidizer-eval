__int64 __fastcall sniffnet::gui::styles::types::palette::to_rgb_color(float *a1)
{
  float v1; // xmm0_4
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  float v5; // xmm1_4
  float v6; // xmm2_4

  v1 = *a1;
  LOBYTE(v2) = 0;
  if ( *a1 > 1.0 )
    goto LABEL_8;
  LOBYTE(v3) = 0;
  LOBYTE(v4) = 0;
  if ( v1 < 0.0 )
    return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v3 << 8) | (unsigned int)(unsigned __int8)v4;
  v5 = a1[1];
  LOBYTE(v2) = 0;
  if ( v5 > 1.0 )
    goto LABEL_8;
  if ( v5 < 0.0 )
    return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v3 << 8) | (unsigned int)(unsigned __int8)v4;
  v6 = a1[2];
  LOBYTE(v2) = 0;
  if ( v6 > 1.0 )
  {
LABEL_8:
    LOBYTE(v3) = 0;
    LOBYTE(v4) = 0;
    return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v3 << 8) | (unsigned int)(unsigned __int8)v4;
  }
  if ( v6 >= 0.0 )
  {
    v4 = (int)fminf(255.0, fmaxf(0.0, v1 * 255.0));
    v3 = (int)fminf(255.0, fmaxf(0.0, v5 * 255.0));
    v2 = (int)fminf(255.0, fmaxf(0.0, v6 * 255.0));
  }
  return ((unsigned __int8)v2 << 16) | ((unsigned __int8)v3 << 8) | (unsigned int)(unsigned __int8)v4;
}