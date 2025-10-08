__int64 __fastcall alacritty::input::Processor<T,A>::mouse_wheel_input(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  unsigned __int8 v5; // r15
  __int64 result; // rax
  __m128d v7; // xmm2
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // rbx
  double v11; // [rsp+0h] [rbp-78h]
  float v12; // [rsp+0h] [rbp-78h]
  float v13; // [rsp+0h] [rbp-78h]
  float v14; // [rsp+10h] [rbp-68h]
  double v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[24]; // [rsp+30h] [rbp-48h] BYREF
  float v17; // [rsp+48h] [rbp-30h]
  float v18; // [rsp+4Ch] [rbp-2Ch]

  v4 = *(_QWORD *)(a1 + 64);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v4);
  v5 = *(_BYTE *)(v4 + 1044);
  if ( *(_DWORD *)a2 != 1 )
  {
    v12 = *(float *)(a2 + 4);
    v14 = *(float *)(a2 + 8);
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v16);
    v13 = v12 * v17;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v16);
    v8 = v13;
    v9 = (float)(v14 * v18);
    return alacritty::input::Processor<T,A>::scroll_terminal(a1, v8, v9, (double)v5);
  }
  if ( a3 )
  {
    result = a3;
    if ( a3 != 1 )
      return result;
    v15 = *(double *)(a2 + 8);
    v11 = *(double *)(a2 + 16);
    v7.m128d_f64[0] = fabs(v15) / hypot(v15, v11);
    v8 = v15;
    *(_QWORD *)&v9 = ~(unsigned __int64)*(_OWORD *)&_mm_cmplt_sd((__m128d)0x3FECCCCCCCCCCCCDuLL, v7) & *(_QWORD *)&v11;
    if ( v7.m128d_f64[0] <= 0.9 )
      v8 = 0.0;
    return alacritty::input::Processor<T,A>::scroll_terminal(a1, v8, v9, (double)v5);
  }
  v10 = *(_QWORD *)(a1 + 24);
  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v10);
  *(_OWORD *)(v10 + 16) = 0LL;
  return result;
}