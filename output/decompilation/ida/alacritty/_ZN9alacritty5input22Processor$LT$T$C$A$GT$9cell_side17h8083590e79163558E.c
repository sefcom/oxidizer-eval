bool __fastcall alacritty::input::Processor<T,A>::cell_side(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r15
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v11; // [rsp+Ch] [rbp-5Ch]
  float v12; // [rsp+10h] [rbp-58h]
  _BYTE v13[16]; // [rsp+28h] [rbp-40h] BYREF
  float v14; // [rsp+38h] [rbp-30h]
  float v15; // [rsp+40h] [rbp-28h]
  float v16; // [rsp+48h] [rbp-20h]

  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v13);
  v2 = 0LL;
  if ( v15 >= 0.0 )
    v2 = (unsigned int)(int)v15;
  if ( v15 > 1.8446743e19 )
    v2 = -1LL;
  if ( !v2 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_882D68);
  v3 = (unsigned int)(int)v16;
  if ( v16 < 0.0 )
    v3 = 0LL;
  if ( v16 > 1.8446743e19 )
    v3 = -1LL;
  v4 = a2 - v3;
  if ( a2 < v3 )
    v4 = 0LL;
  if ( (v2 | v4) >> 32 )
    v5 = v4 % v2;
  else
    v5 = (unsigned int)v4 % (unsigned int)v2;
  v6 = 0LL;
  if ( (float)(0.5 * v15) >= 0.0 )
    v6 = (unsigned int)(int)(float)(0.5 * v15);
  v7 = -1LL;
  if ( (float)(0.5 * v15) <= 1.8446743e19 )
    v7 = v6;
  v11 = v14;
  v12 = v16;
  v8 = (float)(v11 - v12) - fmodf(v14 - (float)(v16 + v16), v15);
  if ( (a2 & 0x8000000000000000LL) != 0LL )
    v9 = (float)(int)((a2 >> 1) | a2 & 1) + (float)(int)((a2 >> 1) | a2 & 1);
  else
    v9 = (float)(int)a2;
  return v9 >= v8 || v5 > v7;
}