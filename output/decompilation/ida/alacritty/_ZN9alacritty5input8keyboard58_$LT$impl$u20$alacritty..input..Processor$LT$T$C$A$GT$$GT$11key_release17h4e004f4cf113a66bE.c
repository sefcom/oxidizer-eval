__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::key_release(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  _BYTE v15[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int16 v16; // [rsp+2h] [rbp-D6h]
  _BYTE v17[24]; // [rsp+18h] [rbp-C0h] BYREF
  _OWORD v18[10]; // [rsp+30h] [rbp-A8h] BYREF

  if ( (a3 & 0x90000) != 0x80000 )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  if ( (unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(*(_QWORD *)(a1 + 104)) )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  v6 = *(_QWORD *)(a1 + 48);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v6);
  if ( *(_QWORD *)(v6 + 1144) )
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  if ( *((_BYTE *)a2 + 64) == 26 )
  {
    v8 = 1LL;
    v9 = 0LL;
  }
  else
  {
    v8 = smol_str::Repr::as_str(a2 + 4);
    v9 = v10;
  }
  v11 = a4 & 0x824;
  if ( (unsigned __int8)alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::alt_send_esc(
                          *(unsigned int **)(a1 + 40),
                          *(_DWORD *)a2,
                          *((_WORD *)a2 + 1),
                          v8,
                          v9) )
    v11 = a4;
  winit::keyboard::Key::as_ref(v15, a2);
  if ( v15[0] == 31 && (v16 == 14 || v16 == 15 || v16 == 25) && (a3 & 0x200000) == 0 )
  {
    core::ptr::drop_in_place<winit::keyboard::Key<&str>>(v15);
    return core::ptr::drop_in_place<winit::event::KeyEvent>(a2);
  }
  v18[7] = a2[7];
  v18[6] = a2[6];
  v18[5] = a2[5];
  v18[4] = a2[4];
  v12 = *a2;
  v13 = a2[1];
  v14 = a2[2];
  v18[3] = a2[3];
  v18[2] = v14;
  v18[1] = v13;
  v18[0] = v12;
  alacritty::input::keyboard::build_sequence(v17, v18, v11, a3);
  core::ptr::drop_in_place<winit::keyboard::Key<&str>>(v15);
  return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(*(_QWORD *)a1, v17);
}