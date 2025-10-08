__int64 __fastcall alacritty::input::<impl alacritty::config::bindings::Action>::toggle_selection(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v2);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::toggle_selection(
    a1,
    a2,
    *(_QWORD *)(v2 + 656),
    *(unsigned int *)(v2 + 664));
  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v2);
  if ( *(_BYTE *)(v2 + 640) != 2 )
    return alacritty_terminal::selection::Selection::include_all(v2 + 600);
  return result;
}