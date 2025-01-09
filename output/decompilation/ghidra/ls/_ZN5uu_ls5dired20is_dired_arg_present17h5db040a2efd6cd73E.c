undefined4 __rustcall uu_ls::dired::is_dired_arg_present(void)

{
  undefined4 uVar1;
  undefined local_50 [8];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined local_28 [32];
  
  std::env::args(local_28);
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_50,local_28);
  local_30 = local_48 + local_40 * 0x18;
  local_38 = local_48;
                    /* try { // try from 0025022c to 00250235 has its CatchHandler @ 0025024a */
  uVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any(&local_38);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_50);
  return uVar1;
}