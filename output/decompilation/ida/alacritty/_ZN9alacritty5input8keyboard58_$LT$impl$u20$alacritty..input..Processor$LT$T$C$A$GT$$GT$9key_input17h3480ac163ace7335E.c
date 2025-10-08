__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::key_input(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r15
  unsigned int *v4; // r15
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int *v13; // rdx
  __int64 v14; // r13
  unsigned int v15; // edx
  __int64 v16; // rbp
  unsigned int v17; // edx
  char v18; // al
  int v19; // ecx
  char should_build_sequence; // r12
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  char v24; // bp
  __int128 v25; // rax
  char is_modifier_key; // [rsp+7h] [rbp-E1h]
  unsigned int v27; // [rsp+8h] [rbp-E0h]
  unsigned int v28; // [rsp+Ch] [rbp-DCh]
  __int128 v29; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-C8h]
  __int128 v31; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+40h] [rbp-A8h]
  __int128 v33; // [rsp+50h] [rbp-98h]
  __int128 v34; // [rsp+60h] [rbp-88h]
  __int128 v35; // [rsp+70h] [rbp-78h]
  __int128 v36; // [rsp+80h] [rbp-68h]
  __int128 v37; // [rsp+90h] [rbp-58h]
  __int128 v38; // [rsp+A0h] [rbp-48h]

  v2 = a1[6];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v2);
  if ( *(_DWORD *)(v2 + 720) != 2 )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  v3 = a1[1];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v3);
  v27 = *(_DWORD *)(v3 + 1756);
  v4 = (unsigned int *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v4);
  v5 = *v4;
  if ( *((_BYTE *)a2 + 120) )
  {
    v6 = a1[14];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v6);
    if ( *(_BYTE *)(v6 + 4) )
    {
      v7 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v2);
      alacritty::display::window::Window::set_ime_allowed(v7, 1u);
    }
    v38 = *((_OWORD *)a2 + 7);
    v37 = *((_OWORD *)a2 + 6);
    v36 = *((_OWORD *)a2 + 5);
    v35 = *((_OWORD *)a2 + 4);
    v8 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 1);
    v10 = *((_OWORD *)a2 + 2);
    v34 = *((_OWORD *)a2 + 3);
    v33 = v10;
    v32 = v9;
    v31 = v8;
    return alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::key_release(a1, &v31, v27, v5);
  }
  if ( *((_BYTE *)a2 + 64) == 26 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = smol_str::Repr::as_str(a2 + 16);
    v4 = v13;
    v2 = a1[6];
  }
  if ( !v12 )
    v4 = 0LL;
  v14 = 1LL;
  if ( v12 )
    v14 = v12;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v2);
  if ( *(_QWORD *)(v2 + 1144) )
  {
    *(_QWORD *)&v31 = v14;
    *((_QWORD *)&v31 + 1) = (char *)v4 + v14;
    while ( (core::str::validations::next_code_point(&v31) & 1) != 0 && v15 != (_DWORD)&unk_110000 )
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::hint_input(a1, v15);
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  }
  v16 = a1[14];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v16);
  if ( *(_BYTE *)(v16 + 4) )
  {
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_input(a1, v14, v4);
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  }
  alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::reset_search_delay(a1);
  if ( (unsigned __int8)alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::process_key_bindings(
                          a1,
                          a2) )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  if ( (unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]) )
  {
    *(_QWORD *)&v31 = v14;
    *((_QWORD *)&v31 + 1) = (char *)v4 + v14;
    while ( (core::str::validations::next_code_point(&v31) & 1) != 0 && v17 != (_DWORD)&unk_110000 )
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_input(a1, v17);
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  }
  if ( (v27 & 0x10000) != 0 )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  v18 = alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::alt_send_esc(
          a1[5],
          *a2,
          *((unsigned __int16 *)a2 + 1),
          v14,
          v4);
  v19 = v5 & 0x824;
  if ( v18 )
    v19 = v5;
  v28 = v19;
  should_build_sequence = alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::should_build_sequence(
                            a2,
                            v4,
                            v27);
  is_modifier_key = alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::is_modifier_key(a2);
  if ( should_build_sequence )
  {
    v38 = *((_OWORD *)a2 + 7);
    v37 = *((_OWORD *)a2 + 6);
    v36 = *((_OWORD *)a2 + 5);
    v35 = *((_OWORD *)a2 + 4);
    v21 = *(_OWORD *)a2;
    v22 = *((_OWORD *)a2 + 1);
    v23 = *((_OWORD *)a2 + 2);
    v34 = *((_OWORD *)a2 + 3);
    v33 = v23;
    v32 = v22;
    v31 = v21;
    alacritty::input::keyboard::build_sequence(&v29, &v31, v28, v27);
    v24 = 0;
  }
  else
  {
    *(_QWORD *)&v25 = alloc::raw_vec::RawVecInner<A>::with_capacity_in((char *)v4 + 1, 1LL, 1LL, &off_882C00);
    v31 = v25;
    *(_QWORD *)&v32 = 0LL;
    if ( (v28 & 0x100) != 0 )
      alloc::vec::Vec<T,A>::push(&v31, 27LL, &off_882C18);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v31,
      v14,
      (char *)v4 + v14);
    v30 = v32;
    v29 = v31;
    v24 = 1;
  }
  if ( v30 )
  {
    if ( !is_modifier_key )
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::on_terminal_input_start(a1);
    result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(*a1, &v29);
  }
  else
  {
    result = core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
  }
  if ( v24 )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  return result;
}