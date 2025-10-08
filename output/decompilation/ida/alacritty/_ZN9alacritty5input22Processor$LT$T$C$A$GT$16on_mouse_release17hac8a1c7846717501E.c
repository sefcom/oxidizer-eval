__int64 __fastcall alacritty::input::Processor<T,A>::on_mouse_release(_QWORD *a1, unsigned int a2)
{
  _BYTE *v3; // r14
  __int64 result; // rax
  char v5; // al
  __int64 v6; // r14
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 *v9; // rdi
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int128 v16; // [rsp+0h] [rbp-158h] BYREF
  __int128 v17; // [rsp+10h] [rbp-148h]
  __int128 v18; // [rsp+20h] [rbp-138h]
  __int64 v19; // [rsp+30h] [rbp-128h]
  __int128 v20; // [rsp+40h] [rbp-118h] BYREF
  __int128 v21; // [rsp+50h] [rbp-108h]
  __int128 v22; // [rsp+60h] [rbp-F8h]
  __int64 v23; // [rsp+70h] [rbp-E8h]

  v3 = (_BYTE *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v3);
  if ( (*v3 & 4) != 0
    || !(unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(a1[1]) )
  {
    v6 = a1[6];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v6);
    v7 = *(_OWORD *)(v6 + 1848);
    v8 = *(_OWORD *)(v6 + 1864);
    v16 = *(_OWORD *)(v6 + 1832);
    v17 = v7;
    v18 = v8;
    v19 = *(_QWORD *)(v6 + 1880);
    *(_BYTE *)(v6 + 1880) = 2;
    v9 = &v16;
    if ( (_BYTE)v19 == 2 )
      v9 = 0LL;
    v10 = core::option::Option<T>::filter(v9, a2);
    if ( v10 )
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::trigger_hint(a1, v10);
    v23 = v19;
    v22 = v18;
    v21 = v17;
    v20 = v16;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v6);
    core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(v6 + 1832);
    *(_QWORD *)(v6 + 1880) = v23;
    v11 = v20;
    v12 = v21;
    *(_OWORD *)(v6 + 1864) = v22;
    *(_OWORD *)(v6 + 1848) = v12;
    *(_OWORD *)(v6 + 1832) = v11;
    v13 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v6);
    v14 = alacritty::display::window::Window::id(v13);
    v15 = a1[12];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v15);
    alacritty::scheduler::Scheduler::unschedule(&v20, v15, v14, 0LL);
    result = core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(&v20);
    if ( (unsigned __int16)a2 < 2u )
      return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::copy_selection(a1, 1LL);
  }
  else
  {
    result = (unsigned __int16)a2;
    switch ( (__int16)a2 )
    {
      case 0:
        v5 = 0;
        goto LABEL_14;
      case 1:
        v5 = 2;
        goto LABEL_14;
      case 2:
        v5 = 1;
LABEL_14:
        result = alacritty::input::Processor<T,A>::mouse_report(a1, v5, 1u);
        break;
      case 3:
      case 4:
      case 5:
        return result;
    }
  }
  return result;
}