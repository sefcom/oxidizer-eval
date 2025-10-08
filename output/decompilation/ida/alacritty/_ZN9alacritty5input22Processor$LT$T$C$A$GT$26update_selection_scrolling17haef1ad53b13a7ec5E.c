__int64 __fastcall alacritty::input::Processor<T,A>::update_selection_scrolling(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rsi
  int v8; // r12d
  float v9; // xmm0_4
  int v10; // edi
  float v11; // xmm1_4
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  double v18; // [rsp+10h] [rbp-228h]
  float v19; // [rsp+10h] [rbp-228h]
  __int64 v20; // [rsp+18h] [rbp-220h]
  __int64 v22; // [rsp+28h] [rbp-210h] BYREF
  float v23; // [rsp+3Ch] [rbp-1FCh]
  float v24; // [rsp+44h] [rbp-1F4h]
  float v25; // [rsp+4Ch] [rbp-1ECh]
  unsigned __int64 v26; // [rsp+50h] [rbp-1E8h] BYREF
  int v27; // [rsp+58h] [rbp-1E0h]
  int v28; // [rsp+5Ch] [rbp-1DCh]
  _BYTE v29[248]; // [rsp+140h] [rbp-F8h] BYREF

  v18 = *(double *)(<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(a1) + 24);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(&v22);
  v4 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(a1);
  v20 = alacritty::display::window::Window::id(v4);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(a2);
  v5 = (int)fmin(fmax(5.0 * v18, -2147483648.0), 2147483647.0);
  v6 = (int)fmin(fmax(v18 * 20.0, -2147483648.0), 2147483647.0);
  v7 = (unsigned int)(int)v25;
  if ( v25 > 2147483500.0 )
    v7 = 0x7FFFFFFFLL;
  v19 = v25;
  v8 = core::cmp::Ord::max(v5, v7);
  if ( v22 < 0 )
    v9 = (float)(int)(((unsigned __int64)v22 >> 1) | v22 & 1) + (float)(int)(((unsigned __int64)v22 >> 1) | v22 & 1);
  else
    v9 = (float)(int)v22;
  v10 = (int)v23;
  if ( v23 > 2147483500.0 )
    v10 = 0x7FFFFFFF;
  v11 = v19 + (float)(v9 * v24);
  v12 = v10 - v5;
  v13 = (unsigned int)(int)v11;
  if ( v11 > 2147483500.0 )
    v13 = 0x7FFFFFFFLL;
  v14 = core::cmp::Ord::min(v12, v13);
  if ( a3 < v8 )
  {
    v16 = v8 + v6 - a3;
    if ( v6 )
      goto LABEL_12;
LABEL_18:
    core::panicking::panic_const::panic_const_div_by_zero(&off_882EB0);
  }
  if ( a3 < v14 )
  {
    alacritty::scheduler::Scheduler::unschedule(&v26, a2, v20, 0LL);
    return core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(&v26);
  }
  v16 = v14 - (v6 + a3);
  if ( !v6 )
    goto LABEL_18;
LABEL_12:
  if ( v6 == -1 && __OFSUB__(-v16, 1) )
    core::panicking::panic_const::panic_const_div_overflow(&off_882EB0, v13, v15, (unsigned int)-v16);
  v27 = 0;
  v28 = v16 / v6;
  v26 = 0x8000000000000003LL;
  alacritty::event::Event::new(v29, &v26, 1LL, v20);
  alacritty::scheduler::Scheduler::unschedule(&v26, a2, v20, 0LL);
  core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(&v26);
  return alacritty::scheduler::Scheduler::schedule(a2, (unsigned int)v29, 0, 15000000, 1, v20, 0);
}