long __rustcall uu_tr::operation::SqueezeOperation::new(long param_1)

{
  undefined local_30 [32];
  
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_30);
  _<std::collections::hash::set::HashSet<T,S>as_core::iter::traits::collect::FromIterator<T>>::
  from_iter(param_1,local_30);
  *(undefined *)(param_1 + 0x30) = 0;
  return param_1;
}