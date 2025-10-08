__int64 __fastcall alacritty::input::Processor<T,A>::mouse_input(_QWORD *a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v15; // al
  unsigned __int8 v16; // bl
  __int64 result; // rax
  __int64 v18; // r12
  _BYTE v19[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( (_WORD)a3 )
  {
    if ( (unsigned __int16)a3 == 1 )
    {
      v7 = a1[3];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v7);
      *(_BYTE *)(v7 + 54) = a2;
    }
    else if ( (unsigned __int16)a3 == 2 )
    {
      v6 = a1[3];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v6);
      *(_BYTE *)(v6 + 53) = a2;
      if ( (unsigned __int8)alacritty::input::Processor<T,A>::message_bar_cursor_state(a1) != 3 )
        goto LABEL_14;
LABEL_8:
      if ( a2 )
        return alacritty::input::Processor<T,A>::on_mouse_release(a1, a3);
      v8 = a1[6];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v19);
      v9 = a1[7];
      v10 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::message(v9, v8);
      v11 = core::option::Option<T>::map_or(v10, v19);
      v12 = a1[1];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clear_selection(v12, a1[15]);
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::pop_message(v8, v9);
      v13 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::message(v9, v9);
      v14 = core::option::Option<T>::map_or(v13, v19);
      v15 = (v11 > v14) - (v11 < v14);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          v16 = 8 * (<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v12) ^ 1);
          result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v8);
          if ( v16 == *(_BYTE *)(result + 245) )
            return result;
        }
        else
        {
          v16 = 0;
          result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v8);
          if ( !*(_BYTE *)(result + 245) )
            return result;
        }
      }
      else
      {
        v16 = 3;
        result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v8);
        if ( *(_BYTE *)(result + 245) == 3 )
          return result;
      }
      *(_BYTE *)(result + 245) = v16;
      return winit::window::Window::set_cursor(*(_QWORD *)(result + 32), *(_QWORD *)(result + 40), v16);
    }
    if ( (unsigned __int8)alacritty::input::Processor<T,A>::message_bar_cursor_state(a1) == 3 )
      goto LABEL_8;
  }
  else
  {
    v18 = a1[3];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v18);
    *(_BYTE *)(v18 + 52) = a2;
    if ( (unsigned __int8)alacritty::input::Processor<T,A>::message_bar_cursor_state(a1) == 3 )
      goto LABEL_8;
  }
LABEL_14:
  if ( a2 )
    return alacritty::input::Processor<T,A>::on_mouse_release(a1, a3);
  alacritty::input::Processor<T,A>::on_mouse_press(a1, a3, a4);
  return alacritty::input::Processor<T,A>::process_mouse_bindings(a1, a3, a4);
}