__int64 __fastcall alacritty::config::ui_config::LazyRegex::with_compiled(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a1 + 16) )
    core::cell::panic_already_borrowed(&off_881B10);
  *(_QWORD *)(a1 + 16) = -1LL;
  v2 = alacritty::config::ui_config::LazyRegexVariant::compiled(a1 + 24);
  if ( v2 )
    core::ops::function::FnOnce::call_once(a2, v2);
  return core::ptr::drop_in_place<core::cell::RefMut<std::collections::hash::map::HashMap<usize,(i32,polling::Event)>>>(a1 + 16);
}