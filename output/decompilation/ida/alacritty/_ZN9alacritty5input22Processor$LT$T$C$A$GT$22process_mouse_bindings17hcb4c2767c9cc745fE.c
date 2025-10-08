__int64 __fastcall alacritty::input::Processor<T,A>::process_mouse_bindings(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // r14
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r13
  unsigned __int8 v6; // bp
  int *v7; // r14
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rbx
  char v12; // bp
  __int64 v13; // r12
  __int64 v14; // r15
  char v16; // [rsp+Bh] [rbp-5Dh]
  int v17; // [rsp+Ch] [rbp-5Ch]
  int v18; // [rsp+Ch] [rbp-5Ch]
  _BYTE v20[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]

  v3 = a1[1];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v3);
  v4 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]);
  v5 = alacritty::config::bindings::BindingMode::new(*(_DWORD *)(v3 + 1756), v4);
  v6 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v3);
  v7 = (int *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v7);
  v17 = *v7;
  v8 = a1[8];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v8);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, *(_QWORD *)(v8 + 448), *(_QWORD *)(v8 + 456));
  v9 = v22;
  if ( v22 && ((unsigned __int8)(v17 & 4) >> 2) | v6 ^ 1 )
  {
    v16 = ((unsigned __int8)(v17 & 4) >> 2) & v6;
    v10 = v21;
    v11 = v22 << 6;
    v12 = 0;
    v13 = v21;
    do
    {
      if ( alacritty::config::bindings::Binding<T>::is_triggered_by(v13, v5, v17, a2, a3) )
      {
        v12 = 1;
        <alacritty::config::bindings::Action as alacritty::input::Execute<T>>::execute(v13, a1);
      }
      v13 += 64LL;
      v11 -= 64LL;
    }
    while ( v11 );
    if ( !(v12 & 1 | ((v16 & 1) == 0)) && v9 )
    {
      v18 = v17 & 0x920;
      v14 = v9 << 6;
      do
      {
        if ( alacritty::config::bindings::Binding<T>::is_triggered_by(v10, v5, v18, a2, a3) )
          <alacritty::config::bindings::Action as alacritty::input::Execute<T>>::execute(v10, a1);
        v10 += 64LL;
        v14 -= 64LL;
      }
      while ( v14 );
    }
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<alacritty::config::bindings::Binding<winit::event::MouseButton>>>(v20);
}