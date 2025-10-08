__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::process_key_bindings(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r15
  unsigned __int8 v3; // al
  int *v4; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned __int64 i; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // bl
  char v17; // [rsp+Ah] [rbp-EEh] BYREF
  char v18; // [rsp+Bh] [rbp-EDh] BYREF
  int v19; // [rsp+Ch] [rbp-ECh] BYREF
  char **v20; // [rsp+10h] [rbp-E8h]
  __int16 *v21; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-D8h]
  char *v23; // [rsp+28h] [rbp-D0h]
  int *v24; // [rsp+30h] [rbp-C8h]
  char *v25; // [rsp+38h] [rbp-C0h]
  __int128 v26; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-A8h]
  __int128 v28; // [rsp+60h] [rbp-98h]
  __int128 v29; // [rsp+78h] [rbp-80h] BYREF
  __int128 v30; // [rsp+88h] [rbp-70h]
  __int128 v31; // [rsp+98h] [rbp-60h]
  __int16 v32; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-38h]

  v2 = a1[1];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v2);
  v3 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]);
  v18 = alacritty::config::bindings::BindingMode::new(*(_DWORD *)(v2 + 1756), v3);
  v4 = (int *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v4);
  v19 = *v4;
  v17 = 2;
  winit::keyboard::Key::as_ref(&v21, a2);
  if ( (_BYTE)v21 == 32 )
  {
    alloc::str::<impl str>::to_lowercase(&v29, v22, v23);
    smol_str::Repr::new(&v26, &v29);
    v34 = v27;
    v33 = v26;
    v32 = 1;
    core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v21);
  }
  else
  {
    core::ptr::drop_in_place<winit::keyboard::Key<&str>>(&v21);
    <winit::keyboard::Key<Str> as core::clone::Clone>::clone(&v32, a2);
  }
  v21 = &v32;
  v22 = a2;
  v23 = &v18;
  v24 = &v19;
  v25 = &v17;
  v5 = a1[8];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v5);
  v6 = *(_QWORD *)(v5 + 752);
  if ( v6 )
  {
    v7 = 0LL;
    v20 = &off_882C48;
    for ( i = 0LL; i != v6; ++i )
    {
      v9 = a1[8];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v9);
      v10 = *(_QWORD *)(v9 + 752);
      if ( i >= v10 )
        goto LABEL_21;
      alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::process_key_bindings::{{closure}}(
        &v29,
        &v21,
        v7 + *(_QWORD *)(v9 + 744));
      if ( (_QWORD)v29 == 0x8000000000000035LL )
      {
        core::ptr::drop_in_place<core::option::Option<alacritty::config::bindings::Action>>(&v29);
      }
      else
      {
        v28 = v31;
        v27 = v30;
        v26 = v29;
        <alacritty::config::bindings::Action as alacritty::input::Execute<T>>::execute(&v26, a1);
        core::ptr::drop_in_place<alacritty::config::bindings::Action>(&v26);
      }
      v7 += 96LL;
    }
    v5 = a1[8];
  }
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v5);
  v11 = *(_QWORD *)(v5 + 728);
  if ( v11 )
  {
    i = 0LL;
    v20 = &off_882C30;
    while ( 1 )
    {
      v12 = a1[8];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::config(v12);
      v10 = *(_QWORD *)(v12 + 728);
      if ( i >= v10 )
        break;
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 720) + 8 * i);
      if ( *(_WORD *)(v13 + 64) != 5 )
      {
        v14 = alacritty::config::ui_config::HintBinding::key_binding(v13 + 64, v13);
        alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::process_key_bindings::{{closure}}(
          &v29,
          &v21,
          v14);
        if ( (_QWORD)v29 == 0x8000000000000035LL )
        {
          core::ptr::drop_in_place<core::option::Option<alacritty::config::bindings::Action>>(&v29);
        }
        else
        {
          v28 = v31;
          v27 = v30;
          v26 = v29;
          <alacritty::config::bindings::Action as alacritty::input::Execute<T>>::execute(&v26, a1);
          core::ptr::drop_in_place<alacritty::config::bindings::Action>(&v26);
        }
      }
      if ( v11 == ++i )
        goto LABEL_20;
    }
LABEL_21:
    core::panicking::panic_bounds_check(i, v10, v20);
  }
LABEL_20:
  v15 = v17;
  core::ptr::drop_in_place<winit::keyboard::Key>(&v32);
  return v15 & 1;
}