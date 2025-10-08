__int64 __fastcall alacritty::event::Mouse::point(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  float v4; // xmm1_4
  unsigned __int64 v5; // rcx
  float v7; // xmm1_4
  unsigned __int64 v8; // r13
  float v9; // xmm0_4
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // cf
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm0_4
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // r12
  unsigned __int64 v21; // rax

  v4 = *(float *)(a3 + 24);
  v5 = 0LL;
  if ( v4 >= 0.0 )
    v5 = (unsigned int)(int)v4;
  if ( v4 > 1.8446743e19 )
    v5 = -1LL;
  if ( !v5 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_882BA0);
  v7 = *(float *)(a3 + 28);
  v8 = 0LL;
  if ( v7 >= 0.0 )
    v8 = (unsigned int)(int)v7;
  if ( v7 > 1.8446743e19 )
    v8 = -1LL;
  if ( !v8 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_882BB8);
  v9 = *(float *)(a3 + 32);
  v10 = (unsigned int)(int)v9;
  if ( v9 < 0.0 )
    v10 = 0LL;
  v11 = -1LL;
  if ( v9 <= 1.8446743e19 )
    v11 = v10;
  v12 = a1 < v11;
  v13 = a1 - v11;
  if ( v12 )
    v13 = 0LL;
  if ( (v5 | v13) >> 32 )
    v14 = v13 / v5;
  else
    v14 = (unsigned int)v13 / (unsigned int)v5;
  v15 = core::cmp::Ord::min(v14, *(_QWORD *)(a3 + 8) - 1LL);
  v16 = *(float *)(a3 + 36);
  v17 = (unsigned int)(int)v16;
  if ( v16 < 0.0 )
    v17 = 0LL;
  v18 = -1LL;
  if ( v16 <= 1.8446743e19 )
    v18 = v17;
  v12 = a2 < v18;
  v19 = a2 - v18;
  if ( v12 )
    v19 = 0LL;
  v20 = v15;
  if ( (v8 | v19) >> 32 )
    v21 = v19 / v8;
  else
    v21 = (unsigned int)v19 / (unsigned int)v8;
  core::cmp::Ord::min(v21, *(_DWORD *)a3 - 1);
  return v20;
}