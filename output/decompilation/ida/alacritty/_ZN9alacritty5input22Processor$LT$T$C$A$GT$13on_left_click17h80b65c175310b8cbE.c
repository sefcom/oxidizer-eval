__int64 __fastcall alacritty::input::Processor<T,A>::on_left_click(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // r12
  _DWORD *v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r13
  unsigned int v9; // ebx
  char is_empty; // bp
  unsigned int v11; // r15d
  __int64 v12; // r12
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+Fh] [rbp-39h]

  v4 = a2;
  v5 = (_BYTE *)a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  v14 = v5[55];
  v6 = (_DWORD *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v6);
  v7 = *v6 & 0x20;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  switch ( v5[59] )
  {
    case 0:
      goto LABEL_8;
    case 1:
      v8 = a1[1];
      v9 = a3;
      is_empty = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::selection_is_empty(v8);
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
      v5[56] = is_empty ^ 1;
      a3 = v9;
      v4 = a2;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::clear_selection(v8, a1[15]);
      v11 = v7 >> 5;
      break;
    case 2:
      if ( v7 )
        goto LABEL_8;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
      v5[56] = 1;
      LOBYTE(v11) = 2;
      break;
    case 3:
      if ( v7 )
        goto LABEL_8;
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
      v5[56] = 1;
      LOBYTE(v11) = 3;
      break;
  }
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::start_selection(
    a1,
    (unsigned __int8)v11,
    v4,
    a3,
    v14);
LABEL_8:
  v12 = a1[1];
  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v12);
  if ( (*(_BYTE *)(v12 + 1758) & 1) != 0 )
  {
    result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]);
    if ( !(_BYTE)result )
    {
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v12);
      *(_QWORD *)(v12 + 656) = v4;
      *(_DWORD *)(v12 + 664) = a3;
      return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mark_dirty(a1[15]);
    }
  }
  return result;
}