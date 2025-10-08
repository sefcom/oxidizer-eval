__int64 __fastcall alacritty::input::Processor<T,A>::cursor_state(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned __int64 v4; // r12
  unsigned int v5; // edx
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  _BYTE *v11; // r14
  unsigned __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-60h]
  _QWORD v15[11]; // [rsp+10h] [rbp-58h] BYREF

  v1 = a1[1];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v1);
  v2 = a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v2);
  v3 = a1[6];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v15);
  v4 = alacritty::event::Mouse::point(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), (__int64)v15);
  v6 = v5;
  v13 = v4;
  v14 = v5;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v1);
  v7 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         v1 + 40,
         v6,
         &off_882E98);
  v8 = *(_QWORD *)(v7 + 16);
  if ( v4 >= v8 )
    core::panicking::panic_bounds_check(v4, v8, &off_882E98);
  v15[0] = alacritty_terminal::term::cell::Cell::hyperlink(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24 * v4));
  LOBYTE(v9) = alacritty::input::Processor<T,A>::message_bar_cursor_state(a1);
  v10 = v9;
  if ( (_BYTE)v9 == 36 )
  {
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::display(v3);
    if ( *(_BYTE *)(v3 + 1880) == 2
      || (LOBYTE(v10) = 3, !(unsigned __int8)core::ops::function::FnOnce::call_once(&v13, v15, v3 + 1832)) )
    {
      v11 = (_BYTE *)a1[5];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v11);
      if ( (*v11 & 4) != 0
        || !(unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v1) )
      {
        LOBYTE(v10) = 8;
      }
      else
      {
        v10 = 0;
      }
    }
  }
  core::ptr::drop_in_place<core::option::Option<alacritty_terminal::term::cell::Hyperlink>>(v15);
  return v10;
}