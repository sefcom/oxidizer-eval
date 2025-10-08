__int64 __fastcall alacritty_terminal::term::cell::Cell::push_zerowidth(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 mut; // rax

  v2 = <alloc::sync::Arc<T> as core::default::Default>::default(a1);
  core::option::Option<T>::get_or_insert_with(a1, v2);
  mut = alloc::sync::Arc<T,A>::make_mut(a1);
  return alloc::vec::Vec<T,A>::push(mut, a2, &off_8779C8);
}