__int64 uu_ls::dired::is_dired_arg_present()
{
  unsigned __int8 v0; // al
  unsigned int v1; // ebp
  _BYTE v3[48]; // [rsp+8h] [rbp-30h] BYREF

  std::env::args_os(v3);
  v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::try_fold(v3);
  v1 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v0);
  core::ptr::drop_in_place<std::env::ArgsOs>(v3);
  return v1;
}