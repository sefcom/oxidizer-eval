bool __fastcall alacritty::display::SizeInfo::contains_point(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  float v3; // xmm0_4
  __int64 v4; // rax
  float v5; // xmm1_4
  __int64 v6; // rax
  float v7; // xmm1_4
  unsigned __int64 v8; // rcx
  bool result; // al
  unsigned __int64 v10; // r11
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm1_4
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax

  v3 = *(float *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < 0 )
  {
    v6 = (*(_QWORD *)(a1 + 8) >> 1) | *(_QWORD *)(a1 + 8) & 1LL;
    v5 = (float)(int)v6 + (float)(int)v6;
  }
  else
  {
    v5 = (float)(int)v4;
  }
  v7 = (float)(v5 * *(float *)(a1 + 24)) + v3;
  v8 = (unsigned int)(int)v7;
  result = 0;
  if ( v7 < 0.0 )
    v8 = 0LL;
  if ( v7 > 1.8446743e19 )
    v8 = -1LL;
  v10 = (unsigned int)(int)v3;
  if ( v3 < 0.0 )
    v10 = 0LL;
  if ( v3 > 1.8446743e19 )
    v10 = -1LL;
  if ( a2 > v10 && a2 <= v8 )
  {
    v11 = *(float *)(a1 + 36);
    if ( *(__int64 *)a1 < 0 )
    {
      v13 = (*(_QWORD *)a1 >> 1) | *(_QWORD *)a1 & 1LL;
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)*(_QWORD *)a1;
    }
    v14 = (float)(v12 * *(float *)(a1 + 28)) + v11;
    result = 0;
    v15 = 0LL;
    if ( v14 >= 0.0 )
      v15 = (unsigned int)(int)v14;
    if ( v14 > 1.8446743e19 )
      v15 = -1LL;
    if ( a3 <= v15 )
    {
      v16 = 0LL;
      if ( v11 >= 0.0 )
        v16 = (unsigned int)(int)v11;
      if ( v11 > 1.8446743e19 )
        v16 = -1LL;
      return a3 > v16;
    }
  }
  return result;
}