void __fastcall alacritty::input::Processor<T,A>::scroll_terminal(_QWORD *a1, __m128d a2, __m128d a3, __m128d a4)
{
  __int64 v5; // r14
  __m128d *v6; // r14
  int v7; // r15d
  __m128d *v8; // rdi
  _BYTE *v9; // r14
  __m128d *v10; // r13
  unsigned __int8 v11; // bp
  bool v12; // cf
  bool v13; // zf
  double v14; // xmm0_8
  __int64 v15; // r14
  double v16; // xmm1_8
  __int64 v17; // r13
  __int128 v18; // rax
  __int64 v19; // r14
  __m128d *v20; // r14
  double v21; // xmm0_8
  int v22; // r15d
  __int64 v23; // r13
  __m128d *v24; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v25; // [rsp+10h] [rbp-B8h]
  double v26; // [rsp+20h] [rbp-A8h]
  double v27; // [rsp+28h] [rbp-A0h]
  __m128d v28; // [rsp+30h] [rbp-98h]
  __m128d v29; // [rsp+30h] [rbp-98h]
  __int128 v30; // [rsp+48h] [rbp-80h] BYREF
  __int64 v31; // [rsp+58h] [rbp-70h]
  __m128d v32; // [rsp+60h] [rbp-68h]
  __int128 v33; // [rsp+70h] [rbp-58h] BYREF
  __int64 v34; // [rsp+80h] [rbp-48h]
  float v35; // [rsp+88h] [rbp-40h]
  float v36; // [rsp+8Ch] [rbp-3Ch]

  v32 = a2;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(&v33);
  v27 = v35;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(&v33);
  v26 = v36;
  v5 = a1[1];
  if ( (unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v5) )
  {
    v6 = (__m128d *)a1[3];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v6);
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v6);
    v28 = _mm_add_pd(_mm_unpacklo_pd(v32, a3), v6[1]);
    v6[1] = v28;
    v24 = v6;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v6);
    v7 = (int)fmin(fmax(fabs(_mm_unpackhi_pd(v28, v28).m128d_f64[0] / v26), -2147483648.0), 2147483647.0);
    if ( v7 <= 0 )
    {
      v8 = v6;
    }
    else
    {
      do
      {
        alacritty::input::Processor<T,A>::mouse_report(a1, (a3.m128d_f64[0] > 0.0) ^ 0x41, 0);
        --v7;
      }
      while ( v7 );
      v8 = v6;
      v28.m128d_f64[0] = v6[1].m128d_f64[0];
    }
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v8);
    v22 = (int)fmin(fmax(fabs(v28.m128d_f64[0] / v27), -2147483648.0), 2147483647.0);
    if ( v22 > 0 )
    {
      do
      {
        alacritty::input::Processor<T,A>::mouse_report(a1, (v32.m128d_f64[0] > 0.0) ^ 0x43, 0);
        --v22;
      }
      while ( v22 );
    }
  }
  else
  {
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v5);
    if ( (~*(_DWORD *)(v5 + 1756) & 0x9000) != 0
      || (v9 = (_BYTE *)a1[5],
          <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v9),
          (*v9 & 4) != 0) )
    {
      v20 = (__m128d *)a1[3];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v20);
      v21 = a3.m128d_f64[0] * a4.m128d_f64[0] + v20[1].m128d_f64[1];
      v20[1].m128d_f64[1] = v21;
      v24 = v20;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v20);
      if ( (int)fmin(fmax(v21 / v26, -2147483648.0), 2147483647.0) )
        <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scroll(a1, 0LL);
    }
    else
    {
      v10 = (__m128d *)a1[3];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v10);
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v10);
      v29 = _mm_add_pd(v10[1], _mm_mul_pd(_mm_unpacklo_pd(a4, a4), _mm_unpacklo_pd(v32, a3)));
      v11 = 66 - (a3.m128d_f64[0] > 0.0);
      v12 = v32.m128d_f64[0] < 0.0;
      v13 = v32.m128d_f64[0] == 0.0;
      v10[1] = v29;
      v25 = (!v12 && !v13) + 67;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v10);
      v14 = fabs(_mm_unpackhi_pd(v29, v29).m128d_f64[0] / v26);
      v15 = (unsigned int)(int)v14;
      if ( v14 < 0.0 )
        v15 = 0LL;
      if ( v14 > 1.844674407370955e19 )
        v15 = -1LL;
      v24 = v10;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v10);
      v16 = fabs(v29.m128d_f64[0] / v27);
      v17 = (unsigned int)(int)v16;
      if ( v16 < 0.0 )
        v17 = 0LL;
      if ( v16 > 1.844674407370955e19 )
        v17 = -1LL;
      *(_QWORD *)&v18 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(3 * (v17 + v15), 1LL, 1LL, &off_882DF0);
      v30 = v18;
      v31 = 0LL;
      v19 = v15 + 1;
      while ( --v19 )
      {
        alloc::vec::Vec<T,A>::push(&v30, 27LL, &off_882E50);
        alloc::vec::Vec<T,A>::push(&v30, 79LL, &off_882E68);
        alloc::vec::Vec<T,A>::push(&v30, v11, &off_882E80);
      }
      v23 = v17 + 1;
      while ( --v23 )
      {
        alloc::vec::Vec<T,A>::push(&v30, 27LL, &off_882E08);
        alloc::vec::Vec<T,A>::push(&v30, 79LL, &off_882E20);
        alloc::vec::Vec<T,A>::push(&v30, v25, &off_882E38);
      }
      v34 = v31;
      v33 = v30;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(*a1, &v33);
    }
  }
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v24);
  v24[1].m128d_f64[0] = fmod(v24[1].m128d_f64[0], v27);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v24);
  v24[1].m128d_f64[1] = fmod(v24[1].m128d_f64[1], v26);
}